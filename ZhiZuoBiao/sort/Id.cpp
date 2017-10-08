#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Id {
    public:
        Id(): name(""), score(0){};
        Id(string name, int score):name(name), score(score) {};
        string name;
        int score;
};

/*
 * 重载Id类型的比较运算符，这样sort才能进行排序
 */
bool operator==(const Id & x, const Id & y) {
    return (x.name == y.name) && (x.score==y.score);
}

bool operator < (const Id & x, const Id & y) {
    return x.score < y.score;
}

bool compare(const Id & x, const Id & y) {
    return x.score > y.score;
}

int main() {
    vector<Id> ids;
    vector<Id>::iterator iter;
    ids.push_back(Id("Tom", 5));
    ids.push_back(Id("John", 1));
    ids.push_back(Id("Alex", 2));
    sort(ids.begin(), ids.end(), compare);
    cout << "Players and scores: " << endl;
    for(iter = ids.begin(); iter != ids.end(); ++iter) {
        cout << "name: " << iter->name << ", score: " << iter->score << endl;
    }
    cout << endl;
    return 0;
}
