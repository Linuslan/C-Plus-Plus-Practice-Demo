#include <iostream>
#include "Furniture.h"
using namespace std;

int main() {
    SofaBed sb;
    sb.Bed::setWeight(50);
    cout << "sofa bed is " << sb.Bed::getWeight() << endl;
    sb.sleep();
    sb.watchTv();
    return 0;
}
