#include <iostream>
#define MAX(a, b) (a) > (b) ? (a) : (b)
#define square(a) (a)+(a)
inline int max(int a, int b);
int main() {
    using namespace std;
    int a = 5;
    int b = 10;
    int c = max(a, b);
    int d = (a++)+(a++);
    cout << c << endl;
    cout << d << endl;
    cout << a << endl;
    return 0;
}

inline int max(int a, int b) {
    return a > b ? a : b;
}
