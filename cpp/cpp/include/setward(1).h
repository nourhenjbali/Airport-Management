#ifndef SETWARD_H
#define SETWARD_H
#include<bits/stdc++.h>
using namespace std;
#include<string>
#include"companie.h"
class setward
{
      public:
        setward(int);
        virtual ~setward();
        void affiche();
//        void remplir_setward(companie);

    public:
    int id ;
    vector<int>liste_idavions;
    private:
};

#endif // SETWARD_H
