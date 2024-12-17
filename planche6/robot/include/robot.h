#ifndef ROBOT_H
#define ROBOT_H
#include<string>

class robot
{
    private:
        std::string name;
        double x,y;
        double porteeRadar;
        bool estMort;


    public:

        robot(std::string n=nullptr,double a=0,double b=0,double p=0,bool m=false);
        void afficher() const;
        void deplacer(double,double);
        bool getStatut() const;
        double getP()const;
        double getX()const;
        double getY()const;
        void setStatut(bool);
        std::string getName() const;


    protected:

};

#endif // ROBOT_H
