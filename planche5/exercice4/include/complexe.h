#ifndef COMPLEXE_H
#define COMPLEXE_H
#include<string>

class complexe
{
    public:
        complexe(double a=0,double b=0);
        virtual ~complexe()=default;
        double x;
        double y;
        void afficher()const;
        double module() const;
        std::string bare()const;
        double getX()const;
        double getY()const;
        complexe operator+(const complexe& ) const;
        complexe operator*(const complexe& ) const;


    protected:

    private:
};

#endif // COMPLEXE_H
