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
    //��̬ʾ��
    Dog dog;
    //foo(dog);
    bar(&dog);
    Cat cat;
    //foo(cat);
    bar(&cat);
    //Animal animal;//���󣬵�Animal���makeSound��ɴ��麯��ʱ����virtual void makeSound() const = 0�����Ͳ�����ʵ������
    */
    //����������ʾ��
    Animal * animal = new Cat();    //����������轫�����������������Ϊvirtual����������ʱ������������
    animal->makeSound();
    delete animal;
    return 0;
}
