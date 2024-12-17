#include <iostream>
#include"vecteur2d.h"

using namespace std;

int main()
{
   vecteur2d a(10,20);
   vecteur2d b(5.2,12);
   vecteur2d A;
   A=a+b;
   A.affiche();
   vecteur2d M;
   M=a*b;
   M.affiche();
   std::cout<<a.norme()<<std::endl;
   std::cout<<b.norme()<<std::endl;
    const vecteur2d*w=a.normeA(&b);
    w->affiche();
    const vecteur2d&z=a.normeR(b);
    z.affiche();

}
