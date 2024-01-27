#pragma once

namespace SistemaFincaInteligenteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPantallaInicioOperario
	/// </summary>
	public ref class frmPantallaInicioOperario : public System::Windows::Forms::Form
	{
	public:
		frmPantallaInicioOperario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPantallaInicioOperario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPantallaInicioOperario::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(787, 480);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Location = System::Drawing::Point(77, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Seleccione su Área de trabajo";
			this->label1->UseWaitCursor = true;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Wheat;
			this->button4->Location = System::Drawing::Point(583, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 31);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Regresar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->UseWaitCursor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Wheat;
			this->button3->Location = System::Drawing::Point(551, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 49);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Casa Principal";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->UseWaitCursor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Wheat;
			this->button2->Location = System::Drawing::Point(336, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 49);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Puerta Principal";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->AllowDrop = true;
			this->button1->BackColor = System::Drawing::Color::Wheat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(139, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 49);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Granero";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			// 
			// frmPantallaInicioOperario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 480);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"frmPantallaInicioOperario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pantalla Inicio Operario";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
