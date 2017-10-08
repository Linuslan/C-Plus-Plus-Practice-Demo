#include "Animal.h"
#include <iostream>
using namespace std;
Animal::Animal() {
    cout << "Animal constructing." << endl;
}

Animal::~Animal() {
    cout << "Animal destructing." << endl;
}

void Animal::makeSound() const {
    cout << "Animal make sound." << endl;
}

Cat::Cat() {
    cout << "Cat constructing." << endl;
}

Cat::~Cat() {
    cout << "Cat destructing." << endl;
}

void Cat::makeSound() const {
    cout << "Meow." << endl;
}

Dog::Dog() {
    cout << "Dog constructing." << endl;
}

Dog::~Dog() {
    cout << "Dog destructing." << endl;
}

void Dog::makeSound() const {
    cout << "Woof." << endl;
}
