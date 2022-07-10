#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <cstring>
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
	/// Resumen de FormularioAgregarEmpleado
	/// </summary>
	public ref class FormularioAgregarEmpleado : public System::Windows::Forms::Form
	{
	public:
		FormularioAgregarEmpleado(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		string MarshalCadena(System::String^ transformar)
		{
			std::string cad = msclr::interop::marshal_as<std::string>(transformar);
			return cad;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormularioAgregarEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CodigoEmpleado_Label;
	protected:




	private: System::Windows::Forms::TextBox^ Txt_CodigoEmpleado;
	private: System::Windows::Forms::TextBox^ Txt_Nombre;
	private: System::Windows::Forms::TextBox^ Txt_Apellido;
	private: System::Windows::Forms::TextBox^ Txt_DNI;
	private: System::Windows::Forms::Button^ Bton_Guardar;
	private: System::Windows::Forms::Button^ Bton_Volver;
	private: System::Windows::Forms::ComboBox^ Box_Categoria;
	private: System::Windows::Forms::Label^ Label_Categoria;
	private: System::Windows::Forms::Label^ Label_DNI;
	private: System::Windows::Forms::Label^ Label_Apellido;
	private: System::Windows::Forms::Label^ Label_Nombre;
	private: System::Windows::Forms::Button^ Bton_Limpiar;



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
			this->CodigoEmpleado_Label = (gcnew System::Windows::Forms::Label());
			this->Txt_CodigoEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Apellido = (gcnew System::Windows::Forms::TextBox());
			this->Txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->Bton_Guardar = (gcnew System::Windows::Forms::Button());
			this->Bton_Volver = (gcnew System::Windows::Forms::Button());
			this->Box_Categoria = (gcnew System::Windows::Forms::ComboBox());
			this->Label_Categoria = (gcnew System::Windows::Forms::Label());
			this->Label_DNI = (gcnew System::Windows::Forms::Label());
			this->Label_Apellido = (gcnew System::Windows::Forms::Label());
			this->Label_Nombre = (gcnew System::Windows::Forms::Label());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CodigoEmpleado_Label
			// 
			this->CodigoEmpleado_Label->AutoSize = true;
			this->CodigoEmpleado_Label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CodigoEmpleado_Label->ForeColor = System::Drawing::Color::AliceBlue;
			this->CodigoEmpleado_Label->Location = System::Drawing::Point(32, 54);
			this->CodigoEmpleado_Label->Name = L"CodigoEmpleado_Label";
			this->CodigoEmpleado_Label->Size = System::Drawing::Size(232, 25);
			this->CodigoEmpleado_Label->TabIndex = 0;
			this->CodigoEmpleado_Label->Text = L"Codigo de empleado";
			// 
			// Txt_CodigoEmpleado
			// 
			this->Txt_CodigoEmpleado->BackColor = System::Drawing::Color::White;
			this->Txt_CodigoEmpleado->Location = System::Drawing::Point(289, 60);
			this->Txt_CodigoEmpleado->MaxLength = 5;
			this->Txt_CodigoEmpleado->Name = L"Txt_CodigoEmpleado";
			this->Txt_CodigoEmpleado->Size = System::Drawing::Size(197, 20);
			this->Txt_CodigoEmpleado->TabIndex = 5;
			this->Txt_CodigoEmpleado->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_CodigoEmpleado_KeyPress);
			// 
			// Txt_Nombre
			// 
			this->Txt_Nombre->BackColor = System::Drawing::Color::White;
			this->Txt_Nombre->Location = System::Drawing::Point(289, 112);
			this->Txt_Nombre->MaxLength = 10;
			this->Txt_Nombre->Name = L"Txt_Nombre";
			this->Txt_Nombre->Size = System::Drawing::Size(197, 20);
			this->Txt_Nombre->TabIndex = 6;
			this->Txt_Nombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_Nombre_KeyPress);
			// 
			// Txt_Apellido
			// 
			this->Txt_Apellido->BackColor = System::Drawing::Color::White;
			this->Txt_Apellido->Location = System::Drawing::Point(289, 168);
			this->Txt_Apellido->MaxLength = 10;
			this->Txt_Apellido->Name = L"Txt_Apellido";
			this->Txt_Apellido->Size = System::Drawing::Size(197, 20);
			this->Txt_Apellido->TabIndex = 7;
			this->Txt_Apellido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_Apellido_KeyPress);
			// 
			// Txt_DNI
			// 
			this->Txt_DNI->BackColor = System::Drawing::Color::White;
			this->Txt_DNI->Location = System::Drawing::Point(289, 226);
			this->Txt_DNI->MaxLength = 8;
			this->Txt_DNI->Name = L"Txt_DNI";
			this->Txt_DNI->Size = System::Drawing::Size(197, 20);
			this->Txt_DNI->TabIndex = 8;
			this->Txt_DNI->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_DNI_KeyPress);
			// 
			// Bton_Guardar
			// 
			this->Bton_Guardar->Location = System::Drawing::Point(332, 359);
			this->Bton_Guardar->Name = L"Bton_Guardar";
			this->Bton_Guardar->Size = System::Drawing::Size(101, 34);
			this->Bton_Guardar->TabIndex = 9;
			this->Bton_Guardar->Text = L"Guardar";
			this->Bton_Guardar->UseVisualStyleBackColor = true;
			this->Bton_Guardar->Click += gcnew System::EventHandler(this, &FormularioAgregarEmpleado::Bton_Guardar_Click);
			// 
			// Bton_Volver
			// 
			this->Bton_Volver->BackColor = System::Drawing::SystemColors::Control;
			this->Bton_Volver->Location = System::Drawing::Point(236, 359);
			this->Bton_Volver->Name = L"Bton_Volver";
			this->Bton_Volver->Size = System::Drawing::Size(90, 34);
			this->Bton_Volver->TabIndex = 10;
			this->Bton_Volver->Text = L"Volver";
			this->Bton_Volver->UseVisualStyleBackColor = false;
			this->Bton_Volver->Click += gcnew System::EventHandler(this, &FormularioAgregarEmpleado::Bton_Volver_Click);
			// 
			// Box_Categoria
			// 
			this->Box_Categoria->BackColor = System::Drawing::Color::White;
			this->Box_Categoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Box_Categoria->FormattingEnabled = true;
			this->Box_Categoria->Location = System::Drawing::Point(289, 280);
			this->Box_Categoria->Name = L"Box_Categoria";
			this->Box_Categoria->Size = System::Drawing::Size(197, 21);
			this->Box_Categoria->TabIndex = 11;
			// 
			// Label_Categoria
			// 
			this->Label_Categoria->AutoSize = true;
			this->Label_Categoria->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Categoria->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label_Categoria->Location = System::Drawing::Point(34, 274);
			this->Label_Categoria->Name = L"Label_Categoria";
			this->Label_Categoria->Size = System::Drawing::Size(114, 25);
			this->Label_Categoria->TabIndex = 12;
			this->Label_Categoria->Text = L"Categoria";
			// 
			// Label_DNI
			// 
			this->Label_DNI->AutoSize = true;
			this->Label_DNI->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_DNI->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label_DNI->Location = System::Drawing::Point(37, 220);
			this->Label_DNI->Name = L"Label_DNI";
			this->Label_DNI->Size = System::Drawing::Size(49, 25);
			this->Label_DNI->TabIndex = 13;
			this->Label_DNI->Text = L"DNI";
			// 
			// Label_Apellido
			// 
			this->Label_Apellido->AutoSize = true;
			this->Label_Apellido->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Apellido->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label_Apellido->Location = System::Drawing::Point(32, 162);
			this->Label_Apellido->Name = L"Label_Apellido";
			this->Label_Apellido->Size = System::Drawing::Size(97, 25);
			this->Label_Apellido->TabIndex = 14;
			this->Label_Apellido->Text = L"Apellido";
			// 
			// Label_Nombre
			// 
			this->Label_Nombre->AutoSize = true;
			this->Label_Nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Nombre->ForeColor = System::Drawing::Color::AliceBlue;
			this->Label_Nombre->Location = System::Drawing::Point(34, 106);
			this->Label_Nombre->Name = L"Label_Nombre";
			this->Label_Nombre->Size = System::Drawing::Size(95, 25);
			this->Label_Nombre->TabIndex = 15;
			this->Label_Nombre->Text = L"Nombre";
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(440, 359);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(101, 34);
			this->Bton_Limpiar->TabIndex = 16;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioAgregarEmpleado::Bton_Limpiar_Click);
			// 
			// FormularioAgregarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(661, 420);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Label_Nombre);
			this->Controls->Add(this->Label_Apellido);
			this->Controls->Add(this->Label_DNI);
			this->Controls->Add(this->Label_Categoria);
			this->Controls->Add(this->Box_Categoria);
			this->Controls->Add(this->Bton_Volver);
			this->Controls->Add(this->Bton_Guardar);
			this->Controls->Add(this->Txt_DNI);
			this->Controls->Add(this->Txt_Apellido);
			this->Controls->Add(this->Txt_Nombre);
			this->Controls->Add(this->Txt_CodigoEmpleado);
			this->Controls->Add(this->CodigoEmpleado_Label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormularioAgregarEmpleado";
			this->Text = L"Agregar nuevo empleado";
			this->Load += gcnew System::EventHandler(this, &FormularioAgregarEmpleado::FormularioAgregarEmpleado_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void Limpiar() {
			
			Txt_CodigoEmpleado->Clear();
			Txt_Apellido->Clear();
			Txt_Nombre->Clear();
			Txt_DNI->Clear();
			Box_Categoria->Items->Clear();

	}

	//Boton Volver, cierro el formulario.
	private: System::Void Bton_Volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void Bton_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Empleado obj;
		switch(Validaciones())
		{
		case 0:
		{
			int codigo = Int64::Parse(Txt_CodigoEmpleado->Text);
			obj.setcodigo_empleado(codigo);

			System::String^ Nombre = Txt_Nombre->Text;
			obj.setnombre_empleado(MarshalCadena(Nombre));

			System::String^ Apellido = Txt_Apellido->Text;
			obj.setapellido_empleado(MarshalCadena(Apellido));

			int dni = Int64::Parse(Txt_DNI->Text);
			obj.setdni_empleado(dni);

			System::String^ Seleccion = Box_Categoria->SelectedItem->ToString();
			obj.setcategoria_empleado(MarshalCadena(Seleccion));

			obj.GrabarEmpleado();
			MessageBox::Show("Empleado agreado", "Completado", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
			break;
		}

		case 1:
		{
			MessageBox::Show("Ingrese un codigo", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		case 2:
		{
			MessageBox::Show("Ingrese un nombre", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		case 3:
		{
			MessageBox::Show("Ingrese un apellido", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		case 4:
		{
			MessageBox::Show("Ingrese un dni", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		}

		case 5:
		{
			MessageBox::Show("Ingrese una categoria", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
		
		}

		}
	
	}

	 int Validaciones() {

			   if (Txt_CodigoEmpleado->Text == "")
			   {
				   return 1;
			   }

			   else

				   if (Txt_Nombre->Text == "")
				   {

					   return 2;
				   }

				   else

					   if (Txt_Apellido->Text == "")
					   {
						   return 3;
					   }

					   else
						   if (Txt_DNI->Text == "")
						   {
							   return 4;
						   }

						   else

							   if (Box_Categoria->SelectedIndex <= -1)
							   {
								   return 5;
							   }
							   else
							   {
								   return 0;
							   }

		   }


private: System::Void FormularioAgregarEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {

	Box_Categoria->Items->Add("Empleado");
	Box_Categoria->Items->Add("Gerente");
}
private: System::Void Txt_CodigoEmpleado_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}
}
private: System::Void Txt_DNI_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}
}
private: System::Void Txt_Nombre_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	if ((e->KeyChar >= 32 && e->KeyChar <= 64) || (e->KeyChar >= 91 && e->KeyChar <= 96) || (e->KeyChar >= 123 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}

}
private: System::Void Txt_Apellido_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	
	if ((e->KeyChar >= 32 && e->KeyChar <= 64) || (e->KeyChar >= 91 && e->KeyChar <= 96) || (e->KeyChar >= 123 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}
}
private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	Limpiar();


}
};
}
