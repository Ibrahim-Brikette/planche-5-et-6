#include "point.h"

point::point(double x,double y):x(x),y(y)
{
    //ctor
}
double point::getX()const{
return x;
}
double point::getY() const{
return y;
}
void point::setX(double dx){
    x=dx;

}
void point::setY(double dy){
        y=dy;
}
