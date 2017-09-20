#include <iostream>
inline bool isnumber(char ch);

int main() {
    using namespace std;
    char ch = '0';
    while((ch = cin.get()) != '\0') {
        if(isnumber(ch)) {
            cout << "you enter a digit.\n";
        } else {
            cout << "you enter a non-digit.\n";
        }
    }
    return 0;
}

inline bool isnumber(char ch) {
    return ch >= '0' && ch <= '9' ? true : false;
}

