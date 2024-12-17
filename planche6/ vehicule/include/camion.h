#ifndef CAMION_H
#define CAMION_H
#include"vehicule.h"
#include<string>
class camion: public vehicule

{
    public:
        camion(double,int,double);
        virtual ~camion()=default;//very important
        std::string getTitre() const override;
        void accelerer() override;
    protected:

    private:
        double chargeMax;
};

#endif // CAMION_H
