#include <iostream>
#include "Stack.h"
using namespace linuslan;
using namespace std;

int main() {
    Stack<double> stack;
    stack.push(1.1);
    stack.push(2.2);
    stack.push(3.3);

    int len = stack.size();
    cout << "stack len is: " << len << endl;

    StackIterator<double> iter(stack);
    for(int i = 0; i < len; i ++) {
        cout << iter++ << endl;
    }

    cout << "pop: " << stack.pop() << endl;
    return 0;
}
