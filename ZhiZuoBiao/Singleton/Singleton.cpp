#include "Singleton.h"
#include "stdlib.h"
#include <iostream>
using namespace std;
Singleton * Singleton::instance = NULL;
Singleton::Singleton() {

}

Singleton::~Singleton() {

}

Singleton * Singleton::getInstance() {
    cout << __func__ << "," << __FILE__ << endl;
    if(NULL == instance) {
        instance = new Singleton();
    }
    return instance;
}
void Singleton::doSomething() {
    cout << "abcdefg" << endl;
}
