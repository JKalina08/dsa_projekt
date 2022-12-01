#pragma once
#include <string.h>

namespace NakupniParagon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Souhrn pro MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Sem pøidejte kód konstruktoru.
			//
		}

	protected:
		/// <summary>
		/// Uvolnìte všechny používané prostøedky.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_main;
	private: System::Windows::Forms::Label^ labelNadpis;
	private: System::Windows::Forms::Label^ labelBasket;
	private: System::Windows::Forms::Label^ labelBeer;
	private: System::Windows::Forms::Label^ labelWhiskey;
	private: System::Windows::Forms::Label^ labelVodka;
	private: System::Windows::Forms::Label^ labelRohlik;
	private: System::Windows::Forms::Label^ labelBread;
	private: System::Windows::Forms::Label^ labelDounut;
	private: System::Windows::Forms::Label^ labelShampoo;
	private: System::Windows::Forms::Label^ labelToiletPaper;
	private: System::Windows::Forms::Label^ labelSoap;
	private: System::Windows::Forms::Label^ labelBrush;
	private: System::Windows::Forms::Label^ labelBanana;
	private: System::Windows::Forms::Label^ labelApple;
	private: System::Windows::Forms::Label^ labeCarrot;
	private: System::Windows::Forms::Label^ labeCucumber;
	private: System::Windows::Forms::Button^ buttonBeerP;
	private: System::Windows::Forms::Button^ buttonBeerM;
	private: System::Windows::Forms::Button^ buttonWhiskeyP;
	private: System::Windows::Forms::Button^ buttonWhiskeyM;
	private: System::Windows::Forms::Button^ buttonVodkaP;
	private: System::Windows::Forms::Button^ buttonVodkaM;
	private: System::Windows::Forms::Button^ buttonRohlikP;
	private: System::Windows::Forms::Button^ buttonBreadP;
	private: System::Windows::Forms::Button^ buttonDounutP;
	private: System::Windows::Forms::Button^ buttonShampooP;
	private: System::Windows::Forms::Button^ buttonToiletPaperP;
	private: System::Windows::Forms::Button^ buttonSoupP;
	private: System::Windows::Forms::Button^ buttonBrushP;
	private: System::Windows::Forms::Button^ buttonBananaP;
	private: System::Windows::Forms::Button^ buttonAppleP;
	private: System::Windows::Forms::Button^ buttonCarrotP;
	private: System::Windows::Forms::Button^ buttonCucunberP;
	private: System::Windows::Forms::Button^ buttonRohlikM;
	private: System::Windows::Forms::Button^ buttonBreadM;
	private: System::Windows::Forms::Button^ buttonDounutM;
	private: System::Windows::Forms::Button^ buttonShampooM;
	private: System::Windows::Forms::Button^ buttonToiletPaperM;
	private: System::Windows::Forms::Button^ buttonSoupM;
	private: System::Windows::Forms::Button^ buttonBrushM;
	private: System::Windows::Forms::Button^ buttonBananaM;
	private: System::Windows::Forms::Button^ buttonAppleM;
	private: System::Windows::Forms::Button^ buttonCarrotM;
	private: System::Windows::Forms::Button^ buttonCucumberM;
	private: System::Windows::Forms::Button^ buttonTeam;
















	protected:

	private:
		/// <summary>
		/// Vyžaduje se promìnná návrháøe.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda vyžadovaná pro podporu Návrháøe - neupravovat
		/// obsah této metody v editoru kódu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_main = (gcnew System::Windows::Forms::Label());
			this->labelNadpis = (gcnew System::Windows::Forms::Label());
			this->labelBasket = (gcnew System::Windows::Forms::Label());
			this->labelBeer = (gcnew System::Windows::Forms::Label());
			this->labelWhiskey = (gcnew System::Windows::Forms::Label());
			this->labelVodka = (gcnew System::Windows::Forms::Label());
			this->labelRohlik = (gcnew System::Windows::Forms::Label());
			this->labelBread = (gcnew System::Windows::Forms::Label());
			this->labelDounut = (gcnew System::Windows::Forms::Label());
			this->labelShampoo = (gcnew System::Windows::Forms::Label());
			this->labelToiletPaper = (gcnew System::Windows::Forms::Label());
			this->labelSoap = (gcnew System::Windows::Forms::Label());
			this->labelBrush = (gcnew System::Windows::Forms::Label());
			this->labelBanana = (gcnew System::Windows::Forms::Label());
			this->labelApple = (gcnew System::Windows::Forms::Label());
			this->labeCarrot = (gcnew System::Windows::Forms::Label());
			this->labeCucumber = (gcnew System::Windows::Forms::Label());
			this->buttonBeerP = (gcnew System::Windows::Forms::Button());
			this->buttonBeerM = (gcnew System::Windows::Forms::Button());
			this->buttonWhiskeyP = (gcnew System::Windows::Forms::Button());
			this->buttonWhiskeyM = (gcnew System::Windows::Forms::Button());
			this->buttonVodkaP = (gcnew System::Windows::Forms::Button());
			this->buttonVodkaM = (gcnew System::Windows::Forms::Button());
			this->buttonRohlikP = (gcnew System::Windows::Forms::Button());
			this->buttonBreadP = (gcnew System::Windows::Forms::Button());
			this->buttonDounutP = (gcnew System::Windows::Forms::Button());
			this->buttonShampooP = (gcnew System::Windows::Forms::Button());
			this->buttonToiletPaperP = (gcnew System::Windows::Forms::Button());
			this->buttonSoupP = (gcnew System::Windows::Forms::Button());
			this->buttonBrushP = (gcnew System::Windows::Forms::Button());
			this->buttonBananaP = (gcnew System::Windows::Forms::Button());
			this->buttonAppleP = (gcnew System::Windows::Forms::Button());
			this->buttonCarrotP = (gcnew System::Windows::Forms::Button());
			this->buttonCucunberP = (gcnew System::Windows::Forms::Button());
			this->buttonRohlikM = (gcnew System::Windows::Forms::Button());
			this->buttonBreadM = (gcnew System::Windows::Forms::Button());
			this->buttonDounutM = (gcnew System::Windows::Forms::Button());
			this->buttonShampooM = (gcnew System::Windows::Forms::Button());
			this->buttonToiletPaperM = (gcnew System::Windows::Forms::Button());
			this->buttonSoupM = (gcnew System::Windows::Forms::Button());
			this->buttonBrushM = (gcnew System::Windows::Forms::Button());
			this->buttonBananaM = (gcnew System::Windows::Forms::Button());
			this->buttonAppleM = (gcnew System::Windows::Forms::Button());
			this->buttonCarrotM = (gcnew System::Windows::Forms::Button());
			this->buttonCucumberM = (gcnew System::Windows::Forms::Button());
			this->buttonTeam = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_main
			// 
			this->label_main->AutoSize = true;
			this->label_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label_main->Location = System::Drawing::Point(26, 28);
			this->label_main->Name = L"label_main";
			this->label_main->Size = System::Drawing::Size(319, 42);
			this->label_main->TabIndex = 0;
			this->label_main->Text = L"Nákupní paragon";
			// 
			// labelNadpis
			// 
			this->labelNadpis->AutoSize = true;
			this->labelNadpis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNadpis->Location = System::Drawing::Point(32, 86);
			this->labelNadpis->Name = L"labelNadpis";
			this->labelNadpis->Size = System::Drawing::Size(122, 20);
			this->labelNadpis->TabIndex = 1;
			this->labelNadpis->Text = L"Obsah košíku:";
			// 
			// labelBasket
			// 
			this->labelBasket->BackColor = System::Drawing::SystemColors::Control;
			this->labelBasket->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelBasket->Location = System::Drawing::Point(33, 124);
			this->labelBasket->Name = L"labelBasket";
			this->labelBasket->Size = System::Drawing::Size(410, 319);
			this->labelBasket->TabIndex = 2;
			this->labelBasket->Text = L"Prázdný košík";
			// 
			// labelBeer
			// 
			this->labelBeer->AutoSize = true;
			this->labelBeer->Location = System::Drawing::Point(490, 125);
			this->labelBeer->Name = L"labelBeer";
			this->labelBeer->Size = System::Drawing::Size(28, 13);
			this->labelBeer->TabIndex = 3;
			this->labelBeer->Text = L"Pivo";
			// 
			// labelWhiskey
			// 
			this->labelWhiskey->AutoSize = true;
			this->labelWhiskey->Location = System::Drawing::Point(490, 149);
			this->labelWhiskey->Name = L"labelWhiskey";
			this->labelWhiskey->Size = System::Drawing::Size(48, 13);
			this->labelWhiskey->TabIndex = 4;
			this->labelWhiskey->Text = L"Whiskey";
			// 
			// labelVodka
			// 
			this->labelVodka->AutoSize = true;
			this->labelVodka->Location = System::Drawing::Point(490, 173);
			this->labelVodka->Name = L"labelVodka";
			this->labelVodka->Size = System::Drawing::Size(38, 13);
			this->labelVodka->TabIndex = 5;
			this->labelVodka->Text = L"Vodka";
			// 
			// labelRohlik
			// 
			this->labelRohlik->AutoSize = true;
			this->labelRohlik->Location = System::Drawing::Point(490, 197);
			this->labelRohlik->Name = L"labelRohlik";
			this->labelRohlik->Size = System::Drawing::Size(39, 13);
			this->labelRohlik->TabIndex = 6;
			this->labelRohlik->Text = L"Rohlík";
			// 
			// labelBread
			// 
			this->labelBread->AutoSize = true;
			this->labelBread->Location = System::Drawing::Point(490, 222);
			this->labelBread->Name = L"labelBread";
			this->labelBread->Size = System::Drawing::Size(40, 13);
			this->labelBread->TabIndex = 7;
			this->labelBread->Text = L"Chleba";
			// 
			// labelDounut
			// 
			this->labelDounut->AutoSize = true;
			this->labelDounut->Location = System::Drawing::Point(490, 245);
			this->labelDounut->Name = L"labelDounut";
			this->labelDounut->Size = System::Drawing::Size(42, 13);
			this->labelDounut->TabIndex = 8;
			this->labelDounut->Text = L"Kobliha";
			// 
			// labelShampoo
			// 
			this->labelShampoo->AutoSize = true;
			this->labelShampoo->Location = System::Drawing::Point(490, 268);
			this->labelShampoo->Name = L"labelShampoo";
			this->labelShampoo->Size = System::Drawing::Size(46, 13);
			this->labelShampoo->TabIndex = 9;
			this->labelShampoo->Text = L"Šampon";
			// 
			// labelToiletPaper
			// 
			this->labelToiletPaper->AutoSize = true;
			this->labelToiletPaper->Location = System::Drawing::Point(490, 290);
			this->labelToiletPaper->Name = L"labelToiletPaper";
			this->labelToiletPaper->Size = System::Drawing::Size(75, 13);
			this->labelToiletPaper->TabIndex = 10;
			this->labelToiletPaper->Text = L"Toaletní papír";
			// 
			// labelSoap
			// 
			this->labelSoap->AutoSize = true;
			this->labelSoap->Location = System::Drawing::Point(490, 312);
			this->labelSoap->Name = L"labelSoap";
			this->labelSoap->Size = System::Drawing::Size(35, 13);
			this->labelSoap->TabIndex = 11;
			this->labelSoap->Text = L"Mýdlo";
			// 
			// labelBrush
			// 
			this->labelBrush->AutoSize = true;
			this->labelBrush->Location = System::Drawing::Point(490, 334);
			this->labelBrush->Name = L"labelBrush";
			this->labelBrush->Size = System::Drawing::Size(90, 13);
			this->labelBrush->TabIndex = 12;
			this->labelBrush->Text = L"Kartáèek na zuby";
			// 
			// labelBanana
			// 
			this->labelBanana->AutoSize = true;
			this->labelBanana->Location = System::Drawing::Point(490, 356);
			this->labelBanana->Name = L"labelBanana";
			this->labelBanana->Size = System::Drawing::Size(38, 13);
			this->labelBanana->TabIndex = 13;
			this->labelBanana->Text = L"Banán";
			// 
			// labelApple
			// 
			this->labelApple->AutoSize = true;
			this->labelApple->Location = System::Drawing::Point(490, 379);
			this->labelApple->Name = L"labelApple";
			this->labelApple->Size = System::Drawing::Size(38, 13);
			this->labelApple->TabIndex = 14;
			this->labelApple->Text = L"Jablko";
			// 
			// labeCarrot
			// 
			this->labeCarrot->AutoSize = true;
			this->labeCarrot->Location = System::Drawing::Point(490, 402);
			this->labeCarrot->Name = L"labeCarrot";
			this->labeCarrot->Size = System::Drawing::Size(37, 13);
			this->labeCarrot->TabIndex = 15;
			this->labeCarrot->Text = L"Mrkev";
			// 
			// labeCucumber
			// 
			this->labeCucumber->AutoSize = true;
			this->labeCucumber->Location = System::Drawing::Point(490, 425);
			this->labeCucumber->Name = L"labeCucumber";
			this->labeCucumber->Size = System::Drawing::Size(42, 13);
			this->labeCucumber->TabIndex = 16;
			this->labeCucumber->Text = L"Okurka";
			// 
			// buttonBeerP
			// 
			this->buttonBeerP->Location = System::Drawing::Point(581, 120);
			this->buttonBeerP->Name = L"buttonBeerP";
			this->buttonBeerP->Size = System::Drawing::Size(75, 23);
			this->buttonBeerP->TabIndex = 17;
			this->buttonBeerP->Text = L"+";
			this->buttonBeerP->UseVisualStyleBackColor = true;
			this->buttonBeerP->Click += gcnew System::EventHandler(this, &MyForm::buttonBeerP_Click);
			// 
			// buttonBeerM
			// 
			this->buttonBeerM->Location = System::Drawing::Point(662, 120);
			this->buttonBeerM->Name = L"buttonBeerM";
			this->buttonBeerM->Size = System::Drawing::Size(75, 23);
			this->buttonBeerM->TabIndex = 18;
			this->buttonBeerM->Text = L"-";
			this->buttonBeerM->UseVisualStyleBackColor = true;
			this->buttonBeerM->Click += gcnew System::EventHandler(this, &MyForm::buttonBeerM_Click);
			// 
			// buttonWhiskeyP
			// 
			this->buttonWhiskeyP->Location = System::Drawing::Point(581, 144);
			this->buttonWhiskeyP->Name = L"buttonWhiskeyP";
			this->buttonWhiskeyP->Size = System::Drawing::Size(75, 23);
			this->buttonWhiskeyP->TabIndex = 19;
			this->buttonWhiskeyP->Text = L"+";
			this->buttonWhiskeyP->UseVisualStyleBackColor = true;
			this->buttonWhiskeyP->Click += gcnew System::EventHandler(this, &MyForm::buttonWhiskeyP_Click);
			// 
			// buttonWhiskeyM
			// 
			this->buttonWhiskeyM->Location = System::Drawing::Point(662, 144);
			this->buttonWhiskeyM->Name = L"buttonWhiskeyM";
			this->buttonWhiskeyM->Size = System::Drawing::Size(75, 23);
			this->buttonWhiskeyM->TabIndex = 20;
			this->buttonWhiskeyM->Text = L"-";
			this->buttonWhiskeyM->UseVisualStyleBackColor = true;
			this->buttonWhiskeyM->Click += gcnew System::EventHandler(this, &MyForm::buttonWhiskeyM_Click);
			// 
			// buttonVodkaP
			// 
			this->buttonVodkaP->Location = System::Drawing::Point(581, 168);
			this->buttonVodkaP->Name = L"buttonVodkaP";
			this->buttonVodkaP->Size = System::Drawing::Size(75, 23);
			this->buttonVodkaP->TabIndex = 21;
			this->buttonVodkaP->Text = L"+";
			this->buttonVodkaP->UseVisualStyleBackColor = true;
			this->buttonVodkaP->Click += gcnew System::EventHandler(this, &MyForm::buttonVodkaP_Click);
			// 
			// buttonVodkaM
			// 
			this->buttonVodkaM->Location = System::Drawing::Point(662, 168);
			this->buttonVodkaM->Name = L"buttonVodkaM";
			this->buttonVodkaM->Size = System::Drawing::Size(75, 23);
			this->buttonVodkaM->TabIndex = 22;
			this->buttonVodkaM->Text = L"-";
			this->buttonVodkaM->UseVisualStyleBackColor = true;
			this->buttonVodkaM->Click += gcnew System::EventHandler(this, &MyForm::buttonVodkaM_Click);
			// 
			// buttonRohlikP
			// 
			this->buttonRohlikP->Location = System::Drawing::Point(581, 193);
			this->buttonRohlikP->Name = L"buttonRohlikP";
			this->buttonRohlikP->Size = System::Drawing::Size(75, 23);
			this->buttonRohlikP->TabIndex = 23;
			this->buttonRohlikP->Text = L"+";
			this->buttonRohlikP->UseVisualStyleBackColor = true;
			this->buttonRohlikP->Click += gcnew System::EventHandler(this, &MyForm::buttonRohlikP_Click);
			// 
			// buttonBreadP
			// 
			this->buttonBreadP->Location = System::Drawing::Point(581, 217);
			this->buttonBreadP->Name = L"buttonBreadP";
			this->buttonBreadP->Size = System::Drawing::Size(75, 23);
			this->buttonBreadP->TabIndex = 24;
			this->buttonBreadP->Text = L"+";
			this->buttonBreadP->UseVisualStyleBackColor = true;
			this->buttonBreadP->Click += gcnew System::EventHandler(this, &MyForm::buttonBreadP_Click);
			// 
			// buttonDounutP
			// 
			this->buttonDounutP->Location = System::Drawing::Point(581, 240);
			this->buttonDounutP->Name = L"buttonDounutP";
			this->buttonDounutP->Size = System::Drawing::Size(75, 23);
			this->buttonDounutP->TabIndex = 25;
			this->buttonDounutP->Text = L"+";
			this->buttonDounutP->UseVisualStyleBackColor = true;
			this->buttonDounutP->Click += gcnew System::EventHandler(this, &MyForm::buttonDounutP_Click);
			// 
			// buttonShampooP
			// 
			this->buttonShampooP->Location = System::Drawing::Point(581, 263);
			this->buttonShampooP->Name = L"buttonShampooP";
			this->buttonShampooP->Size = System::Drawing::Size(75, 23);
			this->buttonShampooP->TabIndex = 26;
			this->buttonShampooP->Text = L"+";
			this->buttonShampooP->UseVisualStyleBackColor = true;
			this->buttonShampooP->Click += gcnew System::EventHandler(this, &MyForm::buttonShampooP_Click);
			// 
			// buttonToiletPaperP
			// 
			this->buttonToiletPaperP->Location = System::Drawing::Point(581, 285);
			this->buttonToiletPaperP->Name = L"buttonToiletPaperP";
			this->buttonToiletPaperP->Size = System::Drawing::Size(75, 23);
			this->buttonToiletPaperP->TabIndex = 27;
			this->buttonToiletPaperP->Text = L"+";
			this->buttonToiletPaperP->UseVisualStyleBackColor = true;
			this->buttonToiletPaperP->Click += gcnew System::EventHandler(this, &MyForm::buttonToiletPaperP_Click);
			// 
			// buttonSoupP
			// 
			this->buttonSoupP->Location = System::Drawing::Point(581, 307);
			this->buttonSoupP->Name = L"buttonSoupP";
			this->buttonSoupP->Size = System::Drawing::Size(75, 23);
			this->buttonSoupP->TabIndex = 28;
			this->buttonSoupP->Text = L"+";
			this->buttonSoupP->UseVisualStyleBackColor = true;
			this->buttonSoupP->Click += gcnew System::EventHandler(this, &MyForm::buttonSoupP_Click);
			// 
			// buttonBrushP
			// 
			this->buttonBrushP->Location = System::Drawing::Point(581, 329);
			this->buttonBrushP->Name = L"buttonBrushP";
			this->buttonBrushP->Size = System::Drawing::Size(75, 23);
			this->buttonBrushP->TabIndex = 29;
			this->buttonBrushP->Text = L"+";
			this->buttonBrushP->UseVisualStyleBackColor = true;
			this->buttonBrushP->Click += gcnew System::EventHandler(this, &MyForm::buttonBrushP_Click);
			// 
			// buttonBananaP
			// 
			this->buttonBananaP->Location = System::Drawing::Point(581, 351);
			this->buttonBananaP->Name = L"buttonBananaP";
			this->buttonBananaP->Size = System::Drawing::Size(75, 23);
			this->buttonBananaP->TabIndex = 30;
			this->buttonBananaP->Text = L"+";
			this->buttonBananaP->UseVisualStyleBackColor = true;
			this->buttonBananaP->Click += gcnew System::EventHandler(this, &MyForm::buttonBananaP_Click);
			// 
			// buttonAppleP
			// 
			this->buttonAppleP->Location = System::Drawing::Point(581, 374);
			this->buttonAppleP->Name = L"buttonAppleP";
			this->buttonAppleP->Size = System::Drawing::Size(75, 23);
			this->buttonAppleP->TabIndex = 31;
			this->buttonAppleP->Text = L"+";
			this->buttonAppleP->UseVisualStyleBackColor = true;
			this->buttonAppleP->Click += gcnew System::EventHandler(this, &MyForm::buttonAppleP_Click);
			// 
			// buttonCarrotP
			// 
			this->buttonCarrotP->Location = System::Drawing::Point(581, 397);
			this->buttonCarrotP->Name = L"buttonCarrotP";
			this->buttonCarrotP->Size = System::Drawing::Size(75, 23);
			this->buttonCarrotP->TabIndex = 32;
			this->buttonCarrotP->Text = L"+";
			this->buttonCarrotP->UseVisualStyleBackColor = true;
			this->buttonCarrotP->Click += gcnew System::EventHandler(this, &MyForm::buttonCarrotP_Click);
			// 
			// buttonCucunberP
			// 
			this->buttonCucunberP->Location = System::Drawing::Point(581, 420);
			this->buttonCucunberP->Name = L"buttonCucunberP";
			this->buttonCucunberP->Size = System::Drawing::Size(75, 23);
			this->buttonCucunberP->TabIndex = 33;
			this->buttonCucunberP->Text = L"+";
			this->buttonCucunberP->UseVisualStyleBackColor = true;
			this->buttonCucunberP->Click += gcnew System::EventHandler(this, &MyForm::buttonCucunberP_Click);
			// 
			// buttonRohlikM
			// 
			this->buttonRohlikM->Location = System::Drawing::Point(662, 193);
			this->buttonRohlikM->Name = L"buttonRohlikM";
			this->buttonRohlikM->Size = System::Drawing::Size(75, 23);
			this->buttonRohlikM->TabIndex = 34;
			this->buttonRohlikM->Text = L"-";
			this->buttonRohlikM->UseVisualStyleBackColor = true;
			this->buttonRohlikM->Click += gcnew System::EventHandler(this, &MyForm::buttonRohlikM_Click);
			// 
			// buttonBreadM
			// 
			this->buttonBreadM->Location = System::Drawing::Point(662, 217);
			this->buttonBreadM->Name = L"buttonBreadM";
			this->buttonBreadM->Size = System::Drawing::Size(75, 23);
			this->buttonBreadM->TabIndex = 35;
			this->buttonBreadM->Text = L"-";
			this->buttonBreadM->UseVisualStyleBackColor = true;
			this->buttonBreadM->Click += gcnew System::EventHandler(this, &MyForm::buttonBreadM_Click);
			// 
			// buttonDounutM
			// 
			this->buttonDounutM->Location = System::Drawing::Point(662, 240);
			this->buttonDounutM->Name = L"buttonDounutM";
			this->buttonDounutM->Size = System::Drawing::Size(75, 23);
			this->buttonDounutM->TabIndex = 36;
			this->buttonDounutM->Text = L"-";
			this->buttonDounutM->UseVisualStyleBackColor = true;
			this->buttonDounutM->Click += gcnew System::EventHandler(this, &MyForm::buttonDounutM_Click);
			// 
			// buttonShampooM
			// 
			this->buttonShampooM->Location = System::Drawing::Point(662, 263);
			this->buttonShampooM->Name = L"buttonShampooM";
			this->buttonShampooM->Size = System::Drawing::Size(75, 23);
			this->buttonShampooM->TabIndex = 37;
			this->buttonShampooM->Text = L"-";
			this->buttonShampooM->UseVisualStyleBackColor = true;
			this->buttonShampooM->Click += gcnew System::EventHandler(this, &MyForm::buttonShampooM_Click);
			// 
			// buttonToiletPaperM
			// 
			this->buttonToiletPaperM->Location = System::Drawing::Point(662, 285);
			this->buttonToiletPaperM->Name = L"buttonToiletPaperM";
			this->buttonToiletPaperM->Size = System::Drawing::Size(75, 23);
			this->buttonToiletPaperM->TabIndex = 38;
			this->buttonToiletPaperM->Text = L"-";
			this->buttonToiletPaperM->UseVisualStyleBackColor = true;
			this->buttonToiletPaperM->Click += gcnew System::EventHandler(this, &MyForm::buttonToiletPaperM_Click);
			// 
			// buttonSoupM
			// 
			this->buttonSoupM->Location = System::Drawing::Point(662, 307);
			this->buttonSoupM->Name = L"buttonSoupM";
			this->buttonSoupM->Size = System::Drawing::Size(75, 23);
			this->buttonSoupM->TabIndex = 39;
			this->buttonSoupM->Text = L"-";
			this->buttonSoupM->UseVisualStyleBackColor = true;
			this->buttonSoupM->Click += gcnew System::EventHandler(this, &MyForm::buttonSoupM_Click);
			// 
			// buttonBrushM
			// 
			this->buttonBrushM->Location = System::Drawing::Point(662, 329);
			this->buttonBrushM->Name = L"buttonBrushM";
			this->buttonBrushM->Size = System::Drawing::Size(75, 23);
			this->buttonBrushM->TabIndex = 40;
			this->buttonBrushM->Text = L"-";
			this->buttonBrushM->UseVisualStyleBackColor = true;
			this->buttonBrushM->Click += gcnew System::EventHandler(this, &MyForm::buttonBrushM_Click);
			// 
			// buttonBananaM
			// 
			this->buttonBananaM->Location = System::Drawing::Point(662, 351);
			this->buttonBananaM->Name = L"buttonBananaM";
			this->buttonBananaM->Size = System::Drawing::Size(75, 23);
			this->buttonBananaM->TabIndex = 41;
			this->buttonBananaM->Text = L"-";
			this->buttonBananaM->UseVisualStyleBackColor = true;
			this->buttonBananaM->Click += gcnew System::EventHandler(this, &MyForm::buttonBananaM_Click);
			// 
			// buttonAppleM
			// 
			this->buttonAppleM->Location = System::Drawing::Point(662, 374);
			this->buttonAppleM->Name = L"buttonAppleM";
			this->buttonAppleM->Size = System::Drawing::Size(75, 23);
			this->buttonAppleM->TabIndex = 42;
			this->buttonAppleM->Text = L"-";
			this->buttonAppleM->UseVisualStyleBackColor = true;
			this->buttonAppleM->Click += gcnew System::EventHandler(this, &MyForm::buttonAppleM_Click);
			// 
			// buttonCarrotM
			// 
			this->buttonCarrotM->Location = System::Drawing::Point(662, 397);
			this->buttonCarrotM->Name = L"buttonCarrotM";
			this->buttonCarrotM->Size = System::Drawing::Size(75, 23);
			this->buttonCarrotM->TabIndex = 43;
			this->buttonCarrotM->Text = L"-";
			this->buttonCarrotM->UseVisualStyleBackColor = true;
			this->buttonCarrotM->Click += gcnew System::EventHandler(this, &MyForm::buttonCarrotM_Click);
			// 
			// buttonCucumberM
			// 
			this->buttonCucumberM->Location = System::Drawing::Point(662, 420);
			this->buttonCucumberM->Name = L"buttonCucumberM";
			this->buttonCucumberM->Size = System::Drawing::Size(75, 23);
			this->buttonCucumberM->TabIndex = 44;
			this->buttonCucumberM->Text = L"-";
			this->buttonCucumberM->UseVisualStyleBackColor = true;
			this->buttonCucumberM->Click += gcnew System::EventHandler(this, &MyForm::buttonCucumberM_Click);
			// 
			// buttonTeam
			// 
			this->buttonTeam->Location = System::Drawing::Point(493, 47);
			this->buttonTeam->Name = L"buttonTeam";
			this->buttonTeam->Size = System::Drawing::Size(244, 23);
			this->buttonTeam->TabIndex = 45;
			this->buttonTeam->Text = L"Vývojáøský tým";
			this->buttonTeam->UseVisualStyleBackColor = true;
			this->buttonTeam->Click += gcnew System::EventHandler(this, &MyForm::buttonTeam_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 482);
			this->Controls->Add(this->buttonTeam);
			this->Controls->Add(this->buttonCucumberM);
			this->Controls->Add(this->buttonCarrotM);
			this->Controls->Add(this->buttonAppleM);
			this->Controls->Add(this->buttonBananaM);
			this->Controls->Add(this->buttonBrushM);
			this->Controls->Add(this->buttonSoupM);
			this->Controls->Add(this->buttonToiletPaperM);
			this->Controls->Add(this->buttonShampooM);
			this->Controls->Add(this->buttonDounutM);
			this->Controls->Add(this->buttonBreadM);
			this->Controls->Add(this->buttonRohlikM);
			this->Controls->Add(this->buttonCucunberP);
			this->Controls->Add(this->buttonCarrotP);
			this->Controls->Add(this->buttonAppleP);
			this->Controls->Add(this->buttonBananaP);
			this->Controls->Add(this->buttonBrushP);
			this->Controls->Add(this->buttonSoupP);
			this->Controls->Add(this->buttonToiletPaperP);
			this->Controls->Add(this->buttonShampooP);
			this->Controls->Add(this->buttonDounutP);
			this->Controls->Add(this->buttonBreadP);
			this->Controls->Add(this->buttonRohlikP);
			this->Controls->Add(this->buttonVodkaM);
			this->Controls->Add(this->buttonVodkaP);
			this->Controls->Add(this->buttonWhiskeyM);
			this->Controls->Add(this->buttonWhiskeyP);
			this->Controls->Add(this->buttonBeerM);
			this->Controls->Add(this->buttonBeerP);
			this->Controls->Add(this->labeCucumber);
			this->Controls->Add(this->labeCarrot);
			this->Controls->Add(this->labelApple);
			this->Controls->Add(this->labelBanana);
			this->Controls->Add(this->labelBrush);
			this->Controls->Add(this->labelSoap);
			this->Controls->Add(this->labelToiletPaper);
			this->Controls->Add(this->labelShampoo);
			this->Controls->Add(this->labelDounut);
			this->Controls->Add(this->labelBread);
			this->Controls->Add(this->labelRohlik);
			this->Controls->Add(this->labelVodka);
			this->Controls->Add(this->labelWhiskey);
			this->Controls->Add(this->labelBeer);
			this->Controls->Add(this->labelBasket);
			this->Controls->Add(this->labelNadpis);
			this->Controls->Add(this->label_main);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Nákupní paragon - Semestrální projekt DSA 2022";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonBeerP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidáno pivo";
	}
	private: System::Void buttonBeerM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebráno pivo";
	}
	private: System::Void buttonWhiskeyP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidána Whiskey";
	}
	private: System::Void buttonWhiskeyM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrána Whiskey";
	}
	private: System::Void buttonVodkaP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidána vodka";
	}
	private: System::Void buttonVodkaM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrána vodka";
	}
	private: System::Void buttonRohlikP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidán rohlík";
	}
	private: System::Void buttonRohlikM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrán rohlík";
	}
	private: System::Void buttonBreadP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidán chleba";
	}
	private: System::Void buttonBreadM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrán chleba";
	}
	private: System::Void buttonDounutP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidána kobliha";
	}
	private: System::Void buttonDounutM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrána kobliha";
	}
	private: System::Void buttonShampooP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidán šampon";
	}
	private: System::Void buttonShampooM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrán šampon";
	}
	private: System::Void buttonToiletPaperP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidán toaletní papír";
	}
	private: System::Void buttonToiletPaperM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrán toaletní papír";
	}
	private: System::Void buttonSoupP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidáno mýdlo";
	}
	private: System::Void buttonSoupM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebráno mýdlo";
	}
	private: System::Void buttonBrushP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidán akrtáèek na zuby";
	}
	private: System::Void buttonBrushM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrán kartáèek na zuby";
	}
	private: System::Void buttonBananaP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\nPøidán banán";
	}
	private: System::Void buttonBananaM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrán banán";
	}
	private: System::Void buttonAppleP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidáno jablko";
	}
	private: System::Void buttonAppleM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebráno jablko";
	}
	private: System::Void buttonCarrotP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidána mrkev";
	}
	private: System::Void buttonCarrotM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrána mrkev";
	}
	private: System::Void buttonCucunberP_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n+ Pøidána okurka";
	}
	private: System::Void buttonCucumberM_Click(System::Object^ sender, System::EventArgs^ e) {
		labelBasket->Text = labelBasket->Text + "\n- Odebrána okurka";
	}
	private: System::Void buttonTeam_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Jiøí Karmasin (mail)\nJiøí Kalina (mail)\nMichal Makovec (mail)\nJiøí Bukovský (mail)", "Vývojáøský tým:",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}