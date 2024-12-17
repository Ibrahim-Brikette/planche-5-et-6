#include "camion.h"
#include<iostream>
#include<string>
camion::camion(double p,int a,double c):vehicule(p,a),chargeMax(c)
{
    //ctor
}

std::string camion::getTitre()const{
return "camion";

}
void camion::accelerer() {
    std::cout<<"je peux atteindre 120kmh"<<std::endl;


}
