#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H

class Singleton;

class SingletonDestroyer{
public:
    ~SingletonDestroyer();
    void initialize( Singleton* p );
private:
    Singleton * p_instance;
};

class Singleton{
public:
    static Singleton & getInstance();
    static void stopUsing();

private:
    static int numberOfUsers;
    static Singleton * p_instance;
    static SingletonDestroyer destroyer;

protected:
    Singleton() {};
    Singleton( const Singleton& );
    Singleton& operator=( Singleton& );
    ~Singleton() {}

    friend class SingletonDestroyer;
};

#endif //SINGLETON_SINGLETON_H
