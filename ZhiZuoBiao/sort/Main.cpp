#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void showArray(vector<int> & array) {
    vector<int>::iterator iter;
    cout << "array[";
    for(iter = array.begin(); iter != array.end(); iter ++) {
        cout << *iter << ",";
    }
    cout << "]" << endl;
}

void showArrayConst(const vector<int> & array) {
    vector<int>::const_iterator iter;
    cout << "array[";
    for(iter = array.begin(); iter != array.end(); iter ++) {
        cout << *iter << ",";
    }
    cout << "]" << endl;
}

bool compare(int a, int b) {
    return a > b;
}

int main() {
    vector<int> array;

    array.push_back(42);
    array.push_back(1);
    array.push_back(100);
    showArray(array);
    sort(array.begin(), array.end());
    cout << "after sort:" << endl;
    showArray(array);
    sort(array.begin(), array.end(), compare);
    cout << "after desc sort:" << endl;
    showArray(array);
    return 0;
}
