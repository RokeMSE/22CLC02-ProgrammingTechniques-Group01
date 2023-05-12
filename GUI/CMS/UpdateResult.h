#pragma once
#include "header.h"
#include "AboutUs.h"
#include <msclr/marshal_cppstd.h>
#include <string>

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateResult
	/// </summary>
	public ref class UpdateResult : public System::Windows::Forms::Form
	{
	public:
		UpdateResult(System::Windows::Forms::Form^ sourceform, System::Windows::Forms::Form^ loginform)
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
		~UpdateResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;	// the course this form is working on
		// this pointer is get when course ID has been entered and button search is clicked 
		GROUP1::DLL<GROUP1::SCOREBOARD*>* curStudent;
		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curSchoolyear;
		GROUP1::SEMESTER* curSemester;
		System::Windows::Forms::Form ^sourceForm, ^loginForm;
		Point mouseDownLocation, formLocation;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::TextBox^ txt_coursename;

	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_title;

	private: System::Windows::Forms::Button^ btn_Search;

	private: System::Windows::Forms::TextBox^ txt_schoolyear;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_credit;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_maxStu;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_StudentID;


	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ txt_othermark;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_midmark;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_rateOther;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_rateMid;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txt_rateFinal;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txt_finalmark;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txt_totalmark;
	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txt_rateTotal;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Panel^ pnl_title;

	private: System::Windows::Forms::TextBox^ txt_StudentID_2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ pnl_account;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ btn_aboutUs;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateResult::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_credit = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_maxStu = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_othermark = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_midmark = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_rateOther = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_rateMid = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_rateFinal = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_finalmark = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txt_totalmark = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_rateTotal = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->txt_StudentID_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_account = (gcnew System::Windows::Forms::Panel());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_aboutUs = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl_title->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_account->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(101, 203);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course ID";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Location = System::Drawing::Point(218, 200);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(4);
			this->txt_courseID->MaxLength = 15;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(375, 33);
			this->txt_courseID->TabIndex = 1;
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(749, 201);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(4);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(375, 33);
			this->txt_coursename->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label2->Location = System::Drawing::Point(600, 204);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Course name";
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(388, 15);
			this->lbl_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(380, 31);
			this->lbl_title->TabIndex = 4;
			this->lbl_title->Text = L"UPDATE SCORE OF STUDENTS";
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_Search->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Search->Location = System::Drawing::Point(336, 297);
			this->btn_Search->Margin = System::Windows::Forms::Padding(4);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(121, 47);
			this->btn_Search->TabIndex = 5;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &UpdateResult::btn_Search_Click);
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(218, 99);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(4);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(375, 33);
			this->txt_schoolyear->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label4->Location = System::Drawing::Point(84, 101);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 27);
			this->label4->TabIndex = 6;
			this->label4->Text = L"School Year";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label5->Location = System::Drawing::Point(636, 149);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 27);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Semester";
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_teacher->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_teacher->Location = System::Drawing::Point(749, 253);
			this->txt_teacher->Margin = System::Windows::Forms::Padding(4);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(375, 33);
			this->txt_teacher->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label6->Location = System::Drawing::Point(652, 256);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 27);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Teacher";
			// 
			// txt_credit
			// 
			this->txt_credit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_credit->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_credit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_credit->Location = System::Drawing::Point(748, 305);
			this->txt_credit->Margin = System::Windows::Forms::Padding(4);
			this->txt_credit->Name = L"txt_credit";
			this->txt_credit->ReadOnly = true;
			this->txt_credit->Size = System::Drawing::Size(119, 33);
			this->txt_credit->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label7->Location = System::Drawing::Point(644, 308);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 27);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Credit(s)";
			// 
			// txt_maxStu
			// 
			this->txt_maxStu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_maxStu->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_maxStu->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_maxStu->Location = System::Drawing::Point(1042, 305);
			this->txt_maxStu->Margin = System::Windows::Forms::Padding(4);
			this->txt_maxStu->Name = L"txt_maxStu";
			this->txt_maxStu->ReadOnly = true;
			this->txt_maxStu->Size = System::Drawing::Size(82, 33);
			this->txt_maxStu->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label8->Location = System::Drawing::Point(883, 308);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 27);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Max Students";
			// 
			// txt_StudentID
			// 
			this->txt_StudentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_StudentID->Location = System::Drawing::Point(218, 254);
			this->txt_StudentID->Margin = System::Windows::Forms::Padding(4);
			this->txt_StudentID->MaxLength = 15;
			this->txt_StudentID->Name = L"txt_StudentID";
			this->txt_StudentID->Size = System::Drawing::Size(375, 33);
			this->txt_StudentID->TabIndex = 17;
			this->txt_StudentID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label9->Location = System::Drawing::Point(92, 257);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 27);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Student ID";
			// 
			// txt_othermark
			// 
			this->txt_othermark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_othermark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_othermark->Location = System::Drawing::Point(749, 416);
			this->txt_othermark->Margin = System::Windows::Forms::Padding(4);
			this->txt_othermark->MaxLength = 7;
			this->txt_othermark->Name = L"txt_othermark";
			this->txt_othermark->ReadOnly = true;
			this->txt_othermark->Size = System::Drawing::Size(119, 33);
			this->txt_othermark->TabIndex = 20;
			this->txt_othermark->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_TextChanged);
			this->txt_othermark->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_doubleOnly_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label10->Location = System::Drawing::Point(615, 419);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 27);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Other Mark";
			// 
			// txt_midmark
			// 
			this->txt_midmark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_midmark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_midmark->Location = System::Drawing::Point(749, 463);
			this->txt_midmark->Margin = System::Windows::Forms::Padding(4);
			this->txt_midmark->MaxLength = 7;
			this->txt_midmark->Name = L"txt_midmark";
			this->txt_midmark->ReadOnly = true;
			this->txt_midmark->Size = System::Drawing::Size(119, 33);
			this->txt_midmark->TabIndex = 22;
			this->txt_midmark->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_TextChanged);
			this->txt_midmark->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_doubleOnly_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label11->Location = System::Drawing::Point(583, 466);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 27);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Midterm Mark";
			// 
			// txt_rateOther
			// 
			this->txt_rateOther->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_rateOther->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_rateOther->Location = System::Drawing::Point(1042, 415);
			this->txt_rateOther->Margin = System::Windows::Forms::Padding(4);
			this->txt_rateOther->MaxLength = 3;
			this->txt_rateOther->Name = L"txt_rateOther";
			this->txt_rateOther->ReadOnly = true;
			this->txt_rateOther->Size = System::Drawing::Size(82, 33);
			this->txt_rateOther->TabIndex = 24;
			this->txt_rateOther->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_TextChanged);
			this->txt_rateOther->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label12->Location = System::Drawing::Point(978, 418);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 27);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Rate";
			// 
			// txt_rateMid
			// 
			this->txt_rateMid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_rateMid->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_rateMid->Location = System::Drawing::Point(1042, 462);
			this->txt_rateMid->Margin = System::Windows::Forms::Padding(4);
			this->txt_rateMid->MaxLength = 3;
			this->txt_rateMid->Name = L"txt_rateMid";
			this->txt_rateMid->ReadOnly = true;
			this->txt_rateMid->Size = System::Drawing::Size(82, 33);
			this->txt_rateMid->TabIndex = 26;
			this->txt_rateMid->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_TextChanged);
			this->txt_rateMid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label13->Location = System::Drawing::Point(978, 465);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(58, 27);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Rate";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label14->Location = System::Drawing::Point(1126, 415);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(36, 31);
			this->label14->TabIndex = 27;
			this->label14->Text = L"%";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label16->Location = System::Drawing::Point(1126, 462);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(36, 31);
			this->label16->TabIndex = 29;
			this->label16->Text = L"%";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label15->Location = System::Drawing::Point(1126, 509);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 31);
			this->label15->TabIndex = 34;
			this->label15->Text = L"%";
			// 
			// txt_rateFinal
			// 
			this->txt_rateFinal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_rateFinal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_rateFinal->Location = System::Drawing::Point(1042, 509);
			this->txt_rateFinal->Margin = System::Windows::Forms::Padding(4);
			this->txt_rateFinal->MaxLength = 3;
			this->txt_rateFinal->Name = L"txt_rateFinal";
			this->txt_rateFinal->ReadOnly = true;
			this->txt_rateFinal->Size = System::Drawing::Size(82, 33);
			this->txt_rateFinal->TabIndex = 33;
			this->txt_rateFinal->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_TextChanged);
			this->txt_rateFinal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label17->Location = System::Drawing::Point(978, 512);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 27);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Rate";
			// 
			// txt_finalmark
			// 
			this->txt_finalmark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_finalmark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_finalmark->Location = System::Drawing::Point(748, 510);
			this->txt_finalmark->Margin = System::Windows::Forms::Padding(4);
			this->txt_finalmark->MaxLength = 7;
			this->txt_finalmark->Name = L"txt_finalmark";
			this->txt_finalmark->ReadOnly = true;
			this->txt_finalmark->Size = System::Drawing::Size(119, 33);
			this->txt_finalmark->TabIndex = 31;
			this->txt_finalmark->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_TextChanged);
			this->txt_finalmark->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_doubleOnly_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label18->Location = System::Drawing::Point(623, 513);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(119, 27);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Final Mark";
			// 
			// txt_totalmark
			// 
			this->txt_totalmark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_totalmark->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_totalmark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_totalmark->Location = System::Drawing::Point(749, 585);
			this->txt_totalmark->Margin = System::Windows::Forms::Padding(4);
			this->txt_totalmark->MaxLength = 10;
			this->txt_totalmark->Name = L"txt_totalmark";
			this->txt_totalmark->ReadOnly = true;
			this->txt_totalmark->Size = System::Drawing::Size(119, 33);
			this->txt_totalmark->TabIndex = 36;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label19->Location = System::Drawing::Point(620, 588);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(123, 27);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Total Mark";
			// 
			// btn_Update
			// 
			this->btn_Update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_Update->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Update->Location = System::Drawing::Point(856, 641);
			this->btn_Update->Margin = System::Windows::Forms::Padding(4);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(121, 47);
			this->btn_Update->TabIndex = 37;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = false;
			this->btn_Update->Click += gcnew System::EventHandler(this, &UpdateResult::btn_Update_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label20->Location = System::Drawing::Point(1127, 584);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(36, 31);
			this->label20->TabIndex = 40;
			this->label20->Text = L"%";
			// 
			// txt_rateTotal
			// 
			this->txt_rateTotal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_rateTotal->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_rateTotal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_rateTotal->Location = System::Drawing::Point(1042, 584);
			this->txt_rateTotal->Margin = System::Windows::Forms::Padding(4);
			this->txt_rateTotal->Name = L"txt_rateTotal";
			this->txt_rateTotal->ReadOnly = true;
			this->txt_rateTotal->Size = System::Drawing::Size(82, 33);
			this->txt_rateTotal->TabIndex = 39;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label21->Location = System::Drawing::Point(920, 588);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(116, 27);
			this->label21->TabIndex = 38;
			this->label21->Text = L"Total Rate";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_back->Location = System::Drawing::Point(4, 4);
			this->btn_back->Margin = System::Windows::Forms::Padding(4);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(54, 54);
			this->btn_back->TabIndex = 41;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &UpdateResult::btn_back_Click);
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(68, 5);
			this->pnl_title->Margin = System::Windows::Forms::Padding(4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pnl_title->Size = System::Drawing::Size(1121, 60);
			this->pnl_title->TabIndex = 42;
			this->pnl_title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateResult::pnl_title_MouseDown);
			this->pnl_title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateResult::pnl_title_MouseMove);
			// 
			// txt_StudentID_2
			// 
			this->txt_StudentID_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_StudentID_2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_StudentID_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_StudentID_2->Location = System::Drawing::Point(218, 417);
			this->txt_StudentID_2->Margin = System::Windows::Forms::Padding(4);
			this->txt_StudentID_2->Name = L"txt_StudentID_2";
			this->txt_StudentID_2->ReadOnly = true;
			this->txt_StudentID_2->Size = System::Drawing::Size(375, 33);
			this->txt_StudentID_2->TabIndex = 44;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label3->Location = System::Drawing::Point(93, 419);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 27);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Student ID";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_schoolyear_start->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txt_schoolyear_start->Location = System::Drawing::Point(218, 149);
			this->txt_schoolyear_start->Margin = System::Windows::Forms::Padding(4);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(131, 33);
			this->txt_schoolyear_start->TabIndex = 46;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_SchoolYear_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label22->Location = System::Drawing::Point(147, 151);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(66, 27);
			this->label22->TabIndex = 45;
			this->label22->Text = L"Start:";
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear_end->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(462, 149);
			this->txt_schoolyear_end->Margin = System::Windows::Forms::Padding(4);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(131, 33);
			this->txt_schoolyear_end->TabIndex = 48;
			this->txt_schoolyear_end->TextChanged += gcnew System::EventHandler(this, &UpdateResult::txt_SchoolYear_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label23->Location = System::Drawing::Point(391, 150);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 27);
			this->label23->TabIndex = 47;
			this->label23->Text = L"End:";
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(761, 149);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(4);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 49;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &UpdateResult::chkbox_sem1_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(835, 149);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(4);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 50;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &UpdateResult::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(909, 149);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(4);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 51;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &UpdateResult::chkbox_sem3_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->btn_back);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(4, 4);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Padding = System::Windows::Forms::Padding(4);
			this->panel3->Size = System::Drawing::Size(62, 720);
			this->panel3->TabIndex = 52;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 662);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 54);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 53;
			this->pictureBox1->TabStop = false;
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_account->Location = System::Drawing::Point(72, 586);
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &UpdateResult::btn_exit_Click);
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
			this->btn_logout->Click += gcnew System::EventHandler(this, &UpdateResult::btn_logout_Click);
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
			this->btn_aboutUs->Click += gcnew System::EventHandler(this, &UpdateResult::btn_aboutUs_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel1->Location = System::Drawing::Point(741, 564);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(425, 3);
			this->panel1->TabIndex = 131;
			// 
			// UpdateResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1194, 728);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->txt_StudentID_2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->txt_rateTotal);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->txt_totalmark);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txt_rateFinal);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txt_finalmark);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_rateMid);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_rateOther);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txt_midmark);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_othermark);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_StudentID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_maxStu);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_credit);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pnl_title);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UpdateResult";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Load += gcnew System::EventHandler(this, &UpdateResult::UpdateResult_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_account->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateResult_Load(System::Object^ sender, System::EventArgs^ e) {

		if (g_currentSemester == nullptr) {
			if (g_currentSchoolYear == nullptr)
				MessageBox::Show("Can not find any SchoolYear! You must create a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
				MessageBox::Show("Can not find any Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

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

		txt_othermark->ReadOnly = true;
		txt_othermark->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_midmark->ReadOnly = true;
		txt_midmark->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_finalmark->ReadOnly = true;
		txt_finalmark->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_rateOther->ReadOnly = true;
		txt_rateOther->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_rateMid->ReadOnly = true;
		txt_rateMid->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_rateFinal->ReadOnly = true;
		txt_rateFinal->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		this->curCourse = nullptr;
		this->curStudent = nullptr;

		lbl_title->BackColor = System::Drawing::Color::Transparent;

		btn_Update->Enabled = false;
		btn_Update->Cursor = Cursors::No;
	}

	private: System::Void txt_intOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// integers only
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))	e->Handled = true;
	}

	private: System::Void txt_TextChanged(Object^ sender, EventArgs^ e) {
		double val_otherMark, val_midtermMark, val_finalMark;
		int rateOther = -1, rateMid = -1, rateFinal = -1;
		try {
			val_otherMark = System::Convert::ToDouble(txt_othermark->Text); // Use the input_value as a floating-point number
			val_midtermMark = System::Convert::ToDouble(txt_midmark->Text); // Use the input_value as a floating-point number
			val_finalMark = System::Convert::ToDouble(txt_finalmark->Text); // Use the input_value as a floating-point number
			// throw an exception if mark cannot be converted to `double`

			rateOther = System::Convert::ToInt32(txt_rateOther->Text);
			rateMid = System::Convert::ToInt32(txt_rateMid->Text);
			rateFinal = System::Convert::ToInt32(txt_rateFinal->Text);
			// throw an exception if rate cannot be converted to `integer`
		}
		catch (System::FormatException^) {
			// Handle the case when the input is not a valid floating-point number
			txt_totalmark->Text = "";
			txt_rateTotal->Text = "";
			return;
		}

		double tmpFinal = (val_otherMark * rateOther + val_midtermMark * rateMid + val_finalMark * rateFinal) / 100.0;
		txt_totalmark->Text = tmpFinal.ToString("F2");
		txt_rateTotal->Text = (rateOther + rateMid + rateFinal).ToString();
	}

	private: System::Void txt_doubleOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//// Allow digits, decimal point, backspace, and delete keys
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && e->KeyChar != '\u007F')	e->Handled = true;
		// '\u007F' == backspace
	}

	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
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

		if (this->curSemester->course.head == nullptr) {
			MessageBox::Show("Can not find any Courses in this Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		this->curCourse = this->curSemester->course.head;

		while (this->curCourse) {
			if (id == this->curCourse->data->ID) {
			_skipfindcourse:
				txt_coursename->Text = gcnew System::String((this->curCourse->data->name).c_str());
				txt_teacher->Text = gcnew System::String((this->curCourse->data->teacher).c_str());
				txt_credit->Text = System::Convert::ToString(this->curCourse->data->credit);
				txt_maxStu->Text = System::Convert::ToString(this->curCourse->data->maxStudents);
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

		// then search for student in the course
		id = msclr::interop::marshal_as<std::string>(txt_StudentID->Text);
		this->curStudent = this->curCourse->data->students.head; //type == DLL<SCOREBOARD*>*
		while (this->curStudent) {
			if (this->curStudent->data->student->studentID == id) {
				txt_othermark->ReadOnly = false;
				txt_othermark->BackColor = System::Drawing::Color::FromArgb(255, 251, 172);
				txt_othermark->Text = this->curStudent->data->otherMark.ToString("F2");

				txt_midmark->ReadOnly = false;
				txt_midmark->BackColor = System::Drawing::Color::FromArgb(255, 251, 172);
				txt_midmark->Text = this->curStudent->data->midtermMark.ToString("F2");

				txt_finalmark->ReadOnly = false;
				txt_finalmark->BackColor = System::Drawing::Color::FromArgb(255, 251, 172);
				txt_finalmark->Text = this->curStudent->data->finalMark.ToString("F2");

				txt_rateOther->ReadOnly = false;
				txt_rateOther->BackColor = System::Drawing::Color::FromArgb(255, 251, 172);
				txt_rateOther->ForeColor = System::Drawing::Color::FromArgb(255, 132, 0);

				txt_rateMid->ReadOnly = false;
				txt_rateMid->BackColor = System::Drawing::Color::FromArgb(255, 251, 172);
				txt_rateMid->ForeColor = System::Drawing::Color::FromArgb(255, 132, 0);

				txt_rateFinal->ReadOnly = false;
				txt_rateFinal->BackColor = System::Drawing::Color::FromArgb(255, 251, 172);
				txt_rateFinal->ForeColor = System::Drawing::Color::FromArgb(255, 132, 0);

				txt_StudentID_2->Text = txt_StudentID->Text;
				btn_Update->Enabled = true;
				btn_Update->Cursor = Cursors::Hand;
				return;
			}
			this->curStudent = this->curStudent->next;
		}
		if (!this->curStudent) {
			if (this->curCourse->data->students.head == nullptr) {
				MessageBox::Show("Can not find any Students in this Course! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				this->Close();
				this->sourceForm->Show();
				return;
			}
			else {
				id = "Cannot find student " + id;
				System::String^ message = gcnew System::String(id.c_str());
				MessageBox::Show(message);
				return;
			}
		}
	}

	private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->curStudent) {
			MessageBox::Show("Whose result will be updated???");
		}
		int rateOther = -1, rateMid = -1, rateFinal = -1;

		try {
			rateOther = System::Convert::ToInt32(txt_rateOther->Text);
			rateMid = System::Convert::ToInt32(txt_rateMid->Text);
			rateFinal = System::Convert::ToInt32(txt_rateFinal->Text);
		}
		catch (System::FormatException^) {
			MessageBox::Show("Rate is not valid. Please enter again!");
			return;
		}

		if (rateOther + rateMid + rateFinal != 100) {
			MessageBox::Show("Total rate must be 100%");
			txt_rateTotal->Text = (rateOther + rateMid + rateFinal).ToString();
			return;
		}

		double val_otherMark, val_midtermMark, val_finalMark;
		try {
			val_otherMark = System::Convert::ToDouble(txt_othermark->Text); // Use the input_value as a floating-point number
			val_midtermMark = System::Convert::ToDouble(txt_midmark->Text); // Use the input_value as a floating-point number
			val_finalMark = System::Convert::ToDouble(txt_finalmark->Text); // Use the input_value as a floating-point number
		}
		catch (System::FormatException^) {
			// Handle the case when the input is not a valid floating-point number
			MessageBox::Show("Mark is not valid. Please enter again!");
			return;
		}
		if (val_otherMark > 10 || val_otherMark < 0 || val_midtermMark > 10 || val_midtermMark < 0 || val_finalMark > 10 || val_finalMark < 0) {
			MessageBox::Show("Score must be non-negative and less than or equal to 10");
			return;
		}

		curStudent->data->otherMark = val_otherMark;
		curStudent->data->midtermMark = val_midtermMark;
		curStudent->data->finalMark = val_finalMark;
		curStudent->data->totalMark = (val_otherMark * rateOther + val_midtermMark * rateMid + val_finalMark * rateFinal) / 100.0;

		txt_StudentID->Text = "";
		txt_StudentID_2->Text = "";

		txt_othermark->Text = "";
		txt_othermark->ReadOnly = true;
		this->txt_othermark->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_midmark->Text = "";
		txt_midmark->ReadOnly = true;
		this->txt_midmark->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_finalmark->Text = "";
		txt_finalmark->ReadOnly = true;
		this->txt_finalmark->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		//txt_rateOther->Text = "";
		txt_rateOther->ReadOnly = true;
		txt_rateOther->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		//txt_rateMid->Text = "";
		txt_rateMid->ReadOnly = true;
		txt_rateMid->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		//txt_rateFinal->Text = "";
		txt_rateFinal->ReadOnly = true;
		txt_rateFinal->BackColor = System::Drawing::Color::FromArgb(181, 213, 197);

		txt_coursename->Text = "";
		txt_teacher->Text = "";
		txt_credit->Text = "";
		txt_maxStu->Text = "";
		txt_totalmark->Text = "";
		txt_rateTotal->Text = "";

		btn_Update->Enabled = false;
		btn_Update->Cursor = Cursors::No;

		this->curStudent = nullptr;
		MessageBox::Show("Successfully updated");
	}

	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_coursename->Text = "";
		txt_teacher->Text = "";
		txt_credit->Text = "";
		txt_maxStu->Text = "";
		this->Close();
		this->sourceForm->Show();
	}

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

	private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
		Form^ form = gcnew AboutUs(this);
		this->Close();
		form->Show();
	}
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
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e);
};
}