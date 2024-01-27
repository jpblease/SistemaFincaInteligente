#include "Finca.h"

using namespace ElParaisoPUCPModel;

Finca::Finca() {

}

Finca::Finca(int codigo, String^ nombre, int tamaño, String^ lugar) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->tamaño = tamaño;
	this->lugar = lugar;
}

int Finca::getCodigo() {
	return this->codigo;
}

void Finca::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
String^ Finca::getNombre() {
	return this->nombre;
}

void Finca::setNombre(String^ nombre) {
	this->nombre = nombre;
}
//*****//
int Finca::getTamaño() {
	return this->tamaño;
}

void Finca::setTamaño(int tamaño) {
	this->tamaño = tamaño;
}
//*****//
String^ Finca::getLugar() {
	return this->lugar;
}

void Finca::setLugar(String^ lugar) {
	this->lugar = lugar;
}
