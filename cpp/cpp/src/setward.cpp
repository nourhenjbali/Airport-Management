#include "setward.h"

setward::setward(int a)
{
    id=a;
}

setward::~setward()
{
    liste_idavions.clear();
}
void setward::affiche(){
  cout<<"---------------AFFICHAGE LISTE DES ID AVIONS -----------------------------"<<endl;
    for(int i=0; i<liste_idavions.size();i++){
        cout<<liste_idavions[i]<<" , ";}}
/*void setward :: remplir_setward(companie c ){
    for(int i=0; i<l_avions.size(); i++){
        if ((c.l_avions[i]->getid_setward())==id) (iste_idavions.push_back(c.l_avions[i]->getid)) ;
    }
*/
