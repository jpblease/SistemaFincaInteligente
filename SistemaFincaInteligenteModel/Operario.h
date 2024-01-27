#pragma once
#include "Login.h"

using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class Operario {
	private:
		int codigo;

		String^ usuario;
		String^ contrasena;
		String^ nombre;
		String^ apellidoP;
		String^ apellidoM;
		int telefono;
		String^ direccion;
		String^ tipodeusuario;

	public:
		Operario();
		Operario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion);
		Operario(int codigo, String^ usuario, String^ contrasena, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion, String^ tipodeusuario);
		Operario(String^ usuario, String^ contrasena, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion, String^ tipodeusuario);


		/*Propiedades - GET y SET*/
		int getCodigo(); /*Obtiene el valor*/
		void setCodigo(int codigo); /*Actualiza el valor*/
		String^ getNombre(); /*Obtiene el valor*/
		void setNombre(String^ nombre); /*Actualiza el valor*/
		String^ getApellidoP(); /*Obtiene el valor*/
		void setApellidoP(String^ apellidoP); /*Actualiza el valor*/
		String^ getApellidoM(); /*Obtiene el valor*/
		void setApellidoM(String^ apellidoM); /*Actualiza el valor*/

		int getTelefono();
		void setTelefono(int telefono);

		String^ getDireccion();
		void setDireccion(String^ direccion);

		String^ getUsuario();
		void setUsuario(String^ usuario);

		String^ getContrasena();
		void setContrasena(String^ contrasena);

		String^ getTipodeUsuario();
		void setTipodeUsuario(String^ tipodeusuario);

	};


}