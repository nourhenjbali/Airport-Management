#ifndef PILOTE_H
#define PILOTE_H

#include"companie.h"
#include"avion.h"
class pilote:
{
    public:
        pilote(int);
        virtual ~personnel();
        void affiche();
        void remplir_l(comapnie);

    protected:
    int id ;
    vector<int>liste_idavions;
    companie c;
    private:
};

#endif // PERSONNEL_H
