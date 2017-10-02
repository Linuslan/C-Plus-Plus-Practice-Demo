#include "Martian.h"
int Martian::martianCount = 0;
Martian::Martian() {
    martianCount++;
}

Martian::~Martian() {
    martianCount --;
}

int Martian::getCount() {
    return martianCount;
}

void Martian::fight() {

}

void Martian::hide() {

}
