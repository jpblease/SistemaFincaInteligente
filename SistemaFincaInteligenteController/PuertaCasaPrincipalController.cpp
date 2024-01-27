#include "PuertaCasaPrincipalController.h" 

using namespace SistemaFincaInteligenteController;
using namespace System::IO;


PuertaCasaPrincipalController::PuertaCasaPrincipalController() {

}


List<PuertaCasaPrincipal^>^ PuertaCasaPrincipalController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<PuertaCasaPrincipal^>^ listaPuertasEncontrados = gcnew List<PuertaCasaPrincipal^>();
	array<String^>^ lineas = File::ReadAllLines("PuertaCasaPrincipal.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int puertadormitorio = Convert::ToInt32(datos[0]);
		int puertaoficiana = Convert::ToInt32(datos[1]);
		int puertacomedor = Convert::ToInt32(datos[2]);

		PuertaCasaPrincipal^ objPuertaCasaPrincipal = gcnew PuertaCasaPrincipal(puertadormitorio, puertaoficiana, puertacomedor);
		listaPuertasEncontrados->Add(objPuertaCasaPrincipal);
	}
	return listaPuertasEncontrados;
}


void PuertaCasaPrincipalController::escribirArchivo(List<PuertaCasaPrincipal^>^ listaPuertaCasaPrincipal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaPuertaCasaPrincipal->Count);
	for (int i = 0; i < listaPuertaCasaPrincipal->Count; i++) {
		PuertaCasaPrincipal^ objPuertaCasaPrincipal = listaPuertaCasaPrincipal[i];
		lineasArchivo[i] = objPuertaCasaPrincipal->getpuertadormitorio() + ";" + objPuertaCasaPrincipal->getpuertaoficina() + ";" + objPuertaCasaPrincipal->getpuertacomedor();
	}
	File::WriteAllLines("PuertaCasaPrincipal.txt", lineasArchivo);
}


void PuertaCasaPrincipalController::actualizarpuertaCasaPrincipal(int puertadormitorio, int puertaoficina, int puertacomedor) {
	List<PuertaCasaPrincipal^>^ listaPuertas = buscarTodas();
	for (int i = 0; i < listaPuertas->Count; i++) {

		listaPuertas[i]->setpuertadormitorio(puertadormitorio);
		/*La fecha de creacion, no cambia, pero la podriamos actualizar tambien*/
		listaPuertas[i]->setpuertaoficina(puertaoficina);
		listaPuertas[i]->setpuertacomedor(puertacomedor);


	}
	escribirArchivo(listaPuertas);
}