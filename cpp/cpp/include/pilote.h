#ifndef PILOTE_H
#define PILOTE_H
#include<bits/stdc++.h>
#include"companie.h"
#include"avion.h"

class pilote
{
     public:
        pilote(int);
        virtual ~pilote();
        void affiche();
      //  void remplir_pilote(companie);

    public:
    int id ;
    vector<int>liste_idavions;
    private:

};

#endif // PILOTE_H
