#include "Furniture.h"
#include <iostream>
using namespace std;
Furniture::Furniture(int weight) {
    cout << "Furniture constructing" << endl;
}

Furniture::~Furniture() {
    cout << "Furniture destructing" << endl;
}

void Furniture::setWeight(int weight) {
    this->weight = weight;
}

int Furniture::getWeight() const {
    return this->weight;
}

Sofa::Sofa() {
    cout << "Sofa constructing" << endl;
}

Sofa::~Sofa() {
    cout << "Sofa destructing" << endl;
}

void Sofa::watchTv() {
    cout << "Watch Tv" << endl;
}

Bed::Bed() {
    cout << "Bed constructing" << endl;
}

Bed::~Bed() {
    cout << "Bed destructing" << endl;
}

void Bed::sleep() {
    cout << "sleep" << endl;
}

SofaBed::SofaBed() {
    cout << "SofaBed constructing" << endl;
}

SofaBed::~SofaBed() {
    cout << "SofaBed destructing" << endl;
}

void SofaBed::foldOut() {
    cout << "fold out" << endl;
}
