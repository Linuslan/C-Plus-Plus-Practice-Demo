#include "Animal.h"
#include <iostream>
using namespace std;
void foo(const Animal & animal) {
    animal.makeSound();
}

void bar(const Animal * animal) {
    animal->makeSound();
}

int main() {
    /*
    //多态示例
    Dog dog;
    //foo(dog);
    bar(&dog);
    Cat cat;
    //foo(cat);
    bar(&cat);
    //Animal animal;//错误，当Animal类的makeSound变成纯虚函数时（即virtual void makeSound() const = 0），就不能再实例化了
    */
    //虚析构函数示例
    Animal * animal = new Cat();    //这种情况下需将基类的析构函数声明为virtual，否则析构时不会析构子类
    animal->makeSound();
    delete animal;
    return 0;
}
