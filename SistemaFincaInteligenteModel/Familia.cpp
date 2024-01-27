
#include"Familia.h"


using namespace SistemaFincaInteligenteModel;

Familia::Familia() {

}

Familia::Familia(int codigo, String^ nombre, String^ parentesco, int telefono, Operario^ objOperario) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->parentesco = parentesco; 
	this->telefono = telefono; 
	this->objOperario = objOperario; 
}

int Familia::getCodigo() {
	return this->codigo;
}

void Familia::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ Familia::getNombre() {
	return this->nombre;
}

void Familia::setNombre(String^ nombre) {
	this->nombre = nombre;
}

String^ Familia::getParentesco() {
	return this->parentesco;
}

void Familia::setParentesco(String^ parentesco) {
	this->parentesco = parentesco;
}

int Familia::getTelefono() {
	return this->telefono;
}

void Familia::setTelefono(double telefono) {
	this->telefono = telefono;
}

Operario^ Familia::getOperario() {
	return this->objOperario;
}

void Familia::setOperario(Operario^ objOperario) {
	this->objOperario = objOperario;
}