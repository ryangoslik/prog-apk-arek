#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ek;
	private: System::Windows::Forms::Button^ ep;
	private: System::Windows::Forms::Button^ e;
	protected:

	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ wynik;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_oblicz;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ek = (gcnew System::Windows::Forms::Button());
			this->ep = (gcnew System::Windows::Forms::Button());
			this->e = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_oblicz = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ek
			// 
			this->ek->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ek->Location = System::Drawing::Point(40, 119);
			this->ek->Name = L"ek";
			this->ek->Size = System::Drawing::Size(190, 84);
			this->ek->TabIndex = 0;
			this->ek->Text = L"EK";
			this->ek->UseVisualStyleBackColor = false;
			this->ek->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ep
			// 
			this->ep->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ep->Location = System::Drawing::Point(40, 294);
			this->ep->Name = L"ep";
			this->ep->Size = System::Drawing::Size(190, 84);
			this->ep->TabIndex = 0;
			this->ep->Text = L"EP";
			this->ep->UseVisualStyleBackColor = false;
			this->ep->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// e
			// 
			this->e->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->e->Location = System::Drawing::Point(40, 462);
			this->e->Name = L"e";
			this->e->Size = System::Drawing::Size(190, 84);
			this->e->TabIndex = 1;
			this->e->Text = L"E";
			this->e->UseVisualStyleBackColor = false;
			this->e->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->btn_oblicz);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->wynik);
			this->panel1->Location = System::Drawing::Point(299, 119);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(651, 427);
			this->panel1->TabIndex = 2;
			// 
			// wynik
			// 
			this->wynik->AutoSize = true;
			this->wynik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wynik->Location = System::Drawing::Point(239, 27);
			this->wynik->Name = L"wynik";
			this->wynik->Size = System::Drawing::Size(216, 31);
			this->wynik->TabIndex = 0;
			this->wynik->Text = L"Wynik obliczenia";
			this->wynik->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(197, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(279, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"apk kalkulator energia";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// btn_oblicz
			// 
			this->btn_oblicz->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btn_oblicz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btn_oblicz->Location = System::Drawing::Point(96, 319);
			this->btn_oblicz->Name = L"btn_oblicz";
			this->btn_oblicz->Size = System::Drawing::Size(498, 84);
			this->btn_oblicz->TabIndex = 3;
			this->btn_oblicz->Text = L"Oblicz";
			this->btn_oblicz->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1016, 656);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->e);
			this->Controls->Add(this->ep);
			this->Controls->Add(this->ek);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
