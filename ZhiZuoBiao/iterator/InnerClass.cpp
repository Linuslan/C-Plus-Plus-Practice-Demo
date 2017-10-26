#include <iostream>
using namespace std;
class A{
public:
    A() {}
    class B{    //Ç¶Ì×Àà
    public:
        B() {}
    };
};

int main() {
    A::B b;

    return 0;
}
