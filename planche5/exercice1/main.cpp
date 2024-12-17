

    #include "etudiant.h"
#include <iostream>

int main() {
   etudiant e1("Alice", 3);
    e1.saisir();

    etudiant e2("Bob", 3);
    e2.saisir();

    std::cout << "\nInformations des etudiants:\n";
    e1.affichage();
    e2.affichage();

    std::cout << "\nComparaison des moyennes:\n";
    if (etudiant::comparer(e1, e2))  //appel d"une methode static
    {
        std::cout << "Les deux �tudiants ont la m�me moyenne.\n";
    }
    else {
        std::cout << "Les deux �tudiants ont des moyennes diff�rentes.\n";
    }

    return 0;
}
