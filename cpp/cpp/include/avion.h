#ifndef AVION_H
#define AVION_H
#include <iostream>
#include"toutvol.h"
#include<bits/stdc++.h>
using namespace std;
#include<string>
class avion
{
    public:
        avion();
       // void affiche();
        int getid(){return idavion;};
        int getetat(){return etat; };
        void remplir_lvol_avion();
        void remplir_avion();
        virtual ~avion();
        int getid_pilote(){return id_pilote; };
        int getid_hotesse(){return id_hotesse; };
        int getid_setward(){return id_steward;};
        void setid_pilote(int a){id_pilote=a;};
        void setid_hotesse(int b){id_hotesse=b;};
        void setid_steward(int c){id_steward=c;};



    private:
    int idavion ;
    int etat ;
    int id_pilote;
    int id_hotesse;
    int id_steward ;
    public:
    vector<int>l1;
    vector<int>l2;
    vector<int>l3;






};

#endif // AVION_H
