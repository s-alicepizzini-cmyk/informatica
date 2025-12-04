#include "Televisore.h"
#include <iostream>

using namespace std;

Televisore::Televisore(){
    stato = false;
    volume = 20;
    canale = 0;
    modalità = true;
}
void Televisore::pulsanterosso(){
    if(!stato){
        stato = true;
        cout << "La TV e stata accesa.\n";
    }
    else{
        stato = false;
        cout << "La TV e stata spenta.\n";
    }
}
void Televisore::canaleSuccessivo(){
    canale = (canale + 1)%1000;
}
void Televisore::canalePrecedente(){
    canale = (canale - 1)%1000;
}
void Televisore::aumentaVolume(){
    if(volume<60){
        volume++;
    }
}
void Televisore::abbassaVolume(){
    if(volume>0){
            volume--;
        }
}
void Televisore::impostaCanale(int c){
    canale = c;
}
void Televisore::pulsanteSilenzioso(){
    if(!modalità){
        modalità=true;
    }
    else{
        modalità=false;
    }
}
void Televisore::print(){
    if(stato){
        cout << "TV accesa" << endl;
        cout << "Canale: " << canale << endl;
        if(modalita){
            cout << "Volume: " << volume << endl;
        }
        else{
            cout << "Volume: SILENZIOSO" << endl;
        }
    }
    else 
        cout << "TV spenta" << endl;
}