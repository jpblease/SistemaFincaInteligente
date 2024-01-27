#pragma once

namespace SistemaFincaInteligenteController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaFincaInteligenteModel;

	public ref class FamiliaController {
	public:
		FamiliaController();

		List<Familia^>^ buscarAll();

		Familia^ buscarxId(int id);

		void escribirArchivo(List<Familia^>^ listaFamilias);

		List<Familia^>^ buscarFamiliaxOperario(String^ nombreOperario);

		List<Familia^>^ buscarFamiliaxNombrexOperario(String^ nombre, String^ operario);
		
		void eliminarFamilia(int idFamilia);

		void agregarFamilia(Familia^ objFamilia);
	};
}