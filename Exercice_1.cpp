#include <iostream>
#include <string>

using namespace std;

class MaClasse {
public:
    MaClasse(const std::string& texte) : texte_(texte) {}

    void afficheMessage() {
        std::cout << texte_ << std::endl;
    }
private:
    std::string texte_;
};

int main() {
    /// Dynamique
    MaClasse* objetDynamique = new MaClasse("Ceci est un message dynamique !");
    objetDynamique->afficheMessage();
    delete objetDynamique;
    /// Fin Dynamique

    /// Statique
    MaClasse MonObjet("Ceci est un message statique !");
    MonObjet.afficheMessage();
    ///Fin statique
    return 0;
}
