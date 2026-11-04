#pragma once
#include "json.hpp"
#include <condition_variable>
#include <functional>
#include <mutex>
#include <thread>
#include <exception>
#include <memory>
// Single writer, latest pending snapshot wins. The writer never owns the
// mailbox mutex while serializing or doing disk I/O. This is diagnostics only;
// physics command delivery and accounting never use this mailbox.
class StatusPublisher {
    using Json=nlohmann::json;
    std::function<void(const Json&)> sink;
    std::mutex mutex;std::condition_variable cv;
    std::unique_ptr<Json> pending;bool closing=false;std::exception_ptr failure;
    std::thread thread;
    void run(){
        for(;;){
            std::unique_ptr<Json> next;
            {std::unique_lock<std::mutex> lock(mutex);cv.wait(lock,[&]{return closing||pending;});
             if(!pending)return;next=std::move(pending);}
            try{sink(*next);}catch(...){std::lock_guard<std::mutex> lock(mutex);failure=std::current_exception();closing=true;pending.reset();return;}
        }
    }
public:
    explicit StatusPublisher(std::function<void(const Json&)> f):sink(std::move(f)),thread([this]{run();}){}
    StatusPublisher(const StatusPublisher&)=delete;
    ~StatusPublisher(){close();}
    void check(){std::lock_guard<std::mutex> lock(mutex);if(failure)std::rethrow_exception(failure);}
    void submit(Json value){
        auto next=std::make_unique<Json>(std::move(value));
        {std::lock_guard<std::mutex> lock(mutex);if(failure)std::rethrow_exception(failure);
         if(closing)throw std::runtime_error("Status publisher closed");pending.swap(next);}
        cv.notify_one();
    }
    // Drain the latest snapshot before shutdown. Idempotent, including errors.
    void close(){
        {std::lock_guard<std::mutex> lock(mutex);closing=true;}
        cv.notify_one();if(thread.joinable())thread.join();
    }
};
