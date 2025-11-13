#include <iostream>
#include "Scarpe.h"

Scarpe::Scarpe(){
    for(int i=0;i<6;i++){
        scretch[i]=1;
    }
}
void Scarpe::setDimensione(int _dimensione){
    dimensione = _dimensione;
}
int Scarpe::getDimensione(){
    return dimensione;
}
void Scarpe::aprichiudi(int i){
    if(scretch[i]==1){
        scretch[i]=0;
    }
    else{
        scretch[i]=1;
    }
}
int Scarpe::getScretch(int i){
    return scretch[i];
}