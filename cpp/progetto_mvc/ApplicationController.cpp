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

            int scelta;

            scelta=((ApplicationView*)view)->getScelta();

            switch(scelta){
			case 0: 
				exit(0);
				break;

			case 1: 
				(((ApplicationModel*)model)->info()); //info parcheggio
				break;

			case 2: 
				(((ApplicationModel*)model)->ingresso()); //ingresso
				 
				break;
			
			case 3: 
				(((ApplicationModel*)model)->uscita()); //uscita
				break;	


            }



    }
	
	void MVC::Controller::handleEvent(MVC::Event * e) {;//fai qualcosa
	}