#pragma once



namespace SistemaFincaInteligenteController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;


	public ref class PuertaCasaPrincipalController {

	public:
		PuertaCasaPrincipalController();

		List<PuertaCasaPrincipal^>^ buscarTodas();
		/*Metodo que devuelve una lista de operarios*/
		//List<Operario^>^ buscarOperarios(String^ nombreOperario);
		//void eliminarOperario(int codigoEliminar);

		void escribirArchivo(List<PuertaCasaPrincipal^>^ listaPuertaCasaPrincipal);/*Guardar todas las carreras en el archivo txt*/
		//int existeOperario(int codigo);
		//void registrarOperario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion);

		//Operario^ buscarOperario(int codigo);
		void actualizarpuertaCasaPrincipal(int puertadormitorio, int puertaoficina, int puertacomedor);

	};
}