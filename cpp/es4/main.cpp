#include <iostream>
#include "Cerchio.h"

using namespace std;

int main(){

    Cerchio cer[5];
    for(int i=0;i<5;i++){
        cer[i].setRaggio(i+1);
    }

    for(int i=0;i<5;i++){
        cout << "Il rettangolo con raggio: " << cer[i].getRaggio();
        cout << "\nha la circonferenza di:  " << cer[i].circonferenza();
        cout << " e l'area di: " << cer[i].area() << endl;
    }


    return 0;
}