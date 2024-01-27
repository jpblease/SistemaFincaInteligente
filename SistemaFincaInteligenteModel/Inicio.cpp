#include "Inicio.h"

using namespace ElParaisoPUCPModel;

Inicio::Inicio() {

}

Inicio::Inicio(int codigo, int tipoventana) {
	this->codigo = codigo;
	this->tipoventana = tipoventana;
	
}

int Inicio::getCodigo() {
	return this->codigo;
}

void Inicio::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
int Inicio::getTipoventana() {
	return this->tipoventana;
}

void Inicio::setTipoventana(int tipoventana) {
	this->tipoventana = tipoventana;
}
