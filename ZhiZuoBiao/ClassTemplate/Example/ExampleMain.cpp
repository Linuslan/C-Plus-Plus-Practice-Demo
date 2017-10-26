#include "Example.h"

using namespace linuslan;
int main() {
    Example<int> val(1);
    cout << "data = " << val.get() << endl;
    Example<double> val2(2.2);
    cout << val2.get() << endl;
    Test test;
    Example<Test> val3(test);
    return 0;
}
