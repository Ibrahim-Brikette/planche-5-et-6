#ifndef CERCLE_H
#define CERCLE_H
#include"point.h"

class cercle
{
    public:
        cercle(double ,point);
        cercle(double,double,double);
        virtual ~cercle()=default;
        void afficher()const;
        double getRayon()const;
        void setRayon(double);
        point getCentre()const;
        void deplacer(double,double);
        double calculeSurface()const;
        double calculerPerimetre()const;
        void egale(const cercle&);
        void appartient(const point&);

    protected:

    private:
        double rayon;
        point centre;
};

#endif // CERCLE_H
