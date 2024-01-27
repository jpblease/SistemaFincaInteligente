#pragma once
#include"frmReporteGraneroGrafica.h" 
#include<vector>
#include<string> 
#include<algorithm> 
namespace SistemaFincaInteligenteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaFincaInteligenteController;
	using namespace SistemaFincaInteligenteModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Resumen de frmReporteGraneroGrafica
	/// </summary>
	public ref class frmReporteGraneroGrafica : public System::Windows::Forms::Form
	{
	public:
		frmReporteGraneroGrafica(int codigo, int dato2)          //void en el parentesis  int codigo
		{
			//textBox1->Text = codigo;
			InitializeComponent();
			textBox1->Text = Convert::ToString(codigo);
			textBox2->Text = Convert::ToString(dato2);
			//
			//TODO: agregar código de constructor aquí
			//
		}
	//public: System::Windows::Forms::DataVisualization::Charting
		//frmReporteGraneroGrafica(String^ datoenviar) {
			//InitializeComponent(); 
			//textBox1->Text = codigo;
			//textBox1->Text = datoenviar;

		//}
	//public: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
		 // array<String^>^ tipo;
		 // array<int>^ tipo2;

	
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmReporteGraneroGrafica()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
		   array<String^>^ tipo;
		   array<int>^ tipo2;
	private:int codigo;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmReporteGraneroGrafica::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(756, 494);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(66, 37);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(554, 381);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(626, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(626, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 22);
			this->textBox2->TabIndex = 3;
			// 
			// frmReporteGraneroGrafica
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(756, 494);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmReporteGraneroGrafica";
			this->Text = L"frmReporteGraneroGrafica";
			this->Load += gcnew System::EventHandler(this, &frmReporteGraneroGrafica::frmReporteGraneroGrafica_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmReporteGraneroGrafica_Load(System::Object^ sender, System::EventArgs^ e) {
		
	
		int dato1 = Convert::ToInt32(textBox1->Text);
		int dato2 = Convert::ToInt32(textBox2->Text);
		//LuzGraneroGraficaController^ objLuzGraneroController = gcnew LuzGraneroGraficaController();
		//List<LuzGraneroGrafica^>^ listaLuzGranero = objLuzGraneroController->buscarTodas();  
		//this->textBox1->Clear();
		//int j = 0;
		//LuzGraneroGrafica^ objLuzGranero = listaLuzGranero[j]; 
		//dato1 = objLuzGranero->getDato();
		tipo = gcnew array<String^>{"Foco1", "Puerta1"};
		tipo2 = gcnew array<int>{dato1,dato2};
		chart1->Titles->Add("REPORTE GRANERO");
		chart1->Palette = ChartColorPalette::Chocolate;
		for (int i = 0; i < tipo->Length; i++) {

			 Series^ serie= chart1->Series->Add(tipo[i]);
			 
			 serie-> Label = Convert::ToString(tipo2[i]);
			 serie->Points->Add(tipo2[i]);


			//chart1->Series["Foco"]->Points->AddXY("", dato1);
			//chart1->Series["Puerta"]->Points->AddXY("", dato2);
		} 

	}
	};
}
