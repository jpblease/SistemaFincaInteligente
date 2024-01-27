#include "Copropietario.h"

using namespace SistemaFincaInteligenteModel;

Copropietario::Copropietario() {

}

Copropietario::Copropietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
}


Copropietario::Copropietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion) {
	this->codigo = codigo;
	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
	this->telefono = telefono;
	this->direccion = direccion;
}


Copropietario::Copropietario(int codigo, String^ usuario, String^ contrasena, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion, String^ tipodeusuario) {
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


Copropietario::Copropietario(String^ usuario, String^ contrasena, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion, String^ tipodeusuario) {

	this->nombre = nombre;
	this->apellidoP = apellidoP;
	this->apellidoM = apellidoM;
	this->telefono = telefono;
	this->direccion = direccion;
	this->usuario = usuario;
	this->contrasena = contrasena;
	this->tipodeusuario = tipodeusuario;

}
int Copropietario::getCodigo() {
	return this->codigo;
}

void Copropietario::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
String^ Copropietario::getNombre() {
	return this->nombre;
}

void Copropietario::setNombre(String^ nombre) {
	this->nombre = nombre;
}
//*****//
String^ Copropietario::getApellidoP() {
	return this->apellidoP;
}

void Copropietario::setApellidoP(String^ apellidoP) {
	this->apellidoP = apellidoP;
}
//*****//
String^ Copropietario::getApellidoM() {
	return this->apellidoM;
}

void Copropietario::setApellidoM(String^ apellidoM) {
	this->apellidoM = apellidoM;
}

int Copropietario::getTelefono() {
	return this->telefono;
}

void Copropietario::setTelefono(int telefono) {
	this->telefono = telefono;

}

String^ Copropietario::getDireccion() {
	return this->direccion;
}

void Copropietario::setDireccion(String^ direccion) {
	this->direccion = direccion;
}



String^ Copropietario::getUsuario() {
	return this->usuario;
}
void Copropietario::setUsuario(String^ usuario) {
	this->usuario = usuario;
}

String^ Copropietario::getContrasena() {
	return this->contrasena;
}
void Copropietario::setContrasena(String^ contrasena) {
	this->contrasena = contrasena;
}

String^ Copropietario::getTipodeUsuario() {
	return this->tipodeusuario;
}
void Copropietario::setTipodeUsuario(String^ tipodeusuario) {
	this->tipodeusuario = tipodeusuario;
}