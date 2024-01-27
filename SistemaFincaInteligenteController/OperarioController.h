#pragma once



namespace SistemaFincaInteligenteController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;
	using namespace System::Data::SqlClient; 

	public ref class OperarioController {


	private:

		SqlConnection^ objConexion;

	public:
		OperarioController();

		List<Operario^>^ buscarTodas();
		/*Metodo que devuelve una lista de operarios*/
		List<Operario^>^ buscarOperarios(String^ nombreOperario);
		void eliminarOperario(int codigoEliminar);

		void escribirArchivo(List<Operario^>^ listaOperarios);/*Guardar todas las carreras en el archivo txt*/
		int existeOperario(int codigo);
		void registrarOperario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion);
	
		Operario^ buscarOperario(int codigo);
		void actualizarOperario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion);
		
		////////////BASE DE DATOS//////////////////
		void abrirConexion();
		void cerrarConexion();
		void agregarTrabajador(Operario^ objOperario);
		List<Operario^>^ buscarOperario();
		List<Operario^>^ buscarOperarioxNombre(String^ nombre);

		void eliminarOperarioBD(int codigo);

		Operario^ buscarOperariosBD(int codigo);

		void actualizarOperarioBD(Operario^ objSemestre);

		int existeUsuarioPropietario(String^ usuario, String^ contrasena);

		int existeUsuarioOperario(String^ usuario, String^ contrasena); 

		int validarExisteUsuarioPropietario(String^ usuario);
	};
}
