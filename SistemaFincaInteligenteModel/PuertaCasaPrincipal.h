#pragma once

using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class PuertaCasaPrincipal {
	private:
		int puertadormitorio;
		int puertaoficina;
		int puertacomedor;


	public:
		PuertaCasaPrincipal();
		PuertaCasaPrincipal(int puertadormitorio, int puertaoficina, int puertacomedor);

		int getpuertadormitorio();
		void setpuertadormitorio(int puertadormitorio);

		int getpuertaoficina();
		void setpuertaoficina(int puertaoficina);

		int getpuertacomedor();
		void setpuertacomedor(int puertacomedor);

	};

}