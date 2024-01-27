#pragma once
#include "Operario.h"

using namespace System;

namespace ElParaisoPUCPModel {

	public ref class Ocupacion {
	private:
		int codigo;
		String^ nombre;
		String^ tipo;
		int dificultad;

	public:
		Ocupacion();
		Ocupacion(int codigo, String^ nombre, String^ tipo, int dificultad);
		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombre();
		void setNombre(String^ nombre);
		String^ getTipo();
		void setTipo(String^ tipo);
		int getDificultad();
		void setDificultad(int dificultad);
	
	};

}
