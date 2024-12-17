#include<iostream>
#include "robot.h"
robot::robot(std::string n,double a,double b,double p,bool m):name(n),x(a),y(b),porteeRadar(p),estMort(m){}
void robot::afficher() const{
std::cout<<"le robot "<<name<<" sa position est "<<x<<" "<<y<<" sa portee est "<<porteeRadar<<std::endl;


}
double robot::getX() const{
    return x;
}
double robot::getY()const{
    return y;
}
std::string robot::getName()const{
    return name;
}
double robot::getP()const{
    return porteeRadar;
}
void robot::deplacer(double dx,double dy){
    x+=dx;
    y+=dy;

}
bool robot::getStatut() const{
    return estMort;


}

void robot::setStatut(bool test){
    estMort=test;

}
