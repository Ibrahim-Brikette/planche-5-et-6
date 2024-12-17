#include "vehicule.h"
#include <iostream>
int vehicule::numSerie=1;
int vehicule::numVehicule=1;
vehicule::vehicule(double p,int a):prix(p),anModel(a)
{

    numVehicule++;
    if (numVehicule==10000){
        numSerie++;
        numVehicule=1;}
}


std::string vehicule::getTitre()const{
    return "vehicule";
}
void vehicule::afficher()const{

    std::cout<<"la matricule de votre "<< getTitre()<<" "<<numSerie<<" TUN "<<numVehicule <<" son prix est "<<prix<<" l'anne de ce modele est "<<anModel<<std::endl;


}


/*
L'erreur passing 'const vehicule' as 'this' argument discards qualifiers
signifie que tu appelles une méthode ou accèdes à une donnée membre qui n'est pas marquée
 comme const dans une méthode marquée comme const.
 c'est le cas quant getTitre n'est pas declarer comme const mais afficher est const !!!!!!



*/
