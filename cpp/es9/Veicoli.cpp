#include <iostream>
#include "veicoli.h"

using namespace std;

Veicoli::Veicoli(){
    stato = false;
    velocita = 0;
}
string Veicoli::getmarca(){
    return marca;
}
string Veicoli::getmodello(){
    return modello;
}
int Veicoli::getvelocita(){
    return velocita;
}
bool Veicoli::getstato(){
    return stato;
}
void Veicoli::accelera(int d){
    if(velocita + d <=200 && velocità + d >= -30){
        velocita += d;
    }
}
void Veicoli::frena(){
    velocita = 0;
}
void Veicoli::accendi(){
    stato = true;
} 
void Veicoli::spegni(){
    stato = false;
}