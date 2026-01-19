//#include "StdAfx.h"
#include "ApplicationController.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

ApplicationController::ApplicationController(ApplicationView *v):
	Controller(v)
{
	//myModel=(ApplicationModel*)model; // per non dover fare ogni volta il cast per usare il model
}


    void ApplicationController::logic(){

            int scelta=5;

            cin >> scelta;

            switch(scelta){
			case 0: 
				exit(0);
				break;

			case 1: 
				((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue()+1); //info parcheggio
				cout << "ggrgegsrhs" << endl;
				break;

			case 2: 
				((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue()-1); //ingresso
				break;
			
			case 3: 
				((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue()-1); //uscita
				break;	


            }



    }
	//una sorta di LOOP:loadValue() di model-> notify()->update() di view
	//												   ->update() di control(questo metodo) ->loadValue() di model -> notify()...
	/*void ApplicationController::update(){
		isUptoDate=true;
	}*/

	//funzione alla quale in futuro potrebbe essere associata la tastiera
	void MVC::Controller::handleEvent(MVC::Event * e) {;//fai qualcosa
	}
