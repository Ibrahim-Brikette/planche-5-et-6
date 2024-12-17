

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
        std::cout << "Les deux étudiants ont la même moyenne.\n";
    }
    else {
        std::cout << "Les deux étudiants ont des moyennes différentes.\n";
    }

    return 0;
}
