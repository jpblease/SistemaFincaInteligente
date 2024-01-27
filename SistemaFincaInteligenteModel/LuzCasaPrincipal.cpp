#include "LuzCasaPrincipal.h"

using namespace SistemaFincaInteligenteModel;

LuzCasaPrincipal::LuzCasaPrincipal() {

}

LuzCasaPrincipal::LuzCasaPrincipal(int luzdormitorio, int luzoficina, int luzcomedor) {
	this-> luzdormitorio = luzdormitorio;
	this-> luzoficina = luzoficina;
	this->luzcomedor = luzcomedor;
	//this->puertadormitorio = puertadormitorio;
	//this->puertaoficina = puertaoficina;
	//this->puertacomedor = puertacomedor;
}

int LuzCasaPrincipal::getluzdormitorio() {
	return this->luzdormitorio;
}

void LuzCasaPrincipal::setluzdormitorio(int luzdormitorio) {
	this->luzdormitorio = luzdormitorio;
}

int LuzCasaPrincipal::getluzoficina() {
	return this->luzoficina;
}

void LuzCasaPrincipal::setluzoficina(int luzoficina) {
	this->luzoficina = luzoficina;
}

int LuzCasaPrincipal::getluzcomedor() {
	return this->luzcomedor;
}

void LuzCasaPrincipal::setluzcomedor(int luzcomedor) {
	this->luzcomedor = luzcomedor;
}

/*
int LuzCasaPrincipal::getpuertadormitorio() {
	return this->puertadormitorio;
}

void LuzCasaPrincipal::setpuertadormitorio(int puertadormitorio) {
	this->puertadormitorio = puertadormitorio;
}

int LuzCasaPrincipal::getpuertaoficina() {
	return this->puertaoficina;
}

void LuzCasaPrincipal::setpuertaoficina(int puertaoficina) {
	this->puertaoficina = puertaoficina;
}

int LuzCasaPrincipal::getpuertacomedor() {
	return this->puertacomedor;
}

void LuzCasaPrincipal::setpuertacomedor(int puertacomedor) {
	this->puertacomedor = puertacomedor;
}
*/