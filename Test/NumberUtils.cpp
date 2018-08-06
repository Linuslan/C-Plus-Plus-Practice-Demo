//
// Created by LinusLan on 2018/7/30.
//

#include <cmath>
#include "NumberUtils.h"
#include <iostream>
using namespace std;
double NumberUtils::formatDecimal(double num, int decimal) {
    int zoomIn = 1;
    for(int i = 0; i < decimal; i ++) {
        zoomIn = zoomIn*10;
    }
    cout << "?????Χ???" << zoomIn << endl;
    long temp = round(num*zoomIn);
    cout << "?????????" << temp << endl;
    return temp/(zoomIn*1.0f);
}

float NumberUtils::formatDecimal(float num, int decimal) {
    int zoomIn = 1;
    for(int i = 0; i < decimal; i ++) {
        zoomIn = zoomIn*10;
    }
    long temp = round(num*zoomIn);
    return temp/(zoomIn*1.0f);
}

int main() {
    /*double a = -142.5263465;
    a = NumberUtils::formatDecimal(a, 2);
    std::cout<<a<<std::endl;*/
    std::string test = "abc";
    std::cout << test << std::endl;
}