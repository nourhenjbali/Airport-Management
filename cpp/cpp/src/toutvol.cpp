#include "toutvol.h"
#include<bits/stdc++.h>
using namespace std;
date::date( int a , int b , int c )
{
    jour=a ;
    mois= b ;
    annee=c;
}

date::~date()
{
    //dtor
}
void date::affiche()
{
    cout<<annee<<"/" ;
    cout<<mois<<"/" ;
    cout<<jour<<endl ;
}
void date :: setdate()
{
    cout<<"donner le jour "<<endl ;
    cin>>jour ;
    cout<<"donner le mois "<<endl ;
    cin>>mois ;
    cout<<"donner l'annee "<<endl ;
    cin>>annee ;


}
bool date ::operator==(const date& d){
    if ((jour==d.jour)&&(mois==d.mois)&&(annee==d.annee))
        return true;
    else return false ;
    }
istream& operator>>(istream& in , date& d){
    in>>d.jour;
    in>>d.mois;
    in>>d.annee;
    return in ;

}
ostream& operator<<(ostream& out , date& d){
    out<<d.annee<<"/"<<d.mois<<"/"<<d.jour;
    return out;
}
//------------------------------------ CLASSE Ville --------------------------------------------

ville::ville()
{
    nomv="";
}
void ville :: affiche(){
    cout<<"le nom de la ville est "<<nomv<<endl;
}
void ville :: remplir(){
    cout<<"donner le nom de ville "<<endl;
    cin>>nomv;
    }
istream& operator>>(istream& in , ville& v){
    in>>v.nomv;
    return in ;}
ostream& operator<<(ostream& out , ville& v){
    //cout<<"le nom de la ville est :"<<setw(10);
    out<<v.nomv;
    return out;
}

ville::~ville()
{
    //dtor
}
//------------------------------------ CLASSE escale --------------------------------------------

escale::escale()
{
    id=0;
    heur_arrive=0;
    heur_depart=0;

}
void escale :: remplir(){
    cout<<"donner l'heur d'arrive a l'aeroport "<<endl;
    cin>>heur_arrive;
    cout<<"donner l'heur de depart a l'aeroport "<<endl;
    cin>>heur_depart;
    }
istream& operator>>(istream&in , escale& e){
    cout<<"donner la ville de l'escale :"<<endl;
    in>>e.v;
    cout<<"donner l'heur d'arrive de l'escale "<<endl;
    in>>e.heur_arrive;
    cout<<"donner l'heur de depart de l'aeroport "<<endl;
    in>>e.heur_depart;
    return in ;

}
ostream& operator<<(ostream& out,escale& e){
     cout<<" la ville de l'escale est :"<<setw(10);
    out<<e.v<<endl;
    cout<<"l'heur d'arrive de l'escale est: "<<setw(10);
    out<<e.heur_arrive<<endl;
    cout<<"l'heur de depart de l'aeroport est:"<<setw(10);
    out<<e.heur_depart<<endl;
    return out; }
escale::~escale()
{

}
//------------------------------------ CLASSE VOL  --------------------------------------------

vol::vol(){
    id=0;
    dateDepart=0;
    heur_depart=0;
    prix=0;
    nbplacereserve=0;


}
void vol::setnbplace(int n){
    nbplacereserve=n;
    }
void vol::setheur(int h){
    heur_depart=h;
    }
void vol::setdate(date d){
    dateDepart=d ;
}
void vol::afficher()
{
    cout<<"l'id de vol est "<<id <<endl ;
    cout<< "la date de depart est : "<<endl;
    dateDepart.affiche();
    cout<< "l' heur de depart est : "<<heur_depart<<"H"<<endl;
    cout<<"le prix est " <<prix<<endl;
    cout<< "le nombre dde place disponible est "<<nbplacereserve<<endl ;
    ville_depart.affiche();
    ville_arrive.affiche();


}
vol::~vol()
{
    //dtor
}
istream& operator>>(istream& in ,vol& v) {
    cout<<"donner l'id de vol  "<<endl ;
    in>>v.id ;
    cout<<"donner le ville de depart "<<endl;
    in>>v.ville_depart;
    cout<<"donner le ville d'arrive "<<endl;
    in>>v.ville_arrive;
    cout << " donner la date de depart : "<<endl;
    in>>v.dateDepart;
    cout << " donner l' heur de depart  : "<<endl;
    in>>v.heur_depart;
    cout<<" donner le prix  " <<endl;
    in>>v.prix;
    cout<< "donner le nombre de place disponible "<<endl ;
    in>>v.nbplacereserve ;

    return in ;
}



ostream& operator<<(ostream& out ,vol& v) {
    cout<<"ide de lavion est :"<<setw(10);
    out<<v.id<<setw(7);
    out<<setw(7)<<v.ville_arrive<<setw(7)<<v.ville_depart<<endl;
    cout<<"la date de depart est:"<<setw(10);
    out<<v.dateDepart<<endl;
    cout<<"l'heur de depart est :"<<setw(10);
    out<<v.heur_depart<<endl;
    cout<<"le prix est "<<setw(7);
    out<<v.prix<<endl;
    cout<<"le nombre de places disponible est "<<setw(10);
    out<<v.nbplacereserve<<endl;

    return out ;}

ostream& operator<<(ostream& out ,vol* v){
    cout<<"ide de lavion est :"<<setw(7);
    out<<v->id<<endl;
     cout<<"la ville d'arrive est :"<<setw(10);
    out<<v->ville_arrive<<endl;
    cout<<"la ville de depart est :"<<setw(7);
    out<<v->ville_depart<<endl;
    cout<<"la date de depart est:"<<setw(7);
    out<<v->dateDepart<<endl;
    cout<<"l'heur de depart est :"<<setw(7);
    out<<v->heur_depart<<endl;
    cout<<"le prix est "<<setw(7);
    out<<v->prix<<endl;
    cout<<"le nombre de places disponible est : "<<setw(7);
    out<<v->nbplacereserve<<endl;
    return out ;
}
istream& operator>>(istream& in ,vol* v) {
    cout<<"ide de lavion est :"<<setw(10);
    in>>v->id ;
    cout<<"donner la ville de depart "<<setw(7);
    in>>v->ville_depart;
    cout<<"donner la ville d'arrive "<<setw(7);
    in>>v->ville_arrive;
    cout<<"la date de depart est:"<<setw(10);
    in>>v->dateDepart;
    cout<<"l'heur de depart est :"<<setw(10);
    in>>v->heur_depart;
    cout<<"le prix est "<<setw(7);
    in>>v->prix;
    cout<<"le nombre de places disponible est "<<setw(10);
    in>>v->nbplacereserve ;

    return in ;
}
//------------------------------------ CLASSE VOL ALLER RETOUR --------------------------------------------
vol_aller_retour::vol_aller_retour():vol()
{
    date_retour=0;
    heur_depart=0;
}

vol_aller_retour::~vol_aller_retour()
{
    //dtor
}
void vol_aller_retour::affiche_v(){
    afficher();
    cout<<"la date de vol de retour est "<<endl;
    date_retour.affiche();
    cout<<"A l'heur : "<<heur_retour<<endl;
}
void vol_aller_retour::remplir_v(){
    date_retour.setdate();
    cout<<"donner l'heur de retour "<<endl;
    cin>>heur_retour;
}
istream& operator>>(istream& in ,vol_aller_retour& v) {
    vol* vl=&v;//avant elle a ete avec *vl
    in>>vl;
    cout<<"donner la date de retour "<<endl;
    in>>v.date_retour;
    cout<<"donner l'heur de dapart"<<endl;
    in>>v.heur_retour;
    return in ;
}


ostream& operator<<(ostream& out ,vol_aller_retour& v) {//surchage de operator de vol_aller_retour
    vol*vl=&v;
    out<<vl;
    cout<<"l'heur de retour est :"<<setw(10);
    out<<v.heur_retour<<endl ;
    cout<<"la date de retour est :"<<setw(10);
    out<<v.date_retour;
     return out ;}
/*istream& operator>>(istream& in , vol_aller_retour* v){
    vol*vl=&v;
    in>>v;
    in>>v->date_retour;
    in>>v->heur_retour;
    return in ;
}
ostream& operator<<(ostream& out ,vol_aller_retour* v){
    vol*vl=*v;
    out<<v;
    out<<v->date_retour<<setw(7);
    out<<v->heur_retour<<endl;
    return out ;
}*/
//----------------------------------------CLASS VOL SIMPLE ESCALE-------------------------------------------------------------------
vol_simple_escale::vol_simple_escale()
{
}
istream& operator>>(istream& in ,vol_simple_escale &v){
    vol* vl=&v;
    in>>vl;
    cout<<"donner les informatios de l'escale "<<endl;
    in>>v.e;
    return in ;

}
ostream& operator<<(ostream& out ,vol_simple_escale& v){
   vol*vl=&v;
    out<<vl;
    cout<<"les information de l'escale "<<endl;
    out<<v.e;
    return out;
}
vol_simple_escale::~vol_simple_escale()
{

}

//-----------------------------------------CLASSE VOL ALLER RETOUR ESCALLE--------------------------------

/*vol_simple_escale::~vol_simple_escale()
{
    //dtor
}
vol_aller_retour_escale::vol_aller_retour_escale()
{

}

vol_aller_retour_escale::~vol_aller_retour_escale()
{
    //dtor
}
void vol_aller_retour_escale::affiche(){
 affiche_v();
 e.affiche();
 }
void vol_aller_retour_escale::rempli(){
remplir_v();
e.remplir();
}
istream& operator>>(istream& in ,vol_aller_retour& v) {
    vol* vl=&v;
    in>>vl;
    cout<<"donner la date de retour "<<endl;
    in>>v.date_retour;
    cout<<"donner l'heur de dapart"<<endl;
    in>>v.heur_retour;
    return in ;
}


ostream& operator<<(ostream& out ,vol_aller_retour& v) {
    vol_aller_retour*vl=&v;
    out<<vl;
    cout<<"l'heur de retour est "<<endl;
    out<<v.heur_retour<<endl ;
    cout<<"la date de retour est :"<<endl;
    out<<v.date_retour;
     return out ;
     }
*/
//---------------------------------------------CLASSE COMPANIE -----------------------------------------------------------------------
