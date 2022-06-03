#pragma once
#include <iostream>
#include "Empleados.h"
#include <string>
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::Label^ NombreEmpleado_Label;
	private: System::Windows::Forms::Label^ ApellidoEmpleado_Label;
	private: System::Windows::Forms::Label^ DniEmpleado_Label;
	private: System::Windows::Forms::Label^ CategoriaEmpleado_label;
	private: System::Windows::Forms::TextBox^ Txt_CodigoEmpleado;
	private: System::Windows::Forms::TextBox^ Txt_Nombre;
	private: System::Windows::Forms::TextBox^ Txt_Apellido;
	private: System::Windows::Forms::TextBox^ Txt_DNI;
	private: System::Windows::Forms::Button^ Bton_Guardar;
	private: System::Windows::Forms::Button^ Bton_Volver;
	private: System::Windows::Forms::ComboBox^ Box_Categoria;



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
			this->CodigoEmpleado_Label = (gcnew System::Windows::Forms::Label());
			this->NombreEmpleado_Label = (gcnew System::Windows::Forms::Label());
			this->ApellidoEmpleado_Label = (gcnew System::Windows::Forms::Label());
			this->DniEmpleado_Label = (gcnew System::Windows::Forms::Label());
			this->CategoriaEmpleado_label = (gcnew System::Windows::Forms::Label());
			this->Txt_CodigoEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Apellido = (gcnew System::Windows::Forms::TextBox());
			this->Txt_DNI = (gcnew System::Windows::Forms::TextBox());
			this->Bton_Guardar = (gcnew System::Windows::Forms::Button());
			this->Bton_Volver = (gcnew System::Windows::Forms::Button());
			this->Box_Categoria = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// CodigoEmpleado_Label
			// 
			this->CodigoEmpleado_Label->AutoSize = true;
			this->CodigoEmpleado_Label->Location = System::Drawing::Point(31, 44);
			this->CodigoEmpleado_Label->Name = L"CodigoEmpleado_Label";
			this->CodigoEmpleado_Label->Size = System::Drawing::Size(104, 13);
			this->CodigoEmpleado_Label->TabIndex = 0;
			this->CodigoEmpleado_Label->Text = L"Codigo de empleado";
			// 
			// NombreEmpleado_Label
			// 
			this->NombreEmpleado_Label->AutoSize = true;
			this->NombreEmpleado_Label->Location = System::Drawing::Point(34, 106);
			this->NombreEmpleado_Label->Name = L"NombreEmpleado_Label";
			this->NombreEmpleado_Label->Size = System::Drawing::Size(44, 13);
			this->NombreEmpleado_Label->TabIndex = 1;
			this->NombreEmpleado_Label->Text = L"Nombre";
			// 
			// ApellidoEmpleado_Label
			// 
			this->ApellidoEmpleado_Label->AutoSize = true;
			this->ApellidoEmpleado_Label->Location = System::Drawing::Point(34, 168);
			this->ApellidoEmpleado_Label->Name = L"ApellidoEmpleado_Label";
			this->ApellidoEmpleado_Label->Size = System::Drawing::Size(44, 13);
			this->ApellidoEmpleado_Label->TabIndex = 2;
			this->ApellidoEmpleado_Label->Text = L"Apellido";
			// 
			// DniEmpleado_Label
			// 
			this->DniEmpleado_Label->AutoSize = true;
			this->DniEmpleado_Label->Location = System::Drawing::Point(34, 229);
			this->DniEmpleado_Label->Name = L"DniEmpleado_Label";
			this->DniEmpleado_Label->Size = System::Drawing::Size(26, 13);
			this->DniEmpleado_Label->TabIndex = 3;
			this->DniEmpleado_Label->Text = L"DNI";
			// 
			// CategoriaEmpleado_label
			// 
			this->CategoriaEmpleado_label->AutoSize = true;
			this->CategoriaEmpleado_label->Location = System::Drawing::Point(34, 280);
			this->CategoriaEmpleado_label->Name = L"CategoriaEmpleado_label";
			this->CategoriaEmpleado_label->Size = System::Drawing::Size(52, 13);
			this->CategoriaEmpleado_label->TabIndex = 4;
			this->CategoriaEmpleado_label->Text = L"Categoria";
			// 
			// Txt_CodigoEmpleado
			// 
			this->Txt_CodigoEmpleado->Location = System::Drawing::Point(159, 44);
			this->Txt_CodigoEmpleado->MaxLength = 5;
			this->Txt_CodigoEmpleado->Name = L"Txt_CodigoEmpleado";
			this->Txt_CodigoEmpleado->Size = System::Drawing::Size(197, 20);
			this->Txt_CodigoEmpleado->TabIndex = 5;
			this->Txt_CodigoEmpleado->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_CodigoEmpleado_KeyPress);
			// 
			// Txt_Nombre
			// 
			this->Txt_Nombre->Location = System::Drawing::Point(159, 106);
			this->Txt_Nombre->MaxLength = 10;
			this->Txt_Nombre->Name = L"Txt_Nombre";
			this->Txt_Nombre->Size = System::Drawing::Size(197, 20);
			this->Txt_Nombre->TabIndex = 6;
			this->Txt_Nombre->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_Nombre_KeyPress);
			// 
			// Txt_Apellido
			// 
			this->Txt_Apellido->Location = System::Drawing::Point(159, 168);
			this->Txt_Apellido->MaxLength = 10;
			this->Txt_Apellido->Name = L"Txt_Apellido";
			this->Txt_Apellido->Size = System::Drawing::Size(197, 20);
			this->Txt_Apellido->TabIndex = 7;
			this->Txt_Apellido->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_Apellido_KeyPress);
			// 
			// Txt_DNI
			// 
			this->Txt_DNI->Location = System::Drawing::Point(159, 229);
			this->Txt_DNI->MaxLength = 8;
			this->Txt_DNI->Name = L"Txt_DNI";
			this->Txt_DNI->Size = System::Drawing::Size(197, 20);
			this->Txt_DNI->TabIndex = 8;
			this->Txt_DNI->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioAgregarEmpleado::Txt_DNI_KeyPress);
			// 
			// Bton_Guardar
			// 
			this->Bton_Guardar->Location = System::Drawing::Point(255, 314);
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
			this->Bton_Volver->Location = System::Drawing::Point(159, 314);
			this->Bton_Volver->Name = L"Bton_Volver";
			this->Bton_Volver->Size = System::Drawing::Size(90, 33);
			this->Bton_Volver->TabIndex = 10;
			this->Bton_Volver->Text = L"Volver";
			this->Bton_Volver->UseVisualStyleBackColor = false;
			this->Bton_Volver->Click += gcnew System::EventHandler(this, &FormularioAgregarEmpleado::Bton_Volver_Click);
			// 
			// Box_Categoria
			// 
			this->Box_Categoria->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Box_Categoria->FormattingEnabled = true;
			this->Box_Categoria->Location = System::Drawing::Point(159, 280);
			this->Box_Categoria->Name = L"Box_Categoria";
			this->Box_Categoria->Size = System::Drawing::Size(197, 21);
			this->Box_Categoria->TabIndex = 11;
			// 
			// FormularioAgregarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(381, 370);
			this->Controls->Add(this->Box_Categoria);
			this->Controls->Add(this->Bton_Volver);
			this->Controls->Add(this->Bton_Guardar);
			this->Controls->Add(this->Txt_DNI);
			this->Controls->Add(this->Txt_Apellido);
			this->Controls->Add(this->Txt_Nombre);
			this->Controls->Add(this->Txt_CodigoEmpleado);
			this->Controls->Add(this->CategoriaEmpleado_label);
			this->Controls->Add(this->DniEmpleado_Label);
			this->Controls->Add(this->ApellidoEmpleado_Label);
			this->Controls->Add(this->NombreEmpleado_Label);
			this->Controls->Add(this->CodigoEmpleado_Label);
			this->Name = L"FormularioAgregarEmpleado";
			this->Text = L"Agregar nuevo empleado";
			this->Load += gcnew System::EventHandler(this, &FormularioAgregarEmpleado::FormularioAgregarEmpleado_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	//Boton Volver, cierro el formulario.
	private: System::Void Bton_Volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void Bton_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Empleado obj;
		
		int codigo = Int64::Parse(Txt_CodigoEmpleado->Text);
		obj.setcodigo_empleado(codigo);

		String^ type = Txt_Nombre->Text->ToString();
		char V[10] = { 0 };
		if (type->Length < sizeof(V))
			printf(V, "%s", type);
		std::string Nombre(V);
		obj.setnombre_empleado(Nombre);

		String^ type2 = Txt_Apellido->Text->ToString();
		char V2[10] = { 0 };
		//if (type->Length < sizeof(V2))
			//printf(V2, "%s", type2);
		std::string Apellido(V2);
		obj.setnombre_empleado(Apellido);

		int dni = Int64::Parse(Txt_DNI->Text);
		obj.setcodigo_empleado(dni);

		String^ type3 = Box_Categoria->SelectedItem->ToString();
		char V3[10] = { 0 };
		if (type->Length < sizeof(V3))
			printf(V3, "%s", type3);
		std::string Categoria(V3);
		obj.setcategoria_empleado(Categoria);

		if (Txt_CodigoEmpleado->Text == "" || Txt_Nombre->Text == "" || Txt_Apellido->Text =="" || Txt_DNI->Text == "" || Box_Categoria->SelectedItem=="")
		{
			MessageBox::Show("Llene los campos", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else obj.GrabarEmpleado();
		MessageBox::Show("Empleado agreado","Completado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
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
};
}
