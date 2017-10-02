#include "Martian.h"
#include <iostream>
using namespace std;
void fun();

int main() {
    int count = Martian::getCount();
    cout << "count = " << count << endl;
    Martian a;
    count = Martian::getCount();
    cout << "count = " << count << endl;
    Martian b;
    count = Martian::getCount();
    cout << "count = " << count << endl;
    fun();
    count = Martian::getCount();
    cout << "count = " << count << endl;
    return 0;
}

void fun() {
    Martian m;
    int count = Martian::getCount();
    cout << "count = " << count << endl;
}
