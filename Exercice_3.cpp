#include <iostream>

class Fraction{
public:
    void Val() {
        n = 0;
    }

    void setVal(float valeur){
        n = valeur;
    }

    void addition(float nbAdd){
        n += nbAdd;
    }

    void soustraction(float nbSub){
        n -= nbSub;
    }

    void multiplication(float nbMul){
        n *= nbMul;
    }

    void division(float nbDiv){
        n /= nbDiv;
    }

    void afficher(){
        std::cout << n << std::endl;
    }
private:
    float n;
};


int main() {
    Fraction monNombre;
    monNombre.setVal(3);
    monNombre.soustraction(2);
    monNombre.afficher();
    return 0;
}
