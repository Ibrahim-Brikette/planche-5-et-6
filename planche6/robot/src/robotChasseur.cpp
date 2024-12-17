#include "robotChasseur.h"
#include<iostream>
#include<cmath>

robotChasseur::robotChasseur(std::string n,double a,double b,double p,bool m):robot(n,a,b,p,m){}
bool robotChasseur::testPortee(const robot& rb ){
    double distance;
    double X=this->getX()-rb.getX();
    double Y=this->getY()-rb.getY();
    distance=sqrt(X*X+Y*Y);
    return(this->getP() >= distance);

}
void robotChasseur::tuer(robot rb){

    bool test=this->testPortee(rb);
    if(test==true && rb.getStatut()==false){
        rb.setStatut(true);
        std::cout<<this->getName()<<" tue "<<rb.getName()<<std::endl;

    }

}


