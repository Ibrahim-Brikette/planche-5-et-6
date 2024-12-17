#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
class etudiant
{
    private:
        std::string name;
        int nbrNotes;
        double * tabNotes;
        int code;
    public:
        static int matricule;
        etudiant(std::string n="",int nb=0);
        virtual ~etudiant();
        etudiant (const etudiant&);
        //getters
        std::string getName() const;
        int getNbNotes() const;
        //setters
        void setNbNotes( int);
        void setName(std::string);

        void saisir();
        void affichage()const;
        double moyenne()const;
        bool admis() const;
        static bool comparer(const etudiant&, const etudiant& );
    protected:



};

#endif // ETUDIANT_H
