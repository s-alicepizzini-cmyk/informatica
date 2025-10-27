#include <iostream>
#include "rettangolo.h"

using namespace std;


rettangolo::rettangolo(){
    base=1;
    altezza=1;
}

void rettangolo::setBase(int _Base){
    base = _Base;
}

void rettangolo::setAltezza(int _Altezza){
    altezza = _Altezza;
}

int rettangolo::getBase(){
    return base;
}

int rettangolo::getAltezza(){
    return altezza;
}

int rettangolo::Perimetro(){
    return (base+altezza)*2;
}

int rettangolo::Area(){
    return base*altezza;
}