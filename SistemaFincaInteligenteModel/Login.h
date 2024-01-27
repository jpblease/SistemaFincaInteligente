#pragma once
#include "Inicio.h"

using namespace System;

namespace ElParaisoPUCPModel {

	public ref class Login {
	private:
		int codigo;
		int id;
		String^ correo;
		String^ password;

	public:
		Login();
		Login(int codigo, int id, String^ correo, String^ password);
		/*Propiedades - GET y SET*/
		int getCodigo(); /*Obtiene el valor*/
		void setCodigo(int codigo); /*Actualiza el valor*/
		int getId(); /*Obtiene el valor*/
		void setId(int id); /*Actualiza el valor*/
		String^ getCorreo(); /*Obtiene el valor*/
		void setCorreo(String^ correo); /*Actualiza el valor*/
		String^ getPassword(); /*Obtiene el valor*/
		void setPassword(String^ password); /*Actualiza el valor*/

	};


}
