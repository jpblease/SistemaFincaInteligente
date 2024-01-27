#pragma once



using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class PuertaGranero {
	private:
		int dato;


	public:
		PuertaGranero();
		PuertaGranero(int dato);
		int getDato();
		void setDato(int dato);


	};

}