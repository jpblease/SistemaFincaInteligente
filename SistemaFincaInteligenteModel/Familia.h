#pragma once

#include"Operario.h"
using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class Familia{
	private:
		int codigo;
		String^ nombre;
		String^ parentesco;
		int telefono;
		Operario^ objOperario;

	public:
		Familia();
		Familia(int codigo, String^ nombre, String^ parentesco,int telefono, Operario^ objOperario); 
		int getCodigo();
		void setCodigo(int codigo);

		String^ getNombre();
		void setNombre(String^ nombre);

		String^ getParentesco();
		void setParentesco(String^ parentesco);

		int getTelefono();
		void setTelefono(double telefono);

		Operario^ getOperario();
		void setOperario(Operario^ objOperario);
	};

}