#include"LuzPuertaPrincipal.h" 

using namespace SistemaFincaInteligenteModel;

LuzPuertaPrincipal::LuzPuertaPrincipal() {

}

LuzPuertaPrincipal::LuzPuertaPrincipal(int dato) {
	this->dato = dato;

}

int LuzPuertaPrincipal::getDato() {
	return this->dato;
}

void LuzPuertaPrincipal::setDato(int dato) {
	this->dato = dato;
}