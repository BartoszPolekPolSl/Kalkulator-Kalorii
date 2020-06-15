#pragma once
#include "formKCAL.h"

namespace KalkulatorKalorii {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	
	/// <summary>
	/// Podsumowanie informacji o formKCAL
	/// </summary>
	public ref class formKCAL : public System::Windows::Forms::Form
	{

	public:
		
		formKCAL(void)
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
		~formKCAL()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBoxProducts;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxProductName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxProtein;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxCarbo;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxFats;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxproductWeight;
	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxKcal;









	protected:

	protected:

	protected:










	protected:

	protected:

	protected:



	protected:

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
			this->listBoxProducts = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxProductName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxProtein = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxCarbo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxFats = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxproductWeight = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxKcal = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// listBoxProducts
			// 
			this->listBoxProducts->FormattingEnabled = true;
			this->listBoxProducts->Location = System::Drawing::Point(52, 69);
			this->listBoxProducts->Name = L"listBoxProducts";
			this->listBoxProducts->Size = System::Drawing::Size(170, 407);
			this->listBoxProducts->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(262, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nazwa produktu";
			// 
			// textBoxProductName
			// 
			this->textBoxProductName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxProductName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textBoxProductName->Location = System::Drawing::Point(268, 105);
			this->textBoxProductName->Name = L"textBoxProductName";
			this->textBoxProductName->Size = System::Drawing::Size(299, 31);
			this->textBoxProductName->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(262, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(345, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Wartoœci produktu na 100g.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(263, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Bia³ko";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(381, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Wêglowodany";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(563, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"T³uszcze";
			// 
			// maskedTextBoxProtein
			// 
			this->maskedTextBoxProtein->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxProtein->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxProtein->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->maskedTextBoxProtein->Location = System::Drawing::Point(268, 221);
			this->maskedTextBoxProtein->Mask = L"0000";
			this->maskedTextBoxProtein->Name = L"maskedTextBoxProtein";
			this->maskedTextBoxProtein->Size = System::Drawing::Size(35, 19);
			this->maskedTextBoxProtein->TabIndex = 7;
			// 
			// maskedTextBoxCarbo
			// 
			this->maskedTextBoxCarbo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxCarbo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxCarbo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBoxCarbo->Location = System::Drawing::Point(386, 221);
			this->maskedTextBoxCarbo->Mask = L"0000";
			this->maskedTextBoxCarbo->Name = L"maskedTextBoxCarbo";
			this->maskedTextBoxCarbo->Size = System::Drawing::Size(35, 19);
			this->maskedTextBoxCarbo->TabIndex = 8;
			this->maskedTextBoxCarbo->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxFats
			// 
			this->maskedTextBoxFats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxFats->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxFats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBoxFats->Location = System::Drawing::Point(568, 221);
			this->maskedTextBoxFats->Mask = L"0000";
			this->maskedTextBoxFats->Name = L"maskedTextBoxFats";
			this->maskedTextBoxFats->Size = System::Drawing::Size(35, 19);
			this->maskedTextBoxFats->TabIndex = 9;
			this->maskedTextBoxFats->ValidatingType = System::Int32::typeid;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(262, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(331, 31);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Iloœæ produktu w gramach.";
			// 
			// maskedTextBoxproductWeight
			// 
			this->maskedTextBoxproductWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxproductWeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxproductWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->maskedTextBoxproductWeight->Location = System::Drawing::Point(268, 297);
			this->maskedTextBoxproductWeight->Mask = L"0000";
			this->maskedTextBoxproductWeight->Name = L"maskedTextBoxproductWeight";
			this->maskedTextBoxproductWeight->Size = System::Drawing::Size(35, 19);
			this->maskedTextBoxproductWeight->TabIndex = 11;
			this->maskedTextBoxproductWeight->ValidatingType = System::Int32::typeid;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonAdd->FlatAppearance->BorderSize = 0;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdd->Location = System::Drawing::Point(259, 336);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(87, 36);
			this->buttonAdd->TabIndex = 12;
			this->buttonAdd->Text = L"Dodaj";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &formKCAL::buttonAdd_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(223, 517);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 25);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Bia³ko";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(352, 517);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 25);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Wêglowodany";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(538, 517);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 25);
			this->label9->TabIndex = 15;
			this->label9->Text = L"T³uszcze";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(705, 517);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 25);
			this->label10->TabIndex = 16;
			this->label10->Text = L"KCAL";
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonDelete->FlatAppearance->BorderSize = 0;
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDelete->Location = System::Drawing::Point(52, 482);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(87, 36);
			this->buttonDelete->TabIndex = 17;
			this->buttonDelete->Text = L"Usuñ";
			this->buttonDelete->UseVisualStyleBackColor = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(678, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 25);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Kcal";
			// 
			// maskedTextBoxKcal
			// 
			this->maskedTextBoxKcal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->maskedTextBoxKcal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBoxKcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->maskedTextBoxKcal->Location = System::Drawing::Point(683, 221);
			this->maskedTextBoxKcal->Mask = L"0000";
			this->maskedTextBoxKcal->Name = L"maskedTextBoxKcal";
			this->maskedTextBoxKcal->Size = System::Drawing::Size(35, 19);
			this->maskedTextBoxKcal->TabIndex = 19;
			this->maskedTextBoxKcal->ValidatingType = System::Int32::typeid;
			// 
			// formKCAL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->ClientSize = System::Drawing::Size(895, 629);
			this->Controls->Add(this->maskedTextBoxKcal);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->maskedTextBoxproductWeight);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->maskedTextBoxFats);
			this->Controls->Add(this->maskedTextBoxCarbo);
			this->Controls->Add(this->maskedTextBoxProtein);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxProductName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBoxProducts);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"formKCAL";
			this->Text = L"formKCAL";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		array< double >^ protein= gcnew array< double >(1024);
		array< double >^ carbo = gcnew array< double >(1024);
		array< double >^ fats = gcnew array< double >(1024);
		array< double >^ kcal = gcnew array< double >(1024);
		array< String^ >^ name = gcnew array< String^ >(1024);
	
		

private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if((maskedTextBoxProtein->Text!="") || (maskedTextBoxCarbo->Text != "")|| (maskedTextBoxFats->Text != "")||( maskedTextBoxKcal->Text != "")||(maskedTextBoxproductWeight->Text != "")||(textBoxProductName->Text != ""))
	{
		name[listBoxProducts->Items->Count] = textBoxProductName->Text;
		listBoxProducts->Items->Add(textBoxProductName->Text);
		protein[listBoxProducts->Items->Count]=Convert::ToDouble( maskedTextBoxProtein -> Text);
		fats[listBoxProducts->Items->Count] = Convert::ToDouble(maskedTextBoxFats->Text);
		kcal[listBoxProducts->Items->Count] = Convert::ToDouble(maskedTextBoxKcal->Text);
		protein[listBoxProducts->Items->Count] = Convert::ToDouble(maskedTextBoxProtein->Text);
		
	}
	else
	{
		MessageBox::Show("Musisz wype³niæ wszystkie pola!", "B³¹d!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};
}
