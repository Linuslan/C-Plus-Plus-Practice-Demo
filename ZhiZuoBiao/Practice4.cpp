#include <iostream>
using namespace std;
void foo(int i=10, int j=20, int k = 30);
void bar(int, int = 10, int = 30);
int main() {
    foo();
    bar(10);
    return 0;
}

void foo(int i, int j, int k) {
    cout << i << ' ' << j << ' ' << k <<endl;
}

void bar(int i, int j, int k) {
    cout << i << ' ' << j << ' ' << k <<endl;
}
