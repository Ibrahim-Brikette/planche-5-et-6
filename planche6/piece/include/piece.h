#ifndef PIECE_H
#define PIECE_H
#include<string>


class piece
{
    public:
        piece(std::string,double,double,std::string);
        virtual ~piece()=default;
        virtual void deplacer()=0;
        virtual void afficher()const=0;
    protected:
        double x,y;
        std::string type,color;
    private:
};

#endif // PIECE_H
