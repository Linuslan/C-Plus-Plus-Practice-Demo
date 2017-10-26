#include <vector>
#include <iostream>
using namespace std;

void printVectorInfo(const vector<int> & array) {
    cout << "vector's capacity " << array.capacity() << endl;
    cout << "vector's size " << array.size() << endl;
}

int main() {
    vector<int> coll;
    printVectorInfo(coll);
    for(int i = 0; i < 10; i ++) {
        coll.push_back(i);
    }
    printVectorInfo(coll);
    cout << coll[9] << endl;
    return 0;
}
