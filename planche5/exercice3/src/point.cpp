#include "point.h"

point::point(double a,double b):x(a),y(b){}
point::point(point const &p){
    x=p.x;
    y=p.y;

}
void point::affiche()const{
    std::cout<<"cest une point de cordonne "<<x<<" "<<y<<std::endl;


}

bool comparer(const point& o,const point& i)//fonction friend 'point::' tetna7a
{
    return o.x==i.x && o.y==o.y;

}
double distance(const point& o,const point& i){
    double ab=o.x-i.x;
    double ord=o.y-i.y;
    return sqrt(ab*ab +ord*ord);


}
point  milieu(const point&o,const point&i){
    if(comparer(o,i)){
        std::cout<<"points identiques"<<std::endl;
    }
    else{
        double ab=(o.x-i.x)/2;
    double ord=(o.y-i.y)/2;
    return point (ab,ord);
    }

}

