#include "voiture.h"
#include<iostream>
#include<string>
voiture::voiture(double p,int a,int n):vehicule(p,a),nbrePlace(n)
{
    //ctor
}
std::string voiture::getTitre()const{
    return "voiture";
}
void voiture::accelerer(){

std::cout<<"je peusx atteindre 200km/h"<<std::endl;
}

