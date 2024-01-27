#include "OperarioController.h"

using namespace SistemaFincaInteligenteController;
using namespace System::IO;

using namespace System::Data::SqlClient;
OperarioController::OperarioController(){

	this->objConexion = gcnew SqlConnection(); 
}

List<Operario^>^ OperarioController::buscarOperarios(String^ nombreOperario) {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Operario^>^ listaOperariosEncontrados = gcnew List<Operario^>();
	array<String^>^ lineas = File::ReadAllLines("operarios.txt");/*Va tener la informacion de cada linea de archivo*/
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());/*Permite separar por el separador(;)*/
		int codigoOperario = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellidoP = datos[2];
		String^ apellidoM = datos[3];
		int  telefono = Convert::ToInt32(datos[4]);
		String^ direccion = datos[5];
		if (nombre->Contains(nombreOperario)) {  /*filtro */
			Operario^ objOperario = gcnew Operario(codigoOperario, nombre,apellidoP , apellidoM, telefono, direccion);
			listaOperariosEncontrados->Add(objOperario);
		}
	}
	return listaOperariosEncontrados;
}

List<Operario^>^ OperarioController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Operario^>^ listaOperariosEncontrados = gcnew List<Operario^>();
	array<String^>^ lineas = File::ReadAllLines("operarios.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int codigoOperario = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellidoP = datos[2];
		String^ apellidoM = datos[3];
		int  telefono = Convert::ToInt32(datos[4]);
		String^ direccion = datos[5];
		Operario^ objOperario = gcnew Operario(codigoOperario, nombre, apellidoP, apellidoM, telefono, direccion);
		listaOperariosEncontrados->Add(objOperario);
	}
	return listaOperariosEncontrados;
}



void OperarioController::eliminarOperario(int codigoEliminar) {
	List<Operario^>^ listaOperarios = buscarTodas();/*Pasar todas las carrera a una lista*/
	for (int i = 0; i < listaOperarios->Count; i++) {
		Operario^ objOperario = listaOperarios[i];
		if (objOperario->getCodigo() == codigoEliminar) {
			listaOperarios->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaOperarios);
}

void OperarioController::escribirArchivo(List<Operario^>^ listaOperarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaOperarios->Count);
	for (int i = 0; i < listaOperarios->Count; i++) {
		Operario^ objOperario = listaOperarios[i];
		lineasArchivo[i] = objOperario->getCodigo() + ";" + objOperario->getNombre() + ";" + objOperario->getApellidoP() + ";" + objOperario->getApellidoM() + ";" + objOperario->getTelefono() + ";" + objOperario->getDireccion();
	}
	File::WriteAllLines("operarios.txt", lineasArchivo);
}


int OperarioController::existeOperario(int codigo) {
	int existe = 0;
	List<Operario^>^ listaOperarios = buscarTodas();
	for (int i = 0; i < listaOperarios->Count; i++) {
		Operario^ objOperario = listaOperarios[i];
		if (objOperario->getCodigo() == codigo) {
			existe = 1;
			break;
		}
	}
	return existe;
}

void OperarioController::registrarOperario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion) {
	List<Operario^>^ listaOperarios = buscarTodas();
	Operario^ objOperarioNuevo = gcnew Operario(codigo, nombre, apellidoP, apellidoM, telefono, direccion);
	listaOperarios->Add(objOperarioNuevo);
	escribirArchivo(listaOperarios);
}

Operario^ OperarioController::buscarOperario(int codigo) {
	Operario^ objOperario = gcnew Operario();
	List<Operario^>^ listaOperarios = buscarTodas();
	for (int i = 0; i < listaOperarios->Count; i++) {
		if (listaOperarios[i]->getCodigo() == codigo) {
			/*Aqui lo encontre*/
			objOperario->setCodigo(listaOperarios[i]->getCodigo());
			objOperario->setNombre(listaOperarios[i]->getNombre());
			objOperario->setApellidoP(listaOperarios[i]->getApellidoP());
			objOperario->setApellidoM(listaOperarios[i]->getApellidoM());
			objOperario->setTelefono(listaOperarios[i]->getTelefono());
			objOperario->setDireccion(listaOperarios[i]->getDireccion());
			break;
		}
	}
	return objOperario;
}


void OperarioController::actualizarOperario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM, int telefono, String^ direccion) {
	List<Operario^>^ listaOperarios = buscarTodas();
	for (int i = 0; i < listaOperarios->Count; i++) {
		if (listaOperarios[i]->getCodigo() == codigo) {
			listaOperarios[i]->setNombre(nombre);
			/*La fecha de creacion, no cambia, pero la podriamos actualizar tambien*/
			listaOperarios[i]->setApellidoP(apellidoP);
			listaOperarios[i]->setApellidoM(apellidoM);
			listaOperarios[i]->setTelefono(telefono);
			listaOperarios[i]->setDireccion(direccion);
		}
	}
	escribirArchivo(listaOperarios);
}

//////////////BASE DE DATOS/////////

void OperarioController::abrirConexion() {

	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20180394;User Id=a20180394;Password=hWAEHjUK";

	this->objConexion->Open(); /*Apertura de la conexion a Base Datos*/
}
void OperarioController::cerrarConexion() {
	this->objConexion->Close();/*Cierra la conexion con base de datos*/

}


void OperarioController::agregarTrabajador(Operario^ objOperario) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "insert into Trabajadores(usuario,contrasena,nombre,apellidoP,apellidoM,telefono,direccion,tipodeusuario) values ('" + objOperario->getUsuario() + "','" + objOperario->getContrasena() + "','" + objOperario->getNombre() + "','" + objOperario->getApellidoP() + "','" + objOperario->getApellidoM() + "'," + objOperario->getTelefono() + ",'" + objOperario->getDireccion() + "','" + objOperario->getTipodeUsuario() + "');";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

List<Operario^>^ OperarioController::buscarOperario() {

	List<Operario^>^ listaOperario = gcnew List<Operario^>();

	abrirConexion();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	SqlCommand^ objSentencia = gcnew SqlCommand();

	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->Connection = this->objConexion;

	/*Aqui voy a indicar la sentencia que voy a ejecutar*/

	objSentencia->CommandText = "select codigo,nombre,apellidoP,apellidoM,telefono,direccion from Trabajadores where tipodeusuario= 'operario' ";

	/*Aqui ejecuto la sentencia en la Base de Datos*/

	/*Para Select siempre sera ExecuteReader*/

	/*Para select siempre va a devolver un SqlDataReader*/
	/*Para hacer un slect siempre va ExecuteReader*/

	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int codigo = safe_cast<int>(objData[0]);

		String^ nombre = safe_cast<String^>(objData[1]);

		String^ apellidoP = safe_cast<String^>(objData[2]);

		String^ apellidoM = safe_cast<String^>(objData[3]);

		int telefono = safe_cast<int>(objData[4]);

		String^ direccion = safe_cast<String^>(objData[5]);
		//Año academico tiene una lista de semestres academicos ya para relacionarlo creamos un objeto
		//SemestreAcademicoController^ objSemestreAcademicoController = gcnew SemestreAcademicoController();

		//List<SemestreAcademico^>^ listaSemestres = objSemestreAcademicoController->buscarxCodigoAnho(codigo);

		Operario^ objOperario = gcnew Operario(codigo, nombre, apellidoP, apellidoM, telefono, direccion);
		listaOperario->Add(objOperario);

	}

	cerrarConexion();

	return listaOperario;


}



List<Operario^>^ OperarioController::buscarOperarioxNombre(String^ nombre) {

	List<Operario^>^ listaOperario = gcnew List<Operario^>();

	abrirConexion();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	SqlCommand^ objSentencia = gcnew SqlCommand();

	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->Connection = this->objConexion;

	/*Aqui voy a indicar la sentencia que voy a ejecutar*/

	objSentencia->CommandText = "select  codigo,nombre,apellidoP,apellidoM,telefono,direccion from Trabajadores where nombre='" + nombre + "'";

	/*Aqui ejecuto la sentencia en la Base de Datos*/

	/*Para Select siempre sera ExecuteReader*/

	/*Para select siempre va a devolver un SqlDataReader*/
	/*Para hacer un slect siempre va ExecuteReader*/

	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int codigo = safe_cast<int>(objData[0]);

		String^ nombre = safe_cast<String^>(objData[1]);

		String^ apellidoP = safe_cast<String^>(objData[2]);

		String^ apellidoM = safe_cast<String^>(objData[3]);

		int telefono = safe_cast<int>(objData[4]);

		String^ direccion = safe_cast<String^>(objData[5]);


		//SemestreAcademicoController^ objSemestreAcademicoController = gcnew SemestreAcademicoController();

		//List<SemestreAcademico^>^ listaSemestres = objSemestreAcademicoController->buscarxCodigoAnho(codigo);

		Operario^ objOperario = gcnew Operario(codigo, nombre, apellidoP, apellidoM, telefono, direccion);
		listaOperario->Add(objOperario);

	}

	cerrarConexion();

	return listaOperario;

}


void OperarioController::eliminarOperarioBD(int codigo) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "delete from Trabajadores where codigo=" + codigo + ";";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}



Operario^ OperarioController::buscarOperariosBD(int codigo) {
	Operario^ objOperario = nullptr;
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Trabajadores where codigo=" + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {

		int codigo = safe_cast<int>(objData[0]);

		String^ usuario = safe_cast<String^>(objData[1]);

		String^ contrasena = safe_cast<String^>(objData[2]);


		String^ nombre = safe_cast<String^>(objData[3]);

		String^ apellidoP = safe_cast<String^>(objData[4]);

		String^ apellidoM = safe_cast<String^>(objData[5]);

		int telefono = safe_cast<int>(objData[6]);


		String^ direccion = safe_cast<String^>(objData[7]);

		String^ tipodeusuario = safe_cast<String^>(objData[8]);

		objOperario = gcnew Operario(codigo, usuario, contrasena, nombre, apellidoP, apellidoM, telefono, direccion, tipodeusuario);
	}
	cerrarConexion();
	return objOperario;
}


void OperarioController::actualizarOperarioBD(Operario^ objOperario) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "update Trabajadores set usuario='" + objOperario->getUsuario() + "', contrasena='" + objOperario->getContrasena() + "', nombre='" + objOperario->getNombre() + "', apellidoP='" + objOperario->getApellidoP() + "',apellidoM='" + objOperario->getApellidoM() + "',telefono='" + objOperario->getTelefono() + "',direccion='" + objOperario->getDireccion() + "',tipodeusuario='" + objOperario->getTipodeUsuario() + "' where codigo = " + objOperario->getCodigo();
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}


int OperarioController::existeUsuarioPropietario(String^ usuario, String^ contrasena) {


	int existe = 0; //Comensamos que no existe 

	abrirConexion();

	SqlCommand^ objSentencia = gcnew SqlCommand(); /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	objSentencia->Connection = this->objConexion;/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->CommandText = "select usuario,contrasena from Trabajadores where  tipodeusuario='Propietario'"; /*Aqui voy a indicar la sentencia que voy a ejecutar*/

	/*Aqui ejecuto la sentencia en la Base de Datos*/

	/*Para Select siempre sera ExecuteReader*/

	/*Para select siempre va a devolver un SqlDataReader*/
	/*Para hacer un slect siempre va ExecuteReader*/

	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ usuario1 = safe_cast<String^>(objData[0]);

		String^ contrasena1 = safe_cast<String^>(objData[1]);

		if ((usuario == usuario1) && (contrasena == contrasena1)) {
			existe = 1;
			break;
		}

	}

	cerrarConexion();

	return existe;
}

int OperarioController::existeUsuarioOperario(String^ usuario, String^ contrasena) {


	int existe = 0; //Comensamos que no existe 

	abrirConexion();

	SqlCommand^ objSentencia = gcnew SqlCommand(); /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	objSentencia->Connection = this->objConexion;/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->CommandText = "select usuario,contrasena from Trabajadores where  tipodeusuario='operario'"; /*Aqui voy a indicar la sentencia que voy a ejecutar*/

	/*Aqui ejecuto la sentencia en la Base de Datos*/

	/*Para Select siempre sera ExecuteReader*/

	/*Para select siempre va a devolver un SqlDataReader*/
	/*Para hacer un slect siempre va ExecuteReader*/

	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		String^ usuario1 = safe_cast<String^>(objData[0]);

		String^ contrasena1 = safe_cast<String^>(objData[1]);

		if ((usuario == usuario1) && (contrasena == contrasena1)) {
			existe = 1;
			break;
		}

	}

	cerrarConexion();

	return existe;
}


int OperarioController::validarExisteUsuarioPropietario(String^ usuario) {

	int existe = 0; //Comensamos que no existe 

	abrirConexion();

	SqlCommand^ objSentencia = gcnew SqlCommand(); /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	objSentencia->Connection = this->objConexion;/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->CommandText = "select * from Trabajadores where usuario='" + usuario + "';";/*Aqui voy a indicar la sentencia que voy a ejecutar*/

	/*Aqui ejecuto la sentencia en la Base de Datos*/

	/*Para Select siempre sera ExecuteReader*/

	/*Para select siempre va a devolver un SqlDataReader*/
	/*Para hacer un slect siempre va ExecuteReader*/

	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		existe = 1;
		break;
	}

	cerrarConexion();

	return existe;


}