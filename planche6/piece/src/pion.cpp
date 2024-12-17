#include "pion.h"
#include<string>
#include<iostream>

pion::pion(std::string t,double a,double b,std::string c):piece(t,a,b,c)
{

}
void pion::afficher() const{
    std::cout<<"le "<<type<<" son couleur est "<<color<<" sa position est "<<x<<","<<y<<std::endl;
}
void pion::deplacer(){
    if(y==0)
        std::cout<<"erreur"<<std::endl;
    else
        y++;


}
