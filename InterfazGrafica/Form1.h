#pragma once


#include "VentanaADM.h" //Incluyo mi segundo formulario
#include "VentanaEmpleados.h"


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f?r Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf?gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Bton_LoginADM;
	private: System::Windows::Forms::TextBox^ Txt_Codigo;
	private: System::Windows::Forms::Label^ Label_Codigo;
	private: System::Windows::Forms::Button^ Bton_Empleados;
	protected:







	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f?r die Designerunterst?tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge?ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Bton_LoginADM = (gcnew System::Windows::Forms::Button());
			this->Txt_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->Label_Codigo = (gcnew System::Windows::Forms::Label());
			this->Bton_Empleados = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Bton_LoginADM
			// 
			this->Bton_LoginADM->Location = System::Drawing::Point(148, 166);
			this->Bton_LoginADM->Name = L"Bton_LoginADM";
			this->Bton_LoginADM->Size = System::Drawing::Size(112, 38);
			this->Bton_LoginADM->TabIndex = 0;
			this->Bton_LoginADM->Text = L"Administrador";
			this->Bton_LoginADM->UseVisualStyleBackColor = true;
			this->Bton_LoginADM->Click += gcnew System::EventHandler(this, &Form1::Bton_Login_Click);
			// 
			// Txt_Codigo
			// 
			this->Txt_Codigo->Location = System::Drawing::Point(148, 132);
			this->Txt_Codigo->Multiline = true;
			this->Txt_Codigo->Name = L"Txt_Codigo";
			this->Txt_Codigo->Size = System::Drawing::Size(248, 28);
			this->Txt_Codigo->TabIndex = 1;
			this->Txt_Codigo->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_Codigo_TextChanged);
			// 
			// Label_Codigo
			// 
			this->Label_Codigo->AutoSize = true;
			this->Label_Codigo->Location = System::Drawing::Point(252, 116);
			this->Label_Codigo->Name = L"Label_Codigo";
			this->Label_Codigo->Size = System::Drawing::Size(40, 13);
			this->Label_Codigo->TabIndex = 3;
			this->Label_Codigo->Text = L"Codigo";
			this->Label_Codigo->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Bton_Empleados
			// 
			this->Bton_Empleados->Location = System::Drawing::Point(276, 166);
			this->Bton_Empleados->Name = L"Bton_Empleados";
			this->Bton_Empleados->Size = System::Drawing::Size(120, 38);
			this->Bton_Empleados->TabIndex = 4;
			this->Bton_Empleados->Text = L"Empleado";
			this->Bton_Empleados->UseVisualStyleBackColor = true;
			this->Bton_Empleados->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(538, 339);
			this->Controls->Add(this->Bton_Empleados);
			this->Controls->Add(this->Label_Codigo);
			this->Controls->Add(this->Txt_Codigo);
			this->Controls->Add(this->Bton_LoginADM);
			this->Name = L"Form1";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Label "Codigo" Menu inicio Login
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}





	// Boton "Administrador" Menu inicio Login
	private: System::Void Bton_Login_Click(System::Object^ sender, System::EventArgs^ e) {

		//Creamos un objeto del formulario que vamos a abrir e invocamos a su metodo constructor.
		InterfazGrafica::VentanaADM^ VentanaADM = gcnew InterfazGrafica::VentanaADM();  

		//Ocultamos el formulario anterior, llamamos al objeto y ponemos su visibilidad en false.
		this->Visible = false;


		//Ahora los mostramos
		VentanaADM->ShowDialog();
		//Cuando abra el segundo formulario el anterior se oculta
		this->Visible = true;



	}





	// Boton "Empleados" Menu inicio Login
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		InterfazGrafica::VentanaEmpleados^ VentanaEmpleados = gcnew InterfazGrafica::VentanaEmpleados();
		this->Visible = false;


		VentanaEmpleados->ShowDialog();
		this->Visible = true;
	
	}




	//Formulario Login
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}



	//Texto donde se pide el codigo para iniciar sesion.
private: System::Void Txt_Codigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
