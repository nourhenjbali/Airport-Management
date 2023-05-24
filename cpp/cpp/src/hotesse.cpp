#include "hotesse.h"

hotesse::hotesse(int a)
{
    id=a;
}

hotesse::~hotesse()
{
    liste_idavions.clear();

}
void hotesse::affiche(){
  cout<<"---------------AFFICHAGE LISTE DES ID AVIONS -----------------------------"<<endl;
    for(int i=0; i<liste_idavions.size();i++){
        cout<<liste_idavions[i]<<" , ";}}
/*void hotesse :: remplir_hotesse(companie c){
    for(int i=0; i<l_avions.size(); i++){
        if ((c.l_avions[i]->getid_hotesse())==id) (liste_idavions.push_back(c.l_avions[i]->getid)) ;
    }*/
