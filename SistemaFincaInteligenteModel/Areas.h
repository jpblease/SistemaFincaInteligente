#pragma once
#include "Operario.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SistemaFincaInteligenteModel {

	public ref class Areas {
	private:
		int codigo;
		String^ nombre;
		String^ tipo;
		int tamanho;
		//List<Operario^>^ listaoperarios;
		Operario^ objOperario;
	public:
		Areas();
		Areas(int codigo, String^ nombre, String^ tipo, int tamanho, Operario^ objOperario);
		Areas(String^ nombre, String^ tipo, int tamanho);
		Areas(int codigo, String^ nombre, String^ tipo, int tamanho);
		/*Propiedades - GET y SET*/
		int getCodigo(); /*Obtiene el valor*/
		void setCodigo(int codigo); /*Actualiza el valor*/
		String^ getNombre(); /*Obtiene el valor*/
		void setNombre(String^ nombre); /*Actualiza el valor*/
		String^ getTipo(); /*Obtiene el valor*/
		void setTipo(String^ tipo); /*Actualiza el valor*/
		int getTamanho(); /*Obtiene el valor*/
		void setTamanho(int tamanho); /*Actualiza el valor*/
		Operario^ getOperario();
		void setOperario(Operario^ objOperario);
	};
}