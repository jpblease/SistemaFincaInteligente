#include "CopropietarioController.h"

using namespace SistemaFincaInteligenteController;
using namespace System::IO;
using namespace System::Data::SqlClient;
CopropietarioController::CopropietarioController() {
	this->objConexion = gcnew SqlConnection();
}

List<Copropietario^>^ CopropietarioController::buscarCopropietarios(String^ nombreCopropietario) {

	List<Copropietario^>^ listaCopropietariosEncontrados = gcnew List<Copropietario^>();
	array<String^>^ lineas = File::ReadAllLines("copropietarios.txt");
	String^ separadores = ";";
	for each (String ^ lineaCopropietario in lineas) {
		array<String^>^ datos = lineaCopropietario->Split(separadores->ToCharArray());/*Permite separar por el separador(;)*/
		int codigoCopropietario = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellidoP = datos[2];
		String^ apellidoM = datos[3];
		if (nombre->Contains(nombreCopropietario)) {  /*filtro */
			Copropietario^ objCopropietario = gcnew Copropietario(codigoCopropietario, nombre, apellidoP, apellidoM);
			listaCopropietariosEncontrados->Add(objCopropietario);
		}
	}
	return listaCopropietariosEncontrados;

}


List<Copropietario^>^ CopropietarioController::buscarTodas() {

	List<Copropietario^>^ listaCopropietariosEncontrados = gcnew List<Copropietario^>();
	array<String^>^ lineas = File::ReadAllLines("copropietarios.txt");
	String^ separadores = ";";
	for each (String ^ lineaCopropietario in lineas) {
		array<String^>^ datos = lineaCopropietario->Split(separadores->ToCharArray());/*Permite separar por el separador(;)*/
		int codigoCopropietario = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ apellidoP = datos[2];
		String^ apellidoM = datos[3];

		Copropietario^ objCopropietario = gcnew Copropietario(codigoCopropietario, nombre, apellidoP, apellidoM);
		listaCopropietariosEncontrados->Add(objCopropietario);

	}
	return listaCopropietariosEncontrados;

}

void CopropietarioController::eliminarCopropietario(int codigoEliminar) {

	List<Copropietario^>^ listaCopropietarios = buscarTodas();
	for (int i = 0; i < listaCopropietarios->Count; i++) {
		Copropietario^ objCopropietario = listaCopropietarios[i];
		if (objCopropietario->getCodigo() == codigoEliminar) {
			listaCopropietarios->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaCopropietarios);
}

void CopropietarioController::escribirArchivo(List<Copropietario^>^ listaCopropietarios) {

	array<String^>^ lineasArchivo = gcnew array<String^>(listaCopropietarios->Count);
	for (int i = 0; i < listaCopropietarios->Count; i++) {
		Copropietario^ objCopropietario = listaCopropietarios[i];
		lineasArchivo[i] = objCopropietario->getCodigo() + ";" + objCopropietario->getNombre() + ";" + objCopropietario->getApellidoP() + ";" + objCopropietario->getApellidoM();
	}
	File::WriteAllLines("copropietarios.txt", lineasArchivo);

}


int CopropietarioController::existeCopropietario(int codigo) {

	int existe = 0;

	List<Copropietario^>^ listaCopropietarios = buscarTodas();
	for (int i = 0; i < listaCopropietarios->Count; i++) {
		Copropietario^ objCopropietario = listaCopropietarios[i];
		if (objCopropietario->getCodigo() == codigo) {
			existe = 1;
			break;
		}
	}
	return existe;

}

void CopropietarioController::registrarCopropietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM) {

	List<Copropietario^>^ listaCopropietarios = buscarTodas();
	Copropietario^ objCopropietarioNuevo = gcnew Copropietario(codigo, nombre, apellidoP, apellidoM);
	listaCopropietarios->Add(objCopropietarioNuevo);
	escribirArchivo(listaCopropietarios);
}



Copropietario^ CopropietarioController::buscarCopropietario(int codigo) {
	Copropietario^ objCopropietario = gcnew Copropietario();
	List<Copropietario^>^ listaCopropietarios = buscarTodas();
	for (int i = 0; i < listaCopropietarios->Count; i++) {
		if (listaCopropietarios[i]->getCodigo() == codigo) {
			/*Aqui lo encontre*/
			objCopropietario->setCodigo(listaCopropietarios[i]->getCodigo());
			objCopropietario->setNombre(listaCopropietarios[i]->getNombre());
			objCopropietario->setApellidoP(listaCopropietarios[i]->getApellidoP());
			objCopropietario->setApellidoM(listaCopropietarios[i]->getApellidoM());
			break;
		}
	}
	return objCopropietario;

}
void CopropietarioController::actualizarCopropietario(int codigo, String^ nombre, String^ apellidoP, String^ apellidoM) {

	List<Copropietario^>^ listaCopropietarios = buscarTodas();
	for (int i = 0; i < listaCopropietarios->Count; i++) {
		if (listaCopropietarios[i]->getCodigo() == codigo) {
			listaCopropietarios[i]->setNombre(nombre);

			listaCopropietarios[i]->setApellidoP(apellidoP);
			listaCopropietarios[i]->setApellidoM(apellidoM);
		}
	}
	escribirArchivo(listaCopropietarios);
}

/////////////BASE DE DATOS


void CopropietarioController::abrirConexion() {

	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20180394;User Id=a20180394;Password=hWAEHjUK";

	this->objConexion->Open(); /*Apertura de la conexion a Base Datos*/
}
void CopropietarioController::cerrarConexion() {
	this->objConexion->Close();/*Cierra la conexion con base de datos*/

}


void CopropietarioController::agregarTrabajador(Copropietario^ objCopropietario) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "insert into Trabajadores(usuario,contrasena,nombre,apellidoP,apellidoM,telefono,direccion,tipodeusuario) values ('" + objCopropietario->getUsuario() + "','" + objCopropietario->getContrasena() + "','" + objCopropietario->getNombre() + "','" + objCopropietario->getApellidoP() + "','" + objCopropietario->getApellidoM() + "'," + objCopropietario->getTelefono() + ",'" + objCopropietario->getDireccion() + "','" + objCopropietario->getTipodeUsuario() + "');";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

List<Copropietario^>^ CopropietarioController::buscarCopropietario() {

	List<Copropietario^>^ listaCopropietario = gcnew List<Copropietario^>();

	abrirConexion();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	SqlCommand^ objSentencia = gcnew SqlCommand();

	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->Connection = this->objConexion;

	/*Aqui voy a indicar la sentencia que voy a ejecutar*/

	objSentencia->CommandText = "select codigo,nombre,apellidoP,apellidoM,telefono,direccion from Trabajadores where tipodeusuario= 'copropietario' ";

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

		Copropietario^ objCopropietario = gcnew Copropietario(codigo, nombre, apellidoP, apellidoM, telefono, direccion);
		listaCopropietario->Add(objCopropietario);

	}

	cerrarConexion();

	return listaCopropietario;


}



List<Copropietario^>^ CopropietarioController::buscarCopropietarioxNombre(String^ nombre) {

	List<Copropietario^>^ listaCopropietario = gcnew List<Copropietario^>();

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

		Copropietario^ objCopropietario = gcnew Copropietario(codigo, nombre, apellidoP, apellidoM, telefono, direccion);
		listaCopropietario->Add(objCopropietario);

	}

	cerrarConexion();

	return listaCopropietario;

}


void CopropietarioController::eliminarCopropietarioBD(int codigo) {
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



Copropietario^ CopropietarioController::buscarCopropietariosBD(int codigo) {
	Copropietario^ objCopropietario = nullptr;
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

		objCopropietario = gcnew Copropietario(codigo, usuario, contrasena, nombre, apellidoP, apellidoM, telefono, direccion, tipodeusuario);
	}
	cerrarConexion();
	return objCopropietario;
}


void CopropietarioController::actualizarCopropietarioBD(Copropietario^ objCopropietario) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "update Trabajadores set usuario='" + objCopropietario->getUsuario() + "', contrasena='" + objCopropietario->getContrasena() + "', nombre='" + objCopropietario->getNombre() + "', apellidoP='" + objCopropietario->getApellidoP() + "',apellidoM='" + objCopropietario->getApellidoM() + "',telefono='" + objCopropietario->getTelefono() + "',direccion='" + objCopropietario->getDireccion() + "',tipodeusuario='" + objCopropietario->getTipodeUsuario() + "' where codigo = " + objCopropietario->getCodigo();
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}


int CopropietarioController::existeUsuarioCopropietario(String^ usuario, String^ contrasena) {


	int existe = 0; //Comensamos que no existe 

	abrirConexion();

	SqlCommand^ objSentencia = gcnew SqlCommand(); /*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	objSentencia->Connection = this->objConexion;/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->CommandText = "select usuario,contrasena from Trabajadores where  tipodeusuario='copropietario'"; /*Aqui voy a indicar la sentencia que voy a ejecutar*/

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
