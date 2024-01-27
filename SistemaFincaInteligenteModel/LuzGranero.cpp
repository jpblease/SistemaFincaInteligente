#include "LuzGranero.h"

using namespace SistemaFincaInteligenteModel;

LuzGranero::LuzGranero() {

}

LuzGranero::LuzGranero(int dato) {
	this->dato = dato;
	
}

int LuzGranero::getDato() {
	return this->dato;
}

void LuzGranero::setDato(int dato) {
	this->dato = dato;
}
