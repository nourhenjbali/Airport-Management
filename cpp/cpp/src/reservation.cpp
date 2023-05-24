#include "reservation.h"
#include<bits/stdc++.h>
using namespace std;

reservation::reservation()
{
    ID=0;
    nb_place=0;
    date_de_reserv=0;

}
void reservation::afficher_res()
{
    cout<<"lidentifiant est:"<<ID<<endl;
    date_de_reserv.affiche();
    cout<<"le nombre de place est: "<<nb_place<<endl;
}
ostream& operator<<(ostream& out,reservation& R)
{
    out<<"ID= "<<R.ID<<"nb de place= "<<R.nb_place<<"date de reservation: "<<R.date_de_reserv<<endl;
    return out;
}
istream& operator>>(istream& in,reservation& R)
{cout<<"entrer l ID de vol="<<endl;
    in>>R.ID;
  cout<<"entrer le nb de place a reserver="<<endl;
    in>>R.nb_place;
cout<<"entrer la date de reservation="<<endl;
    in>>R.date_de_reserv;
    return in;
}
ostream& operator<<(ostream& out,reservation* R)
{
    out<<"ID= "<<R->ID<<"nb de place= "<<R->nb_place<<"date de reservation: "<<R->date_de_reserv<<endl;
    return out;
}
istream& operator>>(istream& in,reservation* R)
{
    in>>R->ID;
    in>>R->nb_place;
    in>>R->date_de_reserv;
    return in;
}
reservation::~reservation()
{
    //dtor
}
date2::date2(int j,int m, int a)
{
    jour=j;
    mois=m;
    annee=a;
}
void date2::affiche()
{
    cout<<jour<<"/"<<mois<<"/"<<annee<<endl;
}
date2::~date2()
{
    //dtor
}
void date2::setdate(int j,int m,int a)
{
    jour=j;
    mois=m;
    annee=a;
}
ostream& operator<<(ostream& out,date2& d)
{
    out<<d.jour<<"/"<<d.mois<<"/"<<d.annee<<endl;
    return out;
}
ostream& operator<<(ostream& out,date2* d)
{
    out<<d->jour<<"/"<<d->mois<<"/"<<d->annee<<endl;
    return out;
}
istream& operator>>(istream& in,date2& d)
{
    in>>d.jour>>d.mois>>d.annee;
    return in ;
}
istream& operator>>(istream& in,date2* d)
{
    in>>d->jour;
    in>>d->mois;
    in>>d->annee;
}
