#include "Propietario.h"

using namespace ElParaisoPUCPModel;

Propietario::Propietario() {

}

Propietario::Propietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
}

int Propietario::getCodigo() {
	return this->codigo;
}

void Propietario::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
String^ Propietario::getNombre() {
	return this->nombre;
}

void Propietario::setNombre(String^ nombre) {
	this->nombre = nombre;
}
//*****//
String^ Propietario::getApellidoP() {
	return this->apellidoP;
}

void Propietario::setApellidoP(String^ apellidoP) {
	this->apellidoP = apellidoP;
}
//*****//
String^ Propietario::getApellidoM() {
	return this->apellidoM;
}

void Propietario::setApellidoM(String^ apellidoM) {
	this->apellidoM = apellidoM;
}