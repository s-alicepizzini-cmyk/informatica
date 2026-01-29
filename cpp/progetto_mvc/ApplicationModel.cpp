//#include "StdAfx.h"
#include <iostream>
#include "ApplicationModel.h"
#include <cstdlib> 
#include <ctime>
#include <windows.h>


using namespace std;

ApplicationModel::ApplicationModel():Model(){
    srand(time(NULL));
    posti_liberi=rand()%50+1;
    entrata=false;
}

int ApplicationModel::getPostiLiberi(){
    return posti_liberi;
}

double ApplicationModel::getTariffaOraria(){
    return tariffaOraria;
}

int ApplicationModel::getOreSosta(){
    return ore_sosta;
}

void ApplicationModel::caricamento(){
    const int totale = 10; 

    for (int i = 0; i <= totale; i++) {
        int percentuale = (i * 100) / totale;
        cout << "       \r[";
        for (int j = 0; j < i; j++) cout << "#";
        cout << "] " << percentuale << "%";
        Sleep(300);
    }
}


void ApplicationModel::info(){
    cout << "Benvenuti nel parcheggio di piazza fiera!" << endl;
    cout << "Ci sono " << getPostiLiberi() << " posti liberi." << endl;
    cout << "La tariffa oraria del parcheggio e' di: " << getTariffaOraria() << " euro." <<endl;
    cout <<"E' possibile sostare per un massimo di 5 ore." <<endl;
}

int ApplicationModel::ingresso(){
    if(posti_liberi>0){
        cout << "Stampa del ticket in corso!" <<endl;
        caricamento();
        cout << "  Stampa effettuata!" <<endl;
        entrata=true;
        posti_liberi--;
    }
    else{
        cout << "Il parcheggio e' pieno, non si può entrare!" << endl;
    }
    Sleep(3000);
    notify();

}

int ApplicationModel::uscita(){
    if(posti_liberi<max_posti && entrata==true){
        srand(time(NULL));
        ore_sosta=rand()%5+1;
        double costo_tot= tariffaOraria*ore_sosta;
        cout <<"Hai trascorso " << getOreSosta() << " ore nel parcheggio!" <<endl;
        cout <<"Il prezzo del ticket e' pari a: " << costo_tot << " euro." <<endl;
        cout <<"Seleiona il metodo di pagamento tra contanti [1] o carte [2]: ";
        cin >> pagamento;
        if(pagamento==1){
            cout << "Inserisca i contanti" <<endl;
        }
        else{
            cout <<"Inserisca la carta" <<endl;
        }
        cout <<"Pagamento effettuato!" <<endl;
        cout << "Stampa dello scontrino in corso!" <<endl;
        caricamento();
        cout << "  Stampa effettuata!" <<endl;
        cout <<"Grazie e arrivederci" <<endl;
        posti_liberi++;
        entrata=false;
    }
    else{
        cout <<"Errore, non puoi effetuare l'uscita dal parcheggio!" <<endl;
    }
     Sleep(3000);
    notify();
   
}