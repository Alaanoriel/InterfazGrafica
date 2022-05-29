#pragma once

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
			this->Txt_CodigoEmpleado->Name = L"Txt_CodigoEmpleado";
			this->Txt_CodigoEmpleado->Size = System::Drawing::Size(197, 20);
			this->Txt_CodigoEmpleado->TabIndex = 5;
			// 
			// Txt_Nombre
			// 
			this->Txt_Nombre->Location = System::Drawing::Point(159, 106);
			this->Txt_Nombre->Name = L"Txt_Nombre";
			this->Txt_Nombre->Size = System::Drawing::Size(197, 20);
			this->Txt_Nombre->TabIndex = 6;
			// 
			// Txt_Apellido
			// 
			this->Txt_Apellido->Location = System::Drawing::Point(159, 168);
			this->Txt_Apellido->Name = L"Txt_Apellido";
			this->Txt_Apellido->Size = System::Drawing::Size(197, 20);
			this->Txt_Apellido->TabIndex = 7;
			// 
			// Txt_DNI
			// 
			this->Txt_DNI->Location = System::Drawing::Point(159, 229);
			this->Txt_DNI->Name = L"Txt_DNI";
			this->Txt_DNI->Size = System::Drawing::Size(197, 20);
			this->Txt_DNI->TabIndex = 8;
			// 
			// Bton_Guardar
			// 
			this->Bton_Guardar->Location = System::Drawing::Point(255, 314);
			this->Bton_Guardar->Name = L"Bton_Guardar";
			this->Bton_Guardar->Size = System::Drawing::Size(101, 34);
			this->Bton_Guardar->TabIndex = 9;
			this->Bton_Guardar->Text = L"Guardar";
			this->Bton_Guardar->UseVisualStyleBackColor = true;
			// 
			// Bton_Volver
			// 
			this->Bton_Volver->Location = System::Drawing::Point(159, 314);
			this->Bton_Volver->Name = L"Bton_Volver";
			this->Bton_Volver->Size = System::Drawing::Size(90, 33);
			this->Bton_Volver->TabIndex = 10;
			this->Bton_Volver->Text = L"Volver";
			this->Bton_Volver->UseVisualStyleBackColor = true;
			// 
			// FormularioAgregarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 370);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
