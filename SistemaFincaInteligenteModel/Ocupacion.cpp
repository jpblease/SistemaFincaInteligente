#include "Ocupacion.h"

using namespace ElParaisoPUCPModel;

Ocupacion::Ocupacion() {

}

Ocupacion::Ocupacion(int codigo, String^ nombre, String^ tipo, int dificultad) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->tipo = tipo;
	this->dificultad = dificultad;
}

int Ocupacion::getCodigo() {
	return this->codigo;
}

void Ocupacion::setCodigo(int codigo) {
	this->codigo = codigo;
}
//**************************//
String^ Ocupacion::getNombre() {
	return this->nombre;
}

void Ocupacion::setNombre(String^ nombre) {
	this->nombre = nombre;
}
//******************************//
String^ Ocupacion::getTipo() {
	return this->tipo;
}

void Ocupacion::setTipo(String^ tipo) {
	this->tipo = tipo;
}
//**********************//
int Ocupacion::getDificultad() {
	return this->dificultad;
}

void Ocupacion::setDificultad(int dificultad) {
	this->dificultad = dificultad;
}