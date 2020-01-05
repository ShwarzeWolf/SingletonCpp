#ifndef SINGLETON_THREADSAFESINGLETON_H
#define SINGLETON_THREADSAFESINGLETON_H
#include <boost>

class ThreadSafeSingleton {
public:
    static ThreadSafeSingleton & getInstance();
private:
    static ThreadSafeSingleton * p_instance;
    static std::boost::mutex mutex;
protected:
    ThreadSafeSingleton() {};
    ThreadSafeSingleton(const ThreadSafeSingleton &);
    ThreadSafeSingleton& operator=(ThreadSafeSingleton&);
    ~ThreadSafeSingleton() {}
};


#endif //SINGLETON_THREADSAFESINGLETON_H
