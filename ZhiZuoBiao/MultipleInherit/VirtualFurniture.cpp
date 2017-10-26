#include "VirtualFurniture.h"
#include <iostream>
using namespace std;
Furniture::Furniture(int weight) {
    cout << "Furniture constructing" << endl;
}

Furniture::~Furniture() {
    cout << "Furniture destructing" << endl;
}

int Furniture::getWeight() const {
    return this->weight;
}

void Furniture::setWeight(int weight) {
    this->weight = weight;
}

Sofa::Sofa() {
    cout << "Sofa constructing" << endl;
}

Sofa::~Sofa() {
    cout << "Sofa destructing" << endl;
}

void Sofa::watchTv() {
    cout << "Watch TV" << endl;
}

Bed::Bed() {
    cout << "Bed constructing" << endl;
}

Bed::~Bed() {
    cout << "Bed destructing" << endl;
}

void Bed::sleep() {
    cout << "Sleep" << endl;
}

SofaBed::SofaBed() {
    cout << "SofaBed constructing" << endl;
}

SofaBed::~SofaBed() {
    cout << "SofaBed destructing" << endl;
}

void SofaBed::foldOut() {
    cout << "foldOut" << endl;
}
