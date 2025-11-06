#include "Giacca.h"
#include <iostream>

using namespace std;

Giacca::Giacca(){
    taglia = 45;
    percentuale = 0;
}
void Giacca::setTaglia(int _taglia){
    if(_taglia<=60 && _taglia>=30){
        taglia = _taglia;
    }
}
void Giacca::setPercentuale(int _percentuale){
    if(_percentuale<=100 && _percentuale>=0){
        percentuale = _percentuale;
    }
    else{
        cout << "Non puoi chiuderla così tanto. \n";
    }
}
int Giacca::getTaglia(){
    return taglia;
}
int Giacca::getPercentuale(){
    return percentuale;
}
void Giacca::apri_completo(){
    setPercentuale(100);
}
void Giacca::chiudi_completo(){
    setPercentuale(0);
}
int Giacca::apri(int _percentuale){
    setPercentuale(getPercentuale() + _percentuale);
}
int Giacca::chiudi(int _percentuale){
    setPercentuale(getPercentuale() - _percentuale);
}
void Giacca::if_chiuso(){
    if(percentuale==100){
        cout << "La giacca è chiusa. \n";
    }
    else{
        cout << "La giacca non è chiusa completamente. \n";
    }
}