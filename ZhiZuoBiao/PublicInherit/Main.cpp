#include <iostream>
#include "Animal.h"
using namespace linuslan;
using namespace std;
int main() {
    Cat cat(2, 4, "house", 3);
    cout << "cat's color is " << cat.getColor() << endl;
    cat.setColor(3);
    cat.setCatFood(6);
    Dog dog(2, 3, "home", 4);
    dog.setWeight(4);
    return 0;
}
