#include <iostream>
#include "Giacca.h"
#include <cstdlib>
#include <ctime>
#define N 2

using namespace std;

int main(){

    Giacca jack[N];
    int taglia;

    for(int i=0;i<N;i++){
        cout << "Inserisci la taglia della giacca (compreso tra 30 e 60) " << i+1 << ": ";
        cin >> taglia;
        jack[i].setTaglia(taglia); 
    }

    srand(time(NULL));
    for(int i=0;i<N;i++){
        for(int j=0;j<4;j++){
            jack[i].apri(rand()%41+10);
            jack[i].chiudi(rand()%41+10);
        }
    }

    if(jack[0].getPercentuale()>jack[1].getPercentuale()){
        cout << "La giacca più chiusa è la prima.\n";
    }
    else{
        cout << "La giacca più chiusa è la seconda.\n";
    }

    return 0;
}