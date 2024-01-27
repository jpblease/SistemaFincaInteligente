#pragma once

using namespace System;

namespace ElParaisoPUCPModel {

	public ref class Inicio {
	private:
		int codigo;
		int tipoventana;
		

	public:
		Inicio();
		Inicio(int codigo, int tipoventana);
		/*Propiedades - GET y SET*/
		int getCodigo(); /*Obtiene el valor*/
		void setCodigo(int codigo); /*Actualiza el valor*/
		int getTipoventana(); /*Obtiene el valor*/
		void setTipoventana(int tipoventana); /*Actualiza el valor*/
		

	};


}

