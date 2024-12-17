#include <iostream>
#include"point.h"
using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    point A(12.0,13.0);
    A.affiche();
    point B(4,5.6);
    B.affiche();
    //appel de methode amis comparer/distance et milieu
    std::cout<<"la distance entre A et B "<<distance(A,B)<<std::endl;
    std::cout<<(comparer(A,B)? "A et B sont identiques": "A et B sont differents")<<std::endl;
    std::cout<<"le milieu: ";
    milieu(A,B).affiche();

    std::cout<<"un autre essaiiiiiiiiiiiiiiiii"<<std::endl;
    point Aa(12.0,13.0);
    Aa.affiche();
    point Ba(12.0,13.0);
    Ba.affiche();
    //appel de methode amis comparer/distance et milieu
    std::cout<<"la distance entre Aa et Ba "<<distance(Aa,Ba)<<std::endl;
    std::cout<<(comparer(Aa,Ba)? "Aa et Ba sont identiques": "Aa et Ba sont differents")<<std::endl;
    std::cout<<"le milieu: ";
    milieu(Aa,Ba);
}
