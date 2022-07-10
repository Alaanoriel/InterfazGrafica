#pragma once
#include "FormularioAgregarEmpleado.h"
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
	private: System::Windows::Forms::Label^ BuscarEmpleado_Label;
	private: System::Windows::Forms::TextBox^ Txt_DNICOD;
	protected:

	private: System::Windows::Forms::Button^ Bton_BuscarEmpleado;
	private: System::Windows::Forms::Button^ Bton_Volver;
	private: System::Windows::Forms::TextBox^ Txt_Mostrar;
	private: System::Windows::Forms::Button^ Btn_Limpiar;






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
			this->BuscarEmpleado_Label = (gcnew System::Windows::Forms::Label());
			this->Txt_DNICOD = (gcnew System::Windows::Forms::TextBox());
			this->Bton_BuscarEmpleado = (gcnew System::Windows::Forms::Button());
			this->Bton_Volver = (gcnew System::Windows::Forms::Button());
			this->Txt_Mostrar = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Limpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BuscarEmpleado_Label
			// 
			this->BuscarEmpleado_Label->AutoSize = true;
			this->BuscarEmpleado_Label->Location = System::Drawing::Point(24, 31);
			this->BuscarEmpleado_Label->Name = L"BuscarEmpleado_Label";
			this->BuscarEmpleado_Label->Size = System::Drawing::Size(112, 13);
			this->BuscarEmpleado_Label->TabIndex = 0;
			this->BuscarEmpleado_Label->Text = L"Ingresar DNI o Codigo";
			// 
			// Txt_DNICOD
			// 
			this->Txt_DNICOD->Location = System::Drawing::Point(27, 85);
			this->Txt_DNICOD->MaxLength = 10;
			this->Txt_DNICOD->Multiline = true;
			this->Txt_DNICOD->Name = L"Txt_DNICOD";
			this->Txt_DNICOD->Size = System::Drawing::Size(351, 39);
			this->Txt_DNICOD->TabIndex = 1;
			// 
			// Bton_BuscarEmpleado
			// 
			this->Bton_BuscarEmpleado->Location = System::Drawing::Point(146, 130);
			this->Bton_BuscarEmpleado->Name = L"Bton_BuscarEmpleado";
			this->Bton_BuscarEmpleado->Size = System::Drawing::Size(113, 33);
			this->Bton_BuscarEmpleado->TabIndex = 2;
			this->Bton_BuscarEmpleado->Text = L"Buscar";
			this->Bton_BuscarEmpleado->UseVisualStyleBackColor = true;
			this->Bton_BuscarEmpleado->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioBuscarEmpleado::Bton_BuscarEmpleado_KeyPress);
			// 
			// Bton_Volver
			// 
			this->Bton_Volver->Location = System::Drawing::Point(27, 130);
			this->Bton_Volver->Name = L"Bton_Volver";
			this->Bton_Volver->Size = System::Drawing::Size(113, 33);
			this->Bton_Volver->TabIndex = 3;
			this->Bton_Volver->Text = L"Volver";
			this->Bton_Volver->UseVisualStyleBackColor = true;
			this->Bton_Volver->Click += gcnew System::EventHandler(this, &FormularioBuscarEmpleado::Bton_Volver_Click);
			// 
			// Txt_Mostrar
			// 
			this->Txt_Mostrar->Location = System::Drawing::Point(27, 180);
			this->Txt_Mostrar->Multiline = true;
			this->Txt_Mostrar->Name = L"Txt_Mostrar";
			this->Txt_Mostrar->Size = System::Drawing::Size(622, 208);
			this->Txt_Mostrar->TabIndex = 4;
			// 
			// Btn_Limpiar
			// 
			this->Btn_Limpiar->Location = System::Drawing::Point(265, 130);
			this->Btn_Limpiar->Name = L"Btn_Limpiar";
			this->Btn_Limpiar->Size = System::Drawing::Size(113, 33);
			this->Btn_Limpiar->TabIndex = 5;
			this->Btn_Limpiar->Text = L"Limpiar";
			this->Btn_Limpiar->UseVisualStyleBackColor = true;
			// 
			// FormularioBuscarEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(661, 420);
			this->Controls->Add(this->Btn_Limpiar);
			this->Controls->Add(this->Txt_Mostrar);
			this->Controls->Add(this->Bton_Volver);
			this->Controls->Add(this->Bton_BuscarEmpleado);
			this->Controls->Add(this->Txt_DNICOD);
			this->Controls->Add(this->BuscarEmpleado_Label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormularioBuscarEmpleado";
			this->Text = L"FormularioBuscarEmpleado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Bton_BuscarEmpleado_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		Empleado obj;
		int DNICOD = Int64::Parse(Txt_DNICOD->Text);
		int pos = 0;
		while(obj.LeerDiscoEmpleado(pos++))
		{
			if( (obj.getcodigo_empleado()==DNICOD) || (obj.getdni_empleado() == DNICOD) )
			{
			
			}
		
		
		}
		MessageBox::Show("No existe el empleado", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;

	}
};
}
