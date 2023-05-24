#include "avion.h"
#include <iostream>
#include"toutvol.h"
#include<bits/stdc++.h>
using namespace std;
#include<string>
#include<vector>>
avion::avion()
{
    idavion=0;
    etat=0;
    id_hotesse=0;
    id_pilote=0;
    id_steward=0;
}

avion::~avion()
{

    l1.clear();
    l2.clear();
    l3.clear();
}
 void avion::remplir_lvol_avion(){
    int x=1, y;
    int id1;
    while (x==1){
    cout<<"donner le type de vol "<<endl;
    cout<<"1-vol aller simple , 2-vol aller retour simple , 3-vol aller escale "<<endl;
    cin>>y;
    cout<<"donner l'id du vol"<<endl;
    cin>>id1;
    if(y==1){l1.push_back(id1);};
    if(y==2){l2.push_back(id1);};
    if(y==3){l3.push_back(id1);};
    cout<<"vous voulez ajouter une autre vol ?"<<endl;
    cout<<"1-oui"<<endl;
    cout<<"0-non"<<endl;
    cin>>x;
    if(x==0) break;
    }
    }
void avion::remplir_avion()
{
    cout<<"donner l'id de l'avion "<<endl;
    cin>>idavion;
    cout<<"donner l'etat de l'avion 0-etat normale , 1-etat en panne "<<endl;
    cin>>etat;
    remplir_lvol_avion();
}
