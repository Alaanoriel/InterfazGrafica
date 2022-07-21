#pragma once

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioBajaTotalProducto
	/// </summary>
	public ref class FormularioBajaTotalProducto : public System::Windows::Forms::Form
	{
	public:
		FormularioBajaTotalProducto(void)
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
		~FormularioBajaTotalProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Txt_Codigo;
	private: System::Windows::Forms::TextBox^ TxtBox_BajaTotalProd;
	private: System::Windows::Forms::Button^ Bton_Baja;
	private: System::Windows::Forms::Button^ Bton_Salir;
	private: System::Windows::Forms::Button^ Bton_Limpiar;
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
			this->Txt_Codigo = (gcnew System::Windows::Forms::Label());
			this->TxtBox_BajaTotalProd = (gcnew System::Windows::Forms::TextBox());
			this->Bton_Baja = (gcnew System::Windows::Forms::Button());
			this->Bton_Salir = (gcnew System::Windows::Forms::Button());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Txt_Codigo
			// 
			this->Txt_Codigo->AutoSize = true;
			this->Txt_Codigo->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Codigo->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Codigo->Location = System::Drawing::Point(21, 38);
			this->Txt_Codigo->Name = L"Txt_Codigo";
			this->Txt_Codigo->Size = System::Drawing::Size(176, 23);
			this->Txt_Codigo->TabIndex = 1;
			this->Txt_Codigo->Text = L"Ingrese el codigo ";
			// 
			// TxtBox_BajaTotalProd
			// 
			this->TxtBox_BajaTotalProd->Location = System::Drawing::Point(203, 38);
			this->TxtBox_BajaTotalProd->MaxLength = 15;
			this->TxtBox_BajaTotalProd->Name = L"TxtBox_BajaTotalProd";
			this->TxtBox_BajaTotalProd->Size = System::Drawing::Size(237, 20);
			this->TxtBox_BajaTotalProd->TabIndex = 2;
			this->TxtBox_BajaTotalProd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormularioBajaTotalProducto::TxtBox_BajaTotalProd_KeyPress);
			// 
			// Bton_Baja
			// 
			this->Bton_Baja->Location = System::Drawing::Point(203, 67);
			this->Bton_Baja->Name = L"Bton_Baja";
			this->Bton_Baja->Size = System::Drawing::Size(75, 23);
			this->Bton_Baja->TabIndex = 3;
			this->Bton_Baja->Text = L"Dar de baja";
			this->Bton_Baja->UseVisualStyleBackColor = true;
			// 
			// Bton_Salir
			// 
			this->Bton_Salir->Location = System::Drawing::Point(284, 67);
			this->Bton_Salir->Name = L"Bton_Salir";
			this->Bton_Salir->Size = System::Drawing::Size(75, 23);
			this->Bton_Salir->TabIndex = 4;
			this->Bton_Salir->Text = L"Salir";
			this->Bton_Salir->UseVisualStyleBackColor = true;
			this->Bton_Salir->Click += gcnew System::EventHandler(this, &FormularioBajaTotalProducto::Bton_Salir_Click);
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(365, 67);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(75, 23);
			this->Bton_Limpiar->TabIndex = 5;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioBajaTotalProducto::Bton_Limpiar_Click);
			// 
			// FormularioBajaTotalProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(556, 128);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Bton_Salir);
			this->Controls->Add(this->Bton_Baja);
			this->Controls->Add(this->TxtBox_BajaTotalProd);
			this->Controls->Add(this->Txt_Codigo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"FormularioBajaTotalProducto";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Baja producto";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
	}
private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

	TxtBox_BajaTotalProd->Clear();
}



private: System::Void TxtBox_BajaTotalProd_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if ((e->KeyChar >= 32 && e->KeyChar <= 47) || (e->KeyChar >= 58 && e->KeyChar <= 255))
	{
		e->Handled = true;
		return;
	}

}
};
}
