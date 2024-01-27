#include "PuertaGranero.h"

using namespace SistemaFincaInteligenteModel; 

PuertaGranero::PuertaGranero() {

}

PuertaGranero::PuertaGranero(int dato) {
	this->dato = dato;

}

int PuertaGranero::getDato() {
	return this->dato;
}

void PuertaGranero::setDato(int dato) {
	this->dato = dato;
}