#pragma once


using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class LuzGraneroGrafica {
	private:
		int dato;


	public:
		LuzGraneroGrafica();
		LuzGraneroGrafica(int dato);
		int getDato();
		void setDato(int dato);


	};

}