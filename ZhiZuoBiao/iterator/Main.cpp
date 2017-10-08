#include <vector>
#include <iostream>
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
int main() {
    vector<int> array;
    vector<int>::iterator iter;
    vector<int>::const_iterator citer;
    array.push_back(42);
    array.push_back(1);
    array.push_back(100);

    array.pop_back();   //删除最后一个元素
    iter = array.begin();
    cout << *iter << endl;
    iter ++;    //same as ++iter;
    cout << *iter << endl;
    *iter = 109;

    citer = array.begin();
    cout << *citer << endl;
    *citer = 20;    //error

    showArray(array);
    showArrayConst(array);
    return 0;
}
