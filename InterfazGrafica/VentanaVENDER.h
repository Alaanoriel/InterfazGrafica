#pragma once

namespace InterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaVENDER
	/// </summary>
	public ref class VentanaVENDER : public System::Windows::Forms::Form
	{
	public:
		VentanaVENDER(void)
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
		~VentanaVENDER()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(236, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"VETANA PARA VENDER PRODUCTOS";
			// 
			// VentanaVENDER
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(661, 420);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VentanaVENDER";
			this->Text = L"VentanaVENDER";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
