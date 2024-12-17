#include <iostream>
#include<string>
#include<cmath>
#include"piece.h"
#include"pion.h"
#include"roi.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    piece *r=new roi("roi",-8,2,"blanc");
    r->afficher();
    r->deplacer();
    r->afficher();
}
