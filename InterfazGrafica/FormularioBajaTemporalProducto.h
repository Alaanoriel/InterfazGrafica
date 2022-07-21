#pragma once

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioBajaTemporalProducto
	/// </summary>
	public ref class FormularioBajaTemporalProducto : public System::Windows::Forms::Form
	{
	public:
		FormularioBajaTemporalProducto(void)
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
		~FormularioBajaTemporalProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Txt_Codigo;
	protected:
	private: System::Windows::Forms::TextBox^ TxtBox_Codigo;
	private: System::Windows::Forms::Button^ Bton_Guardar;
	private: System::Windows::Forms::Button^ Bton_Limpiar;
	private: System::Windows::Forms::Button^ Bton_Salir;

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
			this->Txt_Codigo = (gcnew System::Windows::Forms::Label());
			this->TxtBox_Codigo = (gcnew System::Windows::Forms::TextBox());
			this->Bton_Guardar = (gcnew System::Windows::Forms::Button());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->Bton_Salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Txt_Codigo
			// 
			this->Txt_Codigo->AutoSize = true;
			this->Txt_Codigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Codigo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Codigo->Location = System::Drawing::Point(33, 32);
			this->Txt_Codigo->Name = L"Txt_Codigo";
			this->Txt_Codigo->Size = System::Drawing::Size(149, 23);
			this->Txt_Codigo->TabIndex = 0;
			this->Txt_Codigo->Text = L"Ingrese codigo";
			// 
			// TxtBox_Codigo
			// 
			this->TxtBox_Codigo->Location = System::Drawing::Point(212, 32);
			this->TxtBox_Codigo->MaxLength = 20;
			this->TxtBox_Codigo->Name = L"TxtBox_Codigo";
			this->TxtBox_Codigo->Size = System::Drawing::Size(237, 20);
			this->TxtBox_Codigo->TabIndex = 1;
			this->TxtBox_Codigo->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioBajaTemporalProducto::TxtBox_Codigo_KeyPress);
			// 
			// Bton_Guardar
			// 
			this->Bton_Guardar->Location = System::Drawing::Point(212, 59);
			this->Bton_Guardar->Name = L"Bton_Guardar";
			this->Bton_Guardar->Size = System::Drawing::Size(75, 23);
			this->Bton_Guardar->TabIndex = 2;
			this->Bton_Guardar->Text = L"Guardar";
			this->Bton_Guardar->UseVisualStyleBackColor = true;
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(293, 59);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(75, 23);
			this->Bton_Limpiar->TabIndex = 3;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioBajaTemporalProducto::Bton_Limpiar_Click);
			// 
			// Bton_Salir
			// 
			this->Bton_Salir->Location = System::Drawing::Point(374, 59);
			this->Bton_Salir->Name = L"Bton_Salir";
			this->Bton_Salir->Size = System::Drawing::Size(75, 23);
			this->Bton_Salir->TabIndex = 4;
			this->Bton_Salir->Text = L"Salir";
			this->Bton_Salir->UseVisualStyleBackColor = true;
			this->Bton_Salir->Click += gcnew System::EventHandler(this, &FormularioBajaTemporalProducto::Bton_Salir_Click);
			// 
			// FormularioBajaTemporalProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(598, 121);
			this->Controls->Add(this->Bton_Salir);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Bton_Guardar);
			this->Controls->Add(this->TxtBox_Codigo);
			this->Controls->Add(this->Txt_Codigo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormularioBajaTemporalProducto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Baja temporal empleado";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		TxtBox_Codigo->Clear();
	}


private: System::Void Bton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void TxtBox_Codigo_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}

}
};
}
