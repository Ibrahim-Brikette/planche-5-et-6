#include <iostream>
#include<string>
#include<camion.h>
#include<voiture.h>
#include<vehicule.h>
#include<vector>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    //virtual dima fama des pointeurs
    std::vector<vehicule*> parc={
    new camion(1000,2005,12.000),new voiture(42000,2006,5)

    };
    for(const vehicule* v:parc)
        v->afficher();
}
