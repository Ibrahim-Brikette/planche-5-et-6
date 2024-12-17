#include<iostream>
#include <cmath>
#include"vecteur2d.h"
        vecteur2d::vecteur2d(double a,double b):x(a),y(b){}
        void vecteur2d::affiche()const{

        std::cout<<"le vecteur est de cordonné x= "<<x<<" et y= "<<y<<std::endl;
        }
        float vecteur2d::getX() const{
            return x;
        }
        float vecteur2d::getY()const{
            return y;
        }
         vecteur2d vecteur2d:: operator+(const vecteur2d& v)const{
            return vecteur2d(x+v.getX(),y+v.getY());

        }
        vecteur2d vecteur2d:: operator*(const vecteur2d& v)const{
        return vecteur2d(x*v.getY()-y*v.getX());

        }
        bool vecteur2d::coincide(const vecteur2d &v) const{
        return(this->x==v.getX()&& this->y==v.getY());
        }
        float vecteur2d::norme()const{
        return(sqrt(x*x+y*y));
        }
        vecteur2d vecteur2d::normaV(vecteur2d w){
        if (this->norme()>w.norme()){
            return(*this);
        }
        else{
            return(w);
        }

        }
        const vecteur2d* vecteur2d::normeA(const vecteur2d* w){
            if(this->norme()>w->norme())
                return(this);
            else{
                return(w);
            }
        }
       const vecteur2d& vecteur2d::normeR( const vecteur2d& w){

        if (this->norme()>w.norme()){
            return(*this);
        }
        else{
            return(w);
        }

        }
