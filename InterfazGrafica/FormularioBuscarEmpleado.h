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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ Txt_DNI;
	protected:

	private: System::Windows::Forms::Button^ Bton_Buscar;
	private: System::Windows::Forms::Button^ Bton_Limpiar;
	private: System::Windows::Forms::Button^ Bton_Salir;
	private: System::Windows::Forms::ListView^ ListView_Empleado;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Txt_DNI = (gcnew System::Windows::Forms::Label());
			this->Bton_Buscar = (gcnew System::Windows::Forms::Button());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->Bton_Salir = (gcnew System::Windows::Forms::Button());
			this->ListView_Empleado = (gcnew System::Windows::Forms::ListView());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 20);
			this->textBox1->TabIndex = 0;
			// 
			// Txt_DNI
			// 
			this->Txt_DNI->AutoSize = true;
			this->Txt_DNI->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_DNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_DNI->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_DNI->Location = System::Drawing::Point(12, 40);
			this->Txt_DNI->Name = L"Txt_DNI";
			this->Txt_DNI->Size = System::Drawing::Size(114, 23);
			this->Txt_DNI->TabIndex = 1;
			this->Txt_DNI->Text = L"Ingrese DNI";
			// 
			// Bton_Buscar
			// 
			this->Bton_Buscar->Location = System::Drawing::Point(132, 66);
			this->Bton_Buscar->Name = L"Bton_Buscar";
			this->Bton_Buscar->Size = System::Drawing::Size(75, 23);
			this->Bton_Buscar->TabIndex = 2;
			this->Bton_Buscar->Text = L"Buscar";
			this->Bton_Buscar->UseVisualStyleBackColor = true;
			this->Bton_Buscar->Click += gcnew System::EventHandler(this, &FormularioBuscarEmpleado::Bton_Buscar_Click);
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(213, 66);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(75, 23);
			this->Bton_Limpiar->TabIndex = 3;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioBuscarEmpleado::Bton_Limpiar_Click);
			// 
			// Bton_Salir
			// 
			this->Bton_Salir->Location = System::Drawing::Point(294, 66);
			this->Bton_Salir->Name = L"Bton_Salir";
			this->Bton_Salir->Size = System::Drawing::Size(75, 23);
			this->Bton_Salir->TabIndex = 4;
			this->Bton_Salir->Text = L"Salir";
			this->Bton_Salir->UseVisualStyleBackColor = true;
			// 
			// ListView_Empleado
			// 
			this->ListView_Empleado->HideSelection = false;
			this->ListView_Empleado->Location = System::Drawing::Point(16, 112);
			this->ListView_Empleado->Name = L"ListView_Empleado";
			this->ListView_Empleado->Size = System::Drawing::Size(366, 143);
			this->ListView_Empleado->TabIndex = 5;
			this->ListView_Empleado->UseCompatibleStateImageBehavior = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"a" });
			this->listBox1->Location = System::Drawing::Point(427, 22);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(374, 134);
			this->listBox1->TabIndex = 6;
			// 
			// FormularioBuscarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(856, 418);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->ListView_Empleado);
			this->Controls->Add(this->Bton_Salir);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Bton_Buscar);
			this->Controls->Add(this->Txt_DNI);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormularioBuscarEmpleado";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Buscar empleado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void Bton_Buscar_Click(System::Object^ sender, System::EventArgs^ e) {
	Empleado obj;
	int pos = 0;
	int DNI = Int64::Parse(textBox1->Text);

	try{
		while (obj.LeerDiscoEmpleado(pos++))
		{
			if (DNI == obj.getdni_empleado())
			{
				//System::Object^ aux;

				listBox1->Items->Add("hola");
				//ListView_Empleado->Items->Add(obj.getdni_empleado());

			}

		}

	}
	catch(exception e){

	}
	

}
};
}
