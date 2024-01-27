#include "Operario.h"

using namespace SistemaFincaInteligenteModel;

Operario::Operario() {

}

Operario::Operario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
	this->telefono = telefono;
	this->direccion = direccion;
}


Operario::Operario(int codigo, String^ usuario, String^ contrasena, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion, String^ tipodeusuario) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
	this->telefono = telefono;
	this->direccion = direccion;
	this->usuario = usuario;
	this->contrasena = contrasena;
	this->tipodeusuario = tipodeusuario;

}


Operario::Operario(String^ usuario, String^ contrasena, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion, String^ tipodeusuario) {

	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
	this->telefono = telefono;
	this->direccion = direccion;
	this->usuario = usuario;
	this->contrasena = contrasena;
	this->tipodeusuario = tipodeusuario;

}

int Operario::getCodigo() {
	return this->codigo;
}

void Operario::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
String^ Operario::getNombre() {
	return this->nombre;
}

void Operario::setNombre(String^ nombre) {
	this->nombre = nombre;
}
//*****//
String^ Operario::getApellidoP() {
	return this->apellidoP;
}

void Operario::setApellidoP(String^ apellidoP) {
	this->apellidoP = apellidoP;
}
//*****//
String^ Operario::getApellidoM() {
	return this->apellidoM;
}

void Operario::setApellidoM(String^ apellidoM) {
	this->apellidoM = apellidoM;
}

int Operario::getTelefono() {
	return this->telefono;
}

void Operario::setTelefono(int telefono) {
	this->telefono = telefono;

}

String^ Operario::getDireccion() {
	return this->direccion;
}

void Operario::setDireccion(String^ direccion) {
	this->direccion = direccion;
}



String^ Operario::getUsuario() {
	return this->usuario;
}
void Operario::setUsuario(String^ usuario) {
	this->usuario = usuario;
}

String^ Operario::getContrasena() {
	return this->contrasena;
}
void Operario::setContrasena(String^ contrasena) {
	this->contrasena = contrasena;
}

String^ Operario::getTipodeUsuario() {
	return this->tipodeusuario;
}
void Operario::setTipodeUsuario(String^ tipodeusuario) {
	this->tipodeusuario = tipodeusuario;
} 