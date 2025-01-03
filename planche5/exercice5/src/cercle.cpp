#include "cercle.h"
#include"point.h"
#include<iostream>
#include<cmath>

cercle::cercle(double r ,point p):rayon(r),centre(p){}
cercle::cercle(double r,double x,double y):rayon(r), centre(x,y){}
void cercle::afficher()const{
    std::cout<<"la cercle de rayon "<<rayon<<" son centre de cordonnée "<<centre.getX()<<","<<centre.getY()<<std::endl;



}
double cercle::getRayon()const{
    return rayon;


}
void cercle::setRayon(double r){

    rayon=r;
}
point cercle::getCentre()const{
    return  centre;

}
void cercle::deplacer(double dx,double dy){
    centre.setX(centre.getX()+dx);
    centre.setY(centre.getY()+dy);

}
double cercle::calculeSurface()const{
    return M_PI*rayon*rayon;

}
double cercle::calculerPerimetre()const{

    return 2*M_PI*rayon;
}
void cercle::egale(const cercle& ctre){

    if (centre.getX()==ctre.getCentre().getX()&& centre.getY()==ctre.getCentre().getY()&& rayon==ctre.getRayon())
        std::cout<<"les deux cercles coincident "<<std::endl;
    else
        std::cout<<"les deux cercles ne coincident pas"<<std::endl;


}
void cercle::appartient(const point& p){
    double x=p.getX()-centre.getX();double y=p.getY()-centre.getY();
    if(( sqrt(x*x+y*y)<=rayon))
        std::cout<<"la point "<<"("<<p.getX()<<","<<p.getY()<<")"<<" appartient a la cercle"<<std::endl;
    else
        std::cout<<"la point "<<"("<<p.getX()<<","<<p.getY()<<")"<<" n'appartient pas a la cercle"<<std::endl;

}
