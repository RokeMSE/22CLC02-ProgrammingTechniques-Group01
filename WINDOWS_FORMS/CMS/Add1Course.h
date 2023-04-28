#pragma once
#include "header.h"
#include "AboutUs.h"
using namespace GROUP1;
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add1Course
	/// </summary>
	public ref class Add1Course : public System::Windows::Forms::Form
	{
	public:
		Add1Course(System::Windows::Forms::Form^ sourceform, System::Windows::Forms::Form^ loginform)
		{
			this->sourceForm = sourceform;
			this->loginForm = loginform;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add1Course()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Form^ sourceForm;
		System::Windows::Forms::Form^ loginForm;
		Point mouseDownLocation, formLocation;
		cli::array<CheckBox^>^ weekday = gcnew cli::array<CheckBox^>(7);
		cli::array<CheckBox^>^ session = gcnew cli::array<CheckBox^>(4);
    private: System::Windows::Forms::Button^ btn_exit;
    protected:
    private: System::Windows::Forms::Button^ btn_aboutUs;
    private: System::Windows::Forms::Panel^ pnl_account;
    private: System::Windows::Forms::Button^ btn_logout;
    private: System::Windows::Forms::PictureBox^ account;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Button^ btn_back;
    private: System::Windows::Forms::Label^ lbl_title;
    private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_courseID;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_coursename;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_credit;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ chkbox_Mon;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ chkbox_Tue;
	private: System::Windows::Forms::CheckBox^ chkbox_Thu;
	private: System::Windows::Forms::CheckBox^ chkbox_Wed;
	private: System::Windows::Forms::CheckBox^ chkbox_Sun;
	private: System::Windows::Forms::CheckBox^ chkbox_Sat;
	private: System::Windows::Forms::CheckBox^ chkbox_Fri;
	private: System::Windows::Forms::CheckBox^ chkbox_S4;

	private: System::Windows::Forms::CheckBox^ chkbox_S3;

	private: System::Windows::Forms::CheckBox^ chkbox_S2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ chkbox_S1;
	private: System::Windows::Forms::TextBox^ txt_teacher;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_maxStu;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add1Course::typeid));
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_aboutUs = (gcnew System::Windows::Forms::Button());
			this->pnl_account = (gcnew System::Windows::Forms::Panel());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_credit = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chkbox_Mon = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chkbox_Tue = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_Thu = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_Wed = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_Sun = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_Sat = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_Fri = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_S4 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_S3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_S2 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->chkbox_S1 = (gcnew System::Windows::Forms::CheckBox());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_maxStu = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_account->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->panel1->SuspendLayout();
			this->pnl_title->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Location = System::Drawing::Point(0, 100);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(192, 50);
			this->btn_exit->TabIndex = 2;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Add1Course::btn_exit_Click);
			// 
			// btn_aboutUs
			// 
			this->btn_aboutUs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_aboutUs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_aboutUs->Location = System::Drawing::Point(0, 2);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(192, 50);
			this->btn_aboutUs->TabIndex = 0;
			this->btn_aboutUs->Text = L"About us";
			this->btn_aboutUs->UseVisualStyleBackColor = false;
			this->btn_aboutUs->Click += gcnew System::EventHandler(this, &Add1Course::btn_aboutUs_Click);
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_account->Location = System::Drawing::Point(79, 493);
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Padding = System::Windows::Forms::Padding(3);
			this->pnl_account->Size = System::Drawing::Size(192, 151);
			this->pnl_account->TabIndex = 166;
			this->pnl_account->Visible = false;
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Location = System::Drawing::Point(0, 51);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(192, 50);
			this->btn_logout->TabIndex = 1;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &Add1Course::btn_logout_Click);
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(5, 577);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(58, 59);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 111;
			this->account->TabStop = false;
			this->account->Click += gcnew System::EventHandler(this, &Add1Course::account_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->account);
			this->panel1->Controls->Add(this->btn_back);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(5, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->panel1->Size = System::Drawing::Size(68, 640);
			this->panel1->TabIndex = 165;
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_back->Location = System::Drawing::Point(5, 4);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(58, 59);
			this->btn_back->TabIndex = 0;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &Add1Course::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(234, 17);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(626, 31);
			this->lbl_title->TabIndex = 92;
			this->lbl_title->Text = L"ADD A NEW COURSE TO THE CURRENT SEMESTER";
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(73, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pnl_title->Size = System::Drawing::Size(1068, 66);
			this->pnl_title->TabIndex = 147;
			this->pnl_title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1Course::pnl_title_MouseDown);
			this->pnl_title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1Course::pnl_title_MouseMove);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(375, 458);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(140, 50);
			this->btn_add->TabIndex = 17;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Add1Course::btn_add_Click);
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Cursor = System::Windows::Forms::Cursors::No;
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(258, 116);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(203, 33);
			this->txt_schoolyear->TabIndex = 171;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::No;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label2->Location = System::Drawing::Point(125, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 27);
			this->label2->TabIndex = 170;
			this->label2->Text = L"School Year";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_courseID->Location = System::Drawing::Point(258, 277);
			this->txt_courseID->MaxLength = 20;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(393, 33);
			this->txt_courseID->TabIndex = 1;
			this->txt_courseID->TextChanged += gcnew System::EventHandler(this, &Add1Course::txt_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(145, 281);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 27);
			this->label1->TabIndex = 172;
			this->label1->Text = L"Course ID";
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem3->Cursor = System::Windows::Forms::Cursors::No;
			this->chkbox_sem3->Enabled = false;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(390, 164);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 177;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = false;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem2->Cursor = System::Windows::Forms::Cursors::No;
			this->chkbox_sem2->Enabled = false;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(326, 164);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 176;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = false;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem1->Cursor = System::Windows::Forms::Cursors::No;
			this->chkbox_sem1->Enabled = false;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(263, 164);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 175;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = false;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_sem1_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Cursor = System::Windows::Forms::Cursors::No;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label13->Location = System::Drawing::Point(143, 164);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 27);
			this->label13->TabIndex = 174;
			this->label13->Text = L"Semester:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(258, 318);
			this->txt_coursename->MaxLength = 100;
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->Size = System::Drawing::Size(393, 33);
			this->txt_coursename->TabIndex = 2;
			this->txt_coursename->TextChanged += gcnew System::EventHandler(this, &Add1Course::txt_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label3->Location = System::Drawing::Point(110, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 27);
			this->label3->TabIndex = 178;
			this->label3->Text = L"Course name";
			// 
			// txt_credit
			// 
			this->txt_credit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_credit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_credit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_credit->Location = System::Drawing::Point(531, 402);
			this->txt_credit->MaxLength = 3;
			this->txt_credit->Name = L"txt_credit";
			this->txt_credit->Size = System::Drawing::Size(120, 33);
			this->txt_credit->TabIndex = 5;
			this->txt_credit->TextChanged += gcnew System::EventHandler(this, &Add1Course::txt_TextChanged);
			this->txt_credit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1Course::txt_intOnly_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label4->Location = System::Drawing::Point(445, 406);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 27);
			this->label4->TabIndex = 180;
			this->label4->Text = L"Credits";
			// 
			// chkbox_Mon
			// 
			this->chkbox_Mon->AutoSize = true;
			this->chkbox_Mon->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Mon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Mon->Location = System::Drawing::Point(726, 318);
			this->chkbox_Mon->Name = L"chkbox_Mon";
			this->chkbox_Mon->Size = System::Drawing::Size(99, 25);
			this->chkbox_Mon->TabIndex = 6;
			this->chkbox_Mon->Text = L"Monday";
			this->chkbox_Mon->UseVisualStyleBackColor = true;
			this->chkbox_Mon->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label5->Location = System::Drawing::Point(705, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 27);
			this->label5->TabIndex = 183;
			this->label5->Text = L"Week day";
			// 
			// chkbox_Tue
			// 
			this->chkbox_Tue->AutoSize = true;
			this->chkbox_Tue->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Tue->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Tue->Location = System::Drawing::Point(726, 351);
			this->chkbox_Tue->Name = L"chkbox_Tue";
			this->chkbox_Tue->Size = System::Drawing::Size(98, 25);
			this->chkbox_Tue->TabIndex = 7;
			this->chkbox_Tue->Text = L"Tuesday";
			this->chkbox_Tue->UseVisualStyleBackColor = true;
			this->chkbox_Tue->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// chkbox_Thu
			// 
			this->chkbox_Thu->AutoSize = true;
			this->chkbox_Thu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Thu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Thu->Location = System::Drawing::Point(726, 417);
			this->chkbox_Thu->Name = L"chkbox_Thu";
			this->chkbox_Thu->Size = System::Drawing::Size(105, 25);
			this->chkbox_Thu->TabIndex = 9;
			this->chkbox_Thu->Text = L"Thursday";
			this->chkbox_Thu->UseVisualStyleBackColor = true;
			this->chkbox_Thu->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// chkbox_Wed
			// 
			this->chkbox_Wed->AutoSize = true;
			this->chkbox_Wed->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Wed->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Wed->Location = System::Drawing::Point(726, 384);
			this->chkbox_Wed->Name = L"chkbox_Wed";
			this->chkbox_Wed->Size = System::Drawing::Size(124, 25);
			this->chkbox_Wed->TabIndex = 8;
			this->chkbox_Wed->Text = L"Wednesday";
			this->chkbox_Wed->UseVisualStyleBackColor = true;
			this->chkbox_Wed->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// chkbox_Sun
			// 
			this->chkbox_Sun->AutoSize = true;
			this->chkbox_Sun->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Sun->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Sun->Location = System::Drawing::Point(726, 516);
			this->chkbox_Sun->Name = L"chkbox_Sun";
			this->chkbox_Sun->Size = System::Drawing::Size(92, 25);
			this->chkbox_Sun->TabIndex = 12;
			this->chkbox_Sun->Text = L"Sunday";
			this->chkbox_Sun->UseVisualStyleBackColor = true;
			this->chkbox_Sun->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// chkbox_Sat
			// 
			this->chkbox_Sat->AutoSize = true;
			this->chkbox_Sat->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Sat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Sat->Location = System::Drawing::Point(726, 483);
			this->chkbox_Sat->Name = L"chkbox_Sat";
			this->chkbox_Sat->Size = System::Drawing::Size(103, 25);
			this->chkbox_Sat->TabIndex = 11;
			this->chkbox_Sat->Text = L"Saturday";
			this->chkbox_Sat->UseVisualStyleBackColor = true;
			this->chkbox_Sat->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// chkbox_Fri
			// 
			this->chkbox_Fri->AutoSize = true;
			this->chkbox_Fri->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_Fri->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_Fri->Location = System::Drawing::Point(726, 450);
			this->chkbox_Fri->Name = L"chkbox_Fri";
			this->chkbox_Fri->Size = System::Drawing::Size(82, 25);
			this->chkbox_Fri->TabIndex = 10;
			this->chkbox_Fri->Text = L"Friday";
			this->chkbox_Fri->UseVisualStyleBackColor = true;
			this->chkbox_Fri->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_weekday_CheckedChanged);
			// 
			// chkbox_S4
			// 
			this->chkbox_S4->AutoSize = true;
			this->chkbox_S4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_S4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_S4->Location = System::Drawing::Point(937, 417);
			this->chkbox_S4->Name = L"chkbox_S4";
			this->chkbox_S4->Size = System::Drawing::Size(109, 25);
			this->chkbox_S4->TabIndex = 16;
			this->chkbox_S4->Text = L"S4 (15:30)";
			this->chkbox_S4->UseVisualStyleBackColor = true;
			this->chkbox_S4->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_session_CheckedChanged);
			// 
			// chkbox_S3
			// 
			this->chkbox_S3->AutoSize = true;
			this->chkbox_S3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_S3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_S3->Location = System::Drawing::Point(937, 384);
			this->chkbox_S3->Name = L"chkbox_S3";
			this->chkbox_S3->Size = System::Drawing::Size(109, 25);
			this->chkbox_S3->TabIndex = 15;
			this->chkbox_S3->Text = L"S3 (13:30)";
			this->chkbox_S3->UseVisualStyleBackColor = true;
			this->chkbox_S3->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_session_CheckedChanged);
			// 
			// chkbox_S2
			// 
			this->chkbox_S2->AutoSize = true;
			this->chkbox_S2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_S2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_S2->Location = System::Drawing::Point(937, 351);
			this->chkbox_S2->Name = L"chkbox_S2";
			this->chkbox_S2->Size = System::Drawing::Size(109, 25);
			this->chkbox_S2->TabIndex = 14;
			this->chkbox_S2->Text = L"S2 (09:30)";
			this->chkbox_S2->UseVisualStyleBackColor = true;
			this->chkbox_S2->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_session_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label6->Location = System::Drawing::Point(915, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 27);
			this->label6->TabIndex = 191;
			this->label6->Text = L"Session";
			// 
			// chkbox_S1
			// 
			this->chkbox_S1->AutoSize = true;
			this->chkbox_S1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_S1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_S1->Location = System::Drawing::Point(937, 318);
			this->chkbox_S1->Name = L"chkbox_S1";
			this->chkbox_S1->Size = System::Drawing::Size(109, 25);
			this->chkbox_S1->TabIndex = 13;
			this->chkbox_S1->Text = L"S1 (07:30)";
			this->chkbox_S1->UseVisualStyleBackColor = true;
			this->chkbox_S1->CheckedChanged += gcnew System::EventHandler(this, &Add1Course::chkbox_session_CheckedChanged);
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_teacher->Location = System::Drawing::Point(258, 360);
			this->txt_teacher->MaxLength = 100;
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->Size = System::Drawing::Size(393, 33);
			this->txt_teacher->TabIndex = 3;
			this->txt_teacher->TextChanged += gcnew System::EventHandler(this, &Add1Course::txt_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label7->Location = System::Drawing::Point(99, 364);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 27);
			this->label7->TabIndex = 195;
			this->label7->Text = L"Teacher name";
			// 
			// txt_maxStu
			// 
			this->txt_maxStu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_maxStu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_maxStu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_maxStu->Location = System::Drawing::Point(258, 402);
			this->txt_maxStu->MaxLength = 3;
			this->txt_maxStu->Name = L"txt_maxStu";
			this->txt_maxStu->Size = System::Drawing::Size(162, 33);
			this->txt_maxStu->TabIndex = 4;
			this->txt_maxStu->TextChanged += gcnew System::EventHandler(this, &Add1Course::txt_TextChanged);
			this->txt_maxStu->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1Course::txt_intOnly_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label8->Location = System::Drawing::Point(104, 406);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 27);
			this->label8->TabIndex = 197;
			this->label8->Text = L"Max students";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(837, 91);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 140);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 199;
			this->pictureBox1->TabStop = false;
			// 
			// Add1Course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1145, 648);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_maxStu);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->chkbox_S4);
			this->Controls->Add(this->chkbox_S3);
			this->Controls->Add(this->chkbox_S2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->chkbox_S1);
			this->Controls->Add(this->chkbox_Sun);
			this->Controls->Add(this->chkbox_Sat);
			this->Controls->Add(this->chkbox_Fri);
			this->Controls->Add(this->chkbox_Thu);
			this->Controls->Add(this->chkbox_Wed);
			this->Controls->Add(this->chkbox_Tue);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->chkbox_Mon);
			this->Controls->Add(this->txt_credit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_title);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Add1Course";
			this->Padding = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Text = L"Add1Course";
			this->Load += gcnew System::EventHandler(this, &Add1Course::Add1Course_Load);
			this->pnl_account->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->panel1->ResumeLayout(false);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Add1Course_Load(System::Object^ sender, System::EventArgs^ e) {
		if (!g_currentSchoolYear) {
			MessageBox::Show("There is no school year in the system.");
			this->Close();
			sourceForm->Show();
			return;
		}
		if (!g_currentSemester) {
			MessageBox::Show("There is no semester in this school year.");
			this->Close();
			sourceForm->Show();
			return;
		}

		pnl_account->Visible = false;
		btn_add->Enabled = false;

		weekday[0] = chkbox_Mon;
		weekday[1] = chkbox_Tue;
		weekday[2] = chkbox_Wed;
		weekday[3] = chkbox_Thu;
		weekday[4] = chkbox_Fri;
		weekday[5] = chkbox_Sat;
		weekday[6] = chkbox_Sun;

		session[0] = chkbox_S1;
		session[1] = chkbox_S2;
		session[2] = chkbox_S3;
		session[3] = chkbox_S4;

		txt_schoolyear->Text = g_currentSchoolYear->begin.ToString() + " - " + g_currentSchoolYear->end.ToString();

		chkbox_sem1->Checked = false;
		chkbox_sem2->Checked = false;
		chkbox_sem3->Checked = false;
		if (g_currentSemester->No == 1) chkbox_sem1->Checked = true;
		else if (g_currentSemester->No == 2) chkbox_sem2->Checked = true;
		else chkbox_sem2->Checked = true;

		// reset form
		txt_maxStu->Text = L"50";
	}

	//////////////////////////////////////////////////////////////////////////
	// text changed
	// this->txt_credit->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1Course::txt_intOnly_KeyPress);
		private: System::Void txt_intOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			// integers only
			if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))	e->Handled = true;
		}
	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	// move form using panel
				   // Point mouseDownLocation, formLocation;
				   //this->pnl_titleRemv->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RemoveStuFromCourse::pnl_titleRemv_MouseDown);
				   //this->pnl_titleRemv->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &RemoveStuFromCourse::pnl_titleRemv_MouseMove);
		private: System::Void pnl_title_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// Record the mouse position when the panel is clicked
			mouseDownLocation = e->Location;
			// Record the form position
			formLocation = this->Location;
		}

		private: System::Void pnl_title_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// Check if the left mouse button is pressed
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				// Calculate the new form position based on the mouse position
				int dx = e->Location.X - mouseDownLocation.X;
				int dy = e->Location.Y - mouseDownLocation.Y;
				int newX = formLocation.X + dx;
				int newY = formLocation.Y + dy;
				// Update the form position
				System::Drawing::Point newLocation(newX, newY);
				this->Location = newLocation;
			}
		}
	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////
	// Weekday_checked && Session_checked
		// this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem3_CheckedChanged);
		private: System::Void btn_add_Enable() {
			int i = 0;
			bool flagW = false, flagS = false;
			for (i = 0; i < 4; i++) {
				if (weekday[i]->Checked == true)	flagW = true;
				if (session[i]->Checked == true)	flagS = true;
			}

			for (; i < 7; i++)
				if (weekday[i]->Checked == true) {
					flagW = true;
					break;
				}

			if (!flagW || !flagS) {
				btn_add->Enabled = false;
				return;
			}

			if (String::IsNullOrWhiteSpace(txt_courseID->Text) ||
				String::IsNullOrWhiteSpace(txt_coursename->Text) ||
				String::IsNullOrWhiteSpace(txt_teacher->Text) ||
				String::IsNullOrWhiteSpace(txt_maxStu->Text) ||
				String::IsNullOrWhiteSpace(txt_credit->Text)) btn_add->Enabled = false;
			else btn_add->Enabled = true;
		}
		private: System::Void chkbox_weekday_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			CheckBox^ chkbox = safe_cast<CheckBox^>(sender);
			if (chkbox->Checked == false) {
				btn_add_Enable();
				return;
			}
			chkbox->Checked = true;
			for (int idx = 0; idx < 7; idx++) if (chkbox != weekday[idx]) weekday[idx]->Checked = false;
			btn_add_Enable();
		}
		private: System::Void chkbox_session_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			CheckBox^ chkbox = safe_cast<CheckBox^>(sender);
			if (chkbox->Checked == false) {
				btn_add_Enable();
				return;
			}
			chkbox->Checked = true;
			for (int idx = 0; idx < 4; idx++) if (chkbox != session[idx]) session[idx]->Checked = false;
			btn_add_Enable();
		}
	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////


	//////////////////////////////////////////////////////////////////////////
	// account button
		private: System::Void account_Click(System::Object^ sender, System::EventArgs^ e) {
			pnl_account->Visible = !pnl_account->Visible;
		}
		private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Hide(); // just hide not close
			Form^ form = gcnew CMS::AboutUs(this);
			form->Show();
		}
		private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e);

		private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
			deleteFiles();
			if (latestCheckRememberLogin) {
				latestUsername = g_currentStaff->user.username;
				latestPassword = g_currentStaff->user.password;
			}
			else {
				latestUsername = latestPassword = "";
			}
			exportSchoolYears();
			exportStudents();
			exportClasses();
			exportStaffs();
			// then exit
			Application::Exit();
		}
	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// 
	//this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem1_CheckedChanged);
	private: System::Void chkbox_sem1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_sem1->Checked) {
			chkbox_sem2->Checked = 0;	chkbox_sem3->Checked = 0;
		}
	}
	private: System::Void chkbox_sem2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_sem2->Checked) {
			chkbox_sem1->Checked = 0;	chkbox_sem3->Checked = 0;
		}
	}
	private: System::Void chkbox_sem3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_sem3->Checked) {
			chkbox_sem1->Checked = 0;	chkbox_sem2->Checked = 0;
		}
	}

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// this form only
		private: System::Void resetForm() {
			txt_courseID->Text = L"";
			txt_coursename->Text = L"";
			txt_teacher->Text = L"";
			txt_credit->Text = L"";
			txt_maxStu->Text = "50";
			btn_add->Enabled = false;
		}
		private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string courseID = trim_whitespace(msclr::interop::marshal_as<std::string>(txt_courseID->Text));
			DLL<COURSE*>* cur = g_currentSemester->course.head;
			while (cur) {
				if (cur->data->ID == courseID) {
					MessageBox::Show("This course has already been created in this semester.", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Stop);
					resetForm();
					return;
				}
				cur = cur->next;
			}

			// cur now is nullptr
			cur = new DLL<COURSE*>;
			// cur->prev == cur->next == nullptr by default
			cur->data = new COURSE;
			cur->data->ID = courseID;
			cur->data->name = trim_whitespace(msclr::interop::marshal_as<std::string>(txt_coursename->Text));
			cur->data->teacher = trim_whitespace(msclr::interop::marshal_as<std::string>(txt_teacher->Text));
			cur->data->maxStudents = Convert::ToInt32(txt_maxStu->Text);
			cur->data->credit = Convert::ToInt32(txt_credit->Text);

			for (int i = 0; i < 7; i++)
				if (weekday[i]->Checked == true) {
					cur->data->day = WeekDay(i);
					break;
				}
			for (int i = 0; i < 4; i++)
				if (session[i]->Checked == true) {
					cur->data->session = Session(i);
					break;
				}

			if (g_currentSemester->course.head) {
				g_currentSemester->course.tail->next = cur;
				cur->prev = g_currentSemester->course.tail;
				g_currentSemester->course.tail = g_currentSemester->course.tail->next;
			}
			else {
				g_currentSemester->course.head = g_currentSemester->course.tail = cur;
			}
			txt_courseID->Text = L"";
			txt_coursename->Text = L"";
			txt_teacher->Text = L"";
			txt_maxStu->Text = L"50";
			txt_credit->Text = L"";
			int i;
			for (i = 0; i < 4; i++) {
				weekday[i]->Checked = false;
				session[i]->Checked = false;
			}
			for (; i < 7; i++)
				weekday[i]->Checked = false;
		}
		private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			sourceForm->Show();
		}
	private: System::Void txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		btn_add_Enable();
	}
};
}
