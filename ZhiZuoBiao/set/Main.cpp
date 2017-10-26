#include <set>
#include <iostream>
using namespace std;

int main() {
    set<int> coll;
    set<int>::iterator iter;
    coll.insert(1);
    coll.insert(100);
    coll.insert(90);
    coll.insert(-1);
    coll.insert(80);
    for(iter = coll.begin(); iter != coll.end(); ++ iter) {
        cout << *iter << endl;
    }

    return 0;
}
