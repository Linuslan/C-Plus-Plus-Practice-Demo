#include <iostream>
using namespace std;

class Compare {
    public:
        bool operator()(int a, int b) {
            cout << __func__ << endl;
            return a > b;
        }
};

int main() {
    Compare com;
    bool val = com(2, 1);
    cout << val << endl;
    return 0;
}
