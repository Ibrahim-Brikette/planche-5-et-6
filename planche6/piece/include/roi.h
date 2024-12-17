#ifndef ROI_H
#define ROI_H
#include"piece.h"
#include<string>

class roi:public piece
{
    public:
        roi(std::string,double,double,std::string);
        virtual ~roi()=default;
        void afficher()const  override;
        void deplacer() override;
    protected:

    private:
};

#endif // ROI_H
