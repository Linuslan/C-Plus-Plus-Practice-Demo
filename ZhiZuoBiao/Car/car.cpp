#include <iostream>
using namespace std;
#include "car.h"

void Car::run() {
    cout << "car run\n";
};

void Car::stop() {
    cout << "car stop\n";
};

void Car::setProp(int price, int carNo) {
    this->m_price = price;
    this->m_carNo= carNo;
};

void Car::print() {
    cout << "in " << __func__ << " this=" << this << endl;
}
