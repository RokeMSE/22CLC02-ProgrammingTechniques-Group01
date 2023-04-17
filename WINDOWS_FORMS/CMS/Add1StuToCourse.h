#pragma once
#include "header.h"
using namespace GROUP1;
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add1StuToCourse
	/// </summary>
	public ref class Add1StuToCourse : public System::Windows::Forms::Form
	{
	public:
		Add1StuToCourse(System::Windows::Forms::Form^ sourceform, System::Windows::Forms::Form^ loginform)
		{
			InitializeComponent();
			this->sourceForm = sourceform;
			this->loginForm = loginform;
			//
			//TODO: Add the constructor code here
			//
		}
		/*private:*/
		GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;	// the course this form is working on
													// this pointer is get when course ID has been entered and button search is clicked 
		GROUP1::DLL<GROUP1::STUDENT*>* curStudent;
		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curSchoolyear;
		GROUP1::SEMESTER* curSemester;
		System::Windows::Forms::Form^ sourceForm;
		System::Windows::Forms::Form^ loginForm;
		Point mouseDownLocation, formLocation;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnl_account;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ btn_aboutUs;
	private: System::Windows::Forms::PictureBox^ account;

	public:

	public:
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add1StuToCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_coursename;
	private: System::Windows::Forms::TextBox^ txt_StudentID;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnl_title;

	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_DoB;
	private: System::Windows::Forms::Button^ btn_add;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_yearIn;
	private: System::Windows::Forms::TextBox^ txt_gender;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_socialID;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_class;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_StudentID_2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_search;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add1StuToCourse::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->txt_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_DoB = (gcnew System::Windows::Forms::TextBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_yearIn = (gcnew System::Windows::Forms::TextBox());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_socialID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_class = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_account = (gcnew System::Windows::Forms::Panel());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_aboutUs = (gcnew System::Windows::Forms::Button());
			this->pnl_title->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->pnl_account->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label5->Location = System::Drawing::Point(180, 421);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 27);
			this->label5->TabIndex = 90;
			this->label5->Text = L"Course name";
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(349, 177);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 89;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = false;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(285, 177);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 88;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = false;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(223, 177);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 87;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = false;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem1_CheckedChanged);
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear_end->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_schoolyear_end->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(389, 133);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(92, 33);
			this->txt_schoolyear_end->TabIndex = 86;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label23->Location = System::Drawing::Point(335, 137);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(49, 27);
			this->label23->TabIndex = 85;
			this->label23->Text = L"End";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_schoolyear_start->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear_start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_start->Location = System::Drawing::Point(220, 133);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(92, 33);
			this->txt_schoolyear_start->TabIndex = 84;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &Add1StuToCourse::txt_SchoolYear_TextChanged);
			this->txt_schoolyear_start->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1StuToCourse::txt_intOnly_KeyPress);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label22->Location = System::Drawing::Point(149, 136);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(66, 27);
			this->label22->TabIndex = 83;
			this->label22->Text = L"Start:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label13->Location = System::Drawing::Point(103, 176);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 27);
			this->label13->TabIndex = 82;
			this->label13->Text = L"Semester:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(119, 383);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txt_coursename->Size = System::Drawing::Size(265, 33);
			this->txt_coursename->TabIndex = 81;
			// 
			// txt_StudentID
			// 
			this->txt_StudentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_StudentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StudentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_StudentID->Location = System::Drawing::Point(216, 337);
			this->txt_StudentID->MaxLength = 10;
			this->txt_StudentID->Name = L"txt_StudentID";
			this->txt_StudentID->Size = System::Drawing::Size(168, 33);
			this->txt_StudentID->TabIndex = 80;
			this->txt_StudentID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1StuToCourse::txt_intOnly_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label9->Location = System::Drawing::Point(84, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 27);
			this->label9->TabIndex = 79;
			this->label9->Text = L"Student ID:";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(220, 93);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(261, 33);
			this->txt_schoolyear->TabIndex = 78;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label4->Location = System::Drawing::Point(85, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 27);
			this->label4->TabIndex = 77;
			this->label4->Text = L"School Year";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_courseID->Location = System::Drawing::Point(216, 296);
			this->txt_courseID->MaxLength = 10;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(168, 33);
			this->txt_courseID->TabIndex = 76;
			this->txt_courseID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1StuToCourse::txt_intOnly_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label2->Location = System::Drawing::Point(94, 299);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 27);
			this->label2->TabIndex = 75;
			this->label2->Text = L"Course ID:";
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(66, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Padding = System::Windows::Forms::Padding(4);
			this->pnl_title->Size = System::Drawing::Size(950, 60);
			this->pnl_title->TabIndex = 91;
			this->pnl_title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1StuToCourse::pnl_title_MouseDown);
			this->pnl_title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1StuToCourse::pnl_title_MouseMove);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(284, 15);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(423, 31);
			this->lbl_title->TabIndex = 92;
			this->lbl_title->Text = L"ADD A STUDENT TO THE COURSE";
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
			this->btn_back->Location = System::Drawing::Point(4, 4);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(54, 54);
			this->btn_back->TabIndex = 93;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_back_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(705, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(155, 155);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 92;
			this->pictureBox1->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label11->Location = System::Drawing::Point(719, 427);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(171, 27);
			this->label11->TabIndex = 106;
			this->label11->Text = L"Enrollment year";
			// 
			// txt_DoB
			// 
			this->txt_DoB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_DoB->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_DoB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_DoB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_DoB->Location = System::Drawing::Point(567, 425);
			this->txt_DoB->Name = L"txt_DoB";
			this->txt_DoB->ReadOnly = true;
			this->txt_DoB->Size = System::Drawing::Size(146, 33);
			this->txt_DoB->TabIndex = 105;
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(695, 478);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(140, 50);
			this->btn_add->TabIndex = 108;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_add_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label12->Location = System::Drawing::Point(420, 429);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(142, 27);
			this->label12->TabIndex = 104;
			this->label12->Text = L"Date of Birth";
			// 
			// txt_yearIn
			// 
			this->txt_yearIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_yearIn->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_yearIn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_yearIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_yearIn->Location = System::Drawing::Point(895, 423);
			this->txt_yearIn->Name = L"txt_yearIn";
			this->txt_yearIn->ReadOnly = true;
			this->txt_yearIn->Size = System::Drawing::Size(89, 33);
			this->txt_yearIn->TabIndex = 107;
			// 
			// txt_gender
			// 
			this->txt_gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_gender->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_gender->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_gender->Location = System::Drawing::Point(895, 338);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->ReadOnly = true;
			this->txt_gender->Size = System::Drawing::Size(89, 33);
			this->txt_gender->TabIndex = 103;
			// 
			// txt_name
			// 
			this->txt_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_name->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_name->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_name->Location = System::Drawing::Point(567, 381);
			this->txt_name->Name = L"txt_name";
			this->txt_name->ReadOnly = true;
			this->txt_name->Size = System::Drawing::Size(417, 33);
			this->txt_name->TabIndex = 97;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label10->Location = System::Drawing::Point(805, 342);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 27);
			this->label10->TabIndex = 102;
			this->label10->Text = L"Gender";
			// 
			// txt_socialID
			// 
			this->txt_socialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_socialID->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_socialID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_socialID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_socialID->Location = System::Drawing::Point(567, 338);
			this->txt_socialID->Name = L"txt_socialID";
			this->txt_socialID->ReadOnly = true;
			this->txt_socialID->Size = System::Drawing::Size(146, 33);
			this->txt_socialID->TabIndex = 101;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label8->Location = System::Drawing::Point(462, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 27);
			this->label8->TabIndex = 100;
			this->label8->Text = L"Social ID";
			// 
			// txt_class
			// 
			this->txt_class->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_class->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_class->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_class->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_class->Location = System::Drawing::Point(895, 295);
			this->txt_class->Name = L"txt_class";
			this->txt_class->ReadOnly = true;
			this->txt_class->Size = System::Drawing::Size(89, 33);
			this->txt_class->TabIndex = 99;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label7->Location = System::Drawing::Point(827, 299);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 27);
			this->label7->TabIndex = 98;
			this->label7->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label6->Location = System::Drawing::Point(451, 385);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 27);
			this->label6->TabIndex = 96;
			this->label6->Text = L"Full name";
			// 
			// txt_StudentID_2
			// 
			this->txt_StudentID_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_StudentID_2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_StudentID_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StudentID_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_StudentID_2->Location = System::Drawing::Point(567, 295);
			this->txt_StudentID_2->Name = L"txt_StudentID_2";
			this->txt_StudentID_2->ReadOnly = true;
			this->txt_StudentID_2->Size = System::Drawing::Size(146, 33);
			this->txt_StudentID_2->TabIndex = 95;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label3->Location = System::Drawing::Point(442, 299);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 27);
			this->label3->TabIndex = 94;
			this->label3->Text = L"Student ID";
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(180, 478);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(140, 50);
			this->btn_search->TabIndex = 109;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_search_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->account);
			this->panel1->Controls->Add(this->btn_back);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4);
			this->panel1->Size = System::Drawing::Size(62, 687);
			this->panel1->TabIndex = 110;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 629);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(54, 54);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 111;
			this->account->TabStop = false;
			this->account->Click += gcnew System::EventHandler(this, &Add1StuToCourse::account_Click);
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_account->Location = System::Drawing::Point(72, 554);
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Padding = System::Windows::Forms::Padding(3);
			this->pnl_account->Size = System::Drawing::Size(172, 137);
			this->pnl_account->TabIndex = 130;
			this->pnl_account->Visible = false;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Location = System::Drawing::Point(0, 90);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(172, 45);
			this->btn_exit->TabIndex = 2;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Location = System::Drawing::Point(0, 45);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(172, 45);
			this->btn_logout->TabIndex = 1;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_logout_Click);
			// 
			// btn_aboutUs
			// 
			this->btn_aboutUs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_aboutUs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_aboutUs->Location = System::Drawing::Point(0, 0);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(172, 45);
			this->btn_aboutUs->TabIndex = 0;
			this->btn_aboutUs->Text = L"About us";
			this->btn_aboutUs->UseVisualStyleBackColor = false;
			this->btn_aboutUs->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_aboutUs_Click);
			// 
			// Add1StuToCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1020, 695);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_DoB);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_yearIn);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->txt_gender);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->txt_socialID);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->txt_class);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->txt_StudentID_2);
			this->Controls->Add(this->txt_StudentID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Add1StuToCourse";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Text = L"Add1StuToCourse";
			this->Load += gcnew System::EventHandler(this, &Add1StuToCourse::Add1StuToCourse_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->pnl_account->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		///////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////
	private: System::Void Add1StuToCourse_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string str = std::to_string(g_currentSchoolYear->begin) + " - " + std::to_string(g_currentSchoolYear->end);
		txt_schoolyear->Text = gcnew System::String(str.c_str());
		txt_schoolyear_start->Text = gcnew System::String(g_currentSchoolYear->begin.ToString());
		txt_schoolyear_end->Text = gcnew System::String(g_currentSchoolYear->end.ToString());

		if (g_currentSemester->No == 1) {
			chkbox_sem1->Checked = true;
			chkbox_sem2->Checked = false;
			chkbox_sem3->Checked = false;
		}
		else if (g_currentSemester->No == 2) {
			chkbox_sem1->Checked = false;
			chkbox_sem2->Checked = true;
			chkbox_sem3->Checked = false;
		}
		else {
			chkbox_sem1->Checked = false;
			chkbox_sem2->Checked = false;
			chkbox_sem3->Checked = true;
		}
		this->curStudent = nullptr;
		this->curCourse = nullptr;
		pnl_account->Visible = false;
		btn_add->Enabled = false;
		btn_add->Cursor = Cursors::No;
	}
		   //GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;
		   //GROUP1::DLL<GROUP1::STUDENT*>* curStudent;
		   //GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curSchoolyear;
		   //GROUP1::SEMESTER* curSemester;
		   //System::Windows::Forms::Form^ sourceForm;
	///////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////
	// key press numbers only
	private: System::Void txt_intOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// integers only
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))	e->Handled = true;
	}
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // panel
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
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // checkbox semester 1 2 3
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
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // Schoolyear_textChanged
	private: System::Void txt_SchoolYear_TextChanged(Object^ sender, EventArgs^ e) {
		if (txt_schoolyear_start->Text == "") {
			txt_schoolyear_end->Text = "";
			txt_schoolyear->Text = "";
			return;
		}
		int start = -1;
		try {
			start = System::Convert::ToInt32(txt_schoolyear_start->Text);
			// throw an exception if rate cannot be converted to `integer`
		}
		catch (System::FormatException^) {
			// Handle the case when the input is not a valid floating-point number
			return;
		}
		txt_schoolyear_end->Text = gcnew System::String((start + 1).ToString());
		txt_schoolyear->Text = gcnew System::String((std::to_string(start) + " - " + std::to_string(start + 1)).c_str());
	}
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // button back clicked
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_coursename->Text = "";
		this->Close();
		this->sourceForm->Show();
	}
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////
	// button Search/Add clicked
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string id;
		// search for the current course
		int curStartYear = System::Convert::ToInt32(txt_schoolyear_start->Text);
		this->curSchoolyear = L_SchoolYear.head;
		while (this->curSchoolyear) {
			if (System::Convert::ToInt32(this->curSchoolyear->data->begin) == curStartYear)	break;
			this->curSchoolyear = this->curSchoolyear->next;
		}
		if (!this->curSchoolyear) {
			// id now is used for storing message (not an ID)
			id = "There is no schoolyear " + std::to_string(curStartYear) + " - " + std::to_string(curStartYear + 1);
			System::String^ message = gcnew System::String(id.c_str());
			MessageBox::Show(message);
			return;
		}
		////////////////////////////////////////////////

		// search for the current semester
		if (chkbox_sem1->Checked == true) {
			if (this->curSchoolyear->data->sem1)
				this->curSemester = this->curSchoolyear->data->sem1;
			else {
				MessageBox::Show("Please choose a valid semester.");
				return;
			}
		}
		else if (chkbox_sem2->Checked == true) {
			if (this->curSchoolyear->data->sem2)
				this->curSemester = this->curSchoolyear->data->sem2;
			else {
				MessageBox::Show("Please choose a valid semester.");
				return;
			}
		}
		else if (chkbox_sem3->Checked == true) {
			if (this->curSchoolyear->data->sem3)
				this->curSemester = this->curSchoolyear->data->sem3;
			else {
				MessageBox::Show("Please choose a valid semester.");
				return;
			}
		}
		else {
			MessageBox::Show("Please choose a semester.");
			return;
		}
		////////////////////////////////////////////////

		// search for the current course
		id = msclr::interop::marshal_as<std::string>(txt_courseID->Text);

		if (this->curCourse && this->curCourse->data->ID == id)	goto _skipfindcourse;
		this->curCourse = this->curSemester->course.head;

		while (this->curCourse) {
			if (id == this->curCourse->data->ID) {
			_skipfindcourse:
				txt_coursename->Text = gcnew System::String((this->curCourse->data->name).c_str());
				break;
			}
			this->curCourse = this->curCourse->next;
		}

		if (!(this->curCourse)) {
			// id now is used for storing message (not an ID anymore)
			id = "There is no course with ID " + id + " in this semester.";
			System::String^ message = gcnew System::String(id.c_str());
			MessageBox::Show(message);
			return;
		}
		////////////////////////////////////////////////

		// then search for student in list L_Student
		id = msclr::interop::marshal_as<std::string>(txt_StudentID->Text);
		this->curStudent = L_Student.head; //type == DLL<STUDENT*>*
		while (this->curStudent) {
			if (this->curStudent->data->studentID == id) {
				txt_StudentID_2->Text = gcnew System::String(id.c_str());
				txt_class->Text = gcnew System::String(this->curStudent->data->Class->convertToString().c_str());
				txt_socialID->Text = gcnew System::String(this->curStudent->data->socialID.c_str());
				std::string tmpString = (this->curStudent->data->gender == 1) ? "Male" : "Female";
				txt_gender->Text = gcnew System::String(tmpString.c_str());
				tmpString = this->curStudent->data->firstname + " " + this->curStudent->data->lastname;
				txt_name->Text = gcnew System::String(tmpString.c_str());
				txt_DoB->Text = gcnew System::String(DateToString(this->curStudent->data->DoB).c_str());
				txt_yearIn->Text = gcnew System::String(this->curStudent->data->Class->yearIn.ToString());
				txt_coursename->Text = gcnew System::String(this->curCourse->data->name.c_str());
				btn_add->Enabled = true;
				btn_add->Cursor = Cursors::Hand;
				return;
			}
			this->curStudent = this->curStudent->next;
		}
		if (!this->curStudent) {
			id = "Cannot find student " + id;
			System::String^ message = gcnew System::String(id.c_str());
			MessageBox::Show(message);
			return;
		}
	}
		   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->curStudent || !this->curCourse) {
			MessageBox::Show("Which student should be added???");
			return;
		}

		// check whether this student has occurred in the course
		GROUP1::DLL<GROUP1::SCOREBOARD*>* tmpScore = this->curCourse->data->students.head;
		while (tmpScore) {
			if (tmpScore->data->student == this->curStudent->data) {
				// pointing to the same address, which is equivalent to `they are the same`
				MessageBox::Show("This student has already been in this course!");
				return;
			}
			tmpScore = tmpScore->next;
		}
		// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
				// add a new student to list COURSE::students
		tmpScore = new GROUP1::DLL<GROUP1::SCOREBOARD*>;
		tmpScore->data = new GROUP1::SCOREBOARD;
		tmpScore->data->student = this->curStudent->data;
		tmpScore->next = nullptr;
		tmpScore->prev = this->curCourse->data->students.tail;

		/// Update the list, 2 cases: the list is empty or not
		if (this->curCourse->data->students.head == nullptr) {
			this->curCourse->data->students.head = tmpScore;
			this->curCourse->data->students.tail = tmpScore;
		}
		else {
			this->curCourse->data->students.tail->next = tmpScore;
			this->curCourse->data->students.tail = tmpScore;
		}

		////////////////////////////////////////////
		////////////////////////////////////////////
		////////////////////////////////////////////

		// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
				// add a new course to list STUDENT::courses
				// new a node
		DLL<COURSE*>* tmp = new DLL<COURSE*>;
		tmp->data = this->curCourse->data;

		/// Update the list, 2 cases: the list is empty or not
		if (this->curStudent->data->courses.head == nullptr) {
			this->curStudent->data->courses.head = tmp;
			this->curStudent->data->courses.head = tmp;
		}
		else {
			this->curStudent->data->courses.tail->next = tmp;
			this->curStudent->data->courses.tail = tmp;
		}
		////////////////////////////////////////////
		////////////////////////////////////////////
////////////////////////////////////////////
		btn_add->Enabled = false;
		btn_add->Cursor = Cursors::No;
		std::string message = "Student" + this->curStudent->data->studentID + "was successfully added";
		MessageBox::Show(gcnew System::String(message.c_str()));
		this->curStudent = nullptr;
	}
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////

	private: System::Void account_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_account->Visible = !pnl_account->Visible;
	}
	private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); // just hide not close
		Form^ form = gcnew CMS::AboutUs(this);
		form->Show();
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		g_currentStudent = nullptr;
		g_currentStaff = nullptr;
		this->Close();
		loginForm->Show();
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	};
}