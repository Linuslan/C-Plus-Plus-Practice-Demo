#include "RMB.h"
#include <iostream>
using namespace std;
RMB::RMB(uint yuan, uint jf) {
    this->yuan = yuan;
    this->jf = jf;
}
RMB::~RMB() {

}
void RMB::display() {
    cout << "RMB: " << yuan << ".";
    if(jf < 10) {
        cout << "0";
    }
    cout << jf << endl;
}
RMB RMB::operator+(const RMB & val1) {
    uint yuan = val1.yuan + this->yuan;
    uint jf = val1.jf + this->jf;
    if(jf >= 100) {
        yuan ++;
        jf -= 100;
    }
    return RMB(yuan, jf);
}

bool RMB::operator>(const RMB & val1) {
    bool ret = false;
    if(val1.yuan > this->yuan) {
        ret = true;
    } else if(val1.jf > this->jf) {
        ret = true;
    }
    return ret;
}
