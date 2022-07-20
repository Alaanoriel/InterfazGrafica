#pragma once

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormularioBajaTotalEmpleado
	/// </summary>
	public ref class FormularioBajaTotalEmpleado : public System::Windows::Forms::Form
	{
	public:
		FormularioBajaTotalEmpleado(void)
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
		~FormularioBajaTotalEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Txt_Dni;
	protected:
	private: System::Windows::Forms::TextBox^ TxtBox_BajaTotal;
	private: System::Windows::Forms::Button^ Bton_Baja;
	private: System::Windows::Forms::Button^ Bton_Salir;
	private: System::Windows::Forms::Button^ Bton_Limpiar;

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
			this->Txt_Dni = (gcnew System::Windows::Forms::Label());
			this->TxtBox_BajaTotal = (gcnew System::Windows::Forms::TextBox());
			this->Bton_Baja = (gcnew System::Windows::Forms::Button());
			this->Bton_Salir = (gcnew System::Windows::Forms::Button());
			this->Bton_Limpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Txt_Dni
			// 
			this->Txt_Dni->AutoSize = true;
			this->Txt_Dni->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Dni->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Txt_Dni->Location = System::Drawing::Point(12, 36);
			this->Txt_Dni->Name = L"Txt_Dni";
			this->Txt_Dni->Size = System::Drawing::Size(141, 23);
			this->Txt_Dni->TabIndex = 0;
			this->Txt_Dni->Text = L"Ingrese el DNI ";
			// 
			// TxtBox_BajaTotal
			// 
			this->TxtBox_BajaTotal->Location = System::Drawing::Point(180, 36);
			this->TxtBox_BajaTotal->Name = L"TxtBox_BajaTotal";
			this->TxtBox_BajaTotal->Size = System::Drawing::Size(237, 20);
			this->TxtBox_BajaTotal->TabIndex = 1;
			// 
			// Bton_Baja
			// 
			this->Bton_Baja->Location = System::Drawing::Point(180, 62);
			this->Bton_Baja->Name = L"Bton_Baja";
			this->Bton_Baja->Size = System::Drawing::Size(75, 23);
			this->Bton_Baja->TabIndex = 2;
			this->Bton_Baja->Text = L"Dar de baja";
			this->Bton_Baja->UseVisualStyleBackColor = true;
			this->Bton_Baja->Click += gcnew System::EventHandler(this, &FormularioBajaTotalEmpleado::Bton_Baja_Click);
			// 
			// Bton_Salir
			// 
			this->Bton_Salir->Location = System::Drawing::Point(261, 62);
			this->Bton_Salir->Name = L"Bton_Salir";
			this->Bton_Salir->Size = System::Drawing::Size(75, 23);
			this->Bton_Salir->TabIndex = 3;
			this->Bton_Salir->Text = L"Salir";
			this->Bton_Salir->UseVisualStyleBackColor = true;
			this->Bton_Salir->Click += gcnew System::EventHandler(this, &FormularioBajaTotalEmpleado::Bton_Salir_Click);
			// 
			// Bton_Limpiar
			// 
			this->Bton_Limpiar->Location = System::Drawing::Point(342, 62);
			this->Bton_Limpiar->Name = L"Bton_Limpiar";
			this->Bton_Limpiar->Size = System::Drawing::Size(75, 23);
			this->Bton_Limpiar->TabIndex = 4;
			this->Bton_Limpiar->Text = L"Limpiar";
			this->Bton_Limpiar->UseVisualStyleBackColor = true;
			this->Bton_Limpiar->Click += gcnew System::EventHandler(this, &FormularioBajaTotalEmpleado::Bton_Limpiar_Click);
			// 
			// FormularioBajaTotalEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(556, 128);
			this->Controls->Add(this->Bton_Limpiar);
			this->Controls->Add(this->Bton_Salir);
			this->Controls->Add(this->Bton_Baja);
			this->Controls->Add(this->TxtBox_BajaTotal);
			this->Controls->Add(this->Txt_Dni);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->Name = L"FormularioBajaTotalEmpleado";
			this->Text = L"Baja total";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Bton_Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {

		TxtBox_BajaTotal->Clear();

	}


private: System::Void Bton_Salir_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->Close();

}
private: System::Void Bton_Baja_Click(System::Object^ sender, System::EventArgs^ e) {


}
};
}
