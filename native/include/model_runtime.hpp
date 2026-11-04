#pragma once
#include <algorithm>
#include <array>
#include <cmath>
#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <variant>
#include <unordered_map>
#include <vector>
namespace ngp {
struct Table; struct Function; struct Env; struct Runtime;
struct V {
    using Data=std::variant<std::monostate,double,bool,std::string,std::shared_ptr<Table>,std::shared_ptr<Function>>;
    Data data;
    V()=default; V(double v):data(v){} V(bool v):data(v){} V(const char* v):data(std::string(v)){} V(std::string v):data(std::move(v)){}
    explicit V(std::shared_ptr<Table> v):data(std::move(v)){} explicit V(std::shared_ptr<Function> v):data(std::move(v)){}
};
// Most Lua-style argument/result lists contain 1--3 values. Keep those values
// inline instead of allocating a vector for every helper call and return.
// Longer lists remain unbounded and contiguous, preserving multi-return/varargs.
class Args {
    static constexpr size_t inline_count=4;
    std::array<V,inline_count> local_;
    std::vector<V> heap_;
    size_t count_=0;
    bool heap_mode_=false;
public:
    using iterator=V*;using const_iterator=const V*;
    Args()=default;
    Args(std::initializer_list<V> values){reserve(values.size());for(const auto& v:values)push_back(v);}
    template<class It> Args(It first,It last){for(;first!=last;++first)push_back(*first);}
    Args(const Args& other):count_(other.count_),heap_mode_(other.heap_mode_){
        if(heap_mode_)heap_=other.heap_;else std::copy_n(other.local_.begin(),count_,local_.begin());
    }
    Args(Args&& other) noexcept:count_(other.count_),heap_mode_(other.heap_mode_){
        if(heap_mode_)heap_=std::move(other.heap_);
        else for(size_t i=0;i<count_;++i)local_[i]=std::move(other.local_[i]);
        other.count_=0;other.heap_mode_=false;
    }
    Args& operator=(Args&& other) noexcept {
        if(this==&other)return *this;
        clear();count_=other.count_;heap_mode_=other.heap_mode_;
        if(heap_mode_)heap_=std::move(other.heap_);
        else for(size_t i=0;i<count_;++i)local_[i]=std::move(other.local_[i]);
        other.count_=0;other.heap_mode_=false;return *this;
    }
    Args& operator=(const Args& other){if(this!=&other){Args copy(other);*this=std::move(copy);}return *this;}
    size_t size()const{return count_;}bool empty()const{return count_==0;}
    bool inline_storage()const{return !heap_mode_;}
    V* data(){return heap_mode_?heap_.data():local_.data();}
    const V* data()const{return heap_mode_?heap_.data():local_.data();}
    iterator begin(){return data();}iterator end(){return data()+count_;}
    const_iterator begin()const{return data();}const_iterator end()const{return data()+count_;}
    V& operator[](size_t i){return data()[i];}const V& operator[](size_t i)const{return data()[i];}
    V& front(){return (*this)[0];}const V& front()const{return (*this)[0];}
    V& back(){return (*this)[count_-1];}
    void clear(){heap_.clear();for(auto& v:local_)v=V();count_=0;heap_mode_=false;}
    void reserve(size_t capacity){
        if(heap_mode_){heap_.reserve(capacity);return;}
        if(capacity<=inline_count)return;
        heap_.reserve(capacity);
        for(size_t i=0;i<count_;++i){heap_.push_back(std::move(local_[i]));local_[i]=V();}
        heap_mode_=true;
    }
    void push_back(V value){
        if(!heap_mode_&&count_==inline_count)reserve(inline_count*2);
        if(heap_mode_)heap_.push_back(std::move(value));else local_[count_]=std::move(value);
        ++count_;
    }
    template<class... T> V& emplace_back(T&&... values){push_back(V(std::forward<T>(values)...));return back();}
    template<class It> iterator insert(iterator position,It first,It last){
        if(position!=end())throw std::logic_error("Args insertion is append-only");
        size_t offset=count_;for(;first!=last;++first)push_back(*first);return data()+offset;
    }
};
struct Key {
    std::variant<double,std::string> data;
    explicit Key(const V&);
    bool operator<(const Key& other)const{return data<other.data;}
};
struct KeyLess {
    using is_transparent=void;
    bool operator()(const Key& a,const Key& b)const{return a<b;}
    bool operator()(const Key& a,const V& b)const;
    bool operator()(const V& a,const Key& b)const;
};
struct Table {std::map<Key,V,KeyLess> values;};
struct Function {std::function<Args(const Args&)> fn;};
struct Env {
    std::shared_ptr<Env> parent;
    Env* parent_ptr=nullptr;
    std::map<std::string,V> vars;
    // Lexically resolved locals: no string construction or tree lookup per use.
    std::vector<V> slots;
    std::array<V,8> small_slots;
    size_t slot_count=0;
    Args extra;
    bool boundary=false;
    Env(std::shared_ptr<Env> p=nullptr,bool b=false,size_t count=0):parent(std::move(p)),parent_ptr(parent.get()),boundary(b){resize_slots(count);}
    Env(Env* p,bool b,size_t count):parent_ptr(p),boundary(b){resize_slots(count);}
    void resize_slots(size_t count){slot_count=count;if(count>small_slots.size())slots.resize(count);}
    void clear_slots(){slots.clear();for(auto& v:small_slots)v=V();slot_count=0;}
    V& slot(size_t depth,size_t index){Env* e=this;while(depth--)e=e->parent_ptr;
        if(index>=e->slot_count)throw std::out_of_range("Local slot");return e->slot_count<=e->small_slots.size()?e->small_slots[index]:e->slots[index];}
    V get(const std::string& k)const;
    void define(const std::string& k,V v){vars[k]=std::move(v);}
    void assign(const std::string& k,V v);
    Args dots()const{return boundary?extra:parent_ptr?parent_ptr->dots():Args{};}
};
struct Ref {
    std::shared_ptr<Env> env; std::string name; V object,key;
    Env* target=nullptr;
    size_t depth=0,index=0; bool local=false;
    Ref(std::shared_ptr<Env> e,std::string n):env(std::move(e)),name(std::move(n)),target(env.get()){}
    Ref(std::shared_ptr<Env> e,size_t d,size_t i):env(std::move(e)),target(env.get()),depth(d),index(i),local(true){}
    Ref(Env* e,std::string n):name(std::move(n)),target(e){}
    Ref(Env* e,size_t d,size_t i):target(e),depth(d),index(i),local(true){}
    Ref(V o,V k):object(std::move(o)),key(std::move(k)){}
    void put(V)const;
};
bool isnil(const V&); bool truth(const V&); double num(const V&); std::string text(const V&);
V table(); V native(std::function<Args(const Args&)>); V get(const V&,const V&); void set(V,const V&,V);
Args call(const V&,const Args&); Args method(const V&,const std::string&,const Args&);
inline V first(const Args& a){return a.empty()?V():a.front();}
inline V arg(const Args& a,size_t i){return i<a.size()?a[i]:V();}
inline Args tail(const Args& a,size_t i){return i<a.size()?Args(a.begin()+i,a.end()):Args{};}
inline Args joined(Args a,const Args& b){a.insert(a.end(),b.begin(),b.end());return a;}
V length(const V&); void append(V,const Args&);
inline V add(V a,V b){return V(num(a)+num(b));} inline V sub(V a,V b){return V(num(a)-num(b));}
inline V mul(V a,V b){return V(num(a)*num(b));} inline V divv(V a,V b){return V(num(a)/num(b));}
inline V power(V a,V b){return V(std::pow(num(a),num(b)));} inline V concat(V a,V b){return V(text(a)+text(b));}
V eq(V,V); inline V ne(V a,V b){return V(!truth(eq(a,b)));}
V lt(V,V); inline V gt(V a,V b){return lt(b,a);} inline V le(V a,V b){return V(!truth(lt(b,a)));} inline V ge(V a,V b){return le(b,a);}
struct Runtime {
    std::shared_ptr<Env> globals;
    std::vector<std::shared_ptr<Env>> module_envs;
    std::map<std::string,V> modules;
    // Signal iteration is never exposed to models. JSON remains key-sorted.
    std::unordered_map<std::string,V> signals;
    std::map<std::string,double> module_us;
    V car,config,stringlib,overrides;
    bool normalized_inputs=false;
    bool damper_current_travel=false;
    bool carcass_current_slip=false;
    bool tyre_owner_inputs=false,tyre_state_updated=false;
    std::string active_input_owner;
    uint32_t tyre_owner_input_mask=0;
    std::array<double,4> tyre_owner_angle{},tyre_owner_ratio{};
    void prepare_tyre_owner_inputs();
    // Explicit offline compatibility contract. Original damage semantics can
    // accumulate continuously; Host must not opt in before event admission.
    bool selected_dependencies=false;
    bool event_damage=false;
    V impact_damage_proxy;
    V initial_damage;
    bool impact_event_sample_valid=false;
    double impact_event_total=0.,impact_event_root=0.;
    V input_routes;
    std::string root_folder;
    std::vector<std::string> errors;
    Runtime(std::string root); ~Runtime();
    void initialize(); void step(V car,double dt);
};
extern thread_local Runtime* current;
V from_json(const std::string&); std::string snapshot_json(Runtime&,bool compact=false);
}
