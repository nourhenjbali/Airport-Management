#include "pilote.h"
#include"companie.h"
pilote::pilote(int a)
{
    id=a;
}

pilote::~pilote()
{
    //dtor
}
void pilote ::remplir_l(comapnie c){
    for(int i=0; i<c.l_avions.size(); i++){
        if ((c.l_avions[i]->getid_pilote())==id)
    }

}
