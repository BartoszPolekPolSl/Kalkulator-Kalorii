#pragma once

#include "formBMR.cpp"

namespace KalkulatorKalorii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
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


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxAge;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxWeight;


	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxHeight;
	private: System::Windows::Forms::ComboBox^ comboBoxPA;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBoxPlan;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ buttonResult;
	private: System::Windows::Forms::TextBox^ textBoxResult;
	private: System::Windows::Forms::ListBox^ listBoxSex;






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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxAge = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxWeight = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->maskedTextBoxHeight = (gcnew System::Windows::Forms::MaskedTextBox());
			this->comboBoxPA = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBoxPlan = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->textBoxResult = (gcnew System::Windows::Forms::TextBox());
			this->listBoxSex = (gcnew System::Windows::Forms::ListBox());
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(355, 85);
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
			this->label4->Location = System::Drawing::Point(355, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 37);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Wzrost";
			// 
			// maskedTextBoxAge
			// 
			this->maskedTextBoxAge->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxAge->BeepOnError = true;
			this->maskedTextBoxAge->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBoxAge->Location = System::Drawing::Point(96, 255);
			this->maskedTextBoxAge->Mask = L"00";
			this->maskedTextBoxAge->Name = L"maskedTextBoxAge";
			this->maskedTextBoxAge->Size = System::Drawing::Size(60, 19);
			this->maskedTextBoxAge->TabIndex = 6;
			this->maskedTextBoxAge->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &formBMR::maskedTextBox1_MaskInputRejected);
			this->maskedTextBoxAge->Validated += gcnew System::EventHandler(this, &formBMR::maskedTextBoxAge_Validated);
			// 
			// maskedTextBoxWeight
			// 
			this->maskedTextBoxWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxWeight->BeepOnError = true;
			this->maskedTextBoxWeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->maskedTextBoxWeight->Location = System::Drawing::Point(362, 125);
			this->maskedTextBoxWeight->Mask = L"00";
			this->maskedTextBoxWeight->Name = L"maskedTextBoxWeight";
			this->maskedTextBoxWeight->Size = System::Drawing::Size(60, 19);
			this->maskedTextBoxWeight->TabIndex = 7;
			this->maskedTextBoxWeight->Validated += gcnew System::EventHandler(this, &formBMR::maskedTextBoxWeight_Validated);
			// 
			// maskedTextBoxHeight
			// 
			this->maskedTextBoxHeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxHeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->maskedTextBoxHeight->Location = System::Drawing::Point(362, 255);
			this->maskedTextBoxHeight->Mask = L"000.0";
			this->maskedTextBoxHeight->Name = L"maskedTextBoxHeight";
			this->maskedTextBoxHeight->Size = System::Drawing::Size(60, 19);
			this->maskedTextBoxHeight->TabIndex = 8;
			this->maskedTextBoxHeight->Validated += gcnew System::EventHandler(this, &formBMR::maskedTextBoxHeight_Validated);
			// 
			// comboBoxPA
			// 
			this->comboBoxPA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->comboBoxPA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxPA->ForeColor = System::Drawing::SystemColors::Info;
			this->comboBoxPA->FormattingEnabled = true;
			this->comboBoxPA->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Znikoma(brak æwiczeñ, praca siedz¹ca, szko³a)",
					L"Bardzo ma³a(æwiczenia raz na tydzieñ, praca lekka)", L"Umiarkowana(æwiczenia 2 razy w tygodniu)", L"Du¿a(doœæ ciêzki trening kilka razy w tygodniu)",
					L"Bardzo du¿a(przynajmniej 4 ciêzkie treningi w tygodniu, praca fizyczna)"
			});
			this->comboBoxPA->Location = System::Drawing::Point(96, 357);
			this->comboBoxPA->Name = L"comboBoxPA";
			this->comboBoxPA->Size = System::Drawing::Size(340, 21);
			this->comboBoxPA->TabIndex = 9;
			this->comboBoxPA->SelectedIndexChanged += gcnew System::EventHandler(this, &formBMR::comboBoxPA_SelectedIndexChanged);
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(89, 418);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 37);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Planuje";
			// 
			// listBoxPlan
			// 
			this->listBoxPlan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->listBoxPlan->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBoxPlan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->listBoxPlan->ForeColor = System::Drawing::SystemColors::Info;
			this->listBoxPlan->FormattingEnabled = true;
			this->listBoxPlan->ItemHeight = 20;
			this->listBoxPlan->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Chcê przytyæ", L"Chcê utrzymaæ wagê", L"Chcê schudn¹æ" });
			this->listBoxPlan->Location = System::Drawing::Point(96, 458);
			this->listBoxPlan->Name = L"listBoxPlan";
			this->listBoxPlan->Size = System::Drawing::Size(166, 60);
			this->listBoxPlan->TabIndex = 12;
			this->listBoxPlan->SelectedIndexChanged += gcnew System::EventHandler(this, &formBMR::listBoxPlan_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(647, 85);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 42);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Twój cel";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->result->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->result->Location = System::Drawing::Point(641, 159);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(0, 73);
			this->result->TabIndex = 14;
			// 
			// buttonResult
			// 
			this->buttonResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->buttonResult->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->buttonResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonResult->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonResult->Location = System::Drawing::Point(67, 538);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(145, 47);
			this->buttonResult->TabIndex = 15;
			this->buttonResult->Text = L"Oblicz";
			this->buttonResult->UseVisualStyleBackColor = false;
			this->buttonResult->Click += gcnew System::EventHandler(this, &formBMR::buttonResult_Click);
			// 
			// textBoxResult
			// 
			this->textBoxResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->textBoxResult->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxResult->Location = System::Drawing::Point(654, 145);
			this->textBoxResult->Name = L"textBoxResult";
			this->textBoxResult->Size = System::Drawing::Size(182, 42);
			this->textBoxResult->TabIndex = 16;
			// 
			// listBoxSex
			// 
			this->listBoxSex->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->listBoxSex->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBoxSex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->listBoxSex->ForeColor = System::Drawing::SystemColors::Info;
			this->listBoxSex->FormattingEnabled = true;
			this->listBoxSex->ItemHeight = 20;
			this->listBoxSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mê¿czyzna", L"Kobieta" });
			this->listBoxSex->Location = System::Drawing::Point(96, 127);
			this->listBoxSex->Name = L"listBoxSex";
			this->listBoxSex->Size = System::Drawing::Size(166, 60);
			this->listBoxSex->TabIndex = 17;
			this->listBoxSex->SelectedIndexChanged += gcnew System::EventHandler(this, &formBMR::listBoxSex_SelectedIndexChanged);
			// 
			// formBMR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->ClientSize = System::Drawing::Size(953, 618);
			this->Controls->Add(this->listBoxSex);
			this->Controls->Add(this->textBoxResult);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->listBoxPlan);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBoxPA);
			this->Controls->Add(this->maskedTextBoxHeight);
			this->Controls->Add(this->maskedTextBoxWeight);
			this->Controls->Add(this->maskedTextBoxAge);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
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
	toolTip1->Show("We're sorry, but only digits (0-9) are allowed in dates.", maskedTextBoxAge, maskedTextBoxAge->Location, 5000);
}



private: double  height, physicalACT,sex, weight, age, plan;
private: System::Void maskedTextBoxAge_Validated(System::Object^ sender, System::EventArgs^ e) {
	age = System::Convert::ToDouble(maskedTextBoxAge->Text);
}
private: System::Void maskedTextBoxWeight_Validated(System::Object^ sender, System::EventArgs^ e) {
	weight = System::Convert::ToDouble(maskedTextBoxWeight->Text);
}
private: System::Void maskedTextBoxHeight_Validated(System::Object^ sender, System::EventArgs^ e) {
	height = System::Convert::ToDouble(maskedTextBoxHeight->Text);
}

private: System::Void comboBoxPA_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxPA->SelectedIndex == 0)
	{
		physicalACT = 1.2;
	}
	else if (comboBoxPA->SelectedIndex == 1)
	{
		physicalACT = 1.4;
	}
	else if (comboBoxPA->SelectedIndex == 2)
	{
		physicalACT = 1.6;
	}
	else if (comboBoxPA->SelectedIndex == 3)
	{
		physicalACT = 1.8;
	}
	else if (comboBoxPA->SelectedIndex == 4)
	{
		physicalACT = 2;
	}
}

private: System::Void listBoxPlan_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBoxPlan->SelectedIndex == 0)
	{
		plan = 300;
	}
	else if (listBoxPlan->SelectedIndex == 1)
	{
		plan = 0;
	}
	else if (listBoxPlan->SelectedIndex == 2)
	{
		plan = -300;
	}
}
private: System::Void listBoxSex_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBoxSex->SelectedIndex == 0)
	{
		sex = 5;
	}
	else if (listBoxSex->SelectedIndex == 1)
	{
		sex = -161;
	}
}
double calcBMR()
{
	return ((9.99 * weight) + (6.25 * height) - (4.92 * age) + sex)* physicalACT+plan;
}
private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxResult->Text = System::Convert::ToString(calcBMR());
}





};

}
