#pragma once

namespace SistemaFincaInteligenteView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPuertPrincipal
	/// </summary>
	public ref class frmPuertPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPuertPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmPuertPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// frmPuertPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"frmPuertPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmPuertPrincipal";
			this->Load += gcnew System::EventHandler(this, &frmPuertPrincipal::frmPuertPrincipal_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmPuertPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
