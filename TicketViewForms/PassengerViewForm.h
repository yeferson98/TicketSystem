#pragma once

namespace TicketViewForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TicketModel;
	using namespace TicketController;
	/// <summary>
	/// Resumen de PassengerViewForm
	/// </summary>
	public ref class PassengerViewForm : public System::Windows::Forms::Form
	{
	public:
		PassengerViewForm(void)
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
		~PassengerViewForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dtPassenger;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dni;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textDni;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::DateTimePicker^ dtmDate;




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dtPassenger = (gcnew System::Windows::Forms::DataGridView());
			this->dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textDni = (gcnew System::Windows::Forms::TextBox());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->dtmDate = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtPassenger))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(86, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PassengerViewForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(207, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PassengerViewForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(335, 143);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 32);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PassengerViewForm::button3_Click);
			// 
			// dtPassenger
			// 
			this->dtPassenger->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dtPassenger->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->dni, this->name });
			this->dtPassenger->Location = System::Drawing::Point(86, 202);
			this->dtPassenger->Name = L"dtPassenger";
			this->dtPassenger->Size = System::Drawing::Size(347, 162);
			this->dtPassenger->TabIndex = 3;
			// 
			// dni
			// 
			this->dni->HeaderText = L"DNI";
			this->dni->Name = L"dni";
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			this->name->Width = 200;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nombre Completo";
			this->label2->Click += gcnew System::EventHandler(this, &PassengerViewForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(86, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Fecha de Nacimiento";
			// 
			// textDni
			// 
			this->textDni->Location = System::Drawing::Point(224, 38);
			this->textDni->Name = L"textDni";
			this->textDni->Size = System::Drawing::Size(200, 20);
			this->textDni->TabIndex = 7;
			// 
			// textName
			// 
			this->textName->Location = System::Drawing::Point(224, 65);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(200, 20);
			this->textName->TabIndex = 8;
			// 
			// dtmDate
			// 
			this->dtmDate->Location = System::Drawing::Point(224, 95);
			this->dtmDate->Name = L"dtmDate";
			this->dtmDate->Size = System::Drawing::Size(200, 20);
			this->dtmDate->TabIndex = 9;
			// 
			// PassengerViewForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(509, 388);
			this->Controls->Add(this->dtmDate);
			this->Controls->Add(this->textName);
			this->Controls->Add(this->textDni);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dtPassenger);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"PassengerViewForm";
			this->Text = L"Ventana Pasajeros";
			this->Load += gcnew System::EventHandler(this, &PassengerViewForm::PassengerViewForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dtPassenger))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PassengerViewForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Passenger^ p = gcnew Passenger();
		p->Dni = textDni->Text;
		p->Name = textName->Text;
		p->Birthdate = dtmDate->Value;

		TicketManager::AddPassenger(p);
		FillPassengerTable();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Passenger^ p = gcnew Passenger();
		p->Dni = textDni->Text;
		p->Name = textName->Text;
		p->Birthdate = dtmDate->Value;

		TicketManager::UpdatePassenger(p);
		FillPassengerTable();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ dni;
		dni = textDni->Text;
		TicketManager::DeletePassenger(dni);
		FillPassengerTable();
	}

	public:
		void FillPassengerTable() {
			List<Passenger^>^ ListPassenger = TicketManager::ListPassenger();
			dtPassenger->Rows->Clear();
			for (int i = 0; i < ListPassenger->Count; i++) {
				dtPassenger->Rows->Add(gcnew array<String^>{
					ListPassenger[i]->Dni,
					ListPassenger[i]->Name
				});
			}
		 }
};
}
