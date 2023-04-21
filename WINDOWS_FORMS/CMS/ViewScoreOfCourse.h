#pragma once
#include<string>
#include "header.h"
#include <msclr/marshal_cppstd.h>
#include <cctype>
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary forViewScoreOfCourse
	/// </summary>
	public ref class ViewScoreOfCourse : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewScoreOfCourse(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			this->sourceForm = form;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewScoreOfCourse::btn_Search_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// 
		~ViewScoreOfCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		
		DLL<SCHOOLYEAR*>* curSchoolYear = nullptr;
		SEMESTER* curSem = nullptr;
		DLL<COURSE*>* curCourse = nullptr;

	private: System::Windows::Forms::Label^ lbl_courseID;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::TextBox^ txt_coursename;

	private: System::Windows::Forms::Label^ lbl_nameCourse;
	private: System::Windows::Forms::ListView^ listView;

	private: System::Windows::Forms::ColumnHeader^ col_ID;

	private: System::Windows::Forms::ColumnHeader^ col_firstname;
	private: System::Windows::Forms::ColumnHeader^ col_lastname;
	private: System::Windows::Forms::ColumnHeader^ col_othermark;
	private: System::Windows::Forms::ColumnHeader^ col_midtermMark;
	private: System::Windows::Forms::ColumnHeader^ col_finalmark;
	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::Label^ lbl_schoolyear;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::ColumnHeader^ col_totalMark;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DomainUpDown^ domainUD_schoolyear;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ColumnHeader^ col_no;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewScoreOfCourse::typeid));
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseID = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nameCourse = (gcnew System::Windows::Forms::Label());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->col_no = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_firstname = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_lastname = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_othermark = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_midtermMark = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_finalmark = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_totalMark = (gcnew System::Windows::Forms::ColumnHeader());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->lbl_schoolyear = (gcnew System::Windows::Forms::Label());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->domainUD_schoolyear = (gcnew System::Windows::Forms::DomainUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_courseID->Location = System::Drawing::Point(236, 163);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseID->MaxLength = 15;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(272, 33);
			this->txt_courseID->TabIndex = 94;
			// 
			// lbl_courseID
			// 
			this->lbl_courseID->AutoSize = true;
			this->lbl_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseID->Location = System::Drawing::Point(116, 166);
			this->lbl_courseID->Name = L"lbl_courseID";
			this->lbl_courseID->Size = System::Drawing::Size(116, 27);
			this->lbl_courseID->TabIndex = 93;
			this->lbl_courseID->Text = L"Course ID:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Cursor = System::Windows::Forms::Cursors::No;
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(236, 204);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_coursename->MaxLength = 30;
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(272, 33);
			this->txt_coursename->TabIndex = 92;
			// 
			// lbl_nameCourse
			// 
			this->lbl_nameCourse->AutoSize = true;
			this->lbl_nameCourse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_nameCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_nameCourse->Location = System::Drawing::Point(89, 207);
			this->lbl_nameCourse->Name = L"lbl_nameCourse";
			this->lbl_nameCourse->Size = System::Drawing::Size(144, 27);
			this->lbl_nameCourse->TabIndex = 91;
			this->lbl_nameCourse->Text = L"Course name";
			// 
			// listView
			// 
			this->listView->BackColor = System::Drawing::SystemColors::Info;
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->col_no, this->col_ID,
					this->col_firstname, this->col_lastname, this->col_othermark, this->col_midtermMark, this->col_finalmark, this->col_totalMark
			});
			this->listView->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->listView->FullRowSelect = true;
			this->listView->GridLines = true;
			this->listView->HideSelection = false;
			this->listView->Location = System::Drawing::Point(74, 275);
			this->listView->Margin = System::Windows::Forms::Padding(0);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(1046, 494);
			this->listView->TabIndex = 88;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			// 
			// col_no
			// 
			this->col_no->Text = L"No";
			this->col_no->Width = 36;
			// 
			// col_ID
			// 
			this->col_ID->Text = L"Student ID";
			this->col_ID->Width = 110;
			// 
			// col_firstname
			// 
			this->col_firstname->Text = L"First name";
			this->col_firstname->Width = 193;
			// 
			// col_lastname
			// 
			this->col_lastname->Text = L"Last name";
			this->col_lastname->Width = 120;
			// 
			// col_othermark
			// 
			this->col_othermark->Text = L"Other Mark";
			this->col_othermark->Width = 108;
			// 
			// col_midtermMark
			// 
			this->col_midtermMark->Text = L"Midterm Mark";
			this->col_midtermMark->Width = 127;
			// 
			// col_finalmark
			// 
			this->col_finalmark->Text = L"Final Mark";
			this->col_finalmark->Width = 88;
			// 
			// col_totalMark
			// 
			this->col_totalMark->Text = L"Total Mark";
			this->col_totalMark->Width = 98;
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(522, 123);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(112, 27);
			this->lbl_semester->TabIndex = 87;
			this->lbl_semester->Text = L"Semester:";
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->BackColor = System::Drawing::Color::Transparent;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_schoolyear->Location = System::Drawing::Point(96, 123);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(136, 27);
			this->lbl_schoolyear->TabIndex = 86;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::Transparent;
			this->lbl_title->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 23, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(333, 13);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(668, 64);
			this->lbl_title->TabIndex = 84;
			this->lbl_title->Text = L"The ScoreBoard of a Course ";
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
			this->btn_Search->Location = System::Drawing::Point(599, 163);
			this->btn_Search->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(140, 50);
			this->btn_Search->TabIndex = 95;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewScoreOfCourse::btn_Search_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel1->Size = System::Drawing::Size(68, 765);
			this->panel1->TabIndex = 139;
			// 
			// pictureBox1
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			//this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 765);
			this->account->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(60, 65);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 102;
			this->account->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(4, 5);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 57;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ViewScoreOfCourse::btn_back_Click);
			// 
			// domainUD_schoolyear
			// 
			this->domainUD_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->domainUD_schoolyear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->domainUD_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->domainUD_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->domainUD_schoolyear->Location = System::Drawing::Point(236, 120);
			this->domainUD_schoolyear->Name = L"domainUD_schoolyear";
			this->domainUD_schoolyear->ReadOnly = true;
			this->domainUD_schoolyear->Size = System::Drawing::Size(272, 33);
			this->domainUD_schoolyear->TabIndex = 140;
			this->domainUD_schoolyear->Text = L"School Year";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(72, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1048, 66);
			this->panel2->TabIndex = 141;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(270, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(519, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"VIEW THE SCOREBOARD A COURSE";
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
			this->chkbox_sem3->Location = System::Drawing::Point(772, 123);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 180;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = false;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOfCourse::chkbox_sem3_CheckedChanged);
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
			this->chkbox_sem2->Location = System::Drawing::Point(708, 123);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 179;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = false;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOfCourse::chkbox_sem2_CheckedChanged);
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
			this->chkbox_sem1->Location = System::Drawing::Point(645, 123);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 178;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = false;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOfCourse::chkbox_sem1_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(914, 120);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(120, 120);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 181;
			this->pictureBox2->TabStop = false;
			// 
			// ViewScoreOfCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1124, 773);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->domainUD_schoolyear);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->lbl_courseID);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->lbl_nameCourse);
			this->Controls->Add(this->listView);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->lbl_schoolyear);
			this->Controls->Add(this->lbl_title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ViewScoreOfCourse";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &ViewScoreOfCourse::ViewScoreOfCourse_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOfCourse::chkbox_sem1_CheckedChanged);
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
	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		listView->Items->Clear();
		DLL<SCHOOLYEAR*>* cur = L_SchoolYear.head;
		std::string inputSchoolyear = msclr::interop::marshal_as<std::string>(domainUD_schoolyear->SelectedItem->ToString());
		inputSchoolyear = inputSchoolyear.substr(0, 4);
		int begin = stoi(inputSchoolyear);
		while (cur->data->begin != begin)
			cur = cur->next;
		// this schoolyear must exist in the list
		// ==>> cur is always != nullptr
		if (chkbox_sem1->Checked) {
			if (!cur->data->sem1) {
				MessageBox::Show("This semester does not exist");
				return;
			}
			curSem = cur->data->sem1;
		}
		else if (chkbox_sem2->Checked) {
			if (!cur->data->sem2) {
				MessageBox::Show("This semester does not exist");
				return;
			}
			curSem = cur->data->sem2;
		}
		else if (chkbox_sem3->Checked) {
			if (!cur->data->sem3) {
				MessageBox::Show("This semester does not exist");
				return;
			}
			curSem = cur->data->sem3;
		}
		else {
			MessageBox::Show("Please choose a semester");
			return;
		}

		curCourse = curSem->course.head;
		std::string courseID = msclr::interop::marshal_as<std::string>(txt_courseID->Text);
		while (curCourse && curCourse->data->ID != courseID)	curCourse = curCourse->next;
		if (!curCourse) {
			MessageBox::Show("This course does not exist");
			return;
		}
		txt_coursename->Text = msclr::interop::marshal_as<System::String^>(curCourse->data->name.c_str());
		int no = 1;
		DLL<SCOREBOARD*>* curStu = curCourse->data->students.head;
		while (curStu) {
			ListViewItem^ item = gcnew ListViewItem(no.ToString());
			item->SubItems->Add(msclr::interop::marshal_as<System::String^>(curStu->data->student->studentID));
			item->SubItems->Add(msclr::interop::marshal_as<System::String^>(curStu->data->student->firstname));
			item->SubItems->Add(msclr::interop::marshal_as<System::String^>(curStu->data->student->lastname));
			item->SubItems->Add(curStu->data->otherMark.ToString());
			item->SubItems->Add(curStu->data->midtermMark.ToString());
			item->SubItems->Add(curStu->data->finalMark.ToString());
			item->SubItems->Add(curStu->data->totalMark.ToString());
			listView->Items->Add(item);
			no++;
			curStu = curStu->next;
		}
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void ViewScoreOfCourse_Load(System::Object^ sender, System::EventArgs^ e) {
		DLL<SCHOOLYEAR*>* cur = L_SchoolYear.head;
		while (cur) {
			this->domainUD_schoolyear->Items->Add(gcnew System::String((to_string(cur->data->begin) + " - " + to_string(cur->data->end)).c_str()));
			cur = cur->next;
		}
		domainUD_schoolyear->SelectedItem = msclr::interop::marshal_as<System::String^>((to_string(L_SchoolYear.tail->data->begin) + " - " + to_string(L_SchoolYear.tail->data->end)).c_str());
		chkbox_sem1->Checked = true;
		chkbox_sem2->Checked = false;
		chkbox_sem3->Checked = false;
	}
};
}
