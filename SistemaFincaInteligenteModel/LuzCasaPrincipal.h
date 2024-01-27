#pragma once

using namespace System;

namespace SistemaFincaInteligenteModel {

	public ref class LuzCasaPrincipal {
	private:
		int luzdormitorio;
		int luzoficina;
		int luzcomedor;
		//int puertadormitorio;
		//int puertaoficina;
		//int puertacomedor;


	public:
		LuzCasaPrincipal();
		LuzCasaPrincipal(int luzdormitorio, int luzoficina, int luzcomedor);
		
		int getluzdormitorio();
		void setluzdormitorio(int luzdormitorio);

		int getluzoficina();
		void setluzoficina(int luzoficina);

		int getluzcomedor();
		void setluzcomedor(int luzcomedor);

		/*
		int getpuertadormitorio();
		void setpuertadormitorio(int puertadormitorio);

		int getpuertaoficina();
		void setpuertaoficina(int puertaoficina);

		int getpuertacomedor();
		void setpuertacomedor(int puertacomedor);
		*/
	};

}