#include <iostream>
using namespace std;
int foo(int i);
float foo(float i);
double foo(double i);

int main() {
    cout << "foo(10) " << foo(10) << endl;
    cout << "foo(2.5f) " << foo(2.5f) << endl;
    cout << "foo(1.1) " << foo(1.1) << endl;
    return 0;
}

int foo(int i) {
    cout << __FILE__ << __LINE__ << __func__ << endl;
    return i*i;
}

float foo(float i) {
    cout << __FILE__ << __LINE__ << __func__ << endl;
    return i*i;
}

double foo(double i) {
    cout << __FILE__ << __LINE__ << __func__ << endl;
    return i*i;
}
