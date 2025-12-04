#ifndef VEICOLI_H
#define VEICOLI_H
#include <iostream>

using namespace std;

class Veicoli{

    private:
        string marca;
        string modello;
        int velocita;
        bool stato;

    public:
        Veicoli();
        string getmarca();
        string getmodello();
        int getvelocita();
        bool getstato();
        void accelera(int d);
        void frena();
        void accendi(); 
        void spegni();

};
#endif