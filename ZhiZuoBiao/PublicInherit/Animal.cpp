#include "Animal.h"
using namespace std;
namespace linuslan {
    Animal::Animal(int age, string location, int food) {
        this->age = age;
        this->location = location;
        cout << "Animal constructing" << endl;
    }
    Animal::~Animal() {
        cout << "Animal desctructing" << endl;
    }
    void Animal::setAge(int age) {
        this->age = age;
    }
    int Animal::getAge() const {
        return this->age;
    }
    void Animal::setFood(int food) {
        this->food = food;
    }
    int Animal::getFood() const {
        return this->food;
    }

    Cat::Cat(int age, int color, string location, int food)
        : Animal(age, location, food), color(color) {
        cout << "Cat constructing." << endl;
    }
    Cat::~Cat() {
        cout << "Cat destructing." << endl;
    }
    void Cat::setColor(int color) {
        this->color = color;
    }
    int Cat::getColor() const {
        return this->color;
    }
    void Cat::setCatFood(int food) {
        Animal::setFood(food);
    }

    Dog::Dog(int age, int weight, string location, int food)
        :Animal(age, location, food), weight(weight) {
        cout << "Dog constructing" << endl;
    }
    Dog::~Dog() {
        cout << "Dog desctructing" << endl;
    }

    void Dog::setWeight(int weight) {
        this->weight = weight;
    }
    int Dog::getWeight() const {
        return this->weight;
    }
}
