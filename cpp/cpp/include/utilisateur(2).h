#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include "reservation.h"
#include<bits/stdc++.h>
#include<string>
#include<fstream>
#include<iostream>
#pragma once
using namespace std;
class utilisateur
{  public:
    int ID ;
    string email;
    string prenom;
    string telephone;
    string mdp;
    string nom ;
    string login ;
    date2 date_de_naiss;
    vector <reservation*> tab;

    public:

        utilisateur();
       /* int getID(){return ID ; };
        string getemail(){ return email ;}; //encapsulation
        string getprenom(){return prenom ;};
        string gettel(){ return telephone ; };
        string getmdp(){ return mdp ; };
        string getlogin(){return login ; } ; */

        void supp_reser();
        void modifier_res();
        static void creer_fichier(fstream&);
       // void remplir_fichier(fstream&);
        void afficher_fichier(fstream&);
       // void remplir_res();
        //void remplir_ficher();
        utilisateur(const utilisateur&);
        friend ostream& operator<<(ostream&,utilisateur&);
        friend ostream& operator<<(ostream&,utilisateur*);
        friend istream& operator>>(istream&,utilisateur*);
        friend istream& operator>>(istream&,utilisateur&);
        virtual ~utilisateur();
};


#endif // UTILISATEUR_H
