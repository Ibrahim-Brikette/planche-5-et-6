#ifndef VEHICULE_H
#define VEHICULE_H
#include <string>

class vehicule
{
    public:
        vehicule(double,int);
        virtual ~vehicule()=default;
        virtual void accelerer()=0;
        void afficher()const;
        virtual std::string getTitre()const;
    protected:
        static int numSerie;// Les membres statics doivent être définis en dehors de la classe (sauf s'ils sont constexpr depuis C++17).
        static int numVehicule;
        int anModel;
        double prix;
    private:
};

#endif // VEHICULE_H
