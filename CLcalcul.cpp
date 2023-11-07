#include "pch.h"

CLcalcul::CLcalcul() {
    n = 0;
}

CLcalcul::CLcalcul(int num) {
    n = num;
}

void CLcalcul::carre() {
    n = n * n;
}

void CLcalcul::setN(int num) {
    n = num;
}

int CLcalcul::getN(void) {
    return n;
}