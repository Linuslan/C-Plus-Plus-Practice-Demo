#include <iostream>
#include "VirtualFurniture.h"
using namespace std;
int main() {
    cout << "Furniture size is " << sizeof(Furniture) << endl;
    cout << "Sofa size is " << sizeof(Sofa) << endl;
    cout << "Bed size is " << sizeof(Bed) << endl;
    cout << "SofaBed size is " << sizeof(SofaBed) << endl;
    SofaBed sb;
    sb.setWeight(50);
    cout << "SofaBed's weight is " << sb.getWeight() << endl;
    sb.watchTv();
    sb.sleep();
    sb.foldOut();
    return 0;
}
