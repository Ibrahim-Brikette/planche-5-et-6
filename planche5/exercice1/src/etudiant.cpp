#include "etudiant.h"
#include<string>
#include<iostream>
int etudiant::matricule=0;
etudiant::etudiant(std::string nom,int n):name(nom),nbrNotes(n)
{
    tabNotes=new double[nbrNotes];
    code=++matricule;
}
etudiant::~etudiant(){
    delete[] tabNotes;

}
etudiant::etudiant (const etudiant& e){
        name=e.getName();
        nbrNotes=e.getNbNotes();
        tabNotes=new double[nbrNotes];
        for(int i=0;i<nbrNotes;i++){
            tabNotes[i]=e.tabNotes[i];

        }


}
std::string etudiant::getName() const{

    return name;
}
int  etudiant::getNbNotes() const{
    return nbrNotes;
}
void etudiant::setNbNotes( int x){

    nbrNotes=x;
}
void etudiant::saisir(){

        for(int i=0;i<nbrNotes;i++){
            std::cout<<"donner la note "<<i+1<<" de "<<name<<std::endl;
            std::cin>>tabNotes[i];



        }
}
void etudiant::affichage()const{

    std::cout<<"l'etudiant "<<name<<" sa matricule est "<<code<<(admis()?" il est admis ": "non admis")<<std::endl;


}
double etudiant::moyenne()const{

    double moy=0;
    for(int i=0;i<nbrNotes;i++){
        moy+=tabNotes[i];


    }
    return moy/(double)nbrNotes;


}
bool etudiant::admis() const{

    return moyenne()>=10.0;


}
bool etudiant::comparer(const etudiant& a, const etudiant &b){
    return a.moyenne()==b.moyenne() ;

}

