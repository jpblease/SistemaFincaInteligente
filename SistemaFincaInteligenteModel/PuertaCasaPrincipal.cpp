#include "PuertaCasaPrincipal.h"

using namespace SistemaFincaInteligenteModel;

PuertaCasaPrincipal::PuertaCasaPrincipal() {

}

PuertaCasaPrincipal::PuertaCasaPrincipal(int puertadormitorio, int puertaoficina, int puertacomedor) {
	this->puertadormitorio = puertadormitorio;
	this->puertaoficina = puertaoficina;
	this->puertacomedor = puertacomedor;
}

int PuertaCasaPrincipal::getpuertadormitorio() {
	return this->puertadormitorio;
}

void PuertaCasaPrincipal::setpuertadormitorio(int puertadormitorio) {
	this->puertadormitorio = puertadormitorio;
}

int PuertaCasaPrincipal::getpuertaoficina() {
	return this->puertaoficina;
}

void PuertaCasaPrincipal::setpuertaoficina(int puertaoficina) {
	this->puertaoficina = puertaoficina;
}

int PuertaCasaPrincipal::getpuertacomedor() {
	return this->puertacomedor;
}

void PuertaCasaPrincipal::setpuertacomedor(int puertacomedor) {
	this->puertacomedor = puertacomedor;
}
