#include "RMB.h"
#include <iostream>
int main(){
    using namespace std;
    RMB val1(2, 40);
    RMB val2(2, 50);
    if(val1 > val2) {
        cout << "val1 is greater than val2.\n";
    } else {
        cout << "val1 is less than val2.\n";
    }
    val1 = val1 + val2;
    val1.display();
    return 0;
}
