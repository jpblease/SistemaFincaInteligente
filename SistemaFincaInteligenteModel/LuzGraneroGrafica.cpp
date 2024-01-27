
#include "LuzGraneroGrafica.h"

using namespace SistemaFincaInteligenteModel;

LuzGraneroGrafica::LuzGraneroGrafica() {

}

LuzGraneroGrafica::LuzGraneroGrafica(int dato) {
	this->dato = dato;

}

int LuzGraneroGrafica::getDato() {
	return this->dato;
}

void LuzGraneroGrafica::setDato(int dato) {
	this->dato = dato;
}