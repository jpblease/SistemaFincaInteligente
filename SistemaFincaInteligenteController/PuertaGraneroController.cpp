#include"PuertaGraneroController.h" 


using namespace SistemaFincaInteligenteController;
using namespace System::IO;
using namespace System::Collections::Generic;
PuertaGraneroController::PuertaGraneroController() {

}

List<PuertaGranero^>^ PuertaGraneroController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<PuertaGranero^>^ listaPuertaGraneroEncontrados = gcnew List<PuertaGranero^>();
	array<String^>^ lineas = File::ReadAllLines("PuertaGranero.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPuerta in lineas) {
		array<String^>^ datos = lineaPuerta->Split(separadores->ToCharArray());
		int dato = Convert::ToInt32(datos[0]);

		PuertaGranero^ objPuertaGranero = gcnew PuertaGranero(dato);
		listaPuertaGraneroEncontrados->Add(objPuertaGranero); 
	}
	return listaPuertaGraneroEncontrados; 
}


void PuertaGraneroController::escribirArchivo(List<PuertaGranero^>^ listaPuertaGranero) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPuertaGranero->Count);
	for (int i = 0; i < listaPuertaGranero->Count; i++) {
		PuertaGranero^ objPuertaGranero = listaPuertaGranero[i];
		lineasArchivo[i] = Convert::ToString(objPuertaGranero->getDato());
	}
	File::WriteAllLines("PuertaGranero.txt", lineasArchivo);
}

//void LuzGraneroController::registrarLuzGranero(int dato) {
	//List<LuzGranero^>^ listaLuzGranero = buscarTodas();
	//LuzGranero^ objLuzGranero = gcnew LuzGranero(dato);
	//listaLuzGranero->Add(objOperarioNuevo);
//	escribirArchivo(listaLuzGranero);
//}

void PuertaGraneroController::actualizarPuertaGranero(int dato) {
	List<PuertaGranero^>^ listaPuertaGranero = buscarTodas();
	for (int i = 0; i < listaPuertaGranero->Count; i++) {

		listaPuertaGranero[i]->setDato(dato);
	}

	escribirArchivo(listaPuertaGranero);
}