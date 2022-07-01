#pragma once
#include "FormularioAgregarEmpleado.h"
#include "FormularioBuscarEmpleado.h"
#include "VentanaEmpleados.h"
#include "VentanaVENDER.h"
#include "VentanaProductos.h"

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaADM
	/// </summary>
	public ref class VentanaADM : public System::Windows::Forms::Form
	{
	public:
		VentanaADM(void)
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
		~VentanaADM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ Panel_Izquierdo;
	protected:

	private: System::Windows::Forms::Panel^ Panel_MARGENTOP;

	private: System::Windows::Forms::Panel^ Panel_MID;
	private: System::Windows::Forms::Button^ Boton_Inicio;
	private: System::Windows::Forms::Button^ Boton_EmpleadosOPC;
	private: System::Windows::Forms::Button^ Boton_Salir;
	private: System::Windows::Forms::Button^ Boton_Ventas;
	private: System::Windows::Forms::Button^ Boton_Stock;
	private: System::Windows::Forms::Button^ Boton_Productos;
	private: System::Windows::Forms::Panel^ panel1;



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
			this->Panel_Izquierdo = (gcnew System::Windows::Forms::Panel());
			this->Boton_Salir = (gcnew System::Windows::Forms::Button());
			this->Boton_Ventas = (gcnew System::Windows::Forms::Button());
			this->Boton_Stock = (gcnew System::Windows::Forms::Button());
			this->Boton_Productos = (gcnew System::Windows::Forms::Button());
			this->Boton_EmpleadosOPC = (gcnew System::Windows::Forms::Button());
			this->Boton_Inicio = (gcnew System::Windows::Forms::Button());
			this->Panel_MARGENTOP = (gcnew System::Windows::Forms::Panel());
			this->Panel_MID = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Panel_Izquierdo->SuspendLayout();
			this->Panel_MID->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel_Izquierdo
			// 
			this->Panel_Izquierdo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Panel_Izquierdo->Controls->Add(this->Boton_Salir);
			this->Panel_Izquierdo->Controls->Add(this->Boton_Ventas);
			this->Panel_Izquierdo->Controls->Add(this->Boton_Stock);
			this->Panel_Izquierdo->Controls->Add(this->Boton_Productos);
			this->Panel_Izquierdo->Controls->Add(this->Boton_EmpleadosOPC);
			this->Panel_Izquierdo->Controls->Add(this->Boton_Inicio);
			this->Panel_Izquierdo->Controls->Add(this->Panel_MARGENTOP);
			this->Panel_Izquierdo->Dock = System::Windows::Forms::DockStyle::Left;
			this->Panel_Izquierdo->Location = System::Drawing::Point(0, 0);
			this->Panel_Izquierdo->Name = L"Panel_Izquierdo";
			this->Panel_Izquierdo->Size = System::Drawing::Size(194, 459);
			this->Panel_Izquierdo->TabIndex = 0;
			// 
			// Boton_Salir
			// 
			this->Boton_Salir->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Boton_Salir->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Boton_Salir->Dock = System::Windows::Forms::DockStyle::Top;
			this->Boton_Salir->FlatAppearance->BorderSize = 0;
			this->Boton_Salir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Salir->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Salir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Boton_Salir->Location = System::Drawing::Point(0, 332);
			this->Boton_Salir->Name = L"Boton_Salir";
			this->Boton_Salir->Size = System::Drawing::Size(194, 48);
			this->Boton_Salir->TabIndex = 5;
			this->Boton_Salir->Text = L"Salir";
			this->Boton_Salir->UseVisualStyleBackColor = false;
			this->Boton_Salir->Click += gcnew System::EventHandler(this, &VentanaADM::Boton_Salir_Click);
			// 
			// Boton_Ventas
			// 
			this->Boton_Ventas->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Boton_Ventas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Boton_Ventas->Dock = System::Windows::Forms::DockStyle::Top;
			this->Boton_Ventas->FlatAppearance->BorderSize = 0;
			this->Boton_Ventas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Ventas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Ventas->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Boton_Ventas->Location = System::Drawing::Point(0, 284);
			this->Boton_Ventas->Name = L"Boton_Ventas";
			this->Boton_Ventas->Size = System::Drawing::Size(194, 48);
			this->Boton_Ventas->TabIndex = 4;
			this->Boton_Ventas->Text = L"Ventas";
			this->Boton_Ventas->UseVisualStyleBackColor = false;
			this->Boton_Ventas->Click += gcnew System::EventHandler(this, &VentanaADM::Boton_Ventas_Click);
			// 
			// Boton_Stock
			// 
			this->Boton_Stock->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Boton_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Boton_Stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->Boton_Stock->FlatAppearance->BorderSize = 0;
			this->Boton_Stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Stock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Stock->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Boton_Stock->Location = System::Drawing::Point(0, 236);
			this->Boton_Stock->Name = L"Boton_Stock";
			this->Boton_Stock->Size = System::Drawing::Size(194, 48);
			this->Boton_Stock->TabIndex = 3;
			this->Boton_Stock->Text = L"Stock";
			this->Boton_Stock->UseVisualStyleBackColor = false;
			this->Boton_Stock->Click += gcnew System::EventHandler(this, &VentanaADM::Boton_Stock_Click);
			// 
			// Boton_Productos
			// 
			this->Boton_Productos->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Boton_Productos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Boton_Productos->Dock = System::Windows::Forms::DockStyle::Top;
			this->Boton_Productos->FlatAppearance->BorderSize = 0;
			this->Boton_Productos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Productos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Productos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Boton_Productos->Location = System::Drawing::Point(0, 188);
			this->Boton_Productos->Name = L"Boton_Productos";
			this->Boton_Productos->Size = System::Drawing::Size(194, 48);
			this->Boton_Productos->TabIndex = 2;
			this->Boton_Productos->Text = L"Productos";
			this->Boton_Productos->UseVisualStyleBackColor = false;
			this->Boton_Productos->Click += gcnew System::EventHandler(this, &VentanaADM::Boton_Productos_Click);
			// 
			// Boton_EmpleadosOPC
			// 
			this->Boton_EmpleadosOPC->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Boton_EmpleadosOPC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Boton_EmpleadosOPC->Dock = System::Windows::Forms::DockStyle::Top;
			this->Boton_EmpleadosOPC->FlatAppearance->BorderSize = 0;
			this->Boton_EmpleadosOPC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_EmpleadosOPC->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_EmpleadosOPC->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Boton_EmpleadosOPC->Location = System::Drawing::Point(0, 140);
			this->Boton_EmpleadosOPC->Name = L"Boton_EmpleadosOPC";
			this->Boton_EmpleadosOPC->Size = System::Drawing::Size(194, 48);
			this->Boton_EmpleadosOPC->TabIndex = 1;
			this->Boton_EmpleadosOPC->Text = L"Empleados";
			this->Boton_EmpleadosOPC->UseVisualStyleBackColor = false;
			this->Boton_EmpleadosOPC->Click += gcnew System::EventHandler(this, &VentanaADM::Boton_EmpleadosOPC_Click);
			// 
			// Boton_Inicio
			// 
			this->Boton_Inicio->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Boton_Inicio->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Boton_Inicio->Dock = System::Windows::Forms::DockStyle::Top;
			this->Boton_Inicio->FlatAppearance->BorderSize = 0;
			this->Boton_Inicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Inicio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Inicio->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Boton_Inicio->Location = System::Drawing::Point(0, 92);
			this->Boton_Inicio->Name = L"Boton_Inicio";
			this->Boton_Inicio->Size = System::Drawing::Size(194, 48);
			this->Boton_Inicio->TabIndex = 0;
			this->Boton_Inicio->Text = L"Inicio";
			this->Boton_Inicio->UseVisualStyleBackColor = false;
			this->Boton_Inicio->Click += gcnew System::EventHandler(this, &VentanaADM::Boton_Inicio_Click);
			// 
			// Panel_MARGENTOP
			// 
			this->Panel_MARGENTOP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Panel_MARGENTOP->Dock = System::Windows::Forms::DockStyle::Top;
			this->Panel_MARGENTOP->Location = System::Drawing::Point(0, 0);
			this->Panel_MARGENTOP->Name = L"Panel_MARGENTOP";
			this->Panel_MARGENTOP->Size = System::Drawing::Size(194, 92);
			this->Panel_MARGENTOP->TabIndex = 0;
			// 
			// Panel_MID
			// 
			this->Panel_MID->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Panel_MID->Controls->Add(this->panel1);
			this->Panel_MID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_MID->Location = System::Drawing::Point(194, 0);
			this->Panel_MID->Name = L"Panel_MID";
			this->Panel_MID->Size = System::Drawing::Size(677, 459);
			this->Panel_MID->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 416);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(677, 43);
			this->panel1->TabIndex = 0;
			// 
			// VentanaADM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(871, 459);
			this->Controls->Add(this->Panel_MID);
			this->Controls->Add(this->Panel_Izquierdo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"VentanaADM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaADM";
			this->Panel_Izquierdo->ResumeLayout(false);
			this->Panel_MID->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
//Recibe como parametro un formulario hijo, abre el formulario dentro del panel "MID"
public:
	Form^ Actual;
			void AbrirFormulario(Form^ FormularioHijo)
			{
				if(this->Actual != nullptr)
				{
					this->Actual->Close();
				}
				this->Actual = FormularioHijo;
				FormularioHijo->Dock = DockStyle::Fill;
				FormularioHijo->TopLevel = false;
				Panel_MID->Controls->Add(FormularioHijo);
				Panel_MID->Tag = FormularioHijo;
				FormularioHijo->Show();
			}



private: System::Void Boton_Inicio_Click(System::Object^ sender, System::EventArgs^ e) {
		
	this->AbrirFormulario(gcnew InterfazGrafica::VentanaVENDER());
}
private: System::Void Boton_EmpleadosOPC_Click(System::Object^ sender, System::EventArgs^ e) {

	this->AbrirFormulario(gcnew InterfazGrafica::VentanaEmpleados());

}
private: System::Void Boton_Ventas_Click(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void Boton_Stock_Click(System::Object^ sender, System::EventArgs^ e) {


}


private: System::Void Boton_Productos_Click(System::Object^ sender, System::EventArgs^ e) {

	this->AbrirFormulario(gcnew InterfazGrafica::VentanaProductos());
}
private: System::Void Boton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
};
}
