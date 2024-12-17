#ifndef ROBOTCHASSEUR_H
#define ROBOTCHASSEUR_H
#include"robot.h"

class robotChasseur:public robot//faite attention matansach public !!!!!!!!!!
{
    public:
        robotChasseur(std::string n=nullptr,double a=0,double b=0,double p=0,bool m=false);
        bool testPortee(const robot& );
        void tuer(robot rb);
    private:
};

#endif // ROBOTCHASSEUR_H
