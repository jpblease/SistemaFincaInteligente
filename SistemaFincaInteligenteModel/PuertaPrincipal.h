#pragma once


using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class PuertaPrincipal {
	private:
		int dato;


	public:
		PuertaPrincipal();
		PuertaPrincipal(int dato);
		int getDato();
		void setDato(int dato);


	};

}