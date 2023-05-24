#ifndef TOUTVOL_H
#define TOUTVOL_H
#include<bits/stdc++.h>
using namespace std;

class date{

    public:
        int jour ;
        int mois ;
        int annee ;
    public:
        date(int=1 , int =1 , int=2021 ) ;
        void affiche();
        void setdate();
        friend ostream& operator<<(ostream&,date&);
        friend istream& operator>>(istream&,date&);
        bool operator==(const date& );

        virtual ~date();

};
class ville
{
    public:
        ville();
        void affiche();
        string getnom(){return nomv; };
        void remplir();
        virtual ~ville();
        friend istream& operator>>(istream&,ville&);
        friend ostream& operator<<(ostream&,ville&);


    string nomv ;
};
class escale
{
    public:
        escale();
        void setheur_arrive(int h){ heur_arrive=h ;}
        void setheur_depart(int h){ heur_depart=h ;}
        void remplir();
        int getid(){ return id ; };
        int getheur(){ return heur_arrive ;};
        int getdhdepart(){ return heur_depart ;};
        friend ostream& operator<<(ostream&,escale&);
        friend istream& operator>>(istream&,escale&);
        void affiche (){
            cout<<"l'id est "<<id <<endl;
            cout<<"l'heur d'arrive est"<<heur_arrive<<endl;
            cout<<"l'heur depart est"<<heur_depart<<endl;
                        }
        virtual ~escale();

     private:
        int id;
        int heur_arrive;
        int heur_depart ;
        ville v ;



};
class vol
{
    protected:
        int id ;
        date dateDepart;
        int heur_depart ;
        double prix ;
        int nbplacereserve ;
        int duree_Vol ;
        int etat ;
    public:
        ville ville_depart;
        ville ville_arrive ;



    public:
        vol();
        void setheur(int);
        void setdate(date);
        void setnbplace(int);
        void afficher();
        virtual ~vol();
        int getid(){return id ;};
        date getdatedepart(){ return dateDepart ;};
        int getnbplace(){return nbplacereserve ;};
        int getprix(){ return prix ; };
        friend istream& operator>>(istream&,vol&);
        friend ostream& operator<<(ostream&,vol&);
        friend istream& operator>>(istream&,vol*); //lecture du ficher
        friend ostream& operator<<(ostream&,vol*);//ecriture dans le ficher


};

class vol_aller_retour :public vol
{
    public:
        vol_aller_retour();
        virtual ~vol_aller_retour();
        void affiche_v();
        void remplir_v();
         friend istream& operator>>(istream&,vol_aller_retour&);
        friend ostream& operator<<(ostream&,vol_aller_retour&);
       /* friend istream& operator>>(istream&,vol_aller_retour*);
        friend ostream& operator<<(ostream&,vol_aller_retour*);*/
    public:
        date date_retour ;
        int heur_retour ;

};
//------------------------------------------VOL SIMPLE ESCALE -------------------------------------------------------------------------
class vol_simple_escale:public vol
{
    public:
        vol_simple_escale();
        virtual ~vol_simple_escale();
        friend ostream& operator<<(ostream&,vol_simple_escale&);
        friend istream& operator>>(istream&,vol_simple_escale&);


    protected:
        escale e ;

    private:
};



/*class vol_aller_retour_escale:public vol_aller_retour
{
    public:
        vol_aller_retour_escale();
        virtual ~vol_aller_retour_escale();
        void affiche();
        void rempli();
        friend istream& operator>>(istream&,vol&);
        friend ostream& operator<<(ostream&,vol&);

    private:
        escale e ;

};*/
#endif // TOUTVOL_H
//-------------------------------------CLASS COMPANIE --------------------------------------------------------------------
