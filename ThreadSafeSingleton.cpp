#include "ThreadSafeSingleton.h"

ThreadSafeSingleton * ThreadSafeSingleton::p_instance = 0;

ThreadSafeSingleton & ThreadSafeSingleton::getInstance() {

    std::boost::lock_guard<std::mutex> lk(mutex);
    if(!p_instance)     {
        p_instance = new ThreadSafeSingleton();
    }

    return *p_instance;
}