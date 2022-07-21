#pragma once

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioBuscarProducto
	/// </summary>
	public ref class FormularioBuscarProducto : public System::Windows::Forms::Form
	{
	public:
		FormularioBuscarProducto(void)
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
		~FormularioBuscarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Txt_Codigo;
	protected:
	private: System::Windows::Forms::TextBox^ TxtBox_Codigo;
	private: System::Windows::Forms::Button^ Bton_Buscar;
	private: System::Windows::Forms::Button^ Bton_Limpiar;
	private: System::Windows::Forms::Button^ Bton_Salir;

	protected:

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
			this->Txt_Codigo = (gcnew System::Windows::Forms::Label());
			this->TxtBox_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->Bton_Buscar = (gcnew System::Windows::Forms::Button());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->Bton_Salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Txt_Codigo
			// 
			this->Txt_Codigo->AutoSize = true;
			this->Txt_Codigo->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Txt_Codigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Codigo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Codigo->Location = System::Drawing::Point(0, 27);
			this->Txt_Codigo->Name = L"Txt_Codigo";
			this->Txt_Codigo->Size = System::Drawing::Size(149, 23);
			this->Txt_Codigo->TabIndex = 2;
			this->Txt_Codigo->Text = L"Ingrese codigo";
			// 
			// TxtBox_Codigo
			// 
			this->TxtBox_Codigo->Location = System::Drawing::Point(167, 30);
			this->TxtBox_Codigo->MaxLength = 20;
			this->TxtBox_Codigo->Name = L"TxtBox_Codigo";
			this->TxtBox_Codigo->Size = System::Drawing::Size(237, 20);
			this->TxtBox_Codigo->TabIndex = 3;
			// 
			// Bton_Buscar
			// 
			this->Bton_Buscar->Location = System::Drawing::Point(167, 56);
			this->Bton_Buscar->Name = L"Bton_Buscar";
			this->Bton_Buscar->Size = System::Drawing::Size(75, 23);
			this->Bton_Buscar->TabIndex = 4;
			this->Bton_Buscar->Text = L"Buscar";
			this->Bton_Buscar->UseVisualStyleBackColor = true;
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(248, 56);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(75, 23);
			this->Bton_Limpiar->TabIndex = 5;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioBuscarProducto::Bton_Limpiar_Click);
			// 
			// Bton_Salir
			// 
			this->Bton_Salir->Location = System::Drawing::Point(329, 56);
			this->Bton_Salir->Name = L"Bton_Salir";
			this->Bton_Salir->Size = System::Drawing::Size(75, 23);
			this->Bton_Salir->TabIndex = 6;
			this->Bton_Salir->Text = L"Salir";
			this->Bton_Salir->UseVisualStyleBackColor = true;
			this->Bton_Salir->Click += gcnew System::EventHandler(this, &FormularioBuscarProducto::Bton_Salir_Click);
			// 
			// FormularioBuscarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(525, 124);
			this->Controls->Add(this->Bton_Salir);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Bton_Buscar);
			this->Controls->Add(this->TxtBox_Codigo);
			this->Controls->Add(this->Txt_Codigo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormularioBuscarProducto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Buscar producto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	TxtBox_Codigo->Clear();
}
};
}
