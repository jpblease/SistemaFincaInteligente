#pragma once
#include "frmMantenimientoOperario.h"
#include"frmControlGranero.h"
#include"frmControlCasaPrincipal.h"
#include"frmControlPuertaPrincipal.h"

namespace SistemaFincaInteligenteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmMenuCopropietario
	/// </summary>
	public ref class frmMenuCopropietario : public System::Windows::Forms::Form
	{
	public:
		frmMenuCopropietario(void)
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
		~frmMenuCopropietario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;



	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ areasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graneroToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ puertaPrincipalToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ casaPrincipalToolStripMenuItem1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMenuCopropietario::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->areasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graneroToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puertaPrincipalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->casaPrincipalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->areasToolStripMenuItem,
					this->mantenimientoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(925, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// areasToolStripMenuItem
			// 
			this->areasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->graneroToolStripMenuItem1,
					this->puertaPrincipalToolStripMenuItem1, this->casaPrincipalToolStripMenuItem1
			});
			this->areasToolStripMenuItem->Name = L"areasToolStripMenuItem";
			this->areasToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			this->areasToolStripMenuItem->Text = L"Areas";
			// 
			// graneroToolStripMenuItem1
			// 
			this->graneroToolStripMenuItem1->Name = L"graneroToolStripMenuItem1";
			this->graneroToolStripMenuItem1->Size = System::Drawing::Size(195, 26);
			this->graneroToolStripMenuItem1->Text = L"Granero";
			this->graneroToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuCopropietario::graneroToolStripMenuItem1_Click);
			// 
			// puertaPrincipalToolStripMenuItem1
			// 
			this->puertaPrincipalToolStripMenuItem1->Name = L"puertaPrincipalToolStripMenuItem1";
			this->puertaPrincipalToolStripMenuItem1->Size = System::Drawing::Size(195, 26);
			this->puertaPrincipalToolStripMenuItem1->Text = L"Puerta Principal";
			this->puertaPrincipalToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuCopropietario::puertaPrincipalToolStripMenuItem1_Click);
			// 
			// casaPrincipalToolStripMenuItem1
			// 
			this->casaPrincipalToolStripMenuItem1->Name = L"casaPrincipalToolStripMenuItem1";
			this->casaPrincipalToolStripMenuItem1->Size = System::Drawing::Size(195, 26);
			this->casaPrincipalToolStripMenuItem1->Text = L"Casa Principal";
			this->casaPrincipalToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMenuCopropietario::casaPrincipalToolStripMenuItem1_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->operariosToolStripMenuItem });
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// operariosToolStripMenuItem
			// 
			this->operariosToolStripMenuItem->Name = L"operariosToolStripMenuItem";
			this->operariosToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->operariosToolStripMenuItem->Text = L"Operarios";
			this->operariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMenuCopropietario::operariosToolStripMenuItem_Click);
			// 
			// frmMenuCopropietario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(925, 547);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMenuCopropietario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Copropietario";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void puertaPrincipalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void operariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantenimientoOperario^ ventanaMantenimientoOperario = gcnew frmMantenimientoOperario();
	//ventanaMantenimientoOperario->MdiParent = this;
	ventanaMantenimientoOperario->Show();
}
private: System::Void graneroToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmControlGranero^ ventanaControlGranero = gcnew frmControlGranero();
	ventanaControlGranero->Show();
}
private: System::Void puertaPrincipalToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmControlPuertaPrincipal^ ventanaControlPuertaPrincipal = gcnew frmControlPuertaPrincipal();
	ventanaControlPuertaPrincipal->Show();
}
private: System::Void casaPrincipalToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmControlCasaPrincipal^ ventanaControlCasaPrincipal = gcnew frmControlCasaPrincipal();
	ventanaControlCasaPrincipal->Show();
}
};
}
