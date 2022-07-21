#pragma once
#include "Empleados.h"
using namespace std;


namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioBuscarEmpleado
	/// </summary>
	public ref class FormularioBuscarEmpleado : public System::Windows::Forms::Form
	{
	public:
		FormularioBuscarEmpleado(void)
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
		~FormularioBuscarEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TxtBox_DNI;
	protected:

	private: System::Windows::Forms::Label^ Txt_DNI;
	protected:

	private: System::Windows::Forms::Button^ Bton_Buscar;
	private: System::Windows::Forms::Button^ Bton_Limpiar;
	private: System::Windows::Forms::Button^ Bton_Salir;



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
			this->TxtBox_DNI = (gcnew System::Windows::Forms::TextBox());
			this->Txt_DNI = (gcnew System::Windows::Forms::Label());
			this->Bton_Buscar = (gcnew System::Windows::Forms::Button());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->Bton_Salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TxtBox_DNI
			// 
			this->TxtBox_DNI->Location = System::Drawing::Point(158, 30);
			this->TxtBox_DNI->MaxLength = 20;
			this->TxtBox_DNI->Name = L"TxtBox_DNI";
			this->TxtBox_DNI->Size = System::Drawing::Size(237, 20);
			this->TxtBox_DNI->TabIndex = 0;
			this->TxtBox_DNI->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioBuscarEmpleado::TxtBox_DNI_KeyPress);
			// 
			// Txt_DNI
			// 
			this->Txt_DNI->AutoSize = true;
			this->Txt_DNI->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_DNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_DNI->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_DNI->Location = System::Drawing::Point(24, 30);
			this->Txt_DNI->Name = L"Txt_DNI";
			this->Txt_DNI->Size = System::Drawing::Size(114, 23);
			this->Txt_DNI->TabIndex = 1;
			this->Txt_DNI->Text = L"Ingrese DNI";
			// 
			// Bton_Buscar
			// 
			this->Bton_Buscar->Location = System::Drawing::Point(158, 56);
			this->Bton_Buscar->Name = L"Bton_Buscar";
			this->Bton_Buscar->Size = System::Drawing::Size(75, 23);
			this->Bton_Buscar->TabIndex = 2;
			this->Bton_Buscar->Text = L"Buscar";
			this->Bton_Buscar->UseVisualStyleBackColor = true;
			this->Bton_Buscar->Click += gcnew System::EventHandler(this, &FormularioBuscarEmpleado::Bton_Buscar_Click);
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(239, 56);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(75, 23);
			this->Bton_Limpiar->TabIndex = 3;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioBuscarEmpleado::Bton_Limpiar_Click);
			// 
			// Bton_Salir
			// 
			this->Bton_Salir->Location = System::Drawing::Point(320, 56);
			this->Bton_Salir->Name = L"Bton_Salir";
			this->Bton_Salir->Size = System::Drawing::Size(75, 23);
			this->Bton_Salir->TabIndex = 4;
			this->Bton_Salir->Text = L"Salir";
			this->Bton_Salir->UseVisualStyleBackColor = true;
			this->Bton_Salir->Click += gcnew System::EventHandler(this, &FormularioBuscarEmpleado::Bton_Salir_Click);
			// 
			// FormularioBuscarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(525, 124);
			this->Controls->Add(this->Bton_Salir);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Bton_Buscar);
			this->Controls->Add(this->Txt_DNI);
			this->Controls->Add(this->TxtBox_DNI);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormularioBuscarEmpleado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Buscar empleado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

		TxtBox_DNI->Clear();
	}


private: System::Void Bton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	
	

}
private: System::Void Bton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void TxtBox_DNI_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}

}
};
}
