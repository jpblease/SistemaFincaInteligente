#include "Login.h"

using namespace ElParaisoPUCPModel;

Login::Login() {

}

Login::Login(int codigo, int id, String^ correo, String^ password) {
	this->codigo = codigo;
	this->id = id;
	this->correo = correo;
	this->password = password;
}

int Login::getCodigo() {
	return this->codigo;
}

void Login::setCodigo(int codigo) {
	this->codigo = codigo;
}
//*****//
int Login::getId() {
	return this->id;
}

void Login::setId(int id) {
	this->id = id;
}
//*****//
String^ Login::getCorreo() {
	return this->correo;
}

void Login::setCorreo(String^ correo) {
	this->correo = correo;
}
//*****//
String^ Login::getPassword() {
	return this->password;
}

void Login::setPassword(String^ password) {
	this->password = password;
}
