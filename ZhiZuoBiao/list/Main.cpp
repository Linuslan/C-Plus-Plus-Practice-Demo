#include <iostream>
#include <list>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

void showList(const list<int> & coll) {
    list<int>::const_iterator iter;
    for(iter = coll.begin(); iter != coll.end(); ++ iter) {
        cout << *iter << endl;
    }
}

int main() {
    list<int> coll;
    coll.push_back(10);
    coll.push_back(11);
    coll.push_front(12);
    coll.push_front(9);
    /*
    list<int>::iterator iter = coll.begin();
    coll.erase(iter);   //删除之后iter就无效了，需重新获取
    iter = ++coll.begin();
    coll.erase(iter);*/
    coll.sort();
    showList(coll);
    cout << endl;
    coll.sort(compare); //降序排列
    showList(coll);
    return 0;
}
