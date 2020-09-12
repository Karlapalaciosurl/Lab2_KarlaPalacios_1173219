#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

namespace Lab2KarlaPalacios1173219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btniniciar;
	protected:
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::DataGridView^ dataGridView;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btniniciar = (gcnew System::Windows::Forms::Button());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// btniniciar
			// 
			this->btniniciar->Location = System::Drawing::Point(12, 12);
			this->btniniciar->Name = L"btniniciar";
			this->btniniciar->Size = System::Drawing::Size(75, 23);
			this->btniniciar->TabIndex = 0;
			this->btniniciar->Text = L"INICIAR";
			this->btniniciar->UseVisualStyleBackColor = true;
			this->btniniciar->Click += gcnew System::EventHandler(this, &MyForm::btniniciar_Click);
			// 
			// btnsalir
			// 
			this->btnsalir->Location = System::Drawing::Point(1007, 164);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(75, 23);
			this->btnsalir->TabIndex = 1;
			this->btnsalir->Text = L"SALIR";
			this->btnsalir->UseVisualStyleBackColor = true;
			this->btnsalir->Click += gcnew System::EventHandler(this, &MyForm::btnsalir_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(12, 90);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(1070, 40);
			this->dataGridView->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1093, 199);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->btnsalir);
			this->Controls->Add(this->btniniciar);
			this->Name = L"MyForm";
			this->Text = L"La Carrera de La Liebre y la Tortuga";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: void ReestablecerMatriz() {
		dataGridView->Rows->Clear();
		dataGridView->Columns->Clear();
		dataGridView->ColumnHeadersVisible = false;
		dataGridView->RowHeadersVisible = false;
	};
		   int *opcion;
		   int *a;
		   int *b;
		   int i, x;
		   void carrera(int recorrido[])
		   {
			   //Existe un error en los punteros que aun no logro resolver
			   a == &i;
			   for (i = 1; *a <= 70; i++)
			   {
				   if (recorrido[*a] == 0)
				   {
					   dataGridView->Rows[0]->Cells[*a]->Value = (" ");
				   }

				   if (recorrido[*a] == 1)
				   {
					   dataGridView->Rows[0]->Cells[*a]->Value = ("T");
				   }

				   if (recorrido[*a] == 2)
				   {
					   dataGridView->Rows[0]->Cells[*a]->Value = ("H");
				   }

				   if ((recorrido[*a] == 3) && (i != 1))
				   {
					   MessageBox::Show("¡OUCH!", "La tortuga y la liebre", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   }
			   }
		   }
		

	private: System::Void btniniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		ReestablecerMatriz();
		for (int i = 0; i < 70; i++) {
			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 15;

			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;

			dataGridView->Columns->Add(nuevacolumna);
		}
		MessageBox::Show("¡BANG!\n¡Y ARRANCAN!", "La liebre y la tortuga", MessageBoxButtons::OK, MessageBoxIcon::Information);
		try
		{
			int recorrido[70] = { 0 };
			int tortuga = 1;
			int liebre = 2;
			//PUNTERO
			a == &i;
			b == &x;

			srand(time(NULL));

			recorrido[1] = 4;
			carrera(recorrido);


			if (recorrido[70] == 1)
			{
				MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO!", "La tortuga y la liebre", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			if (recorrido[70] == 2)
			{
				MessageBox::Show("La liebre gana. Ni hablar", "La tortuga y la liebre", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			if (recorrido[70] == 3)
			{
				MessageBox::Show("Es un empate", "La tortuga y la liebre", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

		}
		catch (...)
		{
			MessageBox::Show("ERROR", "La tortuga y la liebre", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	
private: System::Void btnsalir_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("¡HASTA LA PROXIMA!", "Salida", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Application::Exit();
}
};
}
