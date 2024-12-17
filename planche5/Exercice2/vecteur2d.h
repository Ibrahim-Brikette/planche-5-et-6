class vecteur2d{
    private:
        float x;
        float y;
    public:
        vecteur2d(double a=0,double b=0);
        void affiche()const;
        float getX()const;
        float getY()const;
        vecteur2d operator+(const vecteur2d&)const;
        vecteur2d operator*(const vecteur2d&)const;
        bool coincide(const vecteur2d &) const;
        float norme()const ;
        vecteur2d normaV(vecteur2d);
        const vecteur2d* normeA(const vecteur2d*);
        const vecteur2d& normeR(const vecteur2d&);













};
