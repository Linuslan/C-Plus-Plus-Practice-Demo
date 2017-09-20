#include <iostream>
void foo(int a);
void bar(int & a);
void zoo(int * a);
int main() {
    using namespace std;
    int a = 1;
    int b = 1;
    int c = 1;
    foo(a);
    bar(b);
    zoo(&c);
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}

void foo(int a) {
    a = 10;
}

void bar(int & a) {
    a = 10;
}

void zoo(int * a) {
    *a = 10;
}
