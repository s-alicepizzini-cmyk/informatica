
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 

	private:
		int posti_liberi;
		int max_posti=50;
		double tariffaOraria=1.5;

	public:
		ApplicationModel();
		int getPostiLiberi();
		double getTariffaOraria();
		void info();
		int ingresso();
		int uscita();

	
};

#endif