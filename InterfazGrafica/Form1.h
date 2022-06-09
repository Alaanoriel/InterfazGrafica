#pragma once


#include "VentanaADM.h" //Incluyo mi segundo formulario
#include "VentanaEmpleados.h"
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}


		Void Ventana() {

			//Creamos un objeto del formulario que vamos a abrir e invocamos a su metodo constructor.
			InterfazGrafica::VentanaADM^ VentanaADM = gcnew InterfazGrafica::VentanaADM();

			//Ocultamos el formulario anterior, llamamos al objeto y ponemos su visibilidad en false.
			this->Visible = false;


			//Ahora los mostramos
			VentanaADM->ShowDialog();
			//Cuando abra el segundo formulario el anterior se oculta
			this->Visible = true;

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
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
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
			this->Bton_LoginADM->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Bton_LoginADM->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bton_LoginADM->Location = System::Drawing::Point(120, 166);
			this->Bton_LoginADM->Name = L"Bton_LoginADM";
			this->Bton_LoginADM->Size = System::Drawing::Size(140, 38);
			this->Bton_LoginADM->TabIndex = 0;
			this->Bton_LoginADM->Text = L"Administrador";
			this->Bton_LoginADM->UseVisualStyleBackColor = false;
			this->Bton_LoginADM->Click += gcnew System::EventHandler(this, &Form1::Bton_Login_Click);
			// 
			// Txt_Codigo
			// 
			this->Txt_Codigo->Location = System::Drawing::Point(120, 132);
			this->Txt_Codigo->MaxLength = 5;
			this->Txt_Codigo->Multiline = true;
			this->Txt_Codigo->Name = L"Txt_Codigo";
			this->Txt_Codigo->PasswordChar = '*';
			this->Txt_Codigo->ShortcutsEnabled = false;
			this->Txt_Codigo->Size = System::Drawing::Size(294, 25);
			this->Txt_Codigo->TabIndex = 1;
			this->Txt_Codigo->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_Codigo_TextChanged);
			this->Txt_Codigo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Txt_Codigo_KeyPress);
			// 
			// Label_Codigo
			// 
			this->Label_Codigo->AutoSize = true;
			this->Label_Codigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Codigo->ForeColor = System::Drawing::SystemColors::Control;
			this->Label_Codigo->Location = System::Drawing::Point(228, 110);
			this->Label_Codigo->Name = L"Label_Codigo";
			this->Label_Codigo->Size = System::Drawing::Size(67, 19);
			this->Label_Codigo->TabIndex = 3;
			this->Label_Codigo->Text = L"Codigo";
			this->Label_Codigo->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Bton_Empleados
			// 
			this->Bton_Empleados->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Bton_Empleados->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Bton_Empleados->ForeColor = System::Drawing::SystemColors::Control;
			this->Bton_Empleados->Location = System::Drawing::Point(276, 166);
			this->Bton_Empleados->Name = L"Bton_Empleados";
			this->Bton_Empleados->Size = System::Drawing::Size(138, 38);
			this->Bton_Empleados->TabIndex = 4;
			this->Bton_Empleados->Text = L"Empleado";
			this->Bton_Empleados->UseVisualStyleBackColor = true;
			this->Bton_Empleados->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(537, 339);
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

	//Label "Codigo" Menu inicio Login
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	
	//Al ingresar una letra por "KeyPress" uso el codigo ASCII para que el text solo acepte números
	private: System::Void Txt_Codigo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		if((e->KeyChar >=32 && e->KeyChar <=47 ) || (e->KeyChar >=58 && e->KeyChar <=255))
		{
			MessageBox::Show("Ingresar unicamente números", "ERROR", MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			e->Handled = true;
			return;
		}


	}


		   //Texto donde se pide el codigo para iniciar sesion.
	private: System::Void Txt_Codigo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


	// Boton "Administrador" Menu inicio Login
	private: System::Void Bton_Login_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Empleado obj;
		int Posicion = 0;

		//En caso de que el texto este vacio, saldra una ventana pidiendo que se ingrese algun codigo
		if (Txt_Codigo->Text == "")
		{
			MessageBox::Show("Ingrese algun digito", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		//Como el textbox es tipo string con Int64::Parse lo pasamos a una variable tipo int, ya que solo queremos numeros

		int CodigoIngresado = Int64::Parse(Txt_Codigo->Text);

		if (CodigoIngresado == 123)
		{
			Ventana();
			
		}


		while (obj.LeerDiscoEmpleado(Posicion++)) {

			if (CodigoIngresado == obj.getcodigo_empleado())
			{
				Ventana();
			}
		
		}
		
		MessageBox::Show("Codigo Invalido", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
		

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


};
}
