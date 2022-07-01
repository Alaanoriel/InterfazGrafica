#pragma once

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaProductos
	/// </summary>
	public ref class VentanaProductos : public System::Windows::Forms::Form
	{
	public:
		VentanaProductos(void)
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
		~VentanaProductos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Boton_NuevoProducto;
	protected:
	private: System::Windows::Forms::Button^ Boton_Bajaprod;
	private: System::Windows::Forms::Button^ Boton_BajaTotal;
	private: System::Windows::Forms::Button^ Boton_BuscarProducto;
	private: System::Windows::Forms::Label^ Label_TextProductos;

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
			this->Boton_NuevoProducto = (gcnew System::Windows::Forms::Button());
			this->Boton_Bajaprod = (gcnew System::Windows::Forms::Button());
			this->Boton_BajaTotal = (gcnew System::Windows::Forms::Button());
			this->Boton_BuscarProducto = (gcnew System::Windows::Forms::Button());
			this->Label_TextProductos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Boton_NuevoProducto
			// 
			this->Boton_NuevoProducto->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_NuevoProducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_NuevoProducto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_NuevoProducto->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_NuevoProducto->Location = System::Drawing::Point(137, 87);
			this->Boton_NuevoProducto->Name = L"Boton_NuevoProducto";
			this->Boton_NuevoProducto->Size = System::Drawing::Size(202, 131);
			this->Boton_NuevoProducto->TabIndex = 5;
			this->Boton_NuevoProducto->Text = L"Nuevo producto";
			this->Boton_NuevoProducto->UseVisualStyleBackColor = false;
			this->Boton_NuevoProducto->Click += gcnew System::EventHandler(this, &VentanaProductos::Boton_NuevoProducto_Click);
			// 
			// Boton_Bajaprod
			// 
			this->Boton_Bajaprod->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_Bajaprod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_Bajaprod->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_Bajaprod->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_Bajaprod->Location = System::Drawing::Point(137, 224);
			this->Boton_Bajaprod->Name = L"Boton_Bajaprod";
			this->Boton_Bajaprod->Size = System::Drawing::Size(202, 131);
			this->Boton_Bajaprod->TabIndex = 7;
			this->Boton_Bajaprod->Text = L"Baja temporal";
			this->Boton_Bajaprod->UseVisualStyleBackColor = false;
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
			this->Boton_BajaTotal->TabIndex = 8;
			this->Boton_BajaTotal->Text = L"Baja total";
			this->Boton_BajaTotal->UseVisualStyleBackColor = false;
			// 
			// Boton_BuscarProducto
			// 
			this->Boton_BuscarProducto->BackColor = System::Drawing::Color::BurlyWood;
			this->Boton_BuscarProducto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Boton_BuscarProducto->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boton_BuscarProducto->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Boton_BuscarProducto->Location = System::Drawing::Point(345, 87);
			this->Boton_BuscarProducto->Name = L"Boton_BuscarProducto";
			this->Boton_BuscarProducto->Size = System::Drawing::Size(202, 131);
			this->Boton_BuscarProducto->TabIndex = 9;
			this->Boton_BuscarProducto->Text = L"Buscar producto";
			this->Boton_BuscarProducto->UseVisualStyleBackColor = false;
			this->Boton_BuscarProducto->Click += gcnew System::EventHandler(this, &VentanaProductos::Boton_BuscarProducto_Click);
			// 
			// Label_TextProductos
			// 
			this->Label_TextProductos->AutoSize = true;
			this->Label_TextProductos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Label_TextProductos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_TextProductos->ForeColor = System::Drawing::Color::BurlyWood;
			this->Label_TextProductos->Location = System::Drawing::Point(249, 34);
			this->Label_TextProductos->Name = L"Label_TextProductos";
			this->Label_TextProductos->Size = System::Drawing::Size(178, 25);
			this->Label_TextProductos->TabIndex = 5;
			this->Label_TextProductos->Text = L"Menu productos";
			// 
			// VentanaProductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(677, 459);
			this->Controls->Add(this->Label_TextProductos);
			this->Controls->Add(this->Boton_BuscarProducto);
			this->Controls->Add(this->Boton_BajaTotal);
			this->Controls->Add(this->Boton_Bajaprod);
			this->Controls->Add(this->Boton_NuevoProducto);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VentanaProductos";
			this->Text = L"VentanaProductos";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			Form^ ActualPROD;
			void AbrirFormulario(Form^ FormularioHijoPROD)
			{
				if (this->ActualPROD != nullptr)
				{
					this->ActualPROD->Close();
				}
				VentanaProductos::Controls->Clear();
				this->ActualPROD = FormularioHijoPROD;
				FormularioHijoPROD->Dock = DockStyle::Fill;
				FormularioHijoPROD->TopLevel = false;
				this->Controls->Add(FormularioHijoPROD);
				this->Tag = FormularioHijoPROD;
				FormularioHijoPROD->Show();

			}




private: System::Void Boton_NuevoProducto_Click(System::Object^ sender, System::EventArgs^ e) {


}

private: System::Void Boton_BuscarProducto_Click(System::Object^ sender, System::EventArgs^ e) {


	   }

};
}
