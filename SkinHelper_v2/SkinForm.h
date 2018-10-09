#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#pragma comment(lib,"User32.lib")
std::string ext = ".png";
std::string A1 = "", A5 = "", A4A6 = "", A3A7 = "", A2A8 = "";
std::string B1 = "", B5 = "", B4B6 = "", B3B7 = "", B2B8 = "";
std::string C1 = "", C5 = "", C4C6 = "", C3C7 = "", C2C8 = "";
std::string D1 = "", D5 = "", D4D6 = "", D3D7 = "", D2D8 = "";
std::string E1 = "", E5 = "", E4E6 = "", E3E7 = "", E2E8 = "";
std::string F1 = "", F5 = "", F4F6 = "", F3F7 = "", F2F8 = "";
std::string G1 = "", G5 = "", G4G6 = "", G3G7 = "", G2G8 = "";
std::string H1 = "", H5 = "", H4H6 = "", H3H7 = "", H2H8 = "";
std::string H0 = "", I0 = "", J0 = "", K0 = "", L0 = "", M0 = "", N0 = ""; // Normal Death
std::string O0 = "", P0 = "", Q0 = "", R0 = "", S0 = "", T0 = "", U0 = "", V0 = "", W0 = ""; // XDeath

namespace SkinHelperv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SkinForm
	/// </summary>
	public ref class SkinForm : public System::Windows::Forms::Form
	{
	public:
		SkinForm(void)
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
		~SkinForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  UpperPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  sknlabel;
	private: System::Windows::Forms::OpenFileDialog^  oFileDialog;



	private: System::Windows::Forms::RichTextBox^  LogBox;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  GenerateLabel;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  ResetLabel;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  pH1;
	private: System::Windows::Forms::Panel^  pH5;
	private: System::Windows::Forms::Panel^  pH4H6;
	private: System::Windows::Forms::Panel^  pH3H7;
	private: System::Windows::Forms::Panel^  pH2H8;
	private: System::Windows::Forms::Panel^  pG2G8;
	private: System::Windows::Forms::Panel^  pG3G7;
	private: System::Windows::Forms::Panel^  pG4G6;
	private: System::Windows::Forms::Panel^  pG5;
	private: System::Windows::Forms::Panel^  pG1;
	private: System::Windows::Forms::Panel^  pF2F8;
	private: System::Windows::Forms::Panel^  pF3F7;
	private: System::Windows::Forms::Panel^  pF4F6;
	private: System::Windows::Forms::Panel^  pF5;
	private: System::Windows::Forms::Panel^  pE5;
	private: System::Windows::Forms::Panel^  pE4E6;
	private: System::Windows::Forms::Panel^  pF1;
	private: System::Windows::Forms::Panel^  pE2E8;
	private: System::Windows::Forms::Panel^  pE3E7;
	private: System::Windows::Forms::Panel^  pE1;
	private: System::Windows::Forms::Panel^  pD2D8;
	private: System::Windows::Forms::Panel^  pD3D7;
	private: System::Windows::Forms::Panel^  pD4D6;
	private: System::Windows::Forms::Panel^  pD5;
	private: System::Windows::Forms::Panel^  pD1;
	private: System::Windows::Forms::Panel^  pC2C8;
	private: System::Windows::Forms::Panel^  pC3C7;
	private: System::Windows::Forms::Panel^  pC4C6;
	private: System::Windows::Forms::Panel^  pC1;
	private: System::Windows::Forms::Panel^  pC5;
	private: System::Windows::Forms::Panel^  pB2B8;
	private: System::Windows::Forms::Panel^  pB3B7;
	private: System::Windows::Forms::Panel^  pB4B6;
	private: System::Windows::Forms::Panel^  pB5;
	private: System::Windows::Forms::Panel^  pB1;
	private: System::Windows::Forms::Panel^  pA2A8;
	private: System::Windows::Forms::Panel^  pA3A7;
	private: System::Windows::Forms::Panel^  pA4A6;
	private: System::Windows::Forms::Panel^  pA5;
	private: System::Windows::Forms::Panel^  pA1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  ShowSLabel;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  clslog;
	private: System::Windows::Forms::TextBox^  SpriteName;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  DMenuOpenner;

	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Panel^  DeathMenu;
	private: System::Windows::Forms::Timer^  PanelSwitcher;
	private: System::Windows::Forms::Label^  DMenuCloser;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Button^  Death1;
	private: System::Windows::Forms::Button^  Death7;


	private: System::Windows::Forms::Button^  Death6;

	private: System::Windows::Forms::Button^  Death5;

	private: System::Windows::Forms::Button^  Death4;

	private: System::Windows::Forms::Button^  Death3;

	private: System::Windows::Forms::Button^  Death2;
private: System::Windows::Forms::Button^  XDeath5;


private: System::Windows::Forms::Button^  XDeath3;
private: System::Windows::Forms::Button^  XDeath9;


private: System::Windows::Forms::Button^  XDeath8;

private: System::Windows::Forms::Button^  XDeath7;

private: System::Windows::Forms::Button^  XDeath6;

private: System::Windows::Forms::Button^  XDeath4;

private: System::Windows::Forms::Button^  XDeath1;
private: System::Windows::Forms::Button^  XDeath2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::PictureBox^  pictureBox9;


	private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SkinForm::typeid));
			this->UpperPanel = (gcnew System::Windows::Forms::Panel());
			this->sknlabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->oFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->LogBox = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->GenerateLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->ResetLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->DeathMenu = (gcnew System::Windows::Forms::Panel());
			this->Death7 = (gcnew System::Windows::Forms::Button());
			this->Death6 = (gcnew System::Windows::Forms::Button());
			this->Death5 = (gcnew System::Windows::Forms::Button());
			this->Death4 = (gcnew System::Windows::Forms::Button());
			this->Death3 = (gcnew System::Windows::Forms::Button());
			this->Death2 = (gcnew System::Windows::Forms::Button());
			this->XDeath5 = (gcnew System::Windows::Forms::Button());
			this->XDeath3 = (gcnew System::Windows::Forms::Button());
			this->XDeath9 = (gcnew System::Windows::Forms::Button());
			this->XDeath8 = (gcnew System::Windows::Forms::Button());
			this->XDeath7 = (gcnew System::Windows::Forms::Button());
			this->XDeath6 = (gcnew System::Windows::Forms::Button());
			this->XDeath4 = (gcnew System::Windows::Forms::Button());
			this->XDeath1 = (gcnew System::Windows::Forms::Button());
			this->XDeath2 = (gcnew System::Windows::Forms::Button());
			this->Death1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DMenuCloser = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pH1 = (gcnew System::Windows::Forms::Panel());
			this->pH5 = (gcnew System::Windows::Forms::Panel());
			this->pH4H6 = (gcnew System::Windows::Forms::Panel());
			this->pH3H7 = (gcnew System::Windows::Forms::Panel());
			this->pH2H8 = (gcnew System::Windows::Forms::Panel());
			this->pG2G8 = (gcnew System::Windows::Forms::Panel());
			this->DMenuOpenner = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pG3G7 = (gcnew System::Windows::Forms::Panel());
			this->pG4G6 = (gcnew System::Windows::Forms::Panel());
			this->pG5 = (gcnew System::Windows::Forms::Panel());
			this->pG1 = (gcnew System::Windows::Forms::Panel());
			this->pF2F8 = (gcnew System::Windows::Forms::Panel());
			this->pF3F7 = (gcnew System::Windows::Forms::Panel());
			this->pF4F6 = (gcnew System::Windows::Forms::Panel());
			this->pF5 = (gcnew System::Windows::Forms::Panel());
			this->pE5 = (gcnew System::Windows::Forms::Panel());
			this->pE4E6 = (gcnew System::Windows::Forms::Panel());
			this->pF1 = (gcnew System::Windows::Forms::Panel());
			this->pE2E8 = (gcnew System::Windows::Forms::Panel());
			this->pE3E7 = (gcnew System::Windows::Forms::Panel());
			this->pE1 = (gcnew System::Windows::Forms::Panel());
			this->pD2D8 = (gcnew System::Windows::Forms::Panel());
			this->pD3D7 = (gcnew System::Windows::Forms::Panel());
			this->pD4D6 = (gcnew System::Windows::Forms::Panel());
			this->pD5 = (gcnew System::Windows::Forms::Panel());
			this->pD1 = (gcnew System::Windows::Forms::Panel());
			this->pC2C8 = (gcnew System::Windows::Forms::Panel());
			this->pC3C7 = (gcnew System::Windows::Forms::Panel());
			this->pC4C6 = (gcnew System::Windows::Forms::Panel());
			this->pC1 = (gcnew System::Windows::Forms::Panel());
			this->pC5 = (gcnew System::Windows::Forms::Panel());
			this->pB2B8 = (gcnew System::Windows::Forms::Panel());
			this->pB3B7 = (gcnew System::Windows::Forms::Panel());
			this->pB4B6 = (gcnew System::Windows::Forms::Panel());
			this->pB5 = (gcnew System::Windows::Forms::Panel());
			this->pB1 = (gcnew System::Windows::Forms::Panel());
			this->pA2A8 = (gcnew System::Windows::Forms::Panel());
			this->pA3A7 = (gcnew System::Windows::Forms::Panel());
			this->pA4A6 = (gcnew System::Windows::Forms::Panel());
			this->pA5 = (gcnew System::Windows::Forms::Panel());
			this->pA1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->ShowSLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->clslog = (gcnew System::Windows::Forms::Label());
			this->SpriteName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->PanelSwitcher = (gcnew System::Windows::Forms::Timer(this->components));
			this->UpperPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->DeathMenu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// UpperPanel
			// 
			this->UpperPanel->BackColor = System::Drawing::Color::Teal;
			this->UpperPanel->Controls->Add(this->sknlabel);
			this->UpperPanel->Controls->Add(this->pictureBox1);
			this->UpperPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpperPanel->Location = System::Drawing::Point(0, 0);
			this->UpperPanel->Name = L"UpperPanel";
			this->UpperPanel->Size = System::Drawing::Size(558, 22);
			this->UpperPanel->TabIndex = 0;
			this->UpperPanel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::UpperPanel_MouseDown);
			this->UpperPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::UpperPanel_MouseMove);
			this->UpperPanel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::UpperPanel_MouseUp);
			// 
			// sknlabel
			// 
			this->sknlabel->AutoSize = true;
			this->sknlabel->BackColor = System::Drawing::Color::Transparent;
			this->sknlabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sknlabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sknlabel->ForeColor = System::Drawing::Color::Orange;
			this->sknlabel->Location = System::Drawing::Point(0, 0);
			this->sknlabel->Name = L"sknlabel";
			this->sknlabel->Size = System::Drawing::Size(95, 19);
			this->sknlabel->TabIndex = 2;
			this->sknlabel->Text = L"Skin Helper";
			this->sknlabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(535, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(16, 16);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pictureBox1_MouseClick);
			// 
			// oFileDialog
			// 
			this->oFileDialog->FileName = L"oFileDialog";
			// 
			// LogBox
			// 
			this->LogBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->LogBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LogBox->Location = System::Drawing::Point(256, 52);
			this->LogBox->Name = L"LogBox";
			this->LogBox->ReadOnly = true;
			this->LogBox->Size = System::Drawing::Size(292, 297);
			this->LogBox->TabIndex = 3;
			this->LogBox->Text = L"                                                LOG\nSkin Helper v2 by Daemon.\nA1,"
				L" A5, A3A7, H0 sprites must be set, everything else is optional.";
			this->LogBox->TextChanged += gcnew System::EventHandler(this, &SkinForm::LogBox_TextChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(465, 369);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(16, 16);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// GenerateLabel
			// 
			this->GenerateLabel->AutoSize = true;
			this->GenerateLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->GenerateLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenerateLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->GenerateLabel->Location = System::Drawing::Point(487, 369);
			this->GenerateLabel->Name = L"GenerateLabel";
			this->GenerateLabel->Size = System::Drawing::Size(61, 16);
			this->GenerateLabel->TabIndex = 5;
			this->GenerateLabel->Text = L"Generate";
			this->GenerateLabel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::GenerateLabel_MouseClick);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(257, 369);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(16, 16);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// ResetLabel
			// 
			this->ResetLabel->AutoSize = true;
			this->ResetLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ResetLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResetLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ResetLabel->Location = System::Drawing::Point(279, 369);
			this->ResetLabel->Name = L"ResetLabel";
			this->ResetLabel->Size = System::Drawing::Size(79, 16);
			this->ResetLabel->TabIndex = 7;
			this->ResetLabel->Text = L"Reset settings";
			this->ResetLabel->Click += gcnew System::EventHandler(this, &SkinForm::ResetLabel_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->DeathMenu);
			this->panel1->Controls->Add(this->pH1);
			this->panel1->Controls->Add(this->pH5);
			this->panel1->Controls->Add(this->pH4H6);
			this->panel1->Controls->Add(this->pH3H7);
			this->panel1->Controls->Add(this->pH2H8);
			this->panel1->Controls->Add(this->pG2G8);
			this->panel1->Controls->Add(this->DMenuOpenner);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pG3G7);
			this->panel1->Controls->Add(this->pG4G6);
			this->panel1->Controls->Add(this->pG5);
			this->panel1->Controls->Add(this->pG1);
			this->panel1->Controls->Add(this->pF2F8);
			this->panel1->Controls->Add(this->pF3F7);
			this->panel1->Controls->Add(this->pF4F6);
			this->panel1->Controls->Add(this->pF5);
			this->panel1->Controls->Add(this->pE5);
			this->panel1->Controls->Add(this->pE4E6);
			this->panel1->Controls->Add(this->pF1);
			this->panel1->Controls->Add(this->pE2E8);
			this->panel1->Controls->Add(this->pE3E7);
			this->panel1->Controls->Add(this->pE1);
			this->panel1->Controls->Add(this->pD2D8);
			this->panel1->Controls->Add(this->pD3D7);
			this->panel1->Controls->Add(this->pD4D6);
			this->panel1->Controls->Add(this->pD5);
			this->panel1->Controls->Add(this->pD1);
			this->panel1->Controls->Add(this->pC2C8);
			this->panel1->Controls->Add(this->pC3C7);
			this->panel1->Controls->Add(this->pC4C6);
			this->panel1->Controls->Add(this->pC1);
			this->panel1->Controls->Add(this->pC5);
			this->panel1->Controls->Add(this->pB2B8);
			this->panel1->Controls->Add(this->pB3B7);
			this->panel1->Controls->Add(this->pB4B6);
			this->panel1->Controls->Add(this->pB5);
			this->panel1->Controls->Add(this->pB1);
			this->panel1->Controls->Add(this->pA2A8);
			this->panel1->Controls->Add(this->pA3A7);
			this->panel1->Controls->Add(this->pA4A6);
			this->panel1->Controls->Add(this->pA5);
			this->panel1->Controls->Add(this->pA1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 22);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 400);
			this->panel1->TabIndex = 2;
			// 
			// DeathMenu
			// 
			this->DeathMenu->BackColor = System::Drawing::Color::Peru;
			this->DeathMenu->Controls->Add(this->Death7);
			this->DeathMenu->Controls->Add(this->Death6);
			this->DeathMenu->Controls->Add(this->Death5);
			this->DeathMenu->Controls->Add(this->Death4);
			this->DeathMenu->Controls->Add(this->Death3);
			this->DeathMenu->Controls->Add(this->Death2);
			this->DeathMenu->Controls->Add(this->XDeath5);
			this->DeathMenu->Controls->Add(this->XDeath3);
			this->DeathMenu->Controls->Add(this->XDeath9);
			this->DeathMenu->Controls->Add(this->XDeath8);
			this->DeathMenu->Controls->Add(this->XDeath7);
			this->DeathMenu->Controls->Add(this->XDeath6);
			this->DeathMenu->Controls->Add(this->XDeath4);
			this->DeathMenu->Controls->Add(this->XDeath1);
			this->DeathMenu->Controls->Add(this->XDeath2);
			this->DeathMenu->Controls->Add(this->Death1);
			this->DeathMenu->Controls->Add(this->label2);
			this->DeathMenu->Controls->Add(this->DMenuCloser);
			this->DeathMenu->Controls->Add(this->pictureBox9);
			this->DeathMenu->Controls->Add(this->pictureBox8);
			this->DeathMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->DeathMenu->Location = System::Drawing::Point(0, 0);
			this->DeathMenu->Name = L"DeathMenu";
			this->DeathMenu->Size = System::Drawing::Size(250, 0);
			this->DeathMenu->TabIndex = 27;
			// 
			// Death7
			// 
			this->Death7->Location = System::Drawing::Point(12, 222);
			this->Death7->Name = L"Death7";
			this->Death7->Size = System::Drawing::Size(99, 23);
			this->Death7->TabIndex = 10;
			this->Death7->Text = L"Normal Death 7";
			this->Death7->UseVisualStyleBackColor = true;
			this->Death7->Click += gcnew System::EventHandler(this, &SkinForm::Death7_Click);
			// 
			// Death6
			// 
			this->Death6->Location = System::Drawing::Point(12, 193);
			this->Death6->Name = L"Death6";
			this->Death6->Size = System::Drawing::Size(99, 23);
			this->Death6->TabIndex = 10;
			this->Death6->Text = L"Normal Death 6";
			this->Death6->UseVisualStyleBackColor = true;
			this->Death6->Click += gcnew System::EventHandler(this, &SkinForm::Death6_Click);
			// 
			// Death5
			// 
			this->Death5->Location = System::Drawing::Point(12, 163);
			this->Death5->Name = L"Death5";
			this->Death5->Size = System::Drawing::Size(99, 24);
			this->Death5->TabIndex = 10;
			this->Death5->Text = L"Normal Death 5";
			this->Death5->UseVisualStyleBackColor = true;
			this->Death5->Click += gcnew System::EventHandler(this, &SkinForm::Death5_Click);
			// 
			// Death4
			// 
			this->Death4->Location = System::Drawing::Point(12, 134);
			this->Death4->Name = L"Death4";
			this->Death4->Size = System::Drawing::Size(99, 23);
			this->Death4->TabIndex = 10;
			this->Death4->Text = L"Normal Death 4";
			this->Death4->UseVisualStyleBackColor = true;
			this->Death4->Click += gcnew System::EventHandler(this, &SkinForm::Death4_Click);
			// 
			// Death3
			// 
			this->Death3->Location = System::Drawing::Point(12, 106);
			this->Death3->Name = L"Death3";
			this->Death3->Size = System::Drawing::Size(99, 23);
			this->Death3->TabIndex = 10;
			this->Death3->Text = L"Normal Death 3";
			this->Death3->UseVisualStyleBackColor = true;
			this->Death3->Click += gcnew System::EventHandler(this, &SkinForm::Death3_Click);
			// 
			// Death2
			// 
			this->Death2->Location = System::Drawing::Point(12, 77);
			this->Death2->Name = L"Death2";
			this->Death2->Size = System::Drawing::Size(99, 23);
			this->Death2->TabIndex = 10;
			this->Death2->Text = L"Normal Death 2";
			this->Death2->UseVisualStyleBackColor = true;
			this->Death2->Click += gcnew System::EventHandler(this, &SkinForm::Death2_Click);
			// 
			// XDeath5
			// 
			this->XDeath5->Location = System::Drawing::Point(148, 164);
			this->XDeath5->Name = L"XDeath5";
			this->XDeath5->Size = System::Drawing::Size(99, 23);
			this->XDeath5->TabIndex = 10;
			this->XDeath5->Text = L"XDeath 5";
			this->XDeath5->UseVisualStyleBackColor = true;
			this->XDeath5->Click += gcnew System::EventHandler(this, &SkinForm::XDeath5_Click);
			// 
			// XDeath3
			// 
			this->XDeath3->Location = System::Drawing::Point(148, 106);
			this->XDeath3->Name = L"XDeath3";
			this->XDeath3->Size = System::Drawing::Size(99, 23);
			this->XDeath3->TabIndex = 10;
			this->XDeath3->Text = L"XDeath 3";
			this->XDeath3->UseVisualStyleBackColor = true;
			this->XDeath3->Click += gcnew System::EventHandler(this, &SkinForm::XDeath3_Click);
			// 
			// XDeath9
			// 
			this->XDeath9->Location = System::Drawing::Point(148, 280);
			this->XDeath9->Name = L"XDeath9";
			this->XDeath9->Size = System::Drawing::Size(99, 23);
			this->XDeath9->TabIndex = 10;
			this->XDeath9->Text = L"XDeath 9";
			this->XDeath9->UseVisualStyleBackColor = true;
			this->XDeath9->Click += gcnew System::EventHandler(this, &SkinForm::XDeath9_Click);
			// 
			// XDeath8
			// 
			this->XDeath8->Location = System::Drawing::Point(148, 251);
			this->XDeath8->Name = L"XDeath8";
			this->XDeath8->Size = System::Drawing::Size(99, 23);
			this->XDeath8->TabIndex = 10;
			this->XDeath8->Text = L"XDeath 8";
			this->XDeath8->UseVisualStyleBackColor = true;
			this->XDeath8->Click += gcnew System::EventHandler(this, &SkinForm::XDeath8_Click);
			// 
			// XDeath7
			// 
			this->XDeath7->Location = System::Drawing::Point(148, 222);
			this->XDeath7->Name = L"XDeath7";
			this->XDeath7->Size = System::Drawing::Size(99, 23);
			this->XDeath7->TabIndex = 10;
			this->XDeath7->Text = L"XDeath 7";
			this->XDeath7->UseVisualStyleBackColor = true;
			this->XDeath7->Click += gcnew System::EventHandler(this, &SkinForm::XDeath7_Click);
			// 
			// XDeath6
			// 
			this->XDeath6->Location = System::Drawing::Point(148, 193);
			this->XDeath6->Name = L"XDeath6";
			this->XDeath6->Size = System::Drawing::Size(99, 23);
			this->XDeath6->TabIndex = 10;
			this->XDeath6->Text = L"XDeath 6";
			this->XDeath6->UseVisualStyleBackColor = true;
			this->XDeath6->Click += gcnew System::EventHandler(this, &SkinForm::XDeath6_Click);
			// 
			// XDeath4
			// 
			this->XDeath4->Location = System::Drawing::Point(148, 135);
			this->XDeath4->Name = L"XDeath4";
			this->XDeath4->Size = System::Drawing::Size(99, 23);
			this->XDeath4->TabIndex = 10;
			this->XDeath4->Text = L"XDeath 4";
			this->XDeath4->UseVisualStyleBackColor = true;
			this->XDeath4->Click += gcnew System::EventHandler(this, &SkinForm::XDeath4_Click);
			// 
			// XDeath1
			// 
			this->XDeath1->Location = System::Drawing::Point(148, 48);
			this->XDeath1->Name = L"XDeath1";
			this->XDeath1->Size = System::Drawing::Size(99, 23);
			this->XDeath1->TabIndex = 10;
			this->XDeath1->Text = L"XDeath 1";
			this->XDeath1->UseVisualStyleBackColor = true;
			this->XDeath1->Click += gcnew System::EventHandler(this, &SkinForm::XDeath1_Click);
			// 
			// XDeath2
			// 
			this->XDeath2->Location = System::Drawing::Point(148, 77);
			this->XDeath2->Name = L"XDeath2";
			this->XDeath2->Size = System::Drawing::Size(99, 23);
			this->XDeath2->TabIndex = 10;
			this->XDeath2->Text = L"XDeath 2";
			this->XDeath2->UseVisualStyleBackColor = true;
			this->XDeath2->Click += gcnew System::EventHandler(this, &SkinForm::XDeath2_Click);
			// 
			// Death1
			// 
			this->Death1->Location = System::Drawing::Point(12, 48);
			this->Death1->Name = L"Death1";
			this->Death1->Size = System::Drawing::Size(99, 23);
			this->Death1->TabIndex = 10;
			this->Death1->Text = L"Normal Death 1";
			this->Death1->UseVisualStyleBackColor = true;
			this->Death1->Click += gcnew System::EventHandler(this, &SkinForm::Death1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Help;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(56, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Numbers represent frames";
			// 
			// DMenuCloser
			// 
			this->DMenuCloser->AutoSize = true;
			this->DMenuCloser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DMenuCloser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DMenuCloser->ForeColor = System::Drawing::Color::Teal;
			this->DMenuCloser->Location = System::Drawing::Point(56, 9);
			this->DMenuCloser->Name = L"DMenuCloser";
			this->DMenuCloser->Size = System::Drawing::Size(160, 15);
			this->DMenuCloser->TabIndex = 7;
			this->DMenuCloser->Text = L"Close death animation menu";
			this->DMenuCloser->Click += gcnew System::EventHandler(this, &SkinForm::DMenuCloser_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(34, 312);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(16, 16);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(34, 9);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(16, 16);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 9;
			this->pictureBox8->TabStop = false;
			// 
			// pH1
			// 
			this->pH1->BackColor = System::Drawing::Color::Transparent;
			this->pH1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pH1->Location = System::Drawing::Point(47, 328);
			this->pH1->Name = L"pH1";
			this->pH1->Size = System::Drawing::Size(26, 28);
			this->pH1->TabIndex = 26;
			this->pH1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pH1_MouseClick);
			// 
			// pH5
			// 
			this->pH5->BackColor = System::Drawing::Color::Transparent;
			this->pH5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pH5->Location = System::Drawing::Point(88, 328);
			this->pH5->Name = L"pH5";
			this->pH5->Size = System::Drawing::Size(26, 28);
			this->pH5->TabIndex = 26;
			this->pH5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pH5_MouseClick);
			// 
			// pH4H6
			// 
			this->pH4H6->BackColor = System::Drawing::Color::Transparent;
			this->pH4H6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pH4H6->Location = System::Drawing::Point(130, 328);
			this->pH4H6->Name = L"pH4H6";
			this->pH4H6->Size = System::Drawing::Size(26, 28);
			this->pH4H6->TabIndex = 26;
			this->pH4H6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pH4H6_MouseClick);
			// 
			// pH3H7
			// 
			this->pH3H7->BackColor = System::Drawing::Color::Transparent;
			this->pH3H7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pH3H7->Location = System::Drawing::Point(171, 328);
			this->pH3H7->Name = L"pH3H7";
			this->pH3H7->Size = System::Drawing::Size(26, 28);
			this->pH3H7->TabIndex = 26;
			this->pH3H7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pH3H7_MouseClick);
			// 
			// pH2H8
			// 
			this->pH2H8->BackColor = System::Drawing::Color::Transparent;
			this->pH2H8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pH2H8->Location = System::Drawing::Point(212, 328);
			this->pH2H8->Name = L"pH2H8";
			this->pH2H8->Size = System::Drawing::Size(26, 28);
			this->pH2H8->TabIndex = 26;
			this->pH2H8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pH2H8_MouseClick);
			// 
			// pG2G8
			// 
			this->pG2G8->BackColor = System::Drawing::Color::Transparent;
			this->pG2G8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pG2G8->Location = System::Drawing::Point(212, 292);
			this->pG2G8->Name = L"pG2G8";
			this->pG2G8->Size = System::Drawing::Size(26, 28);
			this->pG2G8->TabIndex = 26;
			this->pG2G8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pG2G8_MouseClick);
			// 
			// DMenuOpenner
			// 
			this->DMenuOpenner->AutoSize = true;
			this->DMenuOpenner->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DMenuOpenner->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DMenuOpenner->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->DMenuOpenner->Location = System::Drawing::Point(56, 375);
			this->DMenuOpenner->Name = L"DMenuOpenner";
			this->DMenuOpenner->Size = System::Drawing::Size(169, 16);
			this->DMenuOpenner->TabIndex = 7;
			this->DMenuOpenner->Text = L"Open death animation menu";
			this->DMenuOpenner->Click += gcnew System::EventHandler(this, &SkinForm::DMenuOpenner_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(34, 375);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(16, 16);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pG3G7
			// 
			this->pG3G7->BackColor = System::Drawing::Color::Transparent;
			this->pG3G7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pG3G7->Location = System::Drawing::Point(171, 292);
			this->pG3G7->Name = L"pG3G7";
			this->pG3G7->Size = System::Drawing::Size(26, 28);
			this->pG3G7->TabIndex = 26;
			this->pG3G7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pG3G7_MouseClick);
			// 
			// pG4G6
			// 
			this->pG4G6->BackColor = System::Drawing::Color::Transparent;
			this->pG4G6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pG4G6->Location = System::Drawing::Point(130, 292);
			this->pG4G6->Name = L"pG4G6";
			this->pG4G6->Size = System::Drawing::Size(26, 28);
			this->pG4G6->TabIndex = 26;
			this->pG4G6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pG4G6_MouseClick);
			// 
			// pG5
			// 
			this->pG5->BackColor = System::Drawing::Color::Transparent;
			this->pG5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pG5->Location = System::Drawing::Point(88, 292);
			this->pG5->Name = L"pG5";
			this->pG5->Size = System::Drawing::Size(26, 28);
			this->pG5->TabIndex = 26;
			this->pG5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pG5_MouseClick);
			// 
			// pG1
			// 
			this->pG1->BackColor = System::Drawing::Color::Transparent;
			this->pG1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pG1->Location = System::Drawing::Point(47, 292);
			this->pG1->Name = L"pG1";
			this->pG1->Size = System::Drawing::Size(26, 28);
			this->pG1->TabIndex = 25;
			this->pG1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pG1_MouseClick);
			// 
			// pF2F8
			// 
			this->pF2F8->BackColor = System::Drawing::Color::Transparent;
			this->pF2F8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pF2F8->Location = System::Drawing::Point(212, 251);
			this->pF2F8->Name = L"pF2F8";
			this->pF2F8->Size = System::Drawing::Size(26, 28);
			this->pF2F8->TabIndex = 24;
			this->pF2F8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pF2F8_MouseClick);
			// 
			// pF3F7
			// 
			this->pF3F7->BackColor = System::Drawing::Color::Transparent;
			this->pF3F7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pF3F7->Location = System::Drawing::Point(171, 251);
			this->pF3F7->Name = L"pF3F7";
			this->pF3F7->Size = System::Drawing::Size(26, 28);
			this->pF3F7->TabIndex = 23;
			this->pF3F7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pF3F7_MouseClick);
			// 
			// pF4F6
			// 
			this->pF4F6->BackColor = System::Drawing::Color::Transparent;
			this->pF4F6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pF4F6->Location = System::Drawing::Point(130, 251);
			this->pF4F6->Name = L"pF4F6";
			this->pF4F6->Size = System::Drawing::Size(26, 28);
			this->pF4F6->TabIndex = 22;
			this->pF4F6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pF4F6_MouseClick);
			// 
			// pF5
			// 
			this->pF5->BackColor = System::Drawing::Color::Transparent;
			this->pF5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pF5->Location = System::Drawing::Point(88, 251);
			this->pF5->Name = L"pF5";
			this->pF5->Size = System::Drawing::Size(26, 28);
			this->pF5->TabIndex = 8;
			this->pF5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pF5_MouseClick);
			// 
			// pE5
			// 
			this->pE5->BackColor = System::Drawing::Color::Transparent;
			this->pE5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pE5->Location = System::Drawing::Point(88, 214);
			this->pE5->Name = L"pE5";
			this->pE5->Size = System::Drawing::Size(26, 28);
			this->pE5->TabIndex = 21;
			this->pE5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pE5_MouseClick);
			// 
			// pE4E6
			// 
			this->pE4E6->BackColor = System::Drawing::Color::Transparent;
			this->pE4E6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pE4E6->Location = System::Drawing::Point(130, 214);
			this->pE4E6->Name = L"pE4E6";
			this->pE4E6->Size = System::Drawing::Size(26, 28);
			this->pE4E6->TabIndex = 21;
			this->pE4E6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pE4E6_MouseClick);
			// 
			// pF1
			// 
			this->pF1->BackColor = System::Drawing::Color::Transparent;
			this->pF1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pF1->Location = System::Drawing::Point(47, 251);
			this->pF1->Name = L"pF1";
			this->pF1->Size = System::Drawing::Size(26, 28);
			this->pF1->TabIndex = 21;
			this->pF1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pF1_MouseClick);
			// 
			// pE2E8
			// 
			this->pE2E8->BackColor = System::Drawing::Color::Transparent;
			this->pE2E8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pE2E8->Location = System::Drawing::Point(212, 214);
			this->pE2E8->Name = L"pE2E8";
			this->pE2E8->Size = System::Drawing::Size(26, 28);
			this->pE2E8->TabIndex = 21;
			this->pE2E8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pE2E8_MouseClick);
			// 
			// pE3E7
			// 
			this->pE3E7->BackColor = System::Drawing::Color::Transparent;
			this->pE3E7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pE3E7->Location = System::Drawing::Point(171, 214);
			this->pE3E7->Name = L"pE3E7";
			this->pE3E7->Size = System::Drawing::Size(26, 28);
			this->pE3E7->TabIndex = 21;
			this->pE3E7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pE3E7_MouseClick);
			// 
			// pE1
			// 
			this->pE1->BackColor = System::Drawing::Color::Transparent;
			this->pE1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pE1->Location = System::Drawing::Point(47, 214);
			this->pE1->Name = L"pE1";
			this->pE1->Size = System::Drawing::Size(26, 28);
			this->pE1->TabIndex = 20;
			this->pE1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pE1_MouseClick);
			// 
			// pD2D8
			// 
			this->pD2D8->BackColor = System::Drawing::Color::Transparent;
			this->pD2D8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pD2D8->Location = System::Drawing::Point(212, 180);
			this->pD2D8->Name = L"pD2D8";
			this->pD2D8->Size = System::Drawing::Size(26, 28);
			this->pD2D8->TabIndex = 19;
			this->pD2D8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pD2D8_MouseClick);
			// 
			// pD3D7
			// 
			this->pD3D7->BackColor = System::Drawing::Color::Transparent;
			this->pD3D7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pD3D7->Location = System::Drawing::Point(171, 180);
			this->pD3D7->Name = L"pD3D7";
			this->pD3D7->Size = System::Drawing::Size(26, 28);
			this->pD3D7->TabIndex = 18;
			this->pD3D7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pD3D7_MouseClick);
			// 
			// pD4D6
			// 
			this->pD4D6->BackColor = System::Drawing::Color::Transparent;
			this->pD4D6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pD4D6->Location = System::Drawing::Point(130, 180);
			this->pD4D6->Name = L"pD4D6";
			this->pD4D6->Size = System::Drawing::Size(26, 28);
			this->pD4D6->TabIndex = 17;
			this->pD4D6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pD4D6_MouseClick);
			// 
			// pD5
			// 
			this->pD5->BackColor = System::Drawing::Color::Transparent;
			this->pD5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pD5->Location = System::Drawing::Point(88, 180);
			this->pD5->Name = L"pD5";
			this->pD5->Size = System::Drawing::Size(26, 28);
			this->pD5->TabIndex = 16;
			this->pD5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pD5_MouseClick);
			// 
			// pD1
			// 
			this->pD1->BackColor = System::Drawing::Color::Transparent;
			this->pD1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pD1->Location = System::Drawing::Point(47, 180);
			this->pD1->Name = L"pD1";
			this->pD1->Size = System::Drawing::Size(26, 28);
			this->pD1->TabIndex = 15;
			this->pD1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pD1_MouseClick);
			// 
			// pC2C8
			// 
			this->pC2C8->BackColor = System::Drawing::Color::Transparent;
			this->pC2C8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pC2C8->Location = System::Drawing::Point(212, 140);
			this->pC2C8->Name = L"pC2C8";
			this->pC2C8->Size = System::Drawing::Size(26, 28);
			this->pC2C8->TabIndex = 14;
			this->pC2C8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pC2C8_MouseClick);
			// 
			// pC3C7
			// 
			this->pC3C7->BackColor = System::Drawing::Color::Transparent;
			this->pC3C7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pC3C7->Location = System::Drawing::Point(171, 140);
			this->pC3C7->Name = L"pC3C7";
			this->pC3C7->Size = System::Drawing::Size(26, 28);
			this->pC3C7->TabIndex = 13;
			this->pC3C7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pC3C7_MouseClick);
			// 
			// pC4C6
			// 
			this->pC4C6->BackColor = System::Drawing::Color::Transparent;
			this->pC4C6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pC4C6->Location = System::Drawing::Point(130, 140);
			this->pC4C6->Name = L"pC4C6";
			this->pC4C6->Size = System::Drawing::Size(26, 28);
			this->pC4C6->TabIndex = 12;
			this->pC4C6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pC4C6_MouseClick);
			// 
			// pC1
			// 
			this->pC1->BackColor = System::Drawing::Color::Transparent;
			this->pC1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pC1->Location = System::Drawing::Point(47, 140);
			this->pC1->Name = L"pC1";
			this->pC1->Size = System::Drawing::Size(26, 28);
			this->pC1->TabIndex = 11;
			this->pC1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pC1_MouseClick);
			// 
			// pC5
			// 
			this->pC5->BackColor = System::Drawing::Color::Transparent;
			this->pC5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pC5->Location = System::Drawing::Point(88, 140);
			this->pC5->Name = L"pC5";
			this->pC5->Size = System::Drawing::Size(26, 28);
			this->pC5->TabIndex = 10;
			this->pC5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pC5_MouseClick);
			// 
			// pB2B8
			// 
			this->pB2B8->BackColor = System::Drawing::Color::Transparent;
			this->pB2B8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pB2B8->Location = System::Drawing::Point(212, 100);
			this->pB2B8->Name = L"pB2B8";
			this->pB2B8->Size = System::Drawing::Size(26, 28);
			this->pB2B8->TabIndex = 8;
			this->pB2B8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pB2B8_MouseClick);
			// 
			// pB3B7
			// 
			this->pB3B7->BackColor = System::Drawing::Color::Transparent;
			this->pB3B7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pB3B7->Location = System::Drawing::Point(171, 100);
			this->pB3B7->Name = L"pB3B7";
			this->pB3B7->Size = System::Drawing::Size(26, 28);
			this->pB3B7->TabIndex = 7;
			this->pB3B7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pB3B7_MouseClick);
			// 
			// pB4B6
			// 
			this->pB4B6->BackColor = System::Drawing::Color::Transparent;
			this->pB4B6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pB4B6->Location = System::Drawing::Point(130, 100);
			this->pB4B6->Name = L"pB4B6";
			this->pB4B6->Size = System::Drawing::Size(26, 28);
			this->pB4B6->TabIndex = 6;
			this->pB4B6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pB4B6_MouseClick);
			// 
			// pB5
			// 
			this->pB5->BackColor = System::Drawing::Color::Transparent;
			this->pB5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pB5->Location = System::Drawing::Point(88, 100);
			this->pB5->Name = L"pB5";
			this->pB5->Size = System::Drawing::Size(26, 28);
			this->pB5->TabIndex = 5;
			this->pB5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pB5_MouseClick);
			// 
			// pB1
			// 
			this->pB1->BackColor = System::Drawing::Color::Transparent;
			this->pB1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pB1->Location = System::Drawing::Point(47, 100);
			this->pB1->Name = L"pB1";
			this->pB1->Size = System::Drawing::Size(26, 28);
			this->pB1->TabIndex = 4;
			this->pB1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pB1_MouseClick);
			// 
			// pA2A8
			// 
			this->pA2A8->BackColor = System::Drawing::Color::Transparent;
			this->pA2A8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pA2A8->Location = System::Drawing::Point(212, 63);
			this->pA2A8->Name = L"pA2A8";
			this->pA2A8->Size = System::Drawing::Size(26, 28);
			this->pA2A8->TabIndex = 3;
			this->pA2A8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pA2A8_MouseClick);
			// 
			// pA3A7
			// 
			this->pA3A7->BackColor = System::Drawing::Color::Transparent;
			this->pA3A7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pA3A7->Location = System::Drawing::Point(171, 63);
			this->pA3A7->Name = L"pA3A7";
			this->pA3A7->Size = System::Drawing::Size(26, 28);
			this->pA3A7->TabIndex = 2;
			this->pA3A7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pA3A7_MouseClick);
			// 
			// pA4A6
			// 
			this->pA4A6->BackColor = System::Drawing::Color::Transparent;
			this->pA4A6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pA4A6->Location = System::Drawing::Point(130, 63);
			this->pA4A6->Name = L"pA4A6";
			this->pA4A6->Size = System::Drawing::Size(26, 28);
			this->pA4A6->TabIndex = 1;
			this->pA4A6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pA4A6_MouseClick);
			// 
			// pA5
			// 
			this->pA5->BackColor = System::Drawing::Color::Transparent;
			this->pA5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pA5->Location = System::Drawing::Point(88, 63);
			this->pA5->Name = L"pA5";
			this->pA5->Size = System::Drawing::Size(26, 28);
			this->pA5->TabIndex = 1;
			this->pA5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pA5_MouseClick);
			// 
			// pA1
			// 
			this->pA1->BackColor = System::Drawing::Color::Transparent;
			this->pA1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pA1->Location = System::Drawing::Point(47, 63);
			this->pA1->Name = L"pA1";
			this->pA1->Size = System::Drawing::Size(26, 28);
			this->pA1->TabIndex = 0;
			this->pA1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::pA1_MouseClick);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(364, 369);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(16, 16);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// ShowSLabel
			// 
			this->ShowSLabel->AutoSize = true;
			this->ShowSLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ShowSLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ShowSLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->ShowSLabel->Location = System::Drawing::Point(386, 369);
			this->ShowSLabel->Name = L"ShowSLabel";
			this->ShowSLabel->Size = System::Drawing::Size(73, 16);
			this->ShowSLabel->TabIndex = 7;
			this->ShowSLabel->Text = L"Print settings";
			this->ShowSLabel->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::ShowSLabel_MouseClick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(257, 30);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(16, 16);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// clslog
			// 
			this->clslog->AutoSize = true;
			this->clslog->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clslog->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clslog->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->clslog->Location = System::Drawing::Point(276, 30);
			this->clslog->Name = L"clslog";
			this->clslog->Size = System::Drawing::Size(82, 16);
			this->clslog->TabIndex = 7;
			this->clslog->Text = L"Clean up logs";
			this->clslog->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SkinForm::clslog_MouseClick);
			// 
			// SpriteName
			// 
			this->SpriteName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SpriteName->Location = System::Drawing::Point(282, 397);
			this->SpriteName->MaxLength = 4;
			this->SpriteName->Name = L"SpriteName";
			this->SpriteName->Size = System::Drawing::Size(51, 13);
			this->SpriteName->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->label1->Location = System::Drawing::Point(335, 395);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Skin name (4 symbols)";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(256, 394);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(16, 16);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			// 
			// PanelSwitcher
			// 
			this->PanelSwitcher->Enabled = true;
			this->PanelSwitcher->Interval = 5;
			this->PanelSwitcher->Tick += gcnew System::EventHandler(this, &SkinForm::PanelSwitcher_Tick);
			// 
			// SkinForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(558, 422);
			this->Controls->Add(this->SpriteName);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->clslog);
			this->Controls->Add(this->ShowSLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ResetLabel);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->GenerateLabel);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->LogBox);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->UpperPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SkinForm";
			this->Text = L"Skin Helper";
			this->UpperPanel->ResumeLayout(false);
			this->UpperPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->DeathMenu->ResumeLayout(false);
			this->DeathMenu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Skin Table


		int mov = 0;
		int movX;
		int movY;
	private: System::Void UpperPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mov = 1;
		movX = e->X;
		movY = e->Y;
	}
			 void LogPrint(System::String^ msg) {
				 LogBox->Text += "\n";
				 LogBox->Text += msg;
			 }
			 void LogPrint(std::string str) {
				 String^ msg = gcnew String(str.c_str());
				 LogBox->Text += "\n";
				 LogBox->Text += msg;
			 }
			 char * SysStringToChar(System::String^ string)
			 {
				 return (char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(string);
			 }
	private: System::Void UpperPanel_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mov = 0;
	}
	private: System::Void UpperPanel_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mov)
			this->SetDesktopLocation(MousePosition.X - movX, MousePosition.Y - movY);
	}
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		exit(1);
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void pA1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			LogPrint("A1 selected!");
			LogPrint(oFileDialog->FileName);
				A1 = SysStringToChar(oFileDialog->FileName);
		}
	}
	private: System::Void pA5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			LogPrint("A5 selected!");
			LogPrint(oFileDialog->FileName);
			A5 = SysStringToChar(oFileDialog->FileName);
		}
	}
	private: System::Void pA4A6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			LogPrint("A4A6 selected!");
			LogPrint(oFileDialog->FileName);
			A4A6 = SysStringToChar(oFileDialog->FileName);
		}
	}
private: System::Void pA3A7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("A3A7 selected!");
		LogPrint(oFileDialog->FileName);
		A3A7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pA2A8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("A2A8 selected!");
		LogPrint(oFileDialog->FileName);
		A2A8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pB1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("B1 selected!");
		LogPrint(oFileDialog->FileName);
		B1 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pB5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("B5 selected!");
		LogPrint(oFileDialog->FileName);
		B5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pB4B6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("B4B6 selected!");
		LogPrint(oFileDialog->FileName);
		B4B6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pB3B7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("B3B7 selected!");
		LogPrint(oFileDialog->FileName);
		B3B7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pB2B8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("B2B8 selected!");
		LogPrint(oFileDialog->FileName);
		B2B8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pC1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("C1 selected!");
		LogPrint(oFileDialog->FileName);
		C1 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pC5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("C5 selected!");
		LogPrint(oFileDialog->FileName);
		C5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pC4C6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("C4C6 selected!");
		LogPrint(oFileDialog->FileName);
		C4C6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pC3C7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("C3C7 selected!");
		LogPrint(oFileDialog->FileName);
		C3C7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pC2C8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("C2C8 selected!");
		LogPrint(oFileDialog->FileName);
		C2C8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pD1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("D1 selected!");
		LogPrint(oFileDialog->FileName);
		D1 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pD5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("D5 selected!");
		LogPrint(oFileDialog->FileName);
		D5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pD4D6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("D4D6 selected!");
		LogPrint(oFileDialog->FileName);
		D4D6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pD3D7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("D3D7 selected!");
		LogPrint(oFileDialog->FileName);
		D3D7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pD2D8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("D3D7 selected!");
		LogPrint(oFileDialog->FileName);
		D3D7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pE1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("E1 selected!");
		LogPrint(oFileDialog->FileName);
		E1 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pE5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("E5 selected!");
		LogPrint(oFileDialog->FileName);
		E5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pE4E6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("E4E6 selected!");
		LogPrint(oFileDialog->FileName);
		E4E6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pE3E7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("E3E7 selected!");
		LogPrint(oFileDialog->FileName);
		E3E7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pE2E8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("E2E8 selected!");
		LogPrint(oFileDialog->FileName);
		E2E8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pF3F7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("F3F7 selected!");
		LogPrint(oFileDialog->FileName);
		F3F7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pF2F8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("F2F8 selected!");
		LogPrint(oFileDialog->FileName);
		F2F8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pG1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("G1 selected!");
		LogPrint(oFileDialog->FileName);
		G1 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pG5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("G5 selected!");
		LogPrint(oFileDialog->FileName);
		G5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pG4G6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("G4G6 selected!");
		LogPrint(oFileDialog->FileName);
		G4G6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pG3G7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("G3G7 selected!");
		LogPrint(oFileDialog->FileName);
		G3G7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pG2G8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("G2G8 selected!");
		LogPrint(oFileDialog->FileName);
		G2G8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pH1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("H1 selected!");
		LogPrint(oFileDialog->FileName);
		H1 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pH5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("H5 selected!");
		LogPrint(oFileDialog->FileName);
		H5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pH4H6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("H4H6 selected!");
		LogPrint(oFileDialog->FileName);
		H4H6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pH3H7_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("H3H7 selected!");
		LogPrint(oFileDialog->FileName);
		H3H7 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pH2H8_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("H2H8 selected!");
		LogPrint(oFileDialog->FileName);
		H2H8 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pF4F6_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("F4F6 selected!");
		LogPrint(oFileDialog->FileName);
		F4F6 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pF5_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("F5 selected!");
		LogPrint(oFileDialog->FileName);
		F5 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void pF1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("F1 selected!");
		LogPrint(oFileDialog->FileName);
		F1 = SysStringToChar(oFileDialog->FileName);
	}
}

private: System::Void ResetLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	A1 = "";
		A5 = "";
		A4A6 = "";
		A3A7 = "";
		A2A8 = "";
	B1 = "";
		B5 = "";
		B4B6 = "";
		B3B7 = "";
		B2B8 = "";
	C1 = "";
		C5 = "";
		C4C6 = "";
		C3C7 = "";
		C2C8 = "";
	D1 = "";
		D5 = "";
		D4D6 = "";
		D3D7 = "";
		D2D8 = "";
	E1 = "";
		E5 = "";
		E4E6 = "";
		E3E7 = "";
		E2E8 = "";
	F1 = "";
		F5 = "";
		F4F6 = "";
		F3F7 = "";
		F2F8 = "";
	G1 = "";
		G5 = "";
		G4G6 = "";
		G3G7 = "";
		G2G8 = "";
	H1 = "";
		H5 = "";
		H4H6 = "";
		H3H7 = "";
		H2H8 = "";
	H0 = "";
		I0 = ""; 
		J0 = ""; 
		K0 = ""; 
		L0 = ""; 
		M0 = ""; 
		N0 = "";
	O0 = "";
		P0 = "";
		Q0 = "";
		R0 = "";
		S0 = "";
		T0 = "";
		U0 = "";
		V0 = "";
		W0 = "";
}
private: System::Void ShowSLabel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	LogPrint("Current Settings: ");
	std::string prt = "A1: " + A1;
	LogPrint(prt);
	prt = "A5: " + A5;
	LogPrint(prt);
	prt = "A4A6: " + A4A6;
	LogPrint(prt);
	prt = "A3A7: " + A3A7;
	LogPrint(prt);
	prt = "A2A8: " + A2A8;
	LogPrint(prt);

	prt = "B1: " + B1;
	LogPrint(prt);
	prt = "B5: " + B5;
	LogPrint(prt);
	prt = "B4B6: " + B4B6;
	LogPrint(prt);
	prt = "B3B7: " + B3B7;
	LogPrint(prt);
	prt = "B2B8: " + B2B8;
	LogPrint(prt);

	prt = "C1: " + C1;
	LogPrint(prt);
	prt = "C5: " + C5;
	LogPrint(prt);
	prt = "C4C6: " + C4C6;
	LogPrint(prt);
	prt = "C3C7: " + C3C7;
	LogPrint(prt);
	prt = "C2C8: " + C2C8;
	LogPrint(prt);

	prt = "D1: " + D1;
	LogPrint(prt);
	prt = "D5: " + D5;
	LogPrint(prt);
	prt = "D4D6: " + D4D6;
	LogPrint(prt);
	prt = "D3D7: " + D3D7;
	LogPrint(prt);
	prt = "D2D8: " + D2D8;
	LogPrint(prt);

	prt = "E1: " + E1;
	LogPrint(prt);
	prt = "E5: " + E5;
	LogPrint(prt);
	prt = "E4E6: " + E4E6;
	LogPrint(prt);
	prt = "E3E7: " + E3E7;
	LogPrint(prt);
	prt = "E2E8: " + E2E8;
	LogPrint(prt);

	prt = "F1: " + F1;
	LogPrint(prt);
	prt = "F5: " + F5;
	LogPrint(prt);
	prt = "F4A6: " + F4F6;
	LogPrint(prt);
	prt = "F3A7: " + F3F7;
	LogPrint(prt);
	prt = "F2A8: " + F2F8;
	LogPrint(prt);

	prt = "G1: " + G1;
	LogPrint(prt);
	prt = "G5: " + G5;
	LogPrint(prt);
	prt = "G4A6: " + G4G6;
	LogPrint(prt);
	prt = "G3A7: " + G3G7;
	LogPrint(prt);
	prt = "G2A8: " + G2G8;
	LogPrint(prt);

	prt = "H1: " + H1;
	LogPrint(prt);
	prt = "H5: " + H5;
	LogPrint(prt);
	prt = "H4H6: " + H4H6;
	LogPrint(prt);
	prt = "H3H7: " + H3H7;
	LogPrint(prt);
	prt = "H2H8: " + H2H8;
	LogPrint(prt);
	prt = "H0: " + H0;
	LogPrint(prt);
	prt = "I0: " + I0;
	LogPrint(prt);
	prt = "J0: " + J0;
	LogPrint(prt);
	prt = "K0: " + K0;
	LogPrint(prt);
	prt = "L0: " + L0;
	LogPrint(prt);
	prt = "M0: " + M0;
	LogPrint(prt);
	prt = "N0: " + N0;
	LogPrint(prt);
	prt = "O0: " + O0;
	LogPrint(prt);
	prt = "P0: " + P0;
	LogPrint(prt);
	prt = "Q0: " + Q0;
	LogPrint(prt);
	prt = "R0: " + R0;
	LogPrint(prt);
	prt = "S0: " + S0;
	LogPrint(prt);
	prt = "T0: " + T0;
	LogPrint(prt);
	prt = "U0: " + U0;
	LogPrint(prt);
	prt = "V0: " + V0;
	LogPrint(prt);
	prt = "W0: " + W0;
	LogPrint(prt);
}
private: System::Void clslog_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	LogBox->Text = "                                                LOG";
}
		 std::string getDir(std::string State) {
			 return std::string("Output\\") + SysStringToChar(SpriteName->Text) + State + ext;
		 }
private: System::Void GenerateLabel_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (A1.empty() || A5.empty() || A3A7.empty() || H0.empty()) {
		LogPrint("Main sprites were not set.");
		return;
	}
	CreateDirectory("Output", 0);
	// A
	LogPrint("Generating: \"A\" states...");
	CopyFile(A1.c_str(), getDir("A1").c_str(), 0);
	CopyFile(A5.c_str(), getDir("A5").c_str(), 0);
	CopyFile(A3A7.c_str(), getDir("A3A7").c_str(), 0);
	if (A4A6.empty())
		CopyFile(A5.c_str(), getDir("A4A6").c_str(), 0);
	else
		CopyFile(A4A6.c_str(), getDir("A4A6").c_str(), 0);

	if (A2A8.empty())
		CopyFile(A1.c_str(), getDir("A2A8").c_str(), 0);
	else
		CopyFile(A2A8.c_str(), getDir("A2A8").c_str(), 0);

	// B
	LogPrint("Generating: \"B\" states...");
	if(B1.empty())
		CopyFile(A1.c_str(), getDir("B1").c_str(), 0);
	else
		CopyFile(B1.c_str(), getDir("B1").c_str(), 0);

	if(B5.empty())
		CopyFile(A5.c_str(), getDir("B5").c_str(), 0);
	else
		CopyFile(B5.c_str(), getDir("B5").c_str(), 0);
	
	if(B3B7.empty())
		CopyFile(A3A7.c_str(), getDir("B3B7").c_str(), 0);
	else
		CopyFile(B3B7.c_str(), getDir("B3B7").c_str(), 0);



	if (B4B6.empty()) {
		if (B5.empty())
			CopyFile(A5.c_str(), getDir("B4B6").c_str(), 0);
		else
			CopyFile(B5.c_str(), getDir("B4B6").c_str(), 0);
	}
	else
		CopyFile(B4B6.c_str(), getDir("B4B6").c_str(), 0);

	if (B2B8.empty()) {
		if (B1.empty())
			CopyFile(A1.c_str(), getDir("B2B8").c_str(), 0);
		else
			CopyFile(B1.c_str(), getDir("B2B8").c_str(), 0);
	}

	else
		CopyFile(B2B8.c_str(), getDir("B2B8").c_str(), 0);

	// C
	LogPrint("Generating: \"C\" states...");
	if (C1.empty())
		CopyFile(A1.c_str(), getDir("C1").c_str(), 0);
	else
		CopyFile(C1.c_str(), getDir("C1").c_str(), 0);

	if (C5.empty())
		CopyFile(A5.c_str(), getDir("C5").c_str(), 0);
	else
		CopyFile(C5.c_str(), getDir("C5").c_str(), 0);

	if (C3C7.empty())
		CopyFile(A3A7.c_str(), getDir("C3C7").c_str(), 0);
	else
		CopyFile(C3C7.c_str(), getDir("C3C7").c_str(), 0);



	if (C4C6.empty()) {
		if (C5.empty())
			CopyFile(A5.c_str(), getDir("C4C6").c_str(), 0);
		else
			CopyFile(C5.c_str(), getDir("C4C6").c_str(), 0);
	}
	else
		CopyFile(C4C6.c_str(), getDir("C4C6").c_str(), 0);

	if (C2C8.empty()) {
		if (C1.empty())
			CopyFile(A1.c_str(), getDir("C2C8").c_str(), 0);
		else
			CopyFile(C1.c_str(), getDir("C2C8").c_str(), 0);
	}

	else
		CopyFile(C2C8.c_str(), getDir("C2C8").c_str(), 0);

	// D
	LogPrint("Generating: \"D\" states...");
	if (D1.empty())
		CopyFile(A1.c_str(), getDir("D1").c_str(), 0);
	else
		CopyFile(D1.c_str(), getDir("D1").c_str(), 0);

	if (D5.empty())
		CopyFile(A5.c_str(), getDir("D5").c_str(), 0);
	else
		CopyFile(D5.c_str(), getDir("D5").c_str(), 0);

	if (D3D7.empty())
		CopyFile(A3A7.c_str(), getDir("D3D7").c_str(), 0);
	else
		CopyFile(D3D7.c_str(), getDir("D3D7").c_str(), 0);



	if (D4D6.empty()) {
		if (D5.empty())
			CopyFile(A5.c_str(), getDir("D4D6").c_str(), 0);
		else
			CopyFile(D5.c_str(), getDir("D4D6").c_str(), 0);
	}
	else
		CopyFile(D4D6.c_str(), getDir("D4D6").c_str(), 0);

	if (D2D8.empty()) {
		if (D1.empty())
			CopyFile(A1.c_str(), getDir("D2D8").c_str(), 0);
		else
			CopyFile(D1.c_str(), getDir("D2D8").c_str(), 0);
	}

	else
		CopyFile(D2D8.c_str(), getDir("D2D8").c_str(), 0);

	// E
	LogPrint("Generating: \"E\" states...");
	if (E1.empty())
		CopyFile(A1.c_str(), getDir("E1").c_str(), 0);
	else
		CopyFile(E1.c_str(), getDir("E1").c_str(), 0);

	if (E5.empty())
		CopyFile(A1.c_str(), getDir("E5").c_str(), 0);
	else
		CopyFile(E5.c_str(), getDir("E5").c_str(), 0);

	if (E3E7.empty())
		CopyFile(A3A7.c_str(), getDir("E3E7").c_str(), 0);
	else								 
		CopyFile(E3E7.c_str(), getDir("E3E7").c_str(), 0);



	if (E4E6.empty()) {
		if (E5.empty())
			CopyFile(A5.c_str(), getDir("E4E6").c_str(), 0);
		else
			CopyFile(E5.c_str(), getDir("E4E6").c_str(), 0);
	}
	else
		CopyFile(E4E6.c_str(), getDir("E4E6").c_str(), 0);

	if (E2E8.empty()) {
		if (E1.empty())
			CopyFile(A1.c_str(), getDir("E2E8").c_str(), 0);
		else
			CopyFile(E1.c_str(), getDir("E2E8").c_str(), 0);
	}

	else
		CopyFile(E2E8.c_str(), getDir("E2E8").c_str(), 0);
	// F
	LogPrint("Generating: \"F\" states...");
	if (F1.empty())
		CopyFile(A1.c_str(), getDir("F1").c_str(), 0);
	else
		CopyFile(F1.c_str(), getDir("F1").c_str(), 0);

	if (F5.empty())
		CopyFile(A5.c_str(), getDir("F5").c_str(), 0);
	else
		CopyFile(F5.c_str(), getDir("F5").c_str(), 0);

	if (F3F7.empty())
		CopyFile(A3A7.c_str(), getDir("F3F7").c_str(), 0);
	else
		CopyFile(F3F7.c_str(), getDir("F3F7").c_str(), 0);



	if (F4F6.empty()) {
		if (F5.empty())
			CopyFile(A5.c_str(), getDir("F4F6").c_str(), 0);
		else
			CopyFile(F5.c_str(), getDir("F4F6").c_str(), 0);
	}
	else
		CopyFile(F4F6.c_str(), getDir("F4F6").c_str(), 0);

	if (F2F8.empty()) {
		if (F1.empty())
			CopyFile(A1.c_str(), getDir("F2F8").c_str(), 0);
		else
			CopyFile(F1.c_str(), getDir("F2F8").c_str(), 0);
	}

	else
		CopyFile(F2F8.c_str(), getDir("F2F8").c_str(), 0);
	// G
	LogPrint("Generating: \"G\" states...");
	if (G1.empty())
		CopyFile(A1.c_str(), getDir("G1").c_str(), 0);
	else
		CopyFile(G1.c_str(), getDir("G1").c_str(), 0);

	if (G5.empty())
		CopyFile(A5.c_str(), getDir("G5").c_str(), 0);
	else
		CopyFile(G5.c_str(), getDir("G5").c_str(), 0);

	if (G3G7.empty())
		CopyFile(A3A7.c_str(), getDir("G3G7").c_str(), 0);
	else
		CopyFile(G3G7.c_str(), getDir("G3G7").c_str(), 0);



	if (G4G6.empty()) {
		if (G5.empty())
			CopyFile(A5.c_str(), getDir("G4G6").c_str(), 0);
		else
			CopyFile(G5.c_str(), getDir("G4G6").c_str(), 0);
	}
	else
		CopyFile(G4G6.c_str(), getDir("G4G6").c_str(), 0);

	if (G2G8.empty()) {
		if (G1.empty())
			CopyFile(A1.c_str(), getDir("G2G8").c_str(), 0);
		else
			CopyFile(G1.c_str(), getDir("G2G8").c_str(), 0);
	}

	else
		CopyFile(G2G8.c_str(), getDir("G2G8").c_str(), 0);

	// H
	LogPrint("Generating: \"H\" states...");
	if (H1.empty())
		CopyFile(A1.c_str(), getDir("H1").c_str(), 0);
	else
		CopyFile(H1.c_str(), getDir("H1").c_str(), 0);

	if (H5.empty())
		CopyFile(A5.c_str(), getDir("H5").c_str(), 0);
	else
		CopyFile(H5.c_str(), getDir("H5").c_str(), 0);

	if (H3H7.empty())
		CopyFile(A3A7.c_str(), getDir("H3H7").c_str(), 0);
	else
		CopyFile(H3H7.c_str(), getDir("H3H7").c_str(), 0);



	if (H4H6.empty()) {
		if (H5.empty())
			CopyFile(A5.c_str(), getDir("H4H6").c_str(), 0);
		else
			CopyFile(H5.c_str(), getDir("H4H6").c_str(), 0);
	}
	else
		CopyFile(H4H6.c_str(), getDir("H4H6").c_str(), 0);

	if (H2H8.empty()) {
		if (H1.empty())
			CopyFile(A1.c_str(), getDir("H2H8").c_str(), 0);
		else
			CopyFile(H1.c_str(), getDir("H2H8").c_str(), 0);
	}

	else
		CopyFile(H2H8.c_str(), getDir("H2H8").c_str(), 0);
	//Death
	LogPrint("Generating normal death states...");
	CopyFile(H0.c_str(), getDir("H0").c_str(), 0);
	if(I0.empty())
		CopyFile(H0.c_str(), getDir("I0").c_str(), 0);
	else
		CopyFile(I0.c_str(), getDir("I0").c_str(), 0);

	if (J0.empty())
		CopyFile(H0.c_str(), getDir("J0").c_str(), 0);
	else
		CopyFile(J0.c_str(), getDir("J0").c_str(), 0);

	if (K0.empty())
		CopyFile(H0.c_str(), getDir("K0").c_str(), 0);
	else
		CopyFile(K0.c_str(), getDir("K0").c_str(), 0);

	if (L0.empty())
		CopyFile(H0.c_str(), getDir("L0").c_str(), 0);
	else
		CopyFile(L0.c_str(), getDir("L0").c_str(), 0);

	if (M0.empty())
		CopyFile(H0.c_str(), getDir("M0").c_str(), 0);
	else
		CopyFile(M0.c_str(), getDir("M0").c_str(), 0);

	if (N0.empty())
		CopyFile(H0.c_str(), getDir("N0").c_str(), 0);
	else
		CopyFile(N0.c_str(), getDir("N0").c_str(), 0);

	LogPrint("Generating xDeath states...");
	if (O0.empty())
		CopyFile(H0.c_str(), getDir("O0").c_str(), 0);
	else
		CopyFile(O0.c_str(), getDir("O0").c_str(), 0);

	if (P0.empty())
		CopyFile(H0.c_str(), getDir("P0").c_str(), 0);
	else
		CopyFile(P0.c_str(), getDir("P0").c_str(), 0);

	if (Q0.empty())
		CopyFile(H0.c_str(), getDir("Q0").c_str(), 0);
	else
		CopyFile(Q0.c_str(), getDir("Q0").c_str(), 0);

	if (R0.empty())
		CopyFile(H0.c_str(), getDir("R0").c_str(), 0);
	else
		CopyFile(R0.c_str(), getDir("R0").c_str(), 0);

	if (S0.empty())
		CopyFile(H0.c_str(), getDir("S0").c_str(), 0);
	else
		CopyFile(S0.c_str(), getDir("S0").c_str(), 0);

	if (T0.empty())
		CopyFile(H0.c_str(), getDir("T0").c_str(), 0);
	else
		CopyFile(T0.c_str(), getDir("T0").c_str(), 0);

	if (U0.empty())
		CopyFile(H0.c_str(), getDir("U0").c_str(), 0);
	else
		CopyFile(U0.c_str(), getDir("U0").c_str(), 0);

	if (V0.empty())
		CopyFile(H0.c_str(), getDir("V0").c_str(), 0);
	else
		CopyFile(V0.c_str(), getDir("V0").c_str(), 0);

	if (W0.empty())
		CopyFile(H0.c_str(), getDir("W0").c_str(), 0);
	else
		CopyFile(W0.c_str(), getDir("W0").c_str(), 0);

	LogPrint("Done.");
}
private: System::Void LogBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	LogBox->SelectionStart = LogBox->Text->Length;
	LogBox->ScrollToCaret();
}
		 bool openDMenu = false;

private: System::Void PanelSwitcher_Tick(System::Object^  sender, System::EventArgs^  e) {
	static int myHeight = 0;
	if (openDMenu) {
		DeathMenu->Size = System::Drawing::Size(250, myHeight);
		if (myHeight < 400)
			myHeight += 2;
	}
	else {
		DeathMenu->Size = System::Drawing::Size(250, myHeight);
		if (myHeight > 0)
			myHeight -= 2;
	}
}
private: System::Void DMenuOpenner_Click(System::Object^  sender, System::EventArgs^  e) {
	openDMenu = !openDMenu;
}
private: System::Void DMenuCloser_Click(System::Object^  sender, System::EventArgs^  e) {
	openDMenu = !openDMenu;
}

private: System::Void Death1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("H0 selected!");
		LogPrint(oFileDialog->FileName);
		H0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void Death2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("I0 selected!");
		LogPrint(oFileDialog->FileName);
		I0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void Death3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("J0 selected!");
		LogPrint(oFileDialog->FileName);
		J0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void Death4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("K0 selected!");
		LogPrint(oFileDialog->FileName);
		K0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void Death5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("L0 selected!");
		LogPrint(oFileDialog->FileName);
		L0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void Death6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("M0 selected!");
		LogPrint(oFileDialog->FileName);
		M0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void Death7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("N0 selected!");
		LogPrint(oFileDialog->FileName);
		N0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("O0 selected!");
		LogPrint(oFileDialog->FileName);
		O0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("P0 selected!");
		LogPrint(oFileDialog->FileName);
		P0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("Q0 selected!");
		LogPrint(oFileDialog->FileName);
		Q0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("R0 selected!");
		LogPrint(oFileDialog->FileName);
		R0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("S0 selected!");
		LogPrint(oFileDialog->FileName);
		S0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("T0 selected!");
		LogPrint(oFileDialog->FileName);
		T0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("U0 selected!");
		LogPrint(oFileDialog->FileName);
		U0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("V0 selected!");
		LogPrint(oFileDialog->FileName);
		V0 = SysStringToChar(oFileDialog->FileName);
	}
}
private: System::Void XDeath9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (oFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		LogPrint("W0 selected!");
		LogPrint(oFileDialog->FileName);
		W0 = SysStringToChar(oFileDialog->FileName);
	}
}
};
}
