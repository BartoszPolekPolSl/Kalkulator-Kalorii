#pragma once

namespace KalkulatorKalorii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o formBMR
	/// </summary>
	public ref class formBMR : public System::Windows::Forms::Form
	{
	public:
		formBMR(void)
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
		~formBMR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;



	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(89, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"P³eæ";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mê¿czyzna", L"Kobieta" });
			this->listBox1->Location = System::Drawing::Point(96, 125);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(135, 52);
			this->listBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(444, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Waga";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(89, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 37);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Wiek";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(444, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 37);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Wzrost";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBox1->BeepOnError = true;
			this->maskedTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBox1->Location = System::Drawing::Point(96, 255);
			this->maskedTextBox1->Mask = L"00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(60, 19);
			this->maskedTextBox1->TabIndex = 6;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &formBMR::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBox2->BeepOnError = true;
			this->maskedTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBox2->Location = System::Drawing::Point(451, 134);
			this->maskedTextBox2->Mask = L"00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(60, 19);
			this->maskedTextBox2->TabIndex = 7;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBox3->Location = System::Drawing::Point(451, 255);
			this->maskedTextBox3->Mask = L"000.0";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(60, 19);
			this->maskedTextBox3->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Znikoma(brak æwiczeñ, praca siedz¹ca, szko³a)",
					L"Bardzo ma³a(æwiczenia raz na tydzieñ, praca lekka)", L"Umiarkowana(æwiczenia 2 razy w tygodniu)", L"Bardzo du¿a(przynajmniej 4 ciêzkie treningi w tygodniu, praca fizyczna)"
			});
			this->comboBox1->Location = System::Drawing::Point(96, 357);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(340, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(89, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(294, 37);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Aktywnoœæ fizyczna";
			// 
			// formBMR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->ClientSize = System::Drawing::Size(953, 618);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"formBMR";
			this->Text = L"formBMR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	toolTip1->ToolTipTitle = "Nieprawid³owe dane!";
	toolTip1->Show("We're sorry, but only digits (0-9) are allowed in dates.", maskedTextBox1, maskedTextBox1->Location, 5000);
}


};
}
