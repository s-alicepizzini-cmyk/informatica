
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 

	private:
		int posti_liberi;

	public:
		ApplicationModel();
		int info();
		int ingresso();
		int uscita();

	
};

#endif