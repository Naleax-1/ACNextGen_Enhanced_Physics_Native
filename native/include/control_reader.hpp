#pragma once
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <thread>
// File I/O never runs in the physics-command polling thread. The timestamp is
// captured before I/O, so delayed publication cannot renew a command's lease.
template<class T> class ControlReader {
public:
    using Clock=std::chrono::steady_clock;
    struct Snapshot {T value;uint64_t revision;Clock::time_point acquired;};
private:
    std::function<T()> read;
    std::chrono::milliseconds interval;
    mutable std::mutex mutex;
    std::condition_variable cv;
    bool stopping=false;
    std::shared_ptr<const Snapshot> current;
    std::thread thread;
    void run(){
        uint64_t revision=0;
        while(true){
            {std::lock_guard<std::mutex> lock(mutex);if(stopping)return;}
            auto acquired=Clock::now();
            std::shared_ptr<const Snapshot> next;
            try{next=std::make_shared<Snapshot>(Snapshot{read(),++revision,acquired});}
            catch(...){/* No publication: ordinary command lease expires. */}
            if(next){std::lock_guard<std::mutex> lock(mutex);current.swap(next);}
            // Destruction of the old JSON value also stays outside the lock.
            next.reset();
            std::unique_lock<std::mutex> lock(mutex);
            if(cv.wait_for(lock,interval,[&]{return stopping;}))return;
        }
    }
public:
    explicit ControlReader(std::function<T()> reader,std::chrono::milliseconds poll=std::chrono::milliseconds(50))
        :read(std::move(reader)),interval(poll),thread([this]{run();}){}
    ControlReader(const ControlReader&)=delete;
    ControlReader& operator=(const ControlReader&)=delete;
    ~ControlReader(){close();}
    std::shared_ptr<const Snapshot> latest()const{std::lock_guard<std::mutex> lock(mutex);return current;}
    void close(){ {std::lock_guard<std::mutex> lock(mutex);stopping=true;}cv.notify_all();if(thread.joinable())thread.join();}
};
