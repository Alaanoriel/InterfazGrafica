#pragma once
#include "FormularioAgregarEmpleado.h"
#include "FormularioBuscarEmpleado.h"
#include "FormularioBajaTemporalEmpleado.h"
#include "FormularioBajaTotalEmpleado.h"

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaEmpleados
	/// </summary>
	public ref class VentanaEmpleados : public System::Windows::Forms::Form
	{
	public:
		VentanaEmpleados(void)
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
		~VentanaEmpleados()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Boton_BuscarEmpleado;
	protected:
	private: System::Windows::Forms::Label^ Label_TextEmpleado;
	private: System::Windows::Forms::Button^ Boton_NuevoEmpleado;
	private: System::Windows::Forms::Button^ Boton_Bajatemporal;
	private: System::Windows::Forms::Button^ Boton_BajaTotal;

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
			this->Boton_BuscarEmpleado = (gcnew System::Windows::Forms::Button());
			this->Label_TextEmpleado = (gcnew System::Windows::Forms::Label());
			this->Boton_NuevoEmpleado = (gcnew System::Windows::Forms::Button());
			this->Boton_Bajatemporal = (gcnew System::Windows::Forms::Button());
			this->Boton_BajaTotal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Boton_BuscarEmpleado
			// 
			this->Boton_BuscarEmpleado->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_BuscarEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_BuscarEmpleado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_BuscarEmpleado->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_BuscarEmpleado->Location = System::Drawing::Point(345, 87);
			this->Boton_BuscarEmpleado->Name = L"Boton_BuscarEmpleado";
			this->Boton_BuscarEmpleado->Size = System::Drawing::Size(202, 131);
			this->Boton_BuscarEmpleado->TabIndex = 1;
			this->Boton_BuscarEmpleado->Text = L"Buscar empleado";
			this->Boton_BuscarEmpleado->UseVisualStyleBackColor = false;
			this->Boton_BuscarEmpleado->Click += gcnew System::EventHandler(this, &VentanaEmpleados::Boton_BuscarEmpleado_Click);
			// 
			// Label_TextEmpleado
			// 
			this->Label_TextEmpleado->AutoSize = true;
			this->Label_TextEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Label_TextEmpleado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_TextEmpleado->ForeColor = System::Drawing::Color::BurlyWood;
			this->Label_TextEmpleado->Location = System::Drawing::Point(229, 34);
			this->Label_TextEmpleado->Name = L"Label_TextEmpleado";
			this->Label_TextEmpleado->Size = System::Drawing::Size(224, 25);
			this->Label_TextEmpleado->TabIndex = 4;
			this->Label_TextEmpleado->Text = L"Menu de empleados\r\n";
			// 
			// Boton_NuevoEmpleado
			// 
			this->Boton_NuevoEmpleado->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_NuevoEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_NuevoEmpleado->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_NuevoEmpleado->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_NuevoEmpleado->Location = System::Drawing::Point(137, 87);
			this->Boton_NuevoEmpleado->Name = L"Boton_NuevoEmpleado";
			this->Boton_NuevoEmpleado->Size = System::Drawing::Size(202, 131);
			this->Boton_NuevoEmpleado->TabIndex = 5;
			this->Boton_NuevoEmpleado->Text = L"Nuevo empleado";
			this->Boton_NuevoEmpleado->UseVisualStyleBackColor = false;
			this->Boton_NuevoEmpleado->Click += gcnew System::EventHandler(this, &VentanaEmpleados::Boton_NuevoEmpleado_Click);
			// 
			// Boton_Bajatemporal
			// 
			this->Boton_Bajatemporal->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_Bajatemporal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Bajatemporal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Bajatemporal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_Bajatemporal->Location = System::Drawing::Point(137, 224);
			this->Boton_Bajatemporal->Name = L"Boton_Bajatemporal";
			this->Boton_Bajatemporal->Size = System::Drawing::Size(202, 131);
			this->Boton_Bajatemporal->TabIndex = 6;
			this->Boton_Bajatemporal->Text = L"Baja temporal";
			this->Boton_Bajatemporal->UseVisualStyleBackColor = false;
			this->Boton_Bajatemporal->Click += gcnew System::EventHandler(this, &VentanaEmpleados::Boton_Bajatemporal_Click);
			// 
			// Boton_BajaTotal
			// 
			this->Boton_BajaTotal->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_BajaTotal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_BajaTotal->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_BajaTotal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_BajaTotal->Location = System::Drawing::Point(345, 224);
			this->Boton_BajaTotal->Name = L"Boton_BajaTotal";
			this->Boton_BajaTotal->Size = System::Drawing::Size(202, 131);
			this->Boton_BajaTotal->TabIndex = 7;
			this->Boton_BajaTotal->Text = L"Baja total";
			this->Boton_BajaTotal->UseVisualStyleBackColor = false;
			this->Boton_BajaTotal->Click += gcnew System::EventHandler(this, &VentanaEmpleados::Boton_BajaTotal_Click);
			// 
			// VentanaEmpleados
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(677, 459);
			this->Controls->Add(this->Boton_BajaTotal);
			this->Controls->Add(this->Boton_Bajatemporal);
			this->Controls->Add(this->Boton_NuevoEmpleado);
			this->Controls->Add(this->Label_TextEmpleado);
			this->Controls->Add(this->Boton_BuscarEmpleado);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VentanaEmpleados";
			this->Text = L"VentanaEmpleados";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		Form^ ActualADM;
		void AbrirFormulario(Form^ FormularioHijoADM)
		{
			if (this->ActualADM != nullptr)
				{
					this->ActualADM->Close();
				}
				VentanaEmpleados::Controls->Clear();
				this->ActualADM = FormularioHijoADM;
				FormularioHijoADM->Dock = DockStyle::Fill;
				FormularioHijoADM->TopLevel = false;
				this->Controls->Add(FormularioHijoADM);
				this->Tag = FormularioHijoADM;
				FormularioHijoADM->Show();

		}

	private: System::Void Boton_NuevoEmpleado_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->AbrirFormulario(gcnew InterfazGrafica::FormularioAgregarEmpleado());
	}

private: System::Void Boton_BuscarEmpleado_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirFormulario(gcnew InterfazGrafica::FormularioBuscarEmpleado());
}


private: System::Void Boton_Bajatemporal_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirFormulario(gcnew InterfazGrafica::FormularioBajaTemporalEmpleado());
}

private: System::Void Boton_BajaTotal_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AbrirFormulario(gcnew InterfazGrafica::FormularioBajaTotalEmpleado());
}

};
}
