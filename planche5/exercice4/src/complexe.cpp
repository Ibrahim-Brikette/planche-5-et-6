#include "complexe.h"
#include<string>
#include<iostream>


#include<cmath>
complexe::complexe(double a,double b):x(a),y(b)
{}

void complexe::afficher()const{
    std::cout<<"votre nombre complexe est egale a "<<x<<"+"<<y<<"i"<<std::endl;
}
double complexe::module() const{

    return sqrt(x*x+y*y);

}
std::string complexe::bare()const{

    return (std::to_string(x)+std::to_string(-y)+"i");


}
double complexe::getX()const{
    return x;
}
double complexe::getY()const{
    return y;
}
complexe complexe::operator+(const complexe&z ) const{
    return complexe(x+z.getX(),y+z.getY());

}
complexe complexe::operator*(const complexe&z) const{
    return complexe(x*z.getX()-y*z.getY(),x*z.getY()+y*z.getX());

}
