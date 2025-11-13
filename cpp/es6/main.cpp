#include <iostream>
#include "Scarpe.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    Scarpe s[2];
    srand(time(NULL));


    for(int i=0;i<10;i++){
        s[rand()%2].aprichiudi(rand()%6);
    }

    for(int i=0; i<2; i++){
        cout << "Paio numero " << i+1 << endl;
        cout << "   Scarpa sinistra" << endl;
        for(int j=0; j<6; j++){
            if(j==3)
                cout << "   Scarpa destra" << endl;
            if(s[i].getScretch(j) == 1)
                cout << "       Stretch " << j+1 << " e aperto" << endl;
            else
                cout << "       Stretch " << j+1 << " e chiuso" << endl;
        }
    }


    return 0;
}
