#include"PuertaPrincipalController.h"


using namespace SistemaFincaInteligenteController;
using namespace System::IO;
using namespace System::Collections::Generic;
PuertaPrincipalController::PuertaPrincipalController() {

}

List<PuertaPrincipal^>^ PuertaPrincipalController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<PuertaPrincipal^>^ listaPuertaPrincipalEncontrados = gcnew List<PuertaPrincipal^>();
	array<String^>^ lineas = File::ReadAllLines("PuertaPrincipalReporte.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPuerta in lineas) {
		array<String^>^ datos = lineaPuerta->Split(separadores->ToCharArray());
		int dato = Convert::ToInt32(datos[0]);

		PuertaPrincipal^ objPuertaGranero = gcnew PuertaPrincipal(dato);
		listaPuertaPrincipalEncontrados->Add(objPuertaGranero);
	}
	return listaPuertaPrincipalEncontrados;
}


void PuertaPrincipalController::escribirArchivo(List<PuertaPrincipal^>^ listaPuertaPrincipal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPuertaPrincipal->Count);
	for (int i = 0; i < listaPuertaPrincipal->Count; i++) {
		PuertaPrincipal^ objPuertaGranero = listaPuertaPrincipal[i];
		lineasArchivo[i] = Convert::ToString(objPuertaGranero->getDato());
	}
	File::WriteAllLines("PuertaPrincipalReporte.txt", lineasArchivo);
}

//void LuzGraneroController::registrarLuzGranero(int dato) {
	//List<LuzGranero^>^ listaLuzGranero = buscarTodas();
	//LuzGranero^ objLuzGranero = gcnew LuzGranero(dato);
	//listaLuzGranero->Add(objOperarioNuevo);
//	escribirArchivo(listaLuzGranero);
//}

void PuertaPrincipalController::actualizarPuertaPrincipal(int dato) {
	List<PuertaPrincipal^>^ listaPuertaGranero = buscarTodas();
	for (int i = 0; i < listaPuertaGranero->Count; i++) {

		listaPuertaGranero[i]->setDato(dato);
	}

	escribirArchivo(listaPuertaGranero);
}