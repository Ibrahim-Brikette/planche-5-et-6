#ifndef PION_H
#define PION_H
#include"piece.h"

class pion: public piece
{
    public:
        pion(std::string ,double ,double,std::string);
        virtual ~pion()=default;
        void deplacer ()  override;
        void afficher () const override;
    protected:

    private:
};

#endif // PION_H
