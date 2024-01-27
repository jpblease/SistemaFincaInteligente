#pragma once
//#include "Areas.h"
#include "Copropietario.h"
#include "Propietario.h"


using namespace System;

namespace ElParaisoPUCPModel {

	public ref class Finca {
	private:
		int codigo;
		String^ nombre;
		int tama�o;
		String^ lugar;

	public:
		Finca();
		Finca(int codigo, String^ nombre, int tama�o, String^ lugar);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombre();
		void setNombre(String^ nombre);
		int getTama�o();
		void setTama�o(int tama�o);
		String^ getLugar();
		void setLugar(String^ lugar);

	};

}

