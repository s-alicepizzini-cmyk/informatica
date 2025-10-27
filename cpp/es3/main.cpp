#include <iostream>
#include "rettangolo.h"

using namespace std;


int main(){

    rettangolo rett[10];
    for(int i=0;i<10;i++){
        rett[i].setBase(i+1);
        rett[i].setAltezza(i+2);
    }

    for(int i=0;i<10;i++){
        cout << "rettangolo con base " << rett[i].getBase();
        cout << " e altezza " << rett[i].getAltezza();
        cout << "\n l'area di " << rett[i].Area();
        cout << " e il perimetro di " << rett[i].Perimetro() << endl;
    }
}