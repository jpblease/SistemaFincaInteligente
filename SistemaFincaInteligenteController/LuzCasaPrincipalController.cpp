#include "LuzCasaPrincipalController.h" 

using namespace SistemaFincaInteligenteController;
using namespace System::IO;


LuzCasaPrincipalController::LuzCasaPrincipalController() {

}


List<LuzCasaPrincipal^>^ LuzCasaPrincipalController::buscarTodas() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<LuzCasaPrincipal^>^ listaLuzEncontrados = gcnew List<LuzCasaPrincipal^>();
	array<String^>^ lineas = File::ReadAllLines("LuzCasaPrincipal.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		int luzdormitorio = Convert::ToInt32(datos[0]);
		int luzoficiana = Convert::ToInt32(datos[1]);
		int luzcomedor = Convert::ToInt32(datos[2]);
		//int puertadormitorio= Convert::ToInt32(datos[3]);
		//int puertaoficina = Convert::ToInt32(datos[4]);
		//int puertacomedor = Convert::ToInt32(datos[5]);
		LuzCasaPrincipal^ objLuzCasaPrincipal = gcnew LuzCasaPrincipal(luzdormitorio, luzoficiana, luzcomedor);
		listaLuzEncontrados->Add(objLuzCasaPrincipal);
	}
	return listaLuzEncontrados;
}


void LuzCasaPrincipalController::escribirArchivo(List<LuzCasaPrincipal^>^ listaLuzCasaPrincipal) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaLuzCasaPrincipal->Count);
	for (int i = 0; i < listaLuzCasaPrincipal->Count; i++) {
		LuzCasaPrincipal^ objLuzCasaPrincipal = listaLuzCasaPrincipal[i];
		lineasArchivo[i] = objLuzCasaPrincipal->getluzdormitorio() + ";" + objLuzCasaPrincipal->getluzoficina() + ";" + objLuzCasaPrincipal->getluzcomedor();
	}
	File::WriteAllLines("LuzCasaPrincipal.txt", lineasArchivo);
}


void LuzCasaPrincipalController::actualizarLuzCasaPrincipal(int luzdormitorio,int luzoficina,int luzcomedor) {
	List<LuzCasaPrincipal^>^ listaOperarios = buscarTodas();
	for (int i = 0; i < listaOperarios->Count; i++) {
		
			listaOperarios[i]->setluzdormitorio(luzdormitorio);
			/*La fecha de creacion, no cambia, pero la podriamos actualizar tambien*/
			listaOperarios[i]->setluzoficina(luzoficina);
			listaOperarios[i]->setluzcomedor(luzcomedor);
			//listaOperarios[i]->setpuertadormitorio(puertadormitorio);
			//listaOperarios[i]->setpuertaoficina(puertaoficina);
			//listaOperarios[i]->setpuertacomedor(puertacomedor);
			
		
	}
	escribirArchivo(listaOperarios);
}



