#include "Singleton.h"

Singleton * Singleton::p_instance = 0;

SingletonDestroyer Singleton::destroyer;

SingletonDestroyer::~SingletonDestroyer() {
    delete p_instance;
}

void SingletonDestroyer::initialize( Singleton* p ) {
    p_instance = p;
}

Singleton& Singleton::getInstance() {
    if(!p_instance)     {
        p_instance = new Singleton();
        destroyer.initialize( p_instance);
        numberOfUsers = 0;
    }

    numberOfUsers++;
    return *p_instance;
}

void Singleton::stopUsing(){
    numberOfUsers--;

    if (numberOfUsers == 0) {
        delete p_instance;
    };
}
