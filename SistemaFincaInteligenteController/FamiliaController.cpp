#include "FamiliaController.h"
#include "OperarioController.h"


using namespace SistemaFincaInteligenteController;
using namespace System::IO;
using namespace System::Collections::Generic;

FamiliaController::FamiliaController() {

}

List<Familia^>^ FamiliaController::buscarFamiliaxOperario(String^ nombreOperario) {
	List<Familia^>^ listaFamiliasEncontrados = gcnew List<Familia^>();
	array<String^>^ lineas = File::ReadAllLines("familia.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaFamilia in lineas) {
		array<String^>^ datos = lineaFamilia->Split(separadores->ToCharArray());
		int codigoFamilia = Convert::ToInt32(datos[0]);
		String^ nombreFamilia = datos[1];
		String^ parentesco = datos[2];
		int telefono = Convert::ToInt32(datos[3]);
		int codigoOperario = Convert::ToInt32(datos[4]);
		OperarioController^ objOperarioController = gcnew OperarioController();/*busacar carreras*/
		Operario^ objOperario = objOperarioController->buscarOperario(codigoOperario);/*le paso el codigo y me devuelve la carrera*/
		if (objOperario->getNombre()->Contains(nombreOperario)) {
			Familia^ objFamilia = gcnew Familia(codigoFamilia, nombreFamilia, parentesco, telefono, objOperario);
			listaFamiliasEncontrados->Add(objFamilia);
		}
	}
	return listaFamiliasEncontrados;
}

List<Familia^>^ FamiliaController::buscarFamiliaxNombrexOperario(String^ nombre, String^ operario) {
	List<Familia^>^ listaCursosEncontrados = gcnew List<Familia^>();
	array<String^>^ lineas = File::ReadAllLines("familia.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaFamilia in lineas) {
		array<String^>^ datos = lineaFamilia->Split(separadores->ToCharArray());
		int codigoFamilia = Convert::ToInt32(datos[0]);
		String^ nombreFamilia = datos[1];
		String^ parentesco = datos[2];
		int telefono = Convert::ToInt32(datos[3]);
		int codigoOperario = Convert::ToInt32(datos[4]);
		OperarioController^ objOperarioController = gcnew OperarioController();
		Operario^ objOperario = objOperarioController->buscarOperario(codigoOperario);
		if (objOperario->getNombre()->Contains(operario) && nombreFamilia->Contains(nombre)) {
			Familia^ objFamilia = gcnew Familia(codigoFamilia, nombreFamilia, parentesco, telefono, objOperario);
			listaCursosEncontrados->Add(objFamilia);
		}
	}
	return listaCursosEncontrados;
}

List<Familia^>^ FamiliaController::buscarAll() {
	List<Familia^>^ listaFamiliasEncontrados = gcnew List<Familia^>();
	array<String^>^ lineas = File::ReadAllLines("familia.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaFamilia in lineas) {
		array<String^>^ datos = lineaFamilia->Split(separadores->ToCharArray());
		int codigoFamilia = Convert::ToInt32(datos[0]);
		String^ nombreFamilia = datos[1];
		String^ parentesco = datos[2];
		int telefono = Convert::ToInt32(datos[3]);
		int codigoOperario = Convert::ToInt32(datos[4]);
		OperarioController^ objOperarioController = gcnew OperarioController();
		Operario^ objOperario = objOperarioController->buscarOperario(codigoOperario);
		Familia^ objFamilia = gcnew Familia(codigoFamilia, nombreFamilia, parentesco, telefono, objOperario);
		listaFamiliasEncontrados->Add(objFamilia);
	}
	return listaFamiliasEncontrados;
}

Familia^ FamiliaController::buscarxId(int id) {
	Familia^ objFamilia;
	List<Familia^>^ listaFamilias = buscarAll();
	for (int i = 0; i < listaFamilias->Count; i++) {
		if (listaFamilias[i]->getCodigo() == id) {
			objFamilia = listaFamilias[i];
			break;
		}
	}
	return objFamilia; 
}

void FamiliaController::escribirArchivo(List<Familia^>^ listaFamilias) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaFamilias->Count);
	for (int i = 0; i < listaFamilias->Count; i++) {
		Familia^ objFamilia = listaFamilias[i];
		lineasArchivo[i] = objFamilia->getCodigo() + ";" + objFamilia->getNombre() + ";" + objFamilia->getParentesco() + ";" + objFamilia->getTelefono() + ";" + objFamilia->getOperario()->getCodigo();
	}
	File::WriteAllLines("familia.txt", lineasArchivo);
}


void FamiliaController::eliminarFamilia(int idFamilia) {
	List<Familia^>^ listaFamilias = buscarAll();
	for (int i = 0; i < listaFamilias->Count; i++) {
		if (listaFamilias[i]->getCodigo() == idFamilia) {
			listaFamilias->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaFamilias);
}

void FamiliaController::agregarFamilia(Familia^ objFamilia) {
	List<Familia^>^ listaFamilias = buscarAll();
	listaFamilias->Add(objFamilia);
	escribirArchivo(listaFamilias);
}