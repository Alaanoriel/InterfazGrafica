#pragma once

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
	private: System::Windows::Forms::MenuStrip^ Strip_ADM;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ empleadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscasEmpleadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarEmpleadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bajaDeEmpleadoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bajaTemporalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bajaTotalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarNuevoProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockProductosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verStockTotalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarStockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bajaProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ bajaTemporalToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ bajaTotalToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarPorFechaToolStripMenuItem;

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
			this->Strip_ADM = (gcnew System::Windows::Forms::MenuStrip());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscasEmpleadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarEmpleadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bajaDeEmpleadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bajaTemporalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bajaTotalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarNuevoProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verStockTotalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarStockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bajaProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bajaTemporalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bajaTotalToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarPorFechaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Strip_ADM->SuspendLayout();
			this->SuspendLayout();
			// 
			// Strip_ADM
			// 
			this->Strip_ADM->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->empleadosToolStripMenuItem,
					this->productosToolStripMenuItem, this->ventasToolStripMenuItem
			});
			this->Strip_ADM->Location = System::Drawing::Point(0, 0);
			this->Strip_ADM->Name = L"Strip_ADM";
			this->Strip_ADM->Size = System::Drawing::Size(838, 24);
			this->Strip_ADM->TabIndex = 0;
			this->Strip_ADM->Text = L"menuStrip1";
			this->Strip_ADM->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &VentanaADM::Strip_ADM_ItemClicked);
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->buscasEmpleadoToolStripMenuItem,
					this->agregarEmpleadoToolStripMenuItem, this->bajaDeEmpleadoToolStripMenuItem
			});
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->agregarNuevoProductoToolStripMenuItem,
					this->buscarProductoToolStripMenuItem, this->stockProductosToolStripMenuItem, this->bajaProductoToolStripMenuItem
			});
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->productosToolStripMenuItem->Text = L"Productos";
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->buscarPorFechaToolStripMenuItem });
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			// 
			// buscasEmpleadoToolStripMenuItem
			// 
			this->buscasEmpleadoToolStripMenuItem->Name = L"buscasEmpleadoToolStripMenuItem";
			this->buscasEmpleadoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->buscasEmpleadoToolStripMenuItem->Text = L"Buscas empleado";
			this->buscasEmpleadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &VentanaADM::buscasEmpleadoToolStripMenuItem_Click);
			// 
			// agregarEmpleadoToolStripMenuItem
			// 
			this->agregarEmpleadoToolStripMenuItem->Name = L"agregarEmpleadoToolStripMenuItem";
			this->agregarEmpleadoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->agregarEmpleadoToolStripMenuItem->Text = L"Agregar empleado";
			// 
			// bajaDeEmpleadoToolStripMenuItem
			// 
			this->bajaDeEmpleadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->bajaTemporalToolStripMenuItem,
					this->bajaTotalToolStripMenuItem
			});
			this->bajaDeEmpleadoToolStripMenuItem->Name = L"bajaDeEmpleadoToolStripMenuItem";
			this->bajaDeEmpleadoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->bajaDeEmpleadoToolStripMenuItem->Text = L"Baja de empleado";
			// 
			// bajaTemporalToolStripMenuItem
			// 
			this->bajaTemporalToolStripMenuItem->Name = L"bajaTemporalToolStripMenuItem";
			this->bajaTemporalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->bajaTemporalToolStripMenuItem->Text = L"Baja temporal";
			// 
			// bajaTotalToolStripMenuItem
			// 
			this->bajaTotalToolStripMenuItem->Name = L"bajaTotalToolStripMenuItem";
			this->bajaTotalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->bajaTotalToolStripMenuItem->Text = L"Baja total";
			// 
			// agregarNuevoProductoToolStripMenuItem
			// 
			this->agregarNuevoProductoToolStripMenuItem->Name = L"agregarNuevoProductoToolStripMenuItem";
			this->agregarNuevoProductoToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->agregarNuevoProductoToolStripMenuItem->Text = L"Agregar nuevo producto";
			// 
			// buscarProductoToolStripMenuItem
			// 
			this->buscarProductoToolStripMenuItem->Name = L"buscarProductoToolStripMenuItem";
			this->buscarProductoToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->buscarProductoToolStripMenuItem->Text = L"Buscar producto";
			// 
			// stockProductosToolStripMenuItem
			// 
			this->stockProductosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->verStockTotalToolStripMenuItem,
					this->agregarStockToolStripMenuItem
			});
			this->stockProductosToolStripMenuItem->Name = L"stockProductosToolStripMenuItem";
			this->stockProductosToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->stockProductosToolStripMenuItem->Text = L"Stock productos";
			// 
			// verStockTotalToolStripMenuItem
			// 
			this->verStockTotalToolStripMenuItem->Name = L"verStockTotalToolStripMenuItem";
			this->verStockTotalToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->verStockTotalToolStripMenuItem->Text = L"Ver stock total";
			// 
			// agregarStockToolStripMenuItem
			// 
			this->agregarStockToolStripMenuItem->Name = L"agregarStockToolStripMenuItem";
			this->agregarStockToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->agregarStockToolStripMenuItem->Text = L"Agregar stock";
			// 
			// bajaProductoToolStripMenuItem
			// 
			this->bajaProductoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->bajaTemporalToolStripMenuItem1,
					this->bajaTotalToolStripMenuItem1
			});
			this->bajaProductoToolStripMenuItem->Name = L"bajaProductoToolStripMenuItem";
			this->bajaProductoToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->bajaProductoToolStripMenuItem->Text = L"Baja producto";
			// 
			// bajaTemporalToolStripMenuItem1
			// 
			this->bajaTemporalToolStripMenuItem1->Name = L"bajaTemporalToolStripMenuItem1";
			this->bajaTemporalToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->bajaTemporalToolStripMenuItem1->Text = L"Baja temporal";
			// 
			// bajaTotalToolStripMenuItem1
			// 
			this->bajaTotalToolStripMenuItem1->Name = L"bajaTotalToolStripMenuItem1";
			this->bajaTotalToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->bajaTotalToolStripMenuItem1->Text = L"Baja total";
			// 
			// buscarPorFechaToolStripMenuItem
			// 
			this->buscarPorFechaToolStripMenuItem->Name = L"buscarPorFechaToolStripMenuItem";
			this->buscarPorFechaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->buscarPorFechaToolStripMenuItem->Text = L"Buscar por fecha";
			// 
			// VentanaADM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 529);
			this->Controls->Add(this->Strip_ADM);
			this->MainMenuStrip = this->Strip_ADM;
			this->Name = L"VentanaADM";
			this->Text = L"VentanaADM";
			this->Strip_ADM->ResumeLayout(false);
			this->Strip_ADM->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Strip_ADM_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
private: System::Void buscasEmpleadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
