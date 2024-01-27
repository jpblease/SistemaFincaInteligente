#pragma once


using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class LuzPuertaPrincipal {
	private:
		int dato;


	public:
		LuzPuertaPrincipal();
		LuzPuertaPrincipal(int dato);
		int getDato();
		void setDato(int dato);


	};

}