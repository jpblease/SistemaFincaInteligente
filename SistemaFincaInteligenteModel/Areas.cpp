#include "Areas.h"

using namespace SistemaFincaInteligenteModel;

Areas::Areas() {

}

Areas::Areas(int codigo, String^ nombre, String^ tipo, int tamanho,Operario^ objOperario) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->tipo = tipo;
	this->tamanho = tamanho;
	this->objOperario = objOperario;
}

Areas::Areas(int codigo, String^ nombre, String^ tipo, int tamanho) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->tipo = tipo;
	this->tamanho = tamanho;
	//this->objOperario = objOperario;
}

Areas::Areas( String^ nombre, String^ tipo, int tamanho) {
	//this->codigo = codigo;
	this->nombre = nombre;
	this->tipo = tipo;
	this->tamanho = tamanho;
	//this->objOperario = objOperario;
}

int Areas::getCodigo() {
	return this->codigo;
}

void Areas::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
String^ Areas::getNombre() {
	return this->nombre;
}

void Areas::setNombre(String^ nombre) {
	this->nombre = nombre;
}
//*****//
String^ Areas::getTipo() {
	return this->tipo;
}

void Areas::setTipo(String^ tipo) {
	this->tipo = tipo;
}
//*****//
int Areas::getTamanho() {
	return this->tamanho;
}

void Areas::setTamanho(int tamanho) {
	this->tamanho = tamanho;
}

Operario^ Areas::getOperario() {
	return this->objOperario;
}
void Areas::setOperario(Operario^ objOperario) {
	this->objOperario = objOperario;
}