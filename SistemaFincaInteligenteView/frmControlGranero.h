#pragma once
#include"frmReporteGraneroGrafica.h"

namespace SistemaFincaInteligenteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace SistemaFincaInteligenteController;
	using namespace SistemaFincaInteligenteModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmControlGranero
	/// </summary>
	public ref class frmControlGranero : public System::Windows::Forms::Form
	{
	public:
		frmControlGranero(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			//serialPort1->Open();
		}

		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmControlGranero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmControlGranero::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(921, 517);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(108, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ENCENDER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmControlGranero::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(648, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"APAGAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &frmControlGranero::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(108, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"ABRIR";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &frmControlGranero::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(648, 408);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"CERRAR";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &frmControlGranero::button4_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(51, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 41);
			this->label1->TabIndex = 5;
			this->label1->Text = L"CONTROL DE LUCES:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label2->Location = System::Drawing::Point(51, 263);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 45);
			this->label2->TabIndex = 6;
			this->label2->Text = L"CONTROL DE PUERTAS:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(412, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(126, 188);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(403, 53);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(135, 188);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(392, 301);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(146, 175);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(392, 301);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(146, 175);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox1->Location = System::Drawing::Point(648, 198);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(158, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmControlGranero::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Silver;
			this->textBox2->Location = System::Drawing::Point(648, 483);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(158, 22);
			this->textBox2->TabIndex = 12;
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM3";
			// 
			// frmControlGranero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 517);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmControlGranero";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Control Granero";
			this->Load += gcnew System::EventHandler(this, &frmControlGranero::frmControlGranero_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		pictureBox3->Visible = true;
		pictureBox2->Visible = false;

		//String^ operarioBuscar = this->textBox1->Text;
		//OperarioController^ objOperarioController = gcnew OperarioController();
		//LuzGraneroController^ objLuzGraneroController = gcnew LuzGraneroController();
		//List<LuzGranero^>^ listaLuzGranero = LuzGraneroController->buscarTodas(operarioBuscar);
		/*Mostrar lo buscado en la grilla*/
		//mostrarGrilla(listaOperarios);
		//textBox1->Clear();
		int count = Convert::ToInt32(this->textBox1->Text);
		count = count +1;
		this->textBox1->Text = Convert::ToString(count);

		int codigo = Convert::ToInt32(this->textBox1->Text);
		

		LuzGraneroController^ objLuzGraneroController = gcnew LuzGraneroController();
		objLuzGraneroController->actualizarLuzGranero(codigo); 

		serialPort1->WriteLine("C");
		
		//frmReporteGraneroGrafica^ ventana1 = gcnew frmReporteGraneroGrafica(codigo);
		//ventana1->Show();
		
		///int datoenviar = Convert::ToInt32(textBox1->Text);
		//frmReporteGraneroGrafica^ ventana1 = gcnew frmReporteGraneroGrafica(codigo);
		//serialPort1->WriteLine("A");

		
		}

	
	
	
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox2->Visible = true;

	String^ datoenviar = textBox1->Text;

	serialPort1->WriteLine("D");

	//frmReporteGraneroGrafica^ ventana1 = gcnew frmReporteGraneroGrafica(datoenviar); 
	//ventana1->ShowDialog();
	//serialPort1->WriteLine("B");
    
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Visible = true;
	pictureBox4->Visible = false;

	int count2 = Convert::ToInt32(this->textBox2->Text);
	count2 = count2 + 1;
	this->textBox2->Text = Convert::ToString(count2);

	int codigo2 = Convert::ToInt32(this->textBox2->Text);


	PuertaGraneroController^ objPuertaGraneroController = gcnew PuertaGraneroController();
	objPuertaGraneroController->actualizarPuertaGranero(codigo2);


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox5->Visible = false;
	pictureBox4->Visible = true;

	String^ datoenviar2 = textBox2->Text; 
}
private: System::Void frmControlGranero_Load(System::Object^ sender, System::EventArgs^ e) {

	/*Creamos un codigo aleatorio*/
	

	//array<String^>^ lines = File::ReadAllLines("ReporteLuzGranero.txt");
	/*
	StreamReader^ leer = gcnew StreamReader("LuzGranero.txt");
	String^ lineas;
	try {
		lineas = leer->ReadLine();
	
			textBox1->AppendText(lineas);
			//lineas = leer->ReadLine();
		
		//textBox1->AppendText(lineas);
	}
	//textBox1->Text = Convert::ToString(codigo);
	finally {
		//MessageBox::Show("Error");
	}
	*/
	LuzGraneroController^ objLuzGraneroController = gcnew LuzGraneroController();
	List<LuzGranero^>^ listaLuzGranero = objLuzGraneroController->buscarTodas(); 
	this->textBox1->Clear(); 
	int i = 0;
	LuzGranero^ objLuzGranero = listaLuzGranero[i];
	this->textBox1->Text= Convert::ToString(objLuzGranero->getDato());



	PuertaGraneroController^ objPuertaGraneroController = gcnew PuertaGraneroController();
	List<PuertaGranero^>^ listaPuertaGranero = objPuertaGraneroController->buscarTodas();
	this->textBox2->Clear();
	int j = 0;
	PuertaGranero^ objPuertaGranero = listaPuertaGranero[i];
	this->textBox2->Text = Convert::ToString(objPuertaGranero->getDato()); 

	serialPort1->Open();
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}
