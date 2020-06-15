#pragma once
#include "formKCAL.h"
#include "formBMR.h"
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






	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ buttonAdd;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::TextBox^ textBoxProtein;
	private: System::Windows::Forms::TextBox^ textBoxCarbo;
	private: System::Windows::Forms::TextBox^ textBoxFats;
	private: System::Windows::Forms::Label^ labelKcal;
	private: System::Windows::Forms::TextBox^ textBoxproductWeight;
	private: System::Windows::Forms::Label^ labelProtein;
	private: System::Windows::Forms::Label^ labelCarbo;
	private: System::Windows::Forms::Label^ labelFats;
	private: System::Windows::Forms::Label^ labelAllKcal;







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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxProtein = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCarbo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFats = (gcnew System::Windows::Forms::TextBox());
			this->labelKcal = (gcnew System::Windows::Forms::Label());
			this->textBoxproductWeight = (gcnew System::Windows::Forms::TextBox());
			this->labelProtein = (gcnew System::Windows::Forms::Label());
			this->labelCarbo = (gcnew System::Windows::Forms::Label());
			this->labelFats = (gcnew System::Windows::Forms::Label());
			this->labelAllKcal = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBoxProducts
			// 
			this->listBoxProducts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->listBoxProducts->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBoxProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->listBoxProducts->ForeColor = System::Drawing::SystemColors::Window;
			this->listBoxProducts->FormattingEnabled = true;
			this->listBoxProducts->ItemHeight = 20;
			this->listBoxProducts->Location = System::Drawing::Point(52, 69);
			this->listBoxProducts->Name = L"listBoxProducts";
			this->listBoxProducts->Size = System::Drawing::Size(170, 400);
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
			this->textBoxProductName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxProductName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textBoxProductName->Location = System::Drawing::Point(268, 105);
			this->textBoxProductName->Name = L"textBoxProductName";
			this->textBoxProductName->Size = System::Drawing::Size(299, 24);
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
			this->label5->Location = System::Drawing::Point(538, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"T³uszcze";
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
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonAdd->FlatAppearance->BorderSize = 0;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAdd->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAdd->Location = System::Drawing::Point(268, 336);
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
			this->label11->Location = System::Drawing::Point(642, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 25);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Kcal";
			// 
			// textBoxProtein
			// 
			this->textBoxProtein->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxProtein->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxProtein->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxProtein->Location = System::Drawing::Point(268, 220);
			this->textBoxProtein->Name = L"textBoxProtein";
			this->textBoxProtein->Size = System::Drawing::Size(66, 24);
			this->textBoxProtein->TabIndex = 20;
			// 
			// textBoxCarbo
			// 
			this->textBoxCarbo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxCarbo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxCarbo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxCarbo->Location = System::Drawing::Point(386, 221);
			this->textBoxCarbo->Name = L"textBoxCarbo";
			this->textBoxCarbo->Size = System::Drawing::Size(66, 24);
			this->textBoxCarbo->TabIndex = 21;
			// 
			// textBoxFats
			// 
			this->textBoxFats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)), static_cast<System::Int32>(static_cast<System::Byte>(12)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxFats->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxFats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxFats->Location = System::Drawing::Point(543, 221);
			this->textBoxFats->Name = L"textBoxFats";
			this->textBoxFats->Size = System::Drawing::Size(66, 24);
			this->textBoxFats->TabIndex = 22;
			// 
			// labelKcal
			// 
			this->labelKcal->AutoSize = true;
			this->labelKcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelKcal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelKcal->Location = System::Drawing::Point(642, 221);
			this->labelKcal->Name = L"labelKcal";
			this->labelKcal->Size = System::Drawing::Size(0, 29);
			this->labelKcal->TabIndex = 23;
			// 
			// textBoxproductWeight
			// 
			this->textBoxproductWeight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBoxproductWeight->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxproductWeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->textBoxproductWeight->Location = System::Drawing::Point(268, 297);
			this->textBoxproductWeight->Name = L"textBoxproductWeight";
			this->textBoxproductWeight->Size = System::Drawing::Size(66, 24);
			this->textBoxproductWeight->TabIndex = 24;
			// 
			// labelProtein
			// 
			this->labelProtein->AutoSize = true;
			this->labelProtein->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelProtein->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelProtein->Location = System::Drawing::Point(224, 542);
			this->labelProtein->Name = L"labelProtein";
			this->labelProtein->Size = System::Drawing::Size(70, 24);
			this->labelProtein->TabIndex = 25;
			this->labelProtein->Text = L"label12";
			// 
			// labelCarbo
			// 
			this->labelCarbo->AutoSize = true;
			this->labelCarbo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCarbo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelCarbo->Location = System::Drawing::Point(353, 542);
			this->labelCarbo->Name = L"labelCarbo";
			this->labelCarbo->Size = System::Drawing::Size(70, 24);
			this->labelCarbo->TabIndex = 26;
			this->labelCarbo->Text = L"label12";
			// 
			// labelFats
			// 
			this->labelFats->AutoSize = true;
			this->labelFats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelFats->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelFats->Location = System::Drawing::Point(539, 542);
			this->labelFats->Name = L"labelFats";
			this->labelFats->Size = System::Drawing::Size(70, 24);
			this->labelFats->TabIndex = 27;
			this->labelFats->Text = L"label12";
			// 
			// labelAllKcal
			// 
			this->labelAllKcal->AutoSize = true;
			this->labelAllKcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelAllKcal->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelAllKcal->Location = System::Drawing::Point(706, 542);
			this->labelAllKcal->Name = L"labelAllKcal";
			this->labelAllKcal->Size = System::Drawing::Size(70, 24);
			this->labelAllKcal->TabIndex = 28;
			this->labelAllKcal->Text =Convert::ToString( formBMR::KCAL);
			// 
			// formKCAL
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(89)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->ClientSize = System::Drawing::Size(895, 629);
			this->Controls->Add(this->labelAllKcal);
			this->Controls->Add(this->labelFats);
			this->Controls->Add(this->labelCarbo);
			this->Controls->Add(this->labelProtein);
			this->Controls->Add(this->textBoxproductWeight);
			this->Controls->Add(this->labelKcal);
			this->Controls->Add(this->textBoxFats);
			this->Controls->Add(this->textBoxCarbo);
			this->Controls->Add(this->textBoxProtein);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->label6);
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
		
		
		double calcKCAL()
		{
			return (4 * Convert::ToDouble(textBoxProtein->Text) + 4 * Convert::ToDouble(textBoxCarbo->Text) + 9 * Convert::ToDouble(textBoxFats->Text))* (Convert::ToDouble(textBoxproductWeight->Text)/100);
		}
		

private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	if((textBoxProtein->Text->Length>0) || (textBoxCarbo->Text->Length > 0)|| (textBoxFats->Text->Length > 0)||(textBoxproductWeight->Text->Length > 0)||(textBoxProductName->Text->Length > 0))
	{
		name[listBoxProducts->Items->Count] = textBoxProductName->Text;
		protein[listBoxProducts->Items->Count]=Convert::ToDouble(textBoxProtein-> Text);
		fats[listBoxProducts->Items->Count] = Convert::ToDouble(textBoxFats->Text);
		carbo[listBoxProducts->Items->Count] = Convert::ToDouble(textBoxCarbo->Text);
		kcal[listBoxProducts->Items->Count] = calcKCAL();
		labelKcal->Text = Convert::ToString(calcKCAL());
		listBoxProducts->Items->Add(textBoxProductName->Text+"-"+ Convert::ToString(calcKCAL())+" KCAL");
	}
	else
	{
		MessageBox::Show("Musisz wype³niæ wszystkie pola!", "B³¹d!", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};
}
