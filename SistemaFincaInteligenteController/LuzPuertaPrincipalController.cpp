#include"LuzPuertaPrincipalController.h" 


using namespace SistemaFincaInteligenteController;
using namespace System::IO;
using namespace System::Collections::Generic;
LuzPuertaPrincipalController::LuzPuertaPrincipalController() {

}

List<LuzPuertaPrincipal^>^ LuzPuertaPrincipalController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<LuzPuertaPrincipal^>^ listaLuzPuertaPrincipalEncontrados = gcnew List<LuzPuertaPrincipal^>();
	array<String^>^ lineas = File::ReadAllLines("LuzPuertaPrincipal.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int dato = Convert::ToInt32(datos[0]);

		LuzPuertaPrincipal^ objLuzPuertaPrincipal = gcnew LuzPuertaPrincipal(dato);
		listaLuzPuertaPrincipalEncontrados->Add(objLuzPuertaPrincipal);
	}
	return listaLuzPuertaPrincipalEncontrados;
}



void LuzPuertaPrincipalController::escribirArchivo(List<LuzPuertaPrincipal^>^ listaLuzPuertaPrincipal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaLuzPuertaPrincipal->Count);
	for (int i = 0; i < listaLuzPuertaPrincipal->Count; i++) {
		LuzPuertaPrincipal^ objLuzGranero = listaLuzPuertaPrincipal[i];
		lineasArchivo[i] = Convert::ToString(objLuzGranero->getDato());
	}
	File::WriteAllLines("LuzPuertaPrincipal.txt", lineasArchivo);
}

//void LuzGraneroController::registrarLuzGranero(int dato) {
	//List<LuzGranero^>^ listaLuzGranero = buscarTodas();
	//LuzGranero^ objLuzGranero = gcnew LuzGranero(dato);
	//listaLuzGranero->Add(objOperarioNuevo);
//	escribirArchivo(listaLuzGranero);
//}

void LuzPuertaPrincipalController::actualizarLuzPuertaPrincipal(int dato) {
	List<LuzPuertaPrincipal^>^ listaLuzPuertaPrincipal = buscarTodas();
	for (int i = 0; i < listaLuzPuertaPrincipal->Count; i++) {

		listaLuzPuertaPrincipal[i]->setDato(dato);
	}

	escribirArchivo(listaLuzPuertaPrincipal);
}