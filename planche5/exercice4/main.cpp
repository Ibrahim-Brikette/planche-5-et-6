#include <iostream>
#include "complexe.h"
#include<string>
int main()
{
    std::cout << "Hello world!" << std::endl;
    complexe z(2,5);
    complexe z1(10,2);
    z.afficher();
    z1.afficher();
    (z+z1).afficher();
    (z*z1).afficher();

}
