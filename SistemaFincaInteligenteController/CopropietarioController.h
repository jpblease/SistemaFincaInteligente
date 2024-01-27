#pragma once


namespace SistemaFincaInteligenteController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;
	using namespace System::Data::SqlClient;

	public ref class CopropietarioController {
	private:
		SqlConnection^ objConexion; 
	public:
		CopropietarioController();

		List<Copropietario^>^ buscarTodas();
		/*Metodo que devuelve una lista de operarios*/
		List<Copropietario^>^ buscarCopropietarios(String^ nombreCopropietario);
		void eliminarCopropietario(int codigoEliminar);

		void escribirArchivo(List<Copropietario^>^ listaCopropietarios);
	    

		int existeCopropietario(int codigo);
		void registrarCopropietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM);
	
		Copropietario^ buscarCopropietario(int codigo);
		void  actualizarCopropietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM);
	
	/////////////BASE DE DATOS
		void abrirConexion();
		void cerrarConexion();

		void agregarTrabajador(Copropietario^ objCoperario);
		List<Copropietario^>^ buscarCopropietario();
		List<Copropietario^>^ buscarCopropietarioxNombre(String^ nombre);

		void eliminarCopropietarioBD(int codigo);

		Copropietario^ buscarCopropietariosBD(int codigo);

		void actualizarCopropietarioBD(Copropietario^ objSemestre);

		int existeUsuarioCopropietario(String^ usuario, String^ contrasena);
	
	};
}