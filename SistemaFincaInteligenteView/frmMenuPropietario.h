#pragma once
#include "frmMantenimientoOperario.h"
#include "frmMantCopropietario.h"
#include"frmControlGranero.h"
#include"frmControlCasaPrincipal.h"
#include"frmControlPuertaPrincipal.h"
#include"frmReporteDispositivos.h"
#include"frmMantenimientoAreas.h"
#include"frmReporteGraneroGrafica.h"
#include "frmReporteCasaPrincipal.h" 
#include"frmReportePuertaPrincipal.h" 
#include"frmReporteLuzPuertaPrincipal.h"
#include"frmCarritoGuia.h"




namespace SistemaFincaInteligenteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	using namespace SistemaFincaInteligenteController;
	using namespace System::IO;

	/// <summary>
	/// Resumen de frmMenuPropietario
	/// </summary>
	public ref class frmMenuPropietario : public System::Windows::Forms::Form
	{
	public:
		frmMenuPropietario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMenuPropietario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graneroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ puertaPrincipalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ casaPrincipalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copropietarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dispositivosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ organizacionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graficosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graneroToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ casaPrincipalToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ puertaPrincipalToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteLuzToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportePuertaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carritoGuiaToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenuPropietario::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->areasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->casaPrincipalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graneroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puertaPrincipalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dispositivosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graneroToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->casaPrincipalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteLuzToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportePuertaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puertaPrincipalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copropietarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->areasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->organizacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carritoGuiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(868, 461);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->areasToolStripMenuItem,
					this->reporteToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->organizacionToolStripMenuItem, this->graficosToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(868, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// areasToolStripMenuItem
			// 
			this->areasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->casaPrincipalToolStripMenuItem,
					this->graneroToolStripMenuItem, this->puertaPrincipalToolStripMenuItem, this->carritoGuiaToolStripMenuItem
			});
			this->areasToolStripMenuItem->Name = L"areasToolStripMenuItem";
			this->areasToolStripMenuItem->Size = System::Drawing::Size(149, 24);
			this->areasToolStripMenuItem->Text = L"Manejar Perifericos";
			this->areasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::areasToolStripMenuItem_Click);
			// 
			// casaPrincipalToolStripMenuItem
			// 
			this->casaPrincipalToolStripMenuItem->Name = L"casaPrincipalToolStripMenuItem";
			this->casaPrincipalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->casaPrincipalToolStripMenuItem->Text = L"Casa Principal";
			this->casaPrincipalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::casaPrincipalToolStripMenuItem_Click);
			// 
			// graneroToolStripMenuItem
			// 
			this->graneroToolStripMenuItem->Name = L"graneroToolStripMenuItem";
			this->graneroToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->graneroToolStripMenuItem->Text = L"Granero";
			this->graneroToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::graneroToolStripMenuItem_Click);
			// 
			// puertaPrincipalToolStripMenuItem
			// 
			this->puertaPrincipalToolStripMenuItem->Name = L"puertaPrincipalToolStripMenuItem";
			this->puertaPrincipalToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->puertaPrincipalToolStripMenuItem->Text = L"Puerta Principal";
			this->puertaPrincipalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::puertaPrincipalToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dispositivosToolStripMenuItem,
					this->graneroToolStripMenuItem1, this->casaPrincipalToolStripMenuItem1, this->puertaPrincipalToolStripMenuItem1
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// dispositivosToolStripMenuItem
			// 
			this->dispositivosToolStripMenuItem->Name = L"dispositivosToolStripMenuItem";
			this->dispositivosToolStripMenuItem->Size = System::Drawing::Size(195, 26);
			this->dispositivosToolStripMenuItem->Text = L"Dispositivos";
			this->dispositivosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::dispositivosToolStripMenuItem_Click);
			// 
			// graneroToolStripMenuItem1
			// 
			this->graneroToolStripMenuItem1->Name = L"graneroToolStripMenuItem1";
			this->graneroToolStripMenuItem1->Size = System::Drawing::Size(195, 26);
			this->graneroToolStripMenuItem1->Text = L"Granero";
			this->graneroToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuPropietario::graneroToolStripMenuItem1_Click);
			// 
			// casaPrincipalToolStripMenuItem1
			// 
			this->casaPrincipalToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reporteLuzToolStripMenuItem,
					this->reportePuertaToolStripMenuItem
			});
			this->casaPrincipalToolStripMenuItem1->Name = L"casaPrincipalToolStripMenuItem1";
			this->casaPrincipalToolStripMenuItem1->Size = System::Drawing::Size(195, 26);
			this->casaPrincipalToolStripMenuItem1->Text = L"Casa Principal";
			this->casaPrincipalToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuPropietario::casaPrincipalToolStripMenuItem1_Click);
			// 
			// reporteLuzToolStripMenuItem
			// 
			this->reporteLuzToolStripMenuItem->Name = L"reporteLuzToolStripMenuItem";
			this->reporteLuzToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->reporteLuzToolStripMenuItem->Text = L"Reporte Luz";
			this->reporteLuzToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::reporteLuzToolStripMenuItem_Click);
			// 
			// reportePuertaToolStripMenuItem
			// 
			this->reportePuertaToolStripMenuItem->Name = L"reportePuertaToolStripMenuItem";
			this->reportePuertaToolStripMenuItem->Size = System::Drawing::Size(191, 26);
			this->reportePuertaToolStripMenuItem->Text = L"Reporte Puerta";
			this->reportePuertaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::reportePuertaToolStripMenuItem_Click);
			// 
			// puertaPrincipalToolStripMenuItem1
			// 
			this->puertaPrincipalToolStripMenuItem1->Name = L"puertaPrincipalToolStripMenuItem1";
			this->puertaPrincipalToolStripMenuItem1->Size = System::Drawing::Size(195, 26);
			this->puertaPrincipalToolStripMenuItem1->Text = L"Puerta Principal";
			this->puertaPrincipalToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuPropietario::puertaPrincipalToolStripMenuItem1_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->operariosToolStripMenuItem,
					this->copropietarioToolStripMenuItem, this->areasToolStripMenuItem1
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// operariosToolStripMenuItem
			// 
			this->operariosToolStripMenuItem->Name = L"operariosToolStripMenuItem";
			this->operariosToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->operariosToolStripMenuItem->Text = L"Operarios";
			this->operariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::operariosToolStripMenuItem_Click);
			// 
			// copropietarioToolStripMenuItem
			// 
			this->copropietarioToolStripMenuItem->Name = L"copropietarioToolStripMenuItem";
			this->copropietarioToolStripMenuItem->Size = System::Drawing::Size(185, 26);
			this->copropietarioToolStripMenuItem->Text = L"Copropietario";
			this->copropietarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::copropietarioToolStripMenuItem_Click);
			// 
			// areasToolStripMenuItem1
			// 
			this->areasToolStripMenuItem1->Name = L"areasToolStripMenuItem1";
			this->areasToolStripMenuItem1->Size = System::Drawing::Size(185, 26);
			this->areasToolStripMenuItem1->Text = L"Areas";
			this->areasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuPropietario::areasToolStripMenuItem1_Click);
			// 
			// organizacionToolStripMenuItem
			// 
			this->organizacionToolStripMenuItem->Name = L"organizacionToolStripMenuItem";
			this->organizacionToolStripMenuItem->Size = System::Drawing::Size(111, 24);
			this->organizacionToolStripMenuItem->Text = L"Organizacion";
			// 
			// graficosToolStripMenuItem
			// 
			this->graficosToolStripMenuItem->Name = L"graficosToolStripMenuItem";
			this->graficosToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->graficosToolStripMenuItem->Text = L"Graficos";
			// 
			// carritoGuiaToolStripMenuItem
			// 
			this->carritoGuiaToolStripMenuItem->Name = L"carritoGuiaToolStripMenuItem";
			this->carritoGuiaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->carritoGuiaToolStripMenuItem->Text = L"Carrito Guia";
			this->carritoGuiaToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuPropietario::carritoGuiaToolStripMenuItem_Click);
			// 
			// frmMenuPropietario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 489);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"frmMenuPropietario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Propietario";
			this->Load += gcnew System::EventHandler(this, &frmMenuPropietario::frmMenuPropietario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void operariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantenimientoOperario^ ventanaMantenimientoOperario = gcnew frmMantenimientoOperario();
		//ventanaMantenimientoOperario->MdiParent = this;
		ventanaMantenimientoOperario->Show();
	}
private: System::Void copropietarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantCopropietario^ ventanaMantCopropietario = gcnew frmMantCopropietario();
	ventanaMantCopropietario->Show();

}
private: System::Void puertaPrincipalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmControlPuertaPrincipal^ ventanaControlPuertaPrincipal = gcnew frmControlPuertaPrincipal();
	ventanaControlPuertaPrincipal->Show();
}
private: System::Void graneroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	frmControlGranero^ ventanaControlGranero = gcnew frmControlGranero();
	ventanaControlGranero->Show();
}
private: System::Void casaPrincipalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmControlCasaPrincipal^ ventanaControlCasaPrincipal = gcnew frmControlCasaPrincipal();
	ventanaControlCasaPrincipal->Show();
}
private: System::Void dispositivosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteDispositivos^ ventanaReporteDispositivos = gcnew frmReporteDispositivos();
	ventanaReporteDispositivos->Show();
}
private: System::Void areasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void areasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientoAreas^ ventanaMantenimientoAreas = gcnew frmMantenimientoAreas();
	ventanaMantenimientoAreas->Show(); 
}
private: System::Void graneroToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	array<String^>^ codigo1 = File::ReadAllLines("LuzGranero.txt");
	//String^ separadores = ";";
	;
	//array<String^>^ datos = codigo1->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(codigo1[0]);
		
	array<String^>^ codigo2 = File::ReadAllLines("PuertaGranero.txt");
	int dato2 = Convert::ToInt32(codigo2[0]);

	frmReporteGraneroGrafica^ ventanaGraneroGrafica = gcnew frmReporteGraneroGrafica(codigo,dato2);
	ventanaGraneroGrafica->Show(); 
}
private: System::Void frmMenuPropietario_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void casaPrincipalToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	//array<String^>^ datodormitorio1 = File::ReadAllLines("LuzCasaPrincipal.txt");
	//int datodormitorio = Convert::ToInt32(datodormitorio1[0]);

	//array<String^>^ datooficina1 = File::ReadAllLines("LuzCasaPrincipal.txt");
	//int datooficina = Convert::ToInt32(datooficina1[0]);

	//array<String^>^ datocomedor1 = File::ReadAllLines("LuzCasaPrincipal.txt");
	//int datocomedor = Convert::ToInt32(datocomedor1[0]);

	
	//array<String^>^ lineas = File::ReadAllLines("LuzCasaPrincipal.txt");/*Va tener la informacion de cada linea de archivo*/
	
	//String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	//for each (String ^ lineaCarrera in lineas) { 
		//array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());/*Permite separar por el separador(;)*/
		//int datodormitorio = Convert::ToInt32(datos[0]);
		//int datooficina = Convert::ToInt32(datos[1]);
		//int datocomedor = Convert::ToInt32(datos[2]);
		
		//return(datodormitorio, datocomedor, datooficina);
		//frmReporteCasaPrincipal^ ventanaReporteCasaPrincipal = gcnew frmReporteCasaPrincipal(datodormitorio, datooficina, datocomedor); 
		//ventanaReporteCasaPrincipal->Show(); 
	//} 
	
	


	

	

}
private: System::Void reporteLuzToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	array<String^>^ lineas = File::ReadAllLines("LuzCasaPrincipal.txt");/*Va tener la informacion de cada linea de archivo*/

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());/*Permite separar por el separador(;)*/
		int datodormitorio = Convert::ToInt32(datos[0]);
		int datooficina = Convert::ToInt32(datos[1]);
		int datocomedor = Convert::ToInt32(datos[2]); 

		//return(datodormitorio, datocomedor, datooficina);
		frmReporteCasaPrincipal^ ventanaReporteCasaPrincipal = gcnew frmReporteCasaPrincipal(datodormitorio, datooficina, datocomedor);
		ventanaReporteCasaPrincipal->Show(); 
	}

}
private: System::Void reportePuertaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	array<String^>^ lineas = File::ReadAllLines("PuertaCasaPrincipal.txt");/*Va tener la informacion de cada linea de archivo*/

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());/*Permite separar por el separador(;)*/
		int puertadormitorio = Convert::ToInt32(datos[0]);  
		int puertaoficina = Convert::ToInt32(datos[1]); 
		int puertacomedor = Convert::ToInt32(datos[2]); 

		//return(datodormitorio, datocomedor, datooficina);
		frmReportePuertaPrincipal^ ventanaReportePuertaCasaPrincipal = gcnew frmReportePuertaPrincipal(puertadormitorio, puertaoficina, puertacomedor);
		ventanaReportePuertaCasaPrincipal->Show();
	}



}
private: System::Void puertaPrincipalToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {


	array<String^>^ codigo1 = File::ReadAllLines("LuzPuertaPrincipal.txt");
	//String^ separadores = ";";
	;
	//array<String^>^ datos = codigo1->Split(separadores->ToCharArray());
	int codigo = Convert::ToInt32(codigo1[0]);

	array<String^>^ codigo2 = File::ReadAllLines("PuertaPrincipalReporte.txt");
	int dato2 = Convert::ToInt32(codigo2[0]);

	
	frmReporteLuzPuertaPrincipal^ objReporteLuzPuertaPrincipal = gcnew frmReporteLuzPuertaPrincipal(codigo,dato2);
	objReporteLuzPuertaPrincipal->Show();
}
private: System::Void carritoGuiaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmCarritoGuia^ ventanaCarritoGuia = gcnew frmCarritoGuia();
	ventanaCarritoGuia->Show();
}
};
}

