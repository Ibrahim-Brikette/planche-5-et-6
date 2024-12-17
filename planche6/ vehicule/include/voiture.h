#ifndef VOITURE_H
#define VOITURE_H
#include"vehicule.h"

class voiture: public vehicule
{
    public:
        voiture(double,int,int);
        virtual ~voiture()=default;
        std::string getTitre()const override;
        void accelerer() override;
    protected:

    private:
        int nbrePlace;
};

#endif // VOITURE_H
