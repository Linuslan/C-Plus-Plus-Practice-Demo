#include <iostream>
template <typename T> T abs(T a);
int main() {
    using namespace std;
    int a = 5;
    double b = -5.5;
    a = abs(a);
    cout << a << endl;
    cout << abs(b) << endl;
    return 0;
}

template <typename T> T abs(T a) {
    return a < 0 ? -a : a;
}
