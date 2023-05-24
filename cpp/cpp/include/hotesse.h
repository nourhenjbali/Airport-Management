#ifndef HOTESSE_H
#define HOTESSE_H
#include<bits/stdc++.h>
using namespace std;
#include<string>
#include"companie.h"

class hotesse
{
     public:
        hotesse(int);
        virtual ~hotesse();
        void affiche();
       // void remplir_hotesse(companie);

    public:
    int id ;
    vector<int>liste_idavions;
    private:
};

#endif // HOTESSE_H
