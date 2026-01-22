//#include "StdAfx.h"
#include "ApplicationModel.h"

ApplicationModel::ApplicationModel():
    Model()
{}

int ApplicationModel::info(){

}
int ApplicationModel::ingresso(){
    posti_liberi--;

}
int ApplicationModel::uscita(){
    posti_liberi++;
	
}