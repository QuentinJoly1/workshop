
#include "pch.h"

int main() {
    int pause;
    CLcalcul o1;
    CLcalcul o2(2);
    CLcalcul* p1;
    CLcalcul* p2;

    p1 = new CLcalcul();
    p2 = new CLcalcul(3);

    o1.carre(); o2.carre(); std::cout << o1.getN() << std::endl; std::cout << o2.getN() << std::endl;

    p1->carre(); p2->carre(); std::cout << p1->getN() << std::endl; std::cout << p2->getN() << std::endl;

    std::cin >> pause;
    
    return 0;
}
