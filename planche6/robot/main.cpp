#include <iostream>
#include"robotChasseur.h"
#include"robot.h"
#include<vector>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    robotChasseur opti("optimus",2,3,25);
    opti.afficher();
    opti.deplacer(35-2,22-3);
    opti.afficher();
    std::vector<robot> robots={
        robot("Megatron", 30, 20,23,false),
        robot("Starscream", 50, 60),
        robot("Soundwave", 40, 22),
        robot("Shockwave", 100, 100),
        robot("Bumblebee", 34, 21)

    };
    for(const robot &rb:robots){
        opti.tuer(rb);

    }

}
