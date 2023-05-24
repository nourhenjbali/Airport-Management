#ifndef COMPANIE_H
#define COMPANIE_H
#include<bits/stdc++.h>
using namespace std;
#include<string>
#include"toutvol.h"
#include"avion.h"
#include"setward.h"
#include"hotesse.h"
#include"pilote.h"
   class companie
{
    public:
        companie(string="",int=99);
        void remplir_liste(int=0);
        virtual ~companie();
        void remplir_vol();
        void remplir_al();
        void remplir_e();
        void calcul_gainjour(date);
        static void creer (fstream&);
        void supprimer_vol(int);
        void modifier(int);
        int recherche_vol(int);
        int recherche_e(int);
        int recherche_al(int);
        void fetch_vol(ville,ville,date);
        void fetch_vole(ville,ville,date);
        void fetch_volal(ville,ville,date,date);
        void remplir_ficher_vol(fstream&);
        void afficherficher(fstream&);
        friend istream& operator>>(istream&,companie&);
        friend ostream& operator<<(ostream& ,companie&);
        friend ostream& operator<<(ostream&,companie*); // ecrire dans un ficher
        friend istream& operator>>(istream&,companie*); //lire du ficher
        void remplir_map1();
        void remplir_map2();
        void remplir_map3();
        void enregistrer();
        void remplir_avions();
        void affecter_personnel(int);
        int getnb( int );

        //les fonction de vol aller simple
        void ajouter_vol();
        void modifier_vol();
        void afficher();
        // les fonction des vol aller avec escale
         void ajouter_vol_e();
        void supprimer_vol_e(int=0);
        void modifier_vol_e();
        void afficher_e();
        //les fonction de vol aller retour simple
        void ajouter_vol_r();
        void supprimer_vol_r(int=0);
        void modifier_vol_r();
        void afficher_r();
        //les fonction des vol aller retour avce escale
      //  void ajouter_vol_re();
       // void supprimer_vol_re(int=0);
       // void modifier_vol_re();
       // void afficher_re();

       // void avions_asupprimer();



    public:
    string nom ;
    int n ;
    map<int,string>map1;
    map<int,string>map2;
    map<int,string>map3;
    vector<vol*>liste_vol;
    vector<vol_aller_retour*> l_aller_retour ;
    vector<vol_simple_escale*>l_simple_escale ;
   // vector<vol_aller_retour_escale*>lr_escale ;
   vector<avion*>l_avions;


};

#endif // COMPANIE_H
