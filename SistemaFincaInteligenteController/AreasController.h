#pragma once

namespace SistemaFincaInteligenteController { 

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;
	using namespace System::Data::SqlClient;
	public ref class AreasController {
	private:
		SqlConnection^ objConexion;
	public:
		AreasController();

		//List<Areas^>^ buscarTodas();

		List<Areas^>^ buscarAreaxOperario(String^ nombreOperario); 

		List<Areas^>^ buscarAreaxNombrexOperario(String^ nombrearea, String^ operario);
	 
		///////////// BASE DE DATOS

		void abrirConexion();
		void cerrarConexion();

		void agregarAreas(Areas^ objAreas);
		List<Areas^>^ buscarAreas();
		//List<Areas^>^ buscarAreasxNombre(String^ nombre);

		void eliminarAreasBD(int codigo);

		Areas^ buscarAreasBD(int codigo);

		void actualizarAreasBD(Areas^ objSemestre);

		//int existeUsuarioPropietario(String^ usuario, String^ contrasena);

		//int existeUsuarioOperario(String^ usuario, String^ contrasena);

	};
}