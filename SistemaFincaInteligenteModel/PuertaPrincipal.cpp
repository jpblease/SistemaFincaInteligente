#include"PuertaPrincipal.h" 

using namespace SistemaFincaInteligenteModel;

PuertaPrincipal::PuertaPrincipal() {

}

PuertaPrincipal::PuertaPrincipal(int dato) {
	this->dato = dato;

}

int PuertaPrincipal::getDato() {
	return this->dato;
}

void PuertaPrincipal::setDato(int dato) {
	this->dato = dato;
}