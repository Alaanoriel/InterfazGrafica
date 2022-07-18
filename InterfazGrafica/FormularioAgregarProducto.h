#pragma once
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <cstring>
#include "Producto.h"
using namespace std;

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioAgregarProducto
	/// </summary>
	public ref class FormularioAgregarProducto : public System::Windows::Forms::Form
	{
	public:
		FormularioAgregarProducto(void)
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
		~FormularioAgregarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ Box_Marca;
	protected:
	private: System::Windows::Forms::Label^ Txt_Marca;
	private: System::Windows::Forms::Label^ Txt_Talle;

	private: System::Windows::Forms::Label^ Txt_Color;

	private: System::Windows::Forms::Label^ Txt_Nombre;
	private: System::Windows::Forms::TextBox^ TxtBox_Nombre;
	private: System::Windows::Forms::TextBox^ TxtBox_Color;
	private: System::Windows::Forms::TextBox^ TxtBox_Talle;
	private: System::Windows::Forms::Label^ Txt_Stock;
	private: System::Windows::Forms::Label^ Txt_Precio;




	private: System::Windows::Forms::TextBox^ TxtBox_Stock;
	private: System::Windows::Forms::TextBox^ TxtBox_Precio;
	private: System::Windows::Forms::Label^ Txt_Codigo;
	private: System::Windows::Forms::TextBox^ TxtBox_Codigo;
	private: System::Windows::Forms::Button^ Boton_Guardar;
	private: System::Windows::Forms::Button^ Boton_Limpiar;
	private: System::Windows::Forms::Button^ Boton_Salir;






	protected:

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
			this->Box_Marca = (gcnew System::Windows::Forms::ComboBox());
			this->Txt_Marca = (gcnew System::Windows::Forms::Label());
			this->Txt_Talle = (gcnew System::Windows::Forms::Label());
			this->Txt_Color = (gcnew System::Windows::Forms::Label());
			this->Txt_Nombre = (gcnew System::Windows::Forms::Label());
			this->TxtBox_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_Color = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_Talle = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Stock = (gcnew System::Windows::Forms::Label());
			this->Txt_Precio = (gcnew System::Windows::Forms::Label());
			this->TxtBox_Stock = (gcnew System::Windows::Forms::TextBox());
			this->TxtBox_Precio = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Codigo = (gcnew System::Windows::Forms::Label());
			this->TxtBox_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->Boton_Guardar = (gcnew System::Windows::Forms::Button());
			this->Boton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->Boton_Salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Box_Marca
			// 
			this->Box_Marca->BackColor = System::Drawing::Color::White;
			this->Box_Marca->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Box_Marca->ForeColor = System::Drawing::SystemColors::Menu;
			this->Box_Marca->FormattingEnabled = true;
			this->Box_Marca->Location = System::Drawing::Point(149, 25);
			this->Box_Marca->Name = L"Box_Marca";
			this->Box_Marca->Size = System::Drawing::Size(197, 21);
			this->Box_Marca->TabIndex = 12;
			// 
			// Txt_Marca
			// 
			this->Txt_Marca->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Marca->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Marca->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Marca->Location = System::Drawing::Point(41, 25);
			this->Txt_Marca->Name = L"Txt_Marca";
			this->Txt_Marca->Size = System::Drawing::Size(81, 23);
			this->Txt_Marca->TabIndex = 13;
			this->Txt_Marca->Text = L"Marca";
			// 
			// Txt_Talle
			// 
			this->Txt_Talle->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Talle->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Talle->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Talle->Location = System::Drawing::Point(41, 201);
			this->Txt_Talle->Name = L"Txt_Talle";
			this->Txt_Talle->Size = System::Drawing::Size(81, 23);
			this->Txt_Talle->TabIndex = 14;
			this->Txt_Talle->Text = L"Talle";
			// 
			// Txt_Color
			// 
			this->Txt_Color->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Color->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Color->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Color->Location = System::Drawing::Point(41, 137);
			this->Txt_Color->Name = L"Txt_Color";
			this->Txt_Color->Size = System::Drawing::Size(81, 23);
			this->Txt_Color->TabIndex = 15;
			this->Txt_Color->Text = L"Color";
			// 
			// Txt_Nombre
			// 
			this->Txt_Nombre->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Nombre->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Nombre->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Nombre->Location = System::Drawing::Point(39, 79);
			this->Txt_Nombre->Name = L"Txt_Nombre";
			this->Txt_Nombre->Size = System::Drawing::Size(101, 23);
			this->Txt_Nombre->TabIndex = 16;
			this->Txt_Nombre->Text = L"Nombre";
			// 
			// TxtBox_Nombre
			// 
			this->TxtBox_Nombre->Location = System::Drawing::Point(149, 82);
			this->TxtBox_Nombre->Name = L"TxtBox_Nombre";
			this->TxtBox_Nombre->Size = System::Drawing::Size(197, 20);
			this->TxtBox_Nombre->TabIndex = 17;
			// 
			// TxtBox_Color
			// 
			this->TxtBox_Color->Location = System::Drawing::Point(149, 143);
			this->TxtBox_Color->Name = L"TxtBox_Color";
			this->TxtBox_Color->Size = System::Drawing::Size(197, 20);
			this->TxtBox_Color->TabIndex = 18;
			// 
			// TxtBox_Talle
			// 
			this->TxtBox_Talle->Location = System::Drawing::Point(149, 203);
			this->TxtBox_Talle->Name = L"TxtBox_Talle";
			this->TxtBox_Talle->Size = System::Drawing::Size(197, 20);
			this->TxtBox_Talle->TabIndex = 19;
			// 
			// Txt_Stock
			// 
			this->Txt_Stock->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Stock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Stock->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Stock->Location = System::Drawing::Point(404, 23);
			this->Txt_Stock->Name = L"Txt_Stock";
			this->Txt_Stock->Size = System::Drawing::Size(81, 23);
			this->Txt_Stock->TabIndex = 20;
			this->Txt_Stock->Text = L"Stock";
			// 
			// Txt_Precio
			// 
			this->Txt_Precio->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Precio->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Precio->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Precio->Location = System::Drawing::Point(404, 79);
			this->Txt_Precio->Name = L"Txt_Precio";
			this->Txt_Precio->Size = System::Drawing::Size(101, 23);
			this->Txt_Precio->TabIndex = 21;
			this->Txt_Precio->Text = L"Precio";
			// 
			// TxtBox_Stock
			// 
			this->TxtBox_Stock->Location = System::Drawing::Point(511, 23);
			this->TxtBox_Stock->Name = L"TxtBox_Stock";
			this->TxtBox_Stock->Size = System::Drawing::Size(197, 20);
			this->TxtBox_Stock->TabIndex = 24;
			// 
			// TxtBox_Precio
			// 
			this->TxtBox_Precio->Location = System::Drawing::Point(511, 79);
			this->TxtBox_Precio->Name = L"TxtBox_Precio";
			this->TxtBox_Precio->Size = System::Drawing::Size(197, 20);
			this->TxtBox_Precio->TabIndex = 25;
			// 
			// Txt_Codigo
			// 
			this->Txt_Codigo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Codigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Codigo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Codigo->Location = System::Drawing::Point(404, 137);
			this->Txt_Codigo->Name = L"Txt_Codigo";
			this->Txt_Codigo->Size = System::Drawing::Size(101, 23);
			this->Txt_Codigo->TabIndex = 26;
			this->Txt_Codigo->Text = L"Codigo";
			// 
			// TxtBox_Codigo
			// 
			this->TxtBox_Codigo->Location = System::Drawing::Point(511, 140);
			this->TxtBox_Codigo->Name = L"TxtBox_Codigo";
			this->TxtBox_Codigo->Size = System::Drawing::Size(197, 20);
			this->TxtBox_Codigo->TabIndex = 27;
			// 
			// Boton_Guardar
			// 
			this->Boton_Guardar->Location = System::Drawing::Point(524, 201);
			this->Boton_Guardar->Name = L"Boton_Guardar";
			this->Boton_Guardar->Size = System::Drawing::Size(90, 23);
			this->Boton_Guardar->TabIndex = 28;
			this->Boton_Guardar->Text = L"Guardar";
			this->Boton_Guardar->UseVisualStyleBackColor = true;
			this->Boton_Guardar->Click += gcnew System::EventHandler(this, &FormularioAgregarProducto::Boton_Guardar_Click);
			// 
			// Boton_Limpiar
			// 
			this->Boton_Limpiar->Location = System::Drawing::Point(620, 201);
			this->Boton_Limpiar->Name = L"Boton_Limpiar";
			this->Boton_Limpiar->Size = System::Drawing::Size(90, 23);
			this->Boton_Limpiar->TabIndex = 29;
			this->Boton_Limpiar->Text = L"Limpiar";
			this->Boton_Limpiar->UseVisualStyleBackColor = true;
			this->Boton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioAgregarProducto::Boton_Limpiar_Click);
			// 
			// Boton_Salir
			// 
			this->Boton_Salir->Location = System::Drawing::Point(428, 201);
			this->Boton_Salir->Name = L"Boton_Salir";
			this->Boton_Salir->Size = System::Drawing::Size(90, 23);
			this->Boton_Salir->TabIndex = 30;
			this->Boton_Salir->Text = L"Salir";
			this->Boton_Salir->UseVisualStyleBackColor = true;
			this->Boton_Salir->Click += gcnew System::EventHandler(this, &FormularioAgregarProducto::Boton_Salir_Click);
			// 
			// FormularioAgregarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(772, 266);
			this->Controls->Add(this->Boton_Salir);
			this->Controls->Add(this->Boton_Limpiar);
			this->Controls->Add(this->Boton_Guardar);
			this->Controls->Add(this->TxtBox_Codigo);
			this->Controls->Add(this->Txt_Codigo);
			this->Controls->Add(this->TxtBox_Precio);
			this->Controls->Add(this->TxtBox_Stock);
			this->Controls->Add(this->Txt_Precio);
			this->Controls->Add(this->Txt_Stock);
			this->Controls->Add(this->TxtBox_Talle);
			this->Controls->Add(this->TxtBox_Color);
			this->Controls->Add(this->TxtBox_Nombre);
			this->Controls->Add(this->Txt_Nombre);
			this->Controls->Add(this->Txt_Color);
			this->Controls->Add(this->Txt_Talle);
			this->Controls->Add(this->Txt_Marca);
			this->Controls->Add(this->Box_Marca);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormularioAgregarProducto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormularioAgregarProducto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		

		void Limpiar() {

			TxtBox_Codigo->Clear();
			TxtBox_Nombre->Clear();
			TxtBox_Color->Clear();
			TxtBox_Precio->Clear();
			TxtBox_Talle->Clear();
			TxtBox_Stock->Clear();

		}


	private: System::Void Boton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		Limpiar();

	}
	
	


private: System::Void Boton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();
}
private: System::Void Boton_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {

	Producto aux;
	switch (Validaciones())
	{
	case 0:
	{

		System::String^ Seleccion = Box_Marca->SelectedItem->ToString();
		aux.setmarca_producto(MarshalCadena(Seleccion));

		System::String^ Nombre = TxtBox_Nombre->Text;
		aux.setnombre_producto(MarshalCadena(Nombre));
		
		System::String^ Color = TxtBox_Color->Text;
		aux.setcolor_producto(MarshalCadena(Color));

		int Talle = Int64::Parse(TxtBox_Talle->Text);
		aux.settalle_producto(Talle);

		int Stock = Int64::Parse(TxtBox_Stock->Text);
		aux.setstock_producto(Stock);

		int Precio = Int64::Parse(TxtBox_Precio->Text);
		aux.setprecio_producto(Precio);

		int Codigo = Int64::Parse(TxtBox_Codigo->Text);
		aux.setcodigo_producto(Codigo);

		//aux.GrabarProducto(); Si lo dejo tira error, revisar

		MessageBox::Show("Producto agreado", "Completado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		break;
	}

	case 1:
	{
		MessageBox::Show("Seleccione una marca", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;
	}

	case 2:
	{
		MessageBox::Show("Ingrese un nombre", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;
	}

	case 3:
	{
		MessageBox::Show("Ingrese un color", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;
	}

	case 4:
	{
		MessageBox::Show("Ingrese un talle", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;
	}

	case 5:
	{
		MessageBox::Show("Ingrese stock", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;

	}

	case 6:
	{
	
		MessageBox::Show("Ingrese precio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;

	}	

	case 7:
	{
		MessageBox::Show("Ingrese el codigo", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		break;
	
	}

	}


}

	   int Validaciones() {

		   if (Box_Marca->SelectedIndex <= -1)
		   {
			   return 1;
		   }

		   else

			   if (TxtBox_Nombre->Text == "")
			   {

				   return 2;
			   }

			   else

				   if (TxtBox_Color->Text == "")
				   {
					   return 3;
				   }

				   else
					   if (TxtBox_Talle->Text == "")
					   {
						   return 4;
					   }

					   else

						   if (TxtBox_Stock->Text == "")
						   {
							   return 5;
						   }
						   else
							   if (TxtBox_Precio->Text == "")
							   {
								   return 6;
							   }
							   else
								   if (TxtBox_Codigo->Text == "")
								   {
									   return 7;
								   }
								   else
									   return 0;
	   }




};
}
