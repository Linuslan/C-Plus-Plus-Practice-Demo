#include <map>
#include <iostream>
#include <string>
using namespace std;

class Compare {
    public:
        bool operator() (int a, int b) {
            return a > b;
        }
};

int main() {
    map<int, string, Compare> coll;
    map<int, string>::iterator iter;
    coll.insert(pair<int, string>(9, "Nine"));
    coll.insert(map<int, string>::value_type(1, "One"));
    coll.insert(make_pair(2, "Two"));
    coll[0] = "Zero";
    for(iter = coll.begin(); iter != coll.end(); ++iter) {
        cout << iter->first << ":" << iter->second << endl;
    }

    cout << coll[9] << endl;    //[9]中的9即key，通过该key可以取到value
    return 0;
}
