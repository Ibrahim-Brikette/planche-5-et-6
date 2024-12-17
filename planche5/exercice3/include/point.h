#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <cmath>

class point
{
    private:
        double x,y;
    public:
        point(double a=0.0,double b=0.0);
        virtual ~point()=default;
        point(const point&);
        void affiche()const;
        friend bool comparer(const point&,const point&);
        friend double distance(const point&,const point&);
        friend point milieu(const point&,const point&);

    protected:


};

#endif // POINT_H
