#pragma once

namespace SistemaFincaInteligenteController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;


	public ref class PuertaPrincipalController {

	public:
		PuertaPrincipalController();

		List<PuertaPrincipal^>^ buscarTodas();
		/*Metodo que devuelve una lista de operarios*/
		//List<LuzGranero^>^ buscarOperarios(String^ nombreOperario);
		//void eliminarOperario(int codigoEliminar);

		void escribirArchivo(List<PuertaPrincipal^>^ listaPuertaPrincipal);/*Guardar todas las carreras en el archivo txt*/
		//int existeOperario(int codigo);
		//void registrarLuzGranero(int dato);

	//	Operario^ buscarOperario(int codigo);
		void actualizarPuertaPrincipal(int dato);

	};
}