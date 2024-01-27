#pragma once


namespace SistemaFincaInteligenteController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;


	public ref class LuzPuertaPrincipalController {

	public:
		LuzPuertaPrincipalController();

		List<LuzPuertaPrincipal^>^ buscarTodas();
		/*Metodo que devuelve una lista de operarios*/
		//List<LuzGranero^>^ buscarOperarios(String^ nombreOperario);
		//void eliminarOperario(int codigoEliminar);

		void escribirArchivo(List<LuzPuertaPrincipal^>^ listaLuzPuertaPrincipal);/*Guardar todas las carreras en el archivo txt*/
		//int existeOperario(int codigo);
		//void registrarLuzGranero(int dato);

	//	Operario^ buscarOperario(int codigo);
		void actualizarLuzPuertaPrincipal(int dato);

	};
}