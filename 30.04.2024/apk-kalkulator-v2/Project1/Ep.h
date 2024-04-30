#pragma once

#include <math.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Ep
	/// </summary>
	public ref class Ep : public System::Windows::Forms::Form
	{
	public:
		Ep(void)
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
		~Ep()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btn_oblicz;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ wynik;
	private: System::Windows::Forms::Button^ e;

	private: System::Windows::Forms::Button^ ek;
	private: System::Windows::Forms::Label^ textBox_wysokosc;


	private: System::Windows::Forms::Label^ textBox_masa;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ep::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox_wysokosc = (gcnew System::Windows::Forms::Label());
			this->textBox_masa = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_oblicz = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->wynik = (gcnew System::Windows::Forms::Label());
			this->e = (gcnew System::Windows::Forms::Button());
			this->ek = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox_wysokosc);
			this->panel1->Controls->Add(this->textBox_masa);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->btn_oblicz);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->wynik);
			this->panel1->Location = System::Drawing::Point(319, 108);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(651, 427);
			this->panel1->TabIndex = 6;
			// 
			// textBox_wysokosc
			// 
			this->textBox_wysokosc->AutoSize = true;
			this->textBox_wysokosc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textBox_wysokosc->Location = System::Drawing::Point(17, 130);
			this->textBox_wysokosc->Name = L"textBox_wysokosc";
			this->textBox_wysokosc->Size = System::Drawing::Size(218, 31);
			this->textBox_wysokosc->TabIndex = 9;
			this->textBox_wysokosc->Text = L"Podaj wysokosc:";
			// 
			// textBox_masa
			// 
			this->textBox_masa->AutoSize = true;
			this->textBox_masa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox_masa->Location = System::Drawing::Point(62, 84);
			this->textBox_masa->Name = L"textBox_masa";
			this->textBox_masa->Size = System::Drawing::Size(164, 31);
			this->textBox_masa->TabIndex = 8;
			this->textBox_masa->Text = L"Podaj masê:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(233, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(234, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(232, 95);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 20);
			this->textBox1->TabIndex = 6;
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
			this->btn_oblicz->Click += gcnew System::EventHandler(this, &Ep::btn_oblicz_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(197, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(425, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"apk kalkulator energia potencjalna";
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
			// 
			// e
			// 
			this->e->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->e->Location = System::Drawing::Point(60, 451);
			this->e->Name = L"e";
			this->e->Size = System::Drawing::Size(190, 84);
			this->e->TabIndex = 5;
			this->e->Text = L"E";
			this->e->UseVisualStyleBackColor = false;
			// 
			// ek
			// 
			this->ek->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ek->Location = System::Drawing::Point(60, 108);
			this->ek->Name = L"ek";
			this->ek->Size = System::Drawing::Size(190, 84);
			this->ek->TabIndex = 4;
			this->ek->Text = L"EK";
			this->ek->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(90, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(275, 31);
			this->label4->TabIndex = 10;
			this->label4->Text = L"sta³a grawitacji:   9.81";
			this->label4->Click += gcnew System::EventHandler(this, &Ep::label2_Click);
			// 
			// Ep
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1016, 656);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->e);
			this->Controls->Add(this->ek);
			this->Name = L"Ep";
			this->Text = L"Ep";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_oblicz_Click(System::Object^ sender, System::EventArgs^ e) {
		double masa = Convert::ToDouble(textBox_masa->Text);
		double wysokosc = Convert::ToDouble(textBox_wysokosc->Text);
		double grawitacja = 9.81;
		double wynik_ep = masa * wysokosc * grawitacja;
		wynik->Text = Convert::ToString(wynik_ep);

	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
