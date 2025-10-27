#include <iostream>
#include "Cerchio.h"

using namespace std;

Cerchio::Cerchio(){
    raggio = 1;
}

void Cerchio::setRaggio(int _Raggio){
    raggio = _Raggio;
}

int Cerchio::getRaggio(){
    return raggio;
}

float Cerchio::circonferenza(){
    return 2*raggio*3.14;
}

float Cerchio::area(){
    return raggio*raggio*3.14;
}