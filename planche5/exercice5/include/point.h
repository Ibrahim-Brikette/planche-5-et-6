#ifndef POINT_H
#define POINT_H


class point
{
    public:
        point(double x=0,double y=0);
        virtual ~point()=default;
        double getX() const;
        double getY() const;
        void setX(double);
        void setY(double);
    protected:

    private:
        double x,y;
};

#endif // POINT_H
