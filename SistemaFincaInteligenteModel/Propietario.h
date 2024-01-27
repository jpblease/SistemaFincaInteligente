#pragma once
#include "Login.h"

using namespace System;

namespace ElParaisoPUCPModel {

	public ref class Propietario {
	private:
		int codigo;
		String^ nombre;
		String^ apellidoP;
		String^ apellidoM;

	public:
		Propietario();
		Propietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM);
		/*Propiedades - GET y SET*/
		int getCodigo(); /*Obtiene el valor*/
		void setCodigo(int codigo); /*Actualiza el valor*/
		String^ getNombre(); /*Obtiene el valor*/
		void setNombre(String^ nombre); /*Actualiza el valor*/
		String^ getApellidoP(); /*Obtiene el valor*/
		void setApellidoP(String^ apellidoP); /*Actualiza el valor*/
		String^ getApellidoM(); /*Obtiene el valor*/
		void setApellidoM(String^ apellidoM); /*Actualiza el valor*/

	};


}

