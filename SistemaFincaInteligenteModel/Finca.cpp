#include "Finca.h"

using namespace ElParaisoPUCPModel;

Finca::Finca() {

}

Finca::Finca(int codigo, String^ nombre, int tama�o, String^ lugar) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->tama�o = tama�o;
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
int Finca::getTama�o() {
	return this->tama�o;
}

void Finca::setTama�o(int tama�o) {
	this->tama�o = tama�o;
}
//*****//
String^ Finca::getLugar() {
	return this->lugar;
}

void Finca::setLugar(String^ lugar) {
	this->lugar = lugar;
}
