#include "RMB.h"
#include <iostream>
using namespace std;
RMB::RMB(uint y, uint jf) {
    this->yuan = y;
    this->jf = jf;
};

RMB::~RMB() {

};

RMB operator + (const RMB & val1, const RMB & val2) {
    uint jf = val1.jf + val2.jf;
    uint yuan = val1.yuan + val2.yuan;
    if(jf >= 100) {
        yuan ++;
        jf -= 100;
    }
    return RMB(yuan, jf);
}

bool operator > (const RMB & val1, const RMB & val2) {
    bool ret = false;
    if(val1.yuan > val2.yuan) {
        ret = true;
    } else if(val1.jf > val2.jf) {
        ret = true;
    }
    return ret;
}

void RMB::display() {
    cout << "RMB: " << yuan << ".";
    if(jf < 10) {
        cout << "0";
    }
    cout << jf << endl;
}
