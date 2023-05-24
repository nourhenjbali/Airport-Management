#include "companie.h"
#include<bits/stdc++.h>
using namespace std;
#include<string>
#include"toutvol.h"
#include"avion.h"
companie::companie(string ch,int a )
{
    nom=ch;
    n=a;

}
companie::~companie(){
     for (int i=0;i<liste_vol.size();i++)
        delete (liste_vol[i]);
    liste_vol.clear();
    for (int i=0;i<l_aller_retour.size();i++)
        delete (l_aller_retour[i]);
    l_aller_retour.clear();
    for (int i=0;i<l_simple_escale.size();i++)
        delete (l_simple_escale[i]);
    l_simple_escale.clear();
    for (int i=0;i<l_avions.size();i++)
        delete (l_avions[i]);
    l_avions.clear();
}
//------------------------------------comapnie remplir --------------------------------------

void companie::remplir_vol(){
    int n ;
    cout<<"donner le nombres des vols souhaiter ajouter "<<endl;
    cin>>n ;
    for( int i=0; i<n ; i++){
        cout<<"--------------------------------- REMPLISSAGE VOL N°"<<i+1<<"-------------------------------"<<endl;
        vol* v=new vol();
        cin>>*v;
        liste_vol.push_back(v);
           }
}
void companie::remplir_al(){
    int n ;
    cout<<"donner le nombres des vols aller retour souhaiter ajouter "<<endl;
    cin>>n ;
    for( int i=0; i<n ; i++){
        cout<<"--------------------------------- REMPLISSAGE VOL N°"<<i+1<<"-------------------------------"<<endl;
        vol_aller_retour* v=new vol_aller_retour();
        cin>>*v;
        l_aller_retour.push_back(v);
           }
    }
void companie::afficher(){
    int n=liste_vol.size();
    for (int i=0; i<n ; i++){
        cout<<"--------------------------------------------------------AFFICHAGE DE VOL ALLER N°"<<i+1<<"----------------------------------------------------"<<endl;
        cout<<liste_vol[i]<<endl;
    }
    }
void companie ::afficher_r(){
    int n=l_aller_retour.size();
    for(int i=0; i<n ; i++){
        cout<<"--------------------------------------------------------AFFICHAGE DE VOL ALLER RETOUR N°"<<i+1<<"----------------------------------------------------"<<endl;
        cout<<*l_aller_retour[i]<<endl;
    }
    }
void companie::remplir_e(){
    int n ;
    cout<<"donner le nombres des vols aller simple avec escale souhaiter ajouter "<<endl;
    cin>>n ;
    for( int i=0; i<n ; i++){
        cout<<"---------------------------------- REMPLISSAGE VOL N°"<<i+1<<"-------------------------------"<<endl;
        vol_simple_escale* v=new vol_simple_escale();
        cin>>*v;
        l_simple_escale.push_back(v);
           }
    }
void companie::afficher_e(){
    int n=l_simple_escale.size();
    for (int i=0; i<n ; i++){
        cout<<"------------------------------------------------------AFFIHAGE DE VOL N°----------------------------"<<i+1<<endl;
        cout<<*l_simple_escale[i]<<endl;
    }
    }
void companie ::supprimer_vol(int n){
        int id;
        if(n==1){
            cout<<"donner l'id de vol a supprimer "<<endl;
            cin>>id ;
            for(int i=0;i<liste_vol.size(); i++){
                if((liste_vol[i]->getid())==id)
                    liste_vol.erase(liste_vol.begin()+i);
           // else cout<<"cet vol n'existe pas "<<endl;
            }
        }
        if(n==2){
        cout<<"donner l'id de vol aller retour a supprimer "<<endl;
        cin>>id ;
            for(int i=0;i<liste_vol.size(); i++){
                if((l_aller_retour[i]->getid())==id)
                    l_aller_retour.erase(l_aller_retour.begin()+i);
        }}
        if (n==3){
        cout<<"donner l'id de vol aller retour a supprimer "<<endl;
        cin>>id ;
            for(int i=0;i<liste_vol.size(); i++){
                if((l_simple_escale[i]->getid())==id)
                    l_simple_escale.erase(l_simple_escale.begin()+i);
                }
        }
 }
void companie::modifier(int n){
        int id,rep, nb ,heur;
        date d;
        cout<<"donner l'id de vol a modifier "<<endl;
        cin>>id ;

        if(n==1){//----------------------modification vol simple-------------
             if (recherche_vol(id)==1)
             {
                    cout<<"1-modifier date" <<endl;
                    cout<<"2-modifier heur de depart " <<endl;
                    cout<<"3-modifier nombre de place " <<endl;
                    cin>>rep ;
                    if (rep==1)
                           {
                                               for(int i=0;i<liste_vol.size(); i++)
                                                        if((liste_vol[i]->getid())==id)
                                                               {    cout<<"donner la nouvelle date "<<endl;
                                                                    cin>>d;
                                                                liste_vol[i]->setdate(d);
                                                               }


                            }
                           // modification de la date  "<<endl;
                      if (rep==2)
                           {
                               for(int i=0;i<liste_vol.size(); i++){
                                    if (liste_vol[i]->getid()==id)
                                    {   cout<<"donner la nouvelle heur"<<endl;
                                        cin>>heur;
                                        liste_vol[i]->setheur(heur);
                                    }
                           // else cout<<"cet vol n'existe pas "<<endl;
                            }}
                    if (rep==3)
                           {    cout<<"donner le nombre de place "<<endl;
                                cin>>nb;
                               for(int i=0;i<liste_vol.size(); i++){
                                   if (liste_vol[i]->getid()==id)
                                   {   cout<<"donner le nombre de place "<<endl;
                                        cin>>nb;
                                        liste_vol[i]->setnbplace(nb);
                                    }
                           // else cout<<"cet vol n'existe pas "<<endl;
                            }}
          }
        else  cout<<" ------------------cet id n'existe pas------------------- " <<endl;
        }

        if(n==2){//----------------modification vol aller retour -------------------------------
            if (recherche_al(id)==1){
            cout<<"1-modifier date" <<endl;
            cout<<"2-modifier heur de depart " <<endl;
            cout<<"3-modifier nombre de place " <<endl;
            cin>>rep ;
            if (rep==1)
                   {
                       for(int i=0;i<l_aller_retour.size(); i++){
                        if((l_aller_retour[i]->getid())==id)
                           {
                                cin>>d;
                            l_aller_retour[i]->setdate(d);
                           }
                            }}
                   // modification de la date  "<<endl;
              if (rep==2)
                   {
                       for(int i=0;i<l_aller_retour.size(); i++){
                            if (l_aller_retour[i]->getid()==id)
                            {
                                cin>>heur;
                                l_aller_retour[i]->setheur(heur);
                            }
                   // else cout<<"cet vol n'existe pas "<<endl;
                    }}
            if (rep==3)
                   {    cout<<"donner le nombre de place "<<endl;
                        cin>>nb;
                       for(int i=0;i<l_aller_retour.size(); i++){
                           if (l_aller_retour[i]->getid()==id)
                           {    cin>>nb;
                                l_aller_retour[i]->setnbplace(nb);
                            }
                   // else cout<<"cet vol n'existe pas "<<endl;
                    }}
                else  cout<<" ------------------cet id n'existe pas------------------- " <<endl;

        }
        if (n==3){//modification de vol aller avec escale
             if (recherche_e(id)==1){
            cout<<"1-modifier date" <<endl;
            cout<<"2-modifier heur de depart " <<endl;
            cout<<"3-modifier nombre de place " <<endl;
            cin>>rep ;
            if (rep==1)
                   {
                       for(int i=0;i<l_simple_escale.size(); i++){
                        if((l_simple_escale[i]->getid())==id)
                           {
                                cin>>d;
                            l_simple_escale[i]->setdate(d);
                           }
                            }}
                   // modification de la date  "<<endl;
              if (rep==2)
                   {
                       for(int i=0;i<l_simple_escale.size(); i++){
                            if (l_simple_escale[i]->getid()==id)
                            {
                                cin>>heur;
                                l_simple_escale[i]->setheur(heur);
                            }
                   // else cout<<"cet vol n'existe pas "<<endl;
                    }}
            if (rep==3)
                   {    cout<<"donner le nombre de place "<<endl;
                        cin>>nb;
                       for(int i=0;i<l_simple_escale.size(); i++){
                           if (l_simple_escale[i]->getid()==id)
                           {    cin>>nb;
                                l_simple_escale[i]->setnbplace(nb);
                            }
                   // else cout<<"cet vol n'existe pas "<<endl;
                    }}
        }
        else  cout<<" ------------------cet id n'existe pas------------------- " <<endl;
}}
}
int companie :: recherche_vol(int x){
    for(int i=0; i<liste_vol.size();i++){
        if ((liste_vol[i]->getid())==x)
            return 1 ; //s'il existe
    }}
int companie :: recherche_al(int x){
    for(int i=0; i<l_aller_retour.size();i++){
        if ((l_aller_retour[i]->getid())==x)
            return 1 ; //s'il existe
    }}
int companie :: recherche_e(int x){
    for(int i=0; i<l_simple_escale.size();i++){
        if ((l_simple_escale[i]->getid())==x)
            return 1 ; //s'il existe
    }}
 void companie ::calcul_gainjour(date d){
    int s=0;
    int s1=0;
    int s2=0;
    for(int i=0; i<liste_vol.size(); i++){
        if ((liste_vol[i]->getdatedepart())==d)
            s+=((liste_vol[i]->getprix())*(liste_vol[i]->getnbplace()));
    }
     for(int i=0; i<l_aller_retour.size(); i++){
        if ((l_aller_retour[i]->getdatedepart())==d)
            s1+=((l_aller_retour[i]->getprix())*(l_aller_retour[i]->getnbplace()));
    }
    for(int i=0; i<l_simple_escale.size(); i++){
        if ((l_simple_escale[i]->getdatedepart()==d))
            s2+=((l_simple_escale[i]->getprix())*(l_simple_escale[i]->getnbplace()));
    }
    cout<<" le gain totale par la journée de "<<setw(10);
    d.affiche();
    cout<<" est: "<<s1+s2+s<<endl ;
    }

void companie::remplir_map1(){
    fstream f;
    f.open("pilote.txt",ios::in|ios::out|ios::trunc);
    if(!f.is_open()) exit(-1);
    int n ;
    string ch1;
    cout<<"donner le nombre de personnel"<<endl;
    cin>>n;
    for(int i=1; i<n+1 ;i++){
        cout<<"donner le mot de passe de id N°"<<i<<endl;
        cin>>ch1;
        map1[i]=ch1;
    }
    for(int i=0; i<n; i++){
        f<<map1[i+1]<<endl;
    }

}
void companie::remplir_map2(){
    fstream f;
    f.open("hotesse.txt",ios::in|ios::out|ios::trunc);
    if(!f.is_open()) exit(-1);
    int n ;
    string ch1;
    cout<<"donner le nombre de personnel"<<endl;
    cin>>n;
    for(int i=1; i<n+1 ;i++){
        cout<<"donner le mot de passe de id N°"<<i<<endl;
        cin>>ch1;
        map2[i]=ch1;
    }
    for(int i=0; i<n; i++){
        f<<map2[i+1]<<endl;
    }

}
void companie::remplir_map3(){
    fstream f;
    f.open("steward.txt",ios::in|ios::out|ios::trunc);
    if(!f.is_open()) exit(-1);
    int n ;
    string ch1;
    cout<<"donner le nombre de personnel"<<endl;
    cin>>n;
    for(int i=1; i<n+1 ;i++){
        cout<<"donner le mot de passe de id N°"<<i<<endl;
        cin>>ch1;
        map3[i]=ch1;
    }
    for(int i=0; i<n; i++){
        f<<map3[i+1]<<endl;
    }

}
void companie :: remplir_avions(){
    int w ;
    cout<<"donner le nombre des avions a ajouter "<<endl;
    cin>>w;
    for(int i=0; i<w ; i++){
            cout<<"-------------------------------REMPLISSAGE d'avion N°-----------------------"<<i+1<<endl;
            avion* q=new avion();
            q->remplir_avion();
            l_avions.push_back(q);
        }

    }
void companie::affecter_personnel(int rep){
    int k,nb,ida;
    cout<<"donner l'id de personnel"<<endl;
    cin>>k;
    if (rep==1){
        cout<<"ajouter le nombre des avions "<<endl;
        cin>>nb;
        for(int i=0;i<nb; i++){
            cout<<"donner l'id de l'avions N° "<<i+1<<endl;
            cin>>ida;
            for(int j=0; j<l_avions.size();j++){
                if((l_avions[i]->getid())==ida) l_avions[i]->setid_pilote(k);
            }
        }
    }
    if (rep==2){
         cout<<"ajouter le nombre des avions "<<endl;
        cin>>nb;
        for(int i=0;i<nb; i++){
            cout<<"donner l'id de l'avions N° "<<i+1<<endl;
            cin>>ida;
            for(int j=0; j<l_avions.size();j++){
                if((l_avions[i]->getid())==ida) l_avions[i]->setid_hotesse(k);
            }
        }
    }
    if (rep==3){
         cout<<"ajouter le nombre des avions "<<endl;
        cin>>nb;
        for(int i=0;i<n; i++){
            cout<<"donner l'id de l'avions N° "<<i+1<<endl;
            cin>>ida;
            for(int j=0; j<l_avions.size();j++){
                if((l_avions[i]->getid())==ida) l_avions[i]->setid_steward(k);
            }
        }
    }


}


void companie ::fetch_vol(ville v1,ville v2,date d){
    int k=0;
    for(int i=0;i<liste_vol.size(); i++){
        if (((liste_vol[i]->getdatedepart())==d)&&(((liste_vol[i]->ville_depart.getnom())==v1.getnom()))&&(((liste_vol[i]->ville_arrive.getnom())==v2.getnom())))
           {
            cout<<"---------------------------------AFFICHAGE VOL-----------------------------------"<<endl;
            liste_vol[i]->afficher();
            k++;
           }}
if (k==0) cout<<"-------------IL YA PAS DE VOL ALLER SIMPLE AVEC CETTE DATE "<<endl;

else cout<<"------------------------FIN AFFICHAGE VOL SIMPLE TUNISAIR-------------------------"<<endl;

    }
void companie ::fetch_vole(ville v1,ville v2,date d){
    int k=0;
    for(int i=0;i<l_simple_escale.size(); i++){
        if (((l_simple_escale[i]->getdatedepart())==d)&&(((l_simple_escale[i]->ville_depart.getnom())==v1.getnom()))&&(((l_simple_escale[i]->ville_arrive.getnom())==v2.getnom())))
           {cout<<"---------------------------------AFFICHAGE VOL-----------------------------------"<<endl;
            l_aller_retour[i]->afficher();
            k++; }
    }
if (k==0) cout<<"-------------IL YA PAS DE VOL SIMPLE ESCALE AVEC CETTE DATE"<<endl;

else cout<<"------------------------FIN AFFICHAGE VOL ALLER SIMPLE ESCALE TUNISAIR-------------------------"<<endl;

    }
void companie ::fetch_volal(ville v1,ville v2,date d,date d1){
    int k=0;
    for(int i=0;i<l_aller_retour.size(); i++){
        if ((((l_aller_retour[i]->getdatedepart())==d)&&(l_aller_retour[i]->date_retour)==d1)&&(((l_aller_retour[i]->ville_depart.getnom())==v1.getnom()))&&(((l_aller_retour[i]->ville_arrive.getnom())==v2.getnom())))
           {cout<<"---------------------------------AFFICHAGE VOL-----------------------------------"<<endl;
            l_aller_retour[i]->afficher();
            k++; }
    }
if (k==0) cout<<"-------------IL YA PAS DE VOL ALLER RETOUR AVEC CETTE DATE "<<endl;
else cout<<"------------------------FIN AFFICHAGE VOL ALLER RETOUR TUNISAIR-------------------------"<<endl;
    }
int companie :: getnb( int x){
    for(int i=0;i<liste_vol.size() ; i++){
       if ((liste_vol[i]->getid())==x) return liste_vol[i]->getnbplace() ;
    }
}

void companie::ajouter_vol(){
    int n=liste_vol.size();
    n+=1;
    vol *q=new vol();
    cin>>q;

    liste_vol.push_back(q);

    }
/*void companie ::afficher(){
cout<<"le nom de la companie est :"<<nom<<endl;
cout<<"les vols sont :"<<endl;
for(int i=0; i<n ; i++){
    cout<<"-------------------------------------le vol numero �"<<i<<"----------------------------------------------------"<<endl;
    liste_vol[i]->afficher();}
}*/

/*void companie :: remplir_liste(int n ){
    vol *q;

    for(int j=0; j<n; j++)
    {
    q=new vol;
    liste_vol.push_back(q);
    }
    }
void companie::creer(fstream&f){
    f.open("tunisairvolsimple.txt",ios::in|ios::out|ios::trunc);
    if(!f.is_open())exit(-1);
    cout<<"normalemt creer"<<endl;
    }


void companie::ajouter_vol_e(){
    int n=l_simple_escale.size();
    n+=1;
     vol_simple_escale *q=new vol_simple_escale();
//    q->remplir();
    cin>>q;
    l_simple_escale.push_back(q);

    }
void companie::ajouter_vol_r(){
    n=n+1;
     vol_aller_retour *q=new vol_aller_retour();
//    q->remplir();
    l_aller_retour.push_back(q);

    }
//void companie::ajouter_vol_re(){
  //  n=n+1;
  //  vol_aller_retour_escale *q=new vol_aller_retour_escale();
//    q->remplir();
   // lr_escale.push_back(q);

   // }

/*void companie ::afficher_e(){
cout<<"le nom de la companie est :"<<nom<<endl;
cout<<"les vols sont :"<<endl;
for(int i=0; i<n ; i++){
    cout<<"-------------------------------------le vol numero �"<<i<<"----------------------------------------------------"<<endl;
    liste_vol[i]->afficher();}
}*/
void companie ::supprimer_vol_e(int ind){
 l_simple_escale.erase(l_simple_escale.begin()+ind);
 }
 void companie ::supprimer_vol_r(int ind){
 l_aller_retour.erase(l_aller_retour.begin()+ind);
 }
/* void companie ::supprimer_vol_re(int ind){
 lr_escale.erase(lr_escale.begin()+ind);
 }
companie::~companie()
{
    //dtor
}*/
istream& operator>>(istream& in,companie* a)
{
    int choix;
    in.seekg(0);
    while(1)
    {
        in>>choix;
        if (in.eof())break;
        if (choix==1)
        {
            vol* q=new vol();
            in>>*q;
            a->liste_vol.push_back(q);
        }
        else if (choix==2)
        {
             vol_aller_retour* q=new vol_aller_retour();
            in>>*q;
            a->l_aller_retour.push_back(q);
        }
    }
    return in;
}
istream& operator>>(istream& in,companie& a)
{
    int choix; char rep;
    do
    {   int choix ; char rep;
        cout<<"\n taper 1 : vol simple  , 2 : vol aller retour ,3 : vol simple avec escale "<<endl;
        in>>choix;
        if (choix==1)
        {
            vol* q=new vol();
            in>>*q;
            a.liste_vol.push_back(q);
        }
        else if (choix==2)
        {
            vol_aller_retour* q=new vol_aller_retour();
            in>>*q;
            a.l_aller_retour.push_back(q);
        }
        else if (choix==3){
            vol_simple_escale* q=new vol_simple_escale();
            in>>*q;
            a.l_simple_escale.push_back(q);
        }
        cout<<"\n ajouter?"<<endl;
        in>>rep;
    }while (rep!='n');
    in>>rep;
    return in;
}


ostream& operator<<(ostream& out , companie&a){

    for(int i=0;i<a.liste_vol.size();i++)
    {
        if (typeid(*a.liste_vol[i])==typeid(vol))
            out<<"1-"<<static_cast<vol&>(*a.liste_vol[i])<<endl;}
    for(int j=0;j<a.l_aller_retour.size();j++)
    {
        if (typeid(*a.l_aller_retour[j])==typeid(vol_aller_retour))
            out<<"1-"<<static_cast<vol_aller_retour&>(*a.l_aller_retour[j])<<endl;}
    for(int k=0;k<a.l_simple_escale.size();k++)
    {
            out<<"1-"<<static_cast<vol_simple_escale&>(*a.l_simple_escale[k])<<endl;}
    return out ;
}

ostream& operator<<(ostream& sortie , companie* w){
    for(int i=0; i<w->liste_vol.size();i++)
        sortie<<*(w->liste_vol[i]);
    return sortie ;
}
/*void companie::enregistrer(){
    fstream f;
    f.open("tunisairvolsimple.txt",ios::in|ios::out|ios::trunc);
    if(!f.is_open())exit(-1);
    f<<this;
    f.close();}

void companie::afficherficher(fstream& f){
    companie a;
    f.seekg(0);
    while(1){ f>>&a;
            if (f.eof())break;
            cout<<a<<endl;
        }
}
void companie :: remplir_ficher_vol(fstream& f){

    for(int i=0; i<liste_vol.size();i++){
        f<<*liste_vol[i]<<endl;
    }

}*/
