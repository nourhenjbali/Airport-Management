#include <iostream>
#include"toutvol.h"
#include<bits/stdc++.h>
using namespace std;
#include<string>
#include"companie.h"
#include"pilote.h"
#include"hotesse.h"
#include"setward.h"
#include"reservation.h"
#include"utilisateur.h"

void EnTete(){
    system("cls");
        system("color 17");
        cout<<"\xc9";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcb\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcb\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcb\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcb\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
        cout<<"\xbb";
        cout<<"\n\xba 16:00    \xba  OUVERT          \xba  AEROPORT NOU    \xba TOUT LES JOURS  \xba  Tunis   \xba\n";
        cout<<"\xc8";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xca\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xca\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xca\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xca\xcd";
        cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
        cout<<"\xbc";
        cout<<"\n\n";}
string lecture_f1(int n){
    fstream f;
   // char ch[101];
    string ch1 , ch;
    int i=1;
    f.open("pilote.txt");
    if(!f.is_open()) exit(-1);
    while(1){
            f>>ch;
            if (f.eof())break;
            if (i==n) {

                    ch1=ch;
                    break;

            }
            else i++;

    }

    f.close();
    return ch1;
    }
string lecture_f2(int n){
    fstream f;
   // string ch;
    string ch1 , ch;
    int i=1;
    f.open("hotesse.txt");
    if(!f.is_open()) exit(-1);
    while(1){
            f>>ch;
            if (f.eof())break;
            if (i==n) {

                    ch1=ch;
                    break;

            }
            else i++;
    }

    f.close();
    return ch1 ;
    }
string lecture_f3(int n){
    fstream f;
  //  string ch;
    string ch1 , ch;
    int i=1;
    f.open("steward.txt");
    if(!f.is_open()) exit(-1);
    while(1){
           f>>ch;
            if (f.eof())break;
            if (i==n) {

                    ch1=ch;
                    break;

            }
            else i++;
    }

    f.close();
    return ch1 ;
    }
void remplir_pilote(companie c, pilote p){
    for(int i=0; i<c.l_avions.size(); i++){
        if ((c.l_avions[i]->getid_pilote())==p.id) {p.liste_idavions.push_back(c.l_avions[i]->getid());} ;
    }
}
void remplir_hotesse(companie c, hotesse p){
    for(int i=0; i<c.l_avions.size(); i++){
        if ((c.l_avions[i]->getid_hotesse())==p.id) (p.liste_idavions.push_back(c.l_avions[i]->getid())) ;
    }
}
void remplir_setward(companie c, setward p){
    for(int i=0; i<c.l_avions.size(); i++){
        if ((c.l_avions[i]->getid_hotesse())==p.id) (p.liste_idavions.push_back(c.l_avions[i]->getid())) ;
    }
}

int main()
{
    int rep,res,re,rep12 ,repc,retour;
    vol v;
    string ch="";
    fstream f1,f2,f3;
    string lecture_f1(int);
    string lecture_f2(int);
    string lecture_f3(int);
    void remplir_pilote(companie , pilote);
    void remplir_hotesse(companie , hotesse );
    void remplir_setward(companie, setward );
    void EnTete();

    int id ,res1 ;
    string tunisair ;
    companie c ,c1 ;
    do{
    menu:
	EnTete();
    cout<<"------------------------------------------BIENVENU AU AEROPORT TUNIS CARTHAGE ----------------------------------------"<<endl;
    cout<<"1-espace companie "<<endl;
    cout<<"2-espace client"<<endl;
    cout<<"3-espace personnel"<<endl;
    cout<<"0-Quitter "<<endl;

    cin>>repc;
    EnTete();
    if (repc==1){
            menu1:
            cout<<"----------------------------------------------ESPACE COMPANIE-----------------------------------------------------------";
            cout<<"choisir la companie :"<<endl;
            cout<<"1-TUNISAIR"<<endl;
            cout<<"2-Nouvelair"<<endl;
            cin>>rep ;
            EnTete();
            string mdp1,mdp2,mdp3="tunisavai1";
            if (rep==1)
            {{
                    do
                    {
                    cout<<"entrez votre mot de passe"<<endl;
                    cin>>mdp1;
                    }while(mdp1!="tunisair1");
                    EnTete();
                    menu2:
                    cout<<"-----------------------------------------------MENU espace COMPANIE -------------------------------------------"<<endl;
                    cout<<"1-gerer des vols "<<endl;
                    cout<<"2-gerer des avions "<<endl;
                    cout<<"3-gerer des personnels "<<endl;
                    cout<<"4-Retour menu precedant "<<endl;
                    int rep12;
                    cin>>rep12;
                    EnTete();
                                        if(rep12==1)
                                        {
                                                menu3:

                                                cout<<"----------------------------------------ESPACE GESTION DES VOLS TUNISAIR--------------------------------------------"<<endl;
                                                cout<<"choisir"<<endl;
                                                cout<<"1-Ajouter un vol"<<endl;
                                                cout<<"2-Modifier un vol"<<endl;
                                                cout<<"3-Supprimer un vol"<<endl;
                                                cout<<"4-Consulter la liste des vols"<<endl;
                                                cout<<"5-Consulter le gain par jour"<<endl;
                                                cout<<"6-retour au menu precedant"<<endl;
                                                cin>>re;
                                                EnTete();
                                                if (re==1){
                                                    cout<<"--------------------------------Espace Ajout ------------------------------"<<endl;
                                                    cout<<"Vous souhaitez ajouter :"<<endl;
                                                    cout<<"1- un vol aller simple"<<endl;
                                                    cout<<"2- un vol aller avec escale"<<endl;
                                                    cout<<"3- un vol allez-retour "<<endl;
                                                    cout<<"4- Retour menu precedant "<<endl;
                                                    int re1;
                                                    cin>>re1;
                                                    EnTete();
                                                    if (re1==1){
                                                        c.remplir_vol();
                                                        cout<<"--------------------REMPLIISSAGE TERMINE--------------"<<endl;
                                                        goto menu3;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    if (re1==2){
                                                        c.remplir_e();
                                                        cout<<"--------------------------REMPLIISSAGE TERMINE----------------------"<<endl;
                                                        goto menu3;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    if (re1==3){
                                                        c.remplir_al();
                                                        cout<<"---------------------------REMPLIISSAGE TERMINE-----------------------"<<endl;
                                                        goto menu3;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    if (re1==4){
                                                        goto menu3;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    }


                                                if (re==2){
                                                    int n ;
                                                    cout<<"--------------------------------Espace MODIFICATION VOL ------------------------------"<<endl;
                                                    cout<<"1-modifier vol simple" <<endl;
                                                    cout<<"2-modifier vol aller " <<endl;
                                                    cout<<"3-modifier vol simple avec escale" <<endl;
                                                    cout<<"4-retour menu precedant "<<endl;
                                                    cin>>n;
                                                    if (n==1){
                                                        c.modifier(n);
                                                        cout<<"--------------------MODIFICATION TERMINE--------------"<<endl;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    if (n==2){
                                                        c.modifier(n);
                                                        cout<<"----------------------------MODIFICATION TERMINE---------------------"<<endl;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        EnTete();
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    if (n==3){
                                                        c.modifier(n);
                                                        cout<<"------------------------------MODIFICATION TERMINE----------------------"<<endl;
                                                        cout<<"1-retour menu precedant"<<endl;
                                                        cout<<"2-retour menu espace companie"<<endl;
                                                        cin>>retour;
                                                        EnTete();
                                                        if (retour==1)
                                                                goto menu3;
                                                        else if(retour==2)
                                                                goto menu2;
                                                        }
                                                    if (n==4){
                                                        goto menu3;
                                                        }

                                                }
                                                if (re==3){
                                                        int n;
                                                        cout<<"----------------------------------ESPACE suprimer ----------------------------"<<endl;
                                                        cout<<"1-supprimer vol simple" <<endl;
                                                        cout<<"2-supprimer vol aller retour" <<endl;
                                                        cout<<"3-supprimer vol simple avec escale" <<endl;
                                                        cout<<"4-retour menu precedant "<<endl;
                                                        cin>>n;
                                                        if (n==1){
                                                            c.supprimer_vol(n);
                                                            cout<<"------------------------------ELEMENT SUPPRIME---------------------"<<endl;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;
                                                        }
                                                        if (n==2){
                                                            c.supprimer_vol(n);
                                                            cout<<"-------------------------------ELEMENT SUPPRIME------------------"<<endl;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;
                                                            }
                                                        if (n==3){
                                                            c.supprimer_vol(n);
                                                            cout<<"-------------------------------ELEMENT SUPPRIME-------------------------"<<endl;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;
                                                            }
                                                        if (n==4){
                                                            goto menu3;
                                                            }

                                                }
                                                if (re==4){
                                                         int n;
                                                        cout<<"----------------------------------ESPACE AFFICHER  ----------------------------"<<endl;
                                                        cout<<"1-afficher vol simple" <<endl;
                                                        cout<<"2-afficher vol aller retour " <<endl;
                                                        cout<<"3-afficher vol simple avec escale" <<endl;
                                                        cout<<"4-afficher tout les vols"<<endl;
                                                        cout<<"5-retour menu precedant "<<endl;
                                                        cin>>n;
                                                         if (n==1){
                                                            c.afficher();
                                                            cout<<"------------------------------FIN AFFICHAGE VOLS ALLER SIMPLE-----------------------"<<endl;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;
                                                        }
                                                        if (n==2){
                                                            c.afficher_r();
                                                            cout<<"-------------------------------FIN AFFICHAGE VOLS ALLER RETOUR---------------------------"<<endl;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;
                                                            }
                                                        if (n==3){

                                                            c.afficher_e();
                                                            cout<<"------------------------------FIN AFFICHAGE VOLS ALLER ESCALE---------------------------"<<endl;
                                                            int retour;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;

                                                            }
                                                        if(n==4){
                                                            c.afficher();
                                                            c.afficher_r();
                                                            c.afficher_e();
                                                            cout<<"---------------------------------FIN AFFICHAGE TOUT LES VOLS-----------------------"<<endl;
                                                            int retour;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2;
                                                        }
                                                        if (n==5){
                                                            goto menu3;
                                                            }
                                                }

                                                if (re==5){
                                                        date d1;
                                                        cout<<"--------------------BIENVENU ESPACE CALCUL GAIN ------------------------------------"<<endl;
                                                        cout<<"donner la date de journee "<<endl;
                                                        cin>>d1;
                                                        c.calcul_gainjour(d1);
                                                        cout<<"--------------------- AFFICHAGE TERMINE------------------------------------------"<<endl;
                                                        int retour;
                                                            cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            EnTete();
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu2; }
                                                if (re==6){
                                                        goto menu2 ; }


                                    }
                if(rep12==2){
                    int jk;
                    menuo :
                    cout<<"-----------------------GESTION DES AVIONS  ------------------------------- "<<endl;
                    cout<<"1-remplir des avions "<<endl;
                    cout<<"2-afficher les avions qui necessite une maintenance"<<endl; //etat avion=1
                    cout<<"3-retour menu principale "<<endl;
                    cin>>jk;
                    if(jk==1){c.remplir_avions();
                                int retour;
                                cout<<"1-retour menu precedant"<<endl;
                                cout<<"2-retour menu espace companie"<<endl;
                                cin>>retour;
                                EnTete();
                                if (retour==1)
                                goto menuo ;
                                else if(retour==2)
                                goto menu2; }
                    //avion qui ont un etat 1 ils vont au maintenance
                    if(jk==2){for(int i=0; i<c.l_avions.size();i++){if(c.l_avions[i]->getetat()==1){ cout<<"cette avion doit etre en mainteanance "<<c.l_avions[i]->getid()<<"--"<<endl;} else cout<<"------------ PAS DES AVIONS EN MAINTENANCE "<<endl;;}
                                int retour;
                                cout<<"1-retour menu precedant"<<endl;
                                cout<<"2-retour menu espace companie"<<endl;
                                cin>>retour;
                                EnTete();
                                if (retour==1)
                                goto menuo ;
                                else if(retour==2)
                                goto menu2; }
                    if(jk==3){ int retour;
                                cout<<"1-retour menu principale"<<endl;
                                cout<<"2-retour menu espace companie"<<endl;
                                cin>>retour;
                                EnTete();
                                if (retour==1)
                                goto menu1;
                                else if(retour==2)
                                goto menu2 ; };

                            }
                if (rep12==3){ cout<<"---------------------GESTION DES PERSONNELS------------------------------"<<endl;
                                cout<<"choisir:"<<endl;
                                cout<<"1-gerer les pilotes "<<endl;
                                cout<<"2-gerer les hotesse de l'air "<<endl;
                                cout<<"3-gerer les stesward"<<endl;
                                int x;
                                cin>>x;
                                EnTete();
                                if (x==1){
                                    menupo :
                                    cout<<"-----------------------GESTION DES PILOTES--------------------------"<<endl;
                                    cout<<"1-remplir le map des mot de passe "<<endl;
                                    cout<<"2-affecter chaque personnel a une avion "<<endl;
                                    cout<<"3-retour menu precedant"<<endl;
                                    int y;
                                    cin>>y;
                                    EnTete();
                                        if (y==1){
                                            c.remplir_map1();
                                            cout<<"------------------REMPLISSAGE TERMINE----------------"<<endl;
                                           cout<<"1-retour menu principale"<<endl;
                                           int nou ;
                                           cin>>nou;
                                           if (nou==1) goto menupo ;
                                        }
                                        if(y==2){
                                            c.affecter_personnel(x);
                                            cout<<"1-retour menu principale"<<endl;
                                           int nou ;
                                           cin>>nou;
                                           if (nou==1) goto menu2 ;

                                        }
                                        if(y==3){
                                            goto menu2;
                                        }
                                }
                                if(x==2){
                                    cout<<"--------------------------GESTION DES HOTESSE D'AIR------------------------"<<endl;
                                    cout<<"1-remplir le map des mot de passe "<<endl;
                                    cout<<"2-affecter chaque personnel a une avion "<<endl;
                                    cout<<"3-retour menu precedant"<<endl;
                                    int y;
                                    cin>>y;
                                    EnTete();
                                        if (y==1){
                                          c.remplir_map2() ;
                                          cout<<"------------------REMPLISSAGE TERMINE----------------"<<endl;
                                           goto menu2;
                                        }
                                        if(y==2){

                                        }
                                        if(y==3){
                                            goto menu2;
                                        }
                                }
                                if(x==3){
                                    cout<<"---------------------------GESTION SETWARD-------------------------"<<endl;
                                    cout<<"1-remplir le map des mot de passe "<<endl;
                                    cout<<"2-affecter chaque personnel a une avion "<<endl;
                                    cout<<"3-retour menu precedant"<<endl;
                                    int y;
                                    EnTete();
                                    cin>>y;
                                        if (y==1){
                                           c.remplir_map3();
                                           cout<<"------------------REMPLISSAGE TERMINE----------------"<<endl;
                                           goto menu2;
                                        }
                                        if(y==2){
                                            //affectation de chaque personnel
                                        }
                                        if(y==3){
                                            goto menu2;
                                        }
                                }


                            }
                }
            } }
        /*    if (rep==2){
                    do
                    {
                    cout<<"entrez votre mot de passe"<<endl;
                    cin>>mdp2;
                    }while(mdp2!="nouvelair1");
                    EnTete();

                    cout<<"-----------------------------------------------ESPACE nouvelair-----------------------------------------------------"<<endl;
                     menu4:
                    cout<<"1-gerer des vols "<<endl;
                    cout<<"2-gerer des avions "<<endl;
                    cout<<"3-gerer des personnels "<<endl;
                    int rep12;
                    cin>>rep12;
                    EnTete();
                    if(rep12==1){
                            menu5:
                            cout<<"-----------------------------------------------ESPACE SERVICES nouvelair-----------------------------------------------------"<<endl;
                            cout<<"choisir"<<endl;
                            cout<<"1-Ajouter un vol"<<endl;
                            cout<<"2-Modifier un vol"<<endl;
                            cout<<"3-Supprimer un vol"<<endl;
                            cout<<"4-Consulter la liste des vols"<<endl;
                            cout<<"5-retour au menu precedant"<<endl;
                            int re;
                            cin>>re;
                            EnTete();
                            if (re==1){
                                cout<<"--------------------------------Espace Ajout ------------------------------"<<endl;
                                cout<<"Vous souhaitez ajouter :"<<endl;
                                cout<<"1- un vol aller"<<endl;
                                cout<<"1- un vol aller avec escale"<<endl;
                                cout<<"3- un vol allez-retour "<<endl;
                                cout<<"4- Retour menu precedant "<<endl;

                                cin>>re;
                                if (re==1){
                                    c1.remplir_vol();
                                    cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            if (retour==1)
                                                                goto menu4;
                                                            else if(retour==2)
                                                                goto menu5;
                                    }
                                if (re==1){
                                    c1.remplir_e();
                                   cout<<"1-retour menu precedant"<<endl;
                                                            cout<<"2-retour menu espace companie"<<endl;
                                                            cin>>retour;
                                                            if (retour==1)
                                                                goto menu3;
                                                            else if(retour==2)
                                                                goto menu5;
                                    }
                                if (re==1){
                                    c1.remplir_al();
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu espace companie"<<endl;
                                    cin>>retour;
                                    if (retour==1)
                                        goto menu3;
                                    else if(retour==2)
                                        goto menu5;
                                    }
                                if (re==5){
                                    goto menu5;
                                    }
                                }

                            }
                            if (re==2){
                                int n ;
                                cout<<"--------------------------------Espace MODIFICATION VOL ------------------------------"<<endl;
                                cout<<"1-modifier vol simple" <<endl;
                                cout<<"2-modifier vol aller " <<endl;
                                cout<<"3-modifier vol simple avec escale" <<endl;
                                cout<<"4-retour menu precedant "<<endl;
                                cin>>n;
                                if (re==1){
                                    c1.modifier(n);
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu espace companie"<<endl;
                                    cin>>retour;
                                    if (retour==1)
                                        goto menu4;
                                    else if(retour==2)
                                        goto menu5;
                                    }
                                if (re==1){
                                    c1.modifier(n);
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu espace companie"<<endl;
                                    cin>>retour;
                                    if (retour==1)
                                        goto menu4;
                                    else if(retour==2)
                                        goto menu5;
                                    }
                                if (re==1){
                                    c1.modifier(n);
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu espace companie"<<endl;
                                    cin>>retour;
                                    if (retour==1)
                                        goto menu4;
                                    else if(retour==2)
                                        goto menu5;
                                    }
                                if (re==5){
                                    goto menu5 ;
                                    }

                            }
                            if (re==3){
                                    int n;
                                    cout<<"----------------------------------ESPACE suprimer ----------------------------"<<endl;
                                    cout<<"1-supprimer vol simple" <<endl;
                                    cout<<"2-supprimer vol aller retour" <<endl;
                                    cout<<"3-supprimer vol simple avec escale" <<endl;
                                    cout<<"4-retour menu precedant "<<endl;
                                    cin>>n;
                                    if (re==1){
                                        c1.supprimer_vol(n);
                                        cout<<"1-retour menu precedant"<<endl;
                                        cout<<"2-retour menu espace companie"<<endl;
                                        cin>>retour;
                                        if (retour==1)
                                            goto menu4;
                                        else if(retour==2)
                                            goto menu5;
                                    }
                                    if (re==2){
                                        c1.supprimer_vol(n);
                                        cout<<"1-retour menu precedant"<<endl;
                                        cout<<"2-retour menu espace companie"<<endl;
                                        cin>>retour;
                                        if (retour==1)
                                            goto menu4;
                                        else if(retour==2)
                                            goto menu5;
                                        }
                                    if (re==3){
                                        c1.supprimer_vol(n);
                                        cout<<"1-retour menu precedant"<<endl;
                                        cout<<"2-retour menu espace companie"<<endl;
                                        cin>>retour;
                                        if (retour==1)
                                            goto menu4;
                                        else if(retour==2)
                                            goto menu5;
                                        }
                                    if (re==4){
                                        goto menu5;
                                        }

                            }
                            if (re==4){
                                     int n;
                                    cout<<"----------------------------------ESPACE AFFICHER  ----------------------------"<<endl;
                                    cout<<"1-afficher vol simple" <<endl;
                                    cout<<"2-afficher vol aller retour " <<endl;
                                    cout<<"3-afficher vol simple avec escale" <<endl;
                                    cout<<"4-retour menu precedant "<<endl;
                                    cin>>n;
                                     if (re==1){
                                        c1.afficher();
                                        cout<<"1-retour menu precedant"<<endl;
                                        cout<<"2-retour menu espace companie"<<endl;
                                        cin>>retour;
                                        if (retour==1)
                                            goto menu5;
                                        else if(retour==2)
                                            goto menu4;
                                    }
                                    if (re==2){
                                        c1.afficher_r();
                                        cout<<"1-retour menu precedant"<<endl;
                                        cout<<"2-retour menu espace companie"<<endl;
                                        cin>>retour;
                                        if (retour==1)
                                            goto menu5;
                                        else if(retour==2)
                                            goto menu4;
                                        }
                                    if (re==3){
                                        c1.afficher_e();
                                        cout<<"1-retour menu precedant"<<endl;
                                        cout<<"2-retour menu espace companie"<<endl;
                                        cin>>retour;
                                        if (retour==1)
                                            goto menu5;
                                        else if(retour==2)
                                            goto menu4;
                                        }
                                    if (re==4){
                                        goto menu5;
                                        }
                            }
                             if (re==5){
                            goto menu4 ; }

                }


*/
    if(repc==2){
                    cout<<"-------------------------------------ESPACE CLINET ------------------------------------------------"<<endl;
                    utilisateur u;
                    menuc :
                    cout<<"1-chercher vol"<<endl;
                    cout<<"2-Ajouter reservation"<<endl;
                    cout<<"3-modifier reservation "<<endl;
                    cout<<"3-supprimer reservation"<<endl;
                    cout<<"5-consulter ma liste des reservation "<<endl;
                    cout<<"6-retour au menu principale "<<endl;
                    cin>>res;
                    EnTete();
                    if (res==1)
                    {       cout<<"----------------------------------ESPACE RECHECHE VOL-----------------------------"<<endl;
                           cout<<"1-vol aller-simple "<<endl;
                            cout<<"2-vol aller-retour "<<endl;
                            cin>>res1;
                            EnTete();
                            int res2;
                             if(res1==1)
                             {
                                cout<<"1-vol avec escale "<<endl;
                                cout<<"2-vol direct "<<endl;
                                cout<<"3-les deux"<<endl;
                                cin>>res2;
                                EnTete();

                                if(res2==3){
                                    ville v1 , v2 ;
                                    date d;
                                    cout<<"donner la ville depart "<<endl;
                                    cin>>v1;
                                    cout<<"donner la ville d'arrive "<<endl;
                                    cin>>v2;
                                    cout<<"donner la date de depart "<<endl;
                                    cin>>d;
                                    c.fetch_vol(v1,v2,d);
                                    c.fetch_vole(v1,v2,d);
                                    cout<<"§§ALERT§§:MERCI DE RETENIR LES ID DES VOLS POUR FAIRE DES RESERVATION -----------"<<endl;
                                    int z ;
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu principale "<<endl;
                                    cin>>z;
                                    if(z==1){goto menuc ;  }
                                    if(z==2) {goto menu ; }
                                }

                                if (res2==2) {
                                    ville v1 , v2 ;
                                    date d;
                                    cout<<"donner la ville depart "<<endl;
                                    cin>>v1;
                                    cout<<"donner la ville d'arrive "<<endl;
                                    cin>>v2;
                                    cout<<"donner la date de depart "<<endl;
                                    cin>>d;
                                    c.fetch_vol(v1,v2,d);
                                    cout<<"§§ALERT§§:MERCI DE RETENIR LES ID DES VOLS POUR FAIRE DES RESERVATION -----------"<<endl;
                                     int z ;
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu principale "<<endl;
                                    cin>>z;
                                    if(z==1){goto menuc ;  }
                                    if(z==2) {goto menu ; }
                             rep=0; }
                                if(res2==1){
                                    ville v1 , v2 ;
                                    date d;
                                    cout<<"donner la ville depart "<<endl;
                                    cin>>v1;
                                    cout<<"donner la ville d'arrive "<<endl;
                                    cin>>v2;
                                    cout<<"donner la date de depart "<<endl;
                                    cin>>d;
                                    c.fetch_vole(v1,v2,d);
                                    cout<<"§§ALERT§§:MERCI DE RETENIR LES ID DES VOLS POUR FAIRE DES RESERVATION -----------"<<endl;
                                    int z ;
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu principale "<<endl;
                                    cin>>z;
                                    if(z==1){goto menuc ;  }
                                    if(z==2) {goto menu ; }

                             }}
                             if (res1==2){
                                ville v1 , v2 ;
                                    date d,d1;
                                    cout<<"donner la ville depart "<<endl;
                                    cin>>v1;
                                    cout<<"donner la ville d'arrive "<<endl;
                                    cin>>v2;
                                    cout<<"donner la date de depart "<<endl;
                                    cin>>d;
                                    c.fetch_volal(v1,v2,d,d1);
                                    int z ;
                                    cout<<"1-retour menu precedant"<<endl;
                                    cout<<"2-retour menu principale "<<endl;
                                    cin>>z;
                                    if(z==1){goto menuc ;  }
                                    if(z==2) {goto menu ; }

                             }
                             }//-----------------fin res==1

                    if (res==2){ //ajouter une reservation
                        //u.remplir_res();
                        int g;
                        do{
                        reservation* r= new reservation();
                        cin>>*r;
                        if ((r->getnbplace())>(c.getnb(r->ID))) {cout<<"le nombre de placee disponible est insuffisant "<<endl; goto menuc; }
                        else u.tab.push_back(r) ;
                        cout<<"ajouter une reservation "<<endl;
                        cout<<"1-oui"<<endl;
                        cout<<"0-non"<<endl;
                        cin>>g;
                        if(g==0) break;
                        }while(g!=0);
                        int z ;
                         cout<<"1-retour menu precedant"<<endl;
                         cout<<"2-retour menu principale "<<endl;
                         cin>>z;
                         if(z==1){goto menuc ;  }
                         if(z==2) {goto menu ; }

                            }
                    if (res==3){//modification reservation
                         u.modifier_res();
                         int z ;
                         cout<<"1-retour menu precedant"<<endl;
                         cout<<"2-retour menu principale "<<endl;
                         cin>>z;
                         if(z==1){goto menuc ;  }
                         if(z==2) {goto menu ; }

                    }
                    if (res==4){ //supprimer reservation
                         u.supp_reser();
                         int z ;
                         cout<<"1-retour menu precedant"<<endl;
                         cout<<"2-retour menu principale "<<endl;
                         cin>>z;
                         if(z==1){goto menuc ;  }
                         if(z==2) {goto menu ; }
                    }
                    if (res==5){ //affichage liste reservation
                        fstream f4;
                        u.creer_fichier(f4);
                         f4<<&u;
                         u.afficher_fichier(f4);
                         int z ;
                         cout<<"1-retour menu precedant"<<endl;
                         cout<<"2-retour menu principale "<<endl;
                         cin>>z;
                         if(z==1){goto menuc ;  }
                         if(z==2) {goto menu ; }
                    }
                    if (res==6){
                    goto menu ; }
            }

    if (repc==3){
            int r1;
            cout<<"--------------------------------------- ESPACE personnel -------------------------------------------- "<<endl;
            cout<<"choisiez la companie que "<<endl;
            cout<<"1-TUNISAIR"<<endl;
            cout<<"2-NOUVELAIR"<<endl;
            cout<<"3-Retour menu principale"<<endl;
            cin>>r1;
            if (r1==3){ goto menu ;}
            if(r1==1){
                int r2;
                cout<<"vous etes : "<<endl;
                cout<<"1-Pilote"<<endl;
                cout<<"2-hôtesse de l'air "<<endl;
                cout<<"3-steward"<<endl;
                cin>>r2;
                if (r2==1){
                    int s;
                    string mdp;
                    cout<<"------------------------BIENVENNU DANS ESPACE PILOTE-----------------------------------"<<endl;
                    cout<<"MERCI DE D'AUTHENTIFIER--------"<<endl;
                    cout<<"donner votre id "<<endl;
                    cin>>s;
                    pilote p(s);
                    while(1){
                    cout<<"donner votre mot de passe"<<endl;
                    cin>>mdp;
                    if(lecture_f1(s)==mdp){ goto menup;}
                    if (lecture_f1(s)!=mdp) {cout<<"mod de passe incorrect"<<endl;  } }

                    menup:
                       {

                       int xD;
                        cout<<"---------------------------BIENVENU DANS ESPACE PRIVE PILOTE-------------------------------"<<endl;
                        cout<<"1-affiche liste avions "<<endl;
                        cout<<"2-marqer présence"<<endl;

                        cin>>xD;
                        if(xD==1){
                               remplir_pilote(c,p);
                                   p.affiche();
                                   int gk;
                                 cout<<"1-retour menu precedant "<<endl;
                                 cout<<"2-retour menu principale"<<endl;
                                 cin>>gk;
                                 if (gk==1){ goto menup ;}
                                 if(gk==2){goto menu ;}

                                    }
                        if(xD==2){}
                       }


                }
                if (r2==2){
                    int s;
                    string mdp;
                    cout<<"------------------------BIENVENNU DANS ESPACE hôtesse de l'air-----------------------------------"<<endl;
                    cout<<"MERCI DE D'AUTHENTIFIER--------"<<endl;
                    cout<<"donner votre id "<<endl;
                    cin>>s;
                    hotesse p(s);
                    while(1){
                    cout<<"donner votre mot de passe"<<endl;
                    cin>>mdp;
                    if(lecture_f2(s)==mdp){goto menup1;} ;
                    if (lecture_f2(s)!=mdp) cout<<"mod de passe incorrect"<<endl;
                    }
                    menup1:
                        cout<<"---------------------------BIENVENU DANS ESPACE PRIVE HOTESSE-------------------------------"<<endl;
                        cout<<"1-affiche liste avions "<<endl;
                        cout<<"2-marqer présence"<<endl;
                        int m;
                        cin>>m;
                        if (m==1){remplir_hotesse(c,p);
                                    p.affiche();

                        }
                        if(m==2){}
                }
                if (r2==3){
                    cout<<"------------------------BIENVENNU DANS ESPACE steward -----------------------------------"<<endl;
                    int s;
                    string mdp;
                    cout<<"MERCI DE D'AUTHENTIFIER--------"<<endl;
                    cout<<"donner votre id "<<endl;
                    cin>>s;
                    setward p(s);
                    while(1){
                        cout<<"donner votre mot de passe"<<endl;
                        cin>>mdp;
                        if(lecture_f3(s)==mdp) { goto menup2; }
                        else if (lecture_f3(s)!=mdp) cout<<"mod de passe incorrect"<<endl;
                    }
                    menup2:
                        cout<<"---------------------------BIENVENU DANS ESPACE PRIVE setward-------------------------------"<<endl;
                        cout<<"1-affiche liste avions "<<endl;
                        cout<<"2-marqer présence"<<endl;
                        int m;
                        cin>>m;
                        if (m==1){ remplir_setward(c,p);
                                    p.affiche();

                        }
                        if(m==2){}
                }

    }}
    }while(rep!=0);

}
