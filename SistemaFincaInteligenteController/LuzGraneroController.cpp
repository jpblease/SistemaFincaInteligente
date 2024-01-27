#include"LuzGraneroController.h"


using namespace SistemaFincaInteligenteController;
using namespace System::IO;
using namespace System::Collections::Generic;
LuzGraneroController::LuzGraneroController() {

}

List<LuzGranero^>^ LuzGraneroController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<LuzGranero^>^ listaLuzGraneroEncontrados = gcnew List<LuzGranero^>();
	array<String^>^ lineas = File::ReadAllLines("LuzGranero.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int dato = Convert::ToInt32(datos[0]);
		
		LuzGranero^ objLuzGranero = gcnew LuzGranero(dato);
		listaLuzGraneroEncontrados->Add(objLuzGranero);
	}
	return listaLuzGraneroEncontrados;
}


void LuzGraneroController::escribirArchivo(List<LuzGranero^>^ listaLuzGranero) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaLuzGranero->Count);
	for (int i = 0; i < listaLuzGranero->Count; i++) {
		LuzGranero^ objLuzGranero = listaLuzGranero[i];
		lineasArchivo[i] = Convert::ToString(objLuzGranero->getDato());
	}
	File::WriteAllLines("LuzGranero.txt", lineasArchivo);
}

//void LuzGraneroController::registrarLuzGranero(int dato) {
	//List<LuzGranero^>^ listaLuzGranero = buscarTodas();
	//LuzGranero^ objLuzGranero = gcnew LuzGranero(dato);
	//listaLuzGranero->Add(objOperarioNuevo);
//	escribirArchivo(listaLuzGranero);
//}

void LuzGraneroController::actualizarLuzGranero(int dato) {
	List<LuzGranero^>^ listaLuzGranero = buscarTodas();
	for (int i = 0; i < listaLuzGranero->Count; i++) {
		
		listaLuzGranero[i]->setDato(dato);
		}
	
	escribirArchivo(listaLuzGranero);
}