#include "roi.h"
#include<string>
#include<cmath>
#include<iostream>
roi::roi(std::string t,double a,double b,std::string c):piece(t,a,b,c){
}

void roi::afficher() const{
    std::cout<<"le "<<type<<" son couleur est "<<color<<" sa position est "<<x<<","<<y<<std::endl;
}
void roi::deplacer(){
int pas;char dr;
std::cout<<"donner le pas 1 ou -1 et la directio x ou y "<<std::endl;
std::cin>>pas>>dr;
if(dr=='x'){
    if(abs(x)==8)
        std::cout<<"erreur"<<std::endl;
    else x+=pas;
}
else{
    if(abs(y)==8)
        std::cout<<"erreur"<<std::endl;
    else y+=pas;

}


}
