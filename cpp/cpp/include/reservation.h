#ifndef RESERVATION_H
#define RESERVATION_H
#include<bits/stdc++.h>
#pragma once
using namespace std;
class date2
{public:
    int jour;
    int mois;
    int annee;
public:
        date2(int=1,int=1,int=1);
        void setdate(int,int,int);
        friend ostream& operator<<(ostream&,date2&);
        friend istream& operator>>(istream&,date2&);
         friend istream& operator>>(istream&,date2*);
        virtual ~date2();
        void affiche();


};
class reservation{
public :
    int ID;
    date2 date_de_reserv;
    int nb_place;
public:
    reservation();
    int getnbplace(){return nb_place ; };
    friend ostream& operator<<(ostream&,reservation&);
    friend istream& operator>>(istream&,reservation&);
    friend ostream& operator<<(ostream&,reservation*);
    friend istream& operator>>(istream&,reservation*);
    void afficher_res();
    ~reservation(void);
    };

#endif // RESERVATION_H
