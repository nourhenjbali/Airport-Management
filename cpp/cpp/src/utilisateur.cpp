#include "utilisateur.h"
#include"reservation.h"
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<fstream>
#pragma once
using namespace std;
utilisateur::utilisateur()
{
    ID=0;
    email="";
    prenom="";
    telephone="";
    mdp="";
    nom="";
    login="";
    date_de_naiss=0;

}
/*void utilisateur :: remplir_res(){
    int n;
    cout<<"donner le nombre des id vols que vous sauhaiter reserver "<<endl;
    cin>>n;
    for(int i=0; i<n ; i++){
        reservation*r=new reservation();
        do{
        cin>>*r; }
        tab.push_back(r);
    }

    }*/

istream& operator>>(istream& in,utilisateur& u)
{  cout<<"ID ="<<endl;
   in>>u.ID;
   cout<<"email ="<<endl;
   in>>u.email;
   cout<<" nom= "<<endl;
   in>>u.nom;
   cout<<" prenom ="<<endl;
   in>>u.prenom;
   cout<<" mdp= "<<endl;
   in>>u.mdp;
   cout<<" login= "<<endl;
   in>>u.login;
     cout<<"donner votre date de naissance"<<endl;
    in>>u.date_de_naiss;
    reservation*r=new reservation();
    in>>*r;
    u.tab.push_back(r);
    return in;
}
void utilisateur::supp_reser()
{   int id;
    cout<<"donner lidentifiant de reservation a suppruimer"<<endl;
    cin>>id;
    for(int i=0;i<this->tab.size();i++)
    {
        if(this->tab[i]->ID==id)
        {
           this->tab.erase(tab.begin()+i);
        }
    }

}
void utilisateur::modifier_res()
{  int rep,a,id,j,m,aa;
   cout<<"donner lidentifiant de la reservation "<<endl;
   cin>>id;
 do{
    cout<<"quest ce que vous pouvez modifier? : 1/le nb de place 2/la date de reservation"<<endl;
    cin>>rep;
    for(int i=0;i<this->tab.size();i++)
    {
    if(this->tab[i]->ID==id)
   {
    if(rep==1)
        {
            cout<<"donner le nouvelle nombre de place"<<endl;
            cin>>this->tab[i]->nb_place;
        }


    if(rep==2)
    {
        cout<<"donner la novelle date de reservation jours , date , annee"<<endl;
        cin>>j>>m>>aa;
        this->tab[i]->date_de_reserv.setdate(j,m,aa);

    }
   }
    }
    cout<<"vous pouvez encore modifier?: 1/si oui 2/ si non"<<endl;
    cin>>a;
}while(a==1);
cout<<"------------------MODIFICATION TERMINE----------------------"<<endl;
 }
 ostream& operator<<(ostream& out,utilisateur* U)
 {
     for (int i=0;i<U->tab.size();i++)
     {
         out<<*U->tab[i]<<endl;
     }
     return out;
 }
 istream& operator>>(istream& in,utilisateur* k)
 {
     in.seekg(0);
     while(1)
     { if(in.eof()==true) break;
     reservation* r=new reservation();
     in>>*r;
     k->tab.push_back(r);
     }
     return in;
 }
void utilisateur::creer_fichier(fstream& f)
 {
     f.open("fichierreservation.txt",ios::in |ios::out |ios::trunc);
     if(!f.is_open())exit(-1);
 }

utilisateur::~utilisateur()
{
     for(int i=0;i<this->tab.size();i++)
    {

            this->tab.erase(tab.begin() +i);

    }
    this->tab.clear();
}
ostream& operator<<(ostream& out,utilisateur& u)
{
   // out<<" id: "<<u.ID<<" email: "<<u.email<<" prenom: "<<u.prenom<<" telephone: "<<u.telephone<<" mdp: "<<u.mdp<<" nom: "<<u.nom<<"  login : "<<u.login<<"  date: "<<u.date_de_naiss<<endl;
    for (int i=0;i<u.tab.size();i++)
    {
    out<<*u.tab[i]<<endl;

    }
    return out;
}

void utilisateur::afficher_fichier(fstream& f)
{
    char ch[100];
    f.seekg(0);
    while(1)
    {  f.getline(ch,100);
        if(f.eof()) break;

    cout<<ch<<endl;
    }
    f.close();
}
/*void utlisateur :: remplir_ficher(fstream& f){
    utilisateur u ;
    f<<u;
}*/

utilisateur::utilisateur(const utilisateur& u)
{
     ID=u.ID;
    email=u.email;
    prenom=u.prenom;
    telephone=u.telephone;
    mdp=u.mdp;
    nom=u.nom;
    login=u.login;
    date_de_naiss=u.date_de_naiss;
    reservation *r;
    for(int i=0;i<u.tab.size();i++)
    {
        r=new reservation(*u.tab[i]);
        tab.push_back(r);
    }
}

