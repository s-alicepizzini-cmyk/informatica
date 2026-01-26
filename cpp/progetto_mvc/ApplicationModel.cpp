//#include "StdAfx.h"
#include <iostream>
#include "ApplicationModel.h"

using namespace std;

ApplicationModel::ApplicationModel():Model(){
    posti_liberi=
}

int ApplicationModel::getPostiLiberi(){
    return posti_liberi;
}

double ApplicationModel::getTariffaOraria(){
    return tariffaOraria;
}

void ApplicationModel::info(){
    cout << "Benvenuti nel parcheggio di piazza fiera!" << endl;
    cout << "Ci sono " << getPostiLiberi() << " posti liberi" << endl;
    cout << "La tariffa oraria del parcheggio e' di: " << getTariffaOraria() <<endl;
}

int ApplicationModel::ingresso(){
    if(posti_liberi>0){
        posti_liberi--;
    }
    else{
        cout << "Il parcheggio e' pieno, non si può entrare!" << endl;
    }
    notify();

}
int ApplicationModel::uscita(){
    if(posti_liberi<max_posti){
        posti_liberi++;
    }
    notify();
	
}