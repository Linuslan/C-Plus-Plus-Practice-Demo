#include <iostream>
using namespace std;
#include "car.h"
void foo(Car * car);

void bar(Car & car);

int main() {
    Car car;
    cout << sizeof(car) << endl;
    cout << "Address of a is : " << &car << endl;
    car.setProp(10000, 50025);
    car.run();
    car.stop();
    car.print();
    foo(&car);
    bar(car);
    return 0;
}

void foo(Car * car) {
    car->run();
    car->print();
    car->stop();
}

void bar(Car & car) {
    car.run();
    car.print();
    car.stop();
}
