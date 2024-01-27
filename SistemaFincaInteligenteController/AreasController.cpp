#include "AreasController.h"
#include "OperarioController.h"

using namespace SistemaFincaInteligenteController;
using namespace System::IO;

using namespace System::Data::SqlClient;
AreasController::AreasController() {
	this->objConexion = gcnew SqlConnection();
}



List<Areas^>^ AreasController::buscarAreaxOperario(String^ nombreOperario) {
	List<Areas^>^ listaAreasEncontrados = gcnew List<Areas^>(); 
	array<String^>^ lineas = File::ReadAllLines("Areas.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ datos = lineaCurso->Split(separadores->ToCharArray());
		int codigoArea = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		String^ tipo = datos[2];
		int tamanho = Convert::ToInt32(datos[3]);
		int codigoOperario = Convert::ToInt32(datos[4]);
		OperarioController^ objOperarioController = gcnew OperarioController();/*busacar carreras*/
		Operario^ objOperario = objOperarioController->buscarOperario(codigoOperario);/*le paso el codigo y me devuelve la carrera*/
		if ((objOperario->getNombre()+" "+ objOperario->getApellidoP()+" "+ objOperario->getApellidoM())->Contains(nombreOperario)) {
			Areas^ objAreas = gcnew Areas(codigoArea, nombre, tipo, tamanho, objOperario);
			listaAreasEncontrados->Add(objAreas);
		}
	}
	return listaAreasEncontrados;
}

List<Areas^>^ AreasController::buscarAreaxNombrexOperario(String^ nombrearea, String^ operario) {

	List<Areas^>^ listaAreasEncontrados = gcnew List<Areas^>();
	array<String^>^ lineas = File::ReadAllLines("Areas.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ datos = lineaCurso->Split(separadores->ToCharArray());
		int codigoArea = Convert::ToInt32(datos[0]);
		String^ nombreArea = datos[1];
		String^ tipo = datos[2];
		int tamanho = Convert::ToInt32(datos[3]); 
		int codigoOperario = Convert::ToInt32(datos[4]);
		OperarioController^ objOperarioController = gcnew OperarioController(); 
		Operario^ objOperario = objOperarioController->buscarOperario(codigoOperario);
		if (((objOperario->getNombre()+" "+ objOperario->getApellidoP()+" "+ objOperario->getApellidoM())->Contains(operario)) && nombreArea->Contains(nombrearea)) {
			Areas^ objAreas = gcnew Areas(codigoArea, nombreArea, tipo, tamanho, objOperario);
			listaAreasEncontrados->Add(objAreas);
		}
	}
	return listaAreasEncontrados;







}

/////////////BASE DE DATOS


void AreasController::abrirConexion() {

	/*Cadena de conexion: Servidor de BD, usuario de BD, password BD, nombre de la BD*/

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20180394;User Id=a20180394;Password=hWAEHjUK";

	this->objConexion->Open(); /*Apertura de la conexion a Base Datos*/
}
void AreasController::cerrarConexion() {
	this->objConexion->Close();/*Cierra la conexion con base de datos*/

}

/////BASE DE DATOS



void AreasController::agregarAreas(Areas^ objAreas) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "insert into Area(nombre,tipo,tamanho) values ('" + objAreas->getNombre() + "','" + objAreas->getTipo() + "','" + objAreas->getTamanho() + "');";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

List<Areas^>^ AreasController::buscarAreas() {

	List<Areas^>^ listaAreas = gcnew List<Areas^>();

	abrirConexion();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/

	SqlCommand^ objSentencia = gcnew SqlCommand();

	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/

	objSentencia->Connection = this->objConexion;

	/*Aqui voy a indicar la sentencia que voy a ejecutar*/

	objSentencia->CommandText = "select codigo,nombre,tipo,tamanho from Area  ";

	/*Aqui ejecuto la sentencia en la Base de Datos*/

	/*Para Select siempre sera ExecuteReader*/

	/*Para select siempre va a devolver un SqlDataReader*/
	/*Para hacer un slect siempre va ExecuteReader*/

	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {

		int codigo = safe_cast<int>(objData[0]);

		String^ nombre = safe_cast<String^>(objData[1]);

		String^ tipo = safe_cast<String^>(objData[2]);

		

		int tamanho = safe_cast<int>(objData[3]);

		//String^ direccion = safe_cast<String^>(objData[4]);
		//Año academico tiene una lista de semestres academicos ya para relacionarlo creamos un objeto
		//SemestreAcademicoController^ objSemestreAcademicoController = gcnew SemestreAcademicoController();

		//List<SemestreAcademico^>^ listaSemestres = objSemestreAcademicoController->buscarxCodigoAnho(codigo);

		Areas^ objAreas = gcnew Areas(codigo, nombre, tipo,tamanho);
		listaAreas->Add(objAreas);

	}

	cerrarConexion();

	return listaAreas;


}

void AreasController::eliminarAreasBD(int codigo) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "delete from Area where codigo=" + codigo + ";";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}



Areas^ AreasController::buscarAreasBD(int codigo) {
	Areas^ objAreas = nullptr;
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "select * from Area where codigo=" + codigo;
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {

		int codigo = safe_cast<int>(objData[0]);

		String^ nombre = safe_cast<String^>(objData[1]);

		String^ tipo = safe_cast<String^>(objData[2]);


		

		int tamanho = safe_cast<int>(objData[3]);

;

		objAreas = gcnew Areas(codigo, nombre, tipo, tamanho);
	}
	cerrarConexion();
	return objAreas;
}


void AreasController::actualizarAreasBD(Areas^ objAreas) {
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "update Area set nombre='" + objAreas->getNombre() + "', tipo='" + objAreas->getTipo() + "', tamanho='" + objAreas->getTamanho() + "' where codigo = " + objAreas->getCodigo();
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
