#include <iostream>
#include "Singleton.h"
#include "ThreadSafeSingleton.h"

int main() {
    Singleton &ptr = Singleton::getInstance();
    return 0;
}