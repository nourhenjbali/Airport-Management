#include "pilote.h"

pilote::pilote(int a)
{
    id=a;
}

pilote::~pilote()
{
    liste_idavions.clear();
}

void pilote::affiche(){
    cout<<"---------------AFFICHAGE LISTE DES ID AVIONS -----------------------------"<<endl;
    for(int i=0; i<liste_idavions.size();i++){
        cout<<liste_idavions[i]<<" , ";
    }}
/*void pilote:: remplir_pilote(companie c){
    for(int i=0; i<l_avions.size(); i++){
        if ((c.l_avions[i]->getid_pilote())==id) (liste_idavions.push_back(c.l_avions[i]->getid)) ;
    }
*/
