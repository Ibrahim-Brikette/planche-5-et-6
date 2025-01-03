#include <iostream>
#include"cercle.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cercle c(1,10,10);
    double surC=c.calculeSurface();
    double periC=c.calculerPerimetre();
    cout<<"le perimetre de cette cercle est "<<periC<<" et son surface est "<<surC<<endl;
    c.setRayon(2*c.getRayon());
    c.afficher();
    surC=c.calculeSurface();
    periC=c.calculerPerimetre();
    cout<<"le perimetre de cette cercle est "<<periC<<" et son surface est "<<surC<<endl;
    c.deplacer(-10,-10);
    c.afficher();
    c.appartient(point(1,1));
    c.appartient(point(3,3));
    c.egale(cercle(2,point(0,0)));

}
