#pragma once

#include<string>
#include"header.h"
#include"AboutUs.h"
#include<msclr/marshal_cppstd.h>



namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewAListStudentInACourse
	/// </summary>
	public ref class ViewAListStudentInACourse : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Panel^ pnl_account;
	private: System::Windows::Forms::Button^ btn_aboutUs;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	public:

	public:
	public:
		System::Windows::Forms::Form^ loginForm;
		ViewAListStudentInACourse(System::Windows::Forms::Form^ form, System::Windows::Forms::Form^ loginform)
		{
			this->sourceForm = form;
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
		~ViewAListStudentInACourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListView^ listview_student;
	private: System::Windows::Forms::ColumnHeader^ col_no;
	private: System::Windows::Forms::ColumnHeader^ col_studentID;
	private: System::Windows::Forms::ColumnHeader^ col_firstname;
	private: System::Windows::Forms::ColumnHeader^ col_lastname;
	private: System::Windows::Forms::ColumnHeader^ col_gender;
	private: System::Windows::Forms::ColumnHeader^ col_dob;
	private: System::Windows::Forms::ColumnHeader^ col_socialID;
	private: System::Windows::Forms::ColumnHeader^ col_class;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;
	private: System::Windows::Forms::Label^ lbl_end;

	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;
	private: System::Windows::Forms::Label^ lbl_start;

	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ lbl_schoolyear;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::Label^ lbl_teacher;
	private: System::Windows::Forms::TextBox^ txt_coursename;
	private: System::Windows::Forms::Label^ lbl_coursename;
	private: System::Windows::Forms::TextBox^ txt_courseID;

	private: System::Windows::Forms::Label^ lbl_courseID;
	private: System::Windows::Forms::TextBox^ txt_totalstudent;
	private: System::Windows::Forms::Label^ lbl_totalstudent;
	private: System::Windows::Forms::TextBox^ txt_dayperform;
	private: System::Windows::Forms::Label^ lbl_dayperform;
	private: System::Windows::Forms::TextBox^ txt_session;
	private: System::Windows::Forms::Label^ lbl_session;

	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewAListStudentInACourse::typeid));
			this->listview_student = (gcnew System::Windows::Forms::ListView());
			this->col_no = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_studentID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_firstname = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_lastname = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_gender = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_dob = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_socialID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_class = (gcnew System::Windows::Forms::ColumnHeader());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->lbl_end = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->lbl_start = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->lbl_schoolyear = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->lbl_teacher = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->lbl_coursename = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseID = (gcnew System::Windows::Forms::Label());
			this->txt_totalstudent = (gcnew System::Windows::Forms::TextBox());
			this->lbl_totalstudent = (gcnew System::Windows::Forms::Label());
			this->txt_dayperform = (gcnew System::Windows::Forms::TextBox());
			this->lbl_dayperform = (gcnew System::Windows::Forms::Label());
			this->txt_session = (gcnew System::Windows::Forms::TextBox());
			this->lbl_session = (gcnew System::Windows::Forms::Label());
			this->pnl_account = (gcnew System::Windows::Forms::Panel());
			this->btn_aboutUs = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->pnl_title->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_account->SuspendLayout();
			this->SuspendLayout();
			// 
			// listview_student
			// 
			this->listview_student->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listview_student->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->col_no, this->col_studentID,
					this->col_firstname, this->col_lastname, this->col_gender, this->col_dob, this->col_socialID, this->col_class
			});
			this->listview_student->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->listview_student->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->listview_student->FullRowSelect = true;
			this->listview_student->GridLines = true;
			this->listview_student->HideSelection = false;
			this->listview_student->Location = System::Drawing::Point(71, 238);
			this->listview_student->Margin = System::Windows::Forms::Padding(4);
			this->listview_student->Name = L"listview_student";
			this->listview_student->Size = System::Drawing::Size(1099, 368);
			this->listview_student->TabIndex = 0;
			this->listview_student->UseCompatibleStateImageBehavior = false;
			this->listview_student->View = System::Windows::Forms::View::Details;
			// 
			// col_no
			// 
			this->col_no->Text = L"No";
			this->col_no->Width = 40;
			// 
			// col_studentID
			// 
			this->col_studentID->Text = L"Student ID";
			this->col_studentID->Width = 100;
			// 
			// col_firstname
			// 
			this->col_firstname->Text = L"FirstName";
			this->col_firstname->Width = 190;
			// 
			// col_lastname
			// 
			this->col_lastname->Text = L"LastName";
			this->col_lastname->Width = 100;
			// 
			// col_gender
			// 
			this->col_gender->Text = L"Gender";
			this->col_gender->Width = 90;
			// 
			// col_dob
			// 
			this->col_dob->Text = L"Date of Birth";
			this->col_dob->Width = 120;
			// 
			// col_socialID
			// 
			this->col_socialID->Text = L"Social ID";
			this->col_socialID->Width = 150;
			// 
			// col_class
			// 
			this->col_class->Text = L"Class";
			this->col_class->Width = 90;
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(62, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(1109, 61);
			this->pnl_title->TabIndex = 86;
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(375, 13);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(408, 31);
			this->lbl_title->TabIndex = 5;
			this->lbl_title->Text = L"LIST OF STUDENTS IN A COURSE";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btn_back);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4);
			this->panel1->Size = System::Drawing::Size(60, 602);
			this->panel1->TabIndex = 87;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 544);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 52);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 112;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ViewAListStudentInACourse::pictureBox1_Click);
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_back->Location = System::Drawing::Point(4, 4);
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(52, 52);
			this->btn_back->TabIndex = 56;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewAListStudentInACourse::btn_back_Click);
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Search->Location = System::Drawing::Point(249, 179);
			this->btn_Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(80, 40);
			this->btn_Search->TabIndex = 98;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewAListStudentInACourse::btn_Search_Click);
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear_end->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(346, 109);
			this->txt_schoolyear_end->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(83, 29);
			this->txt_schoolyear_end->TabIndex = 97;
			// 
			// lbl_end
			// 
			this->lbl_end->AutoSize = true;
			this->lbl_end->BackColor = System::Drawing::Color::Transparent;
			this->lbl_end->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_end->Location = System::Drawing::Point(293, 114);
			this->lbl_end->Name = L"lbl_end";
			this->lbl_end->Size = System::Drawing::Size(47, 24);
			this->lbl_end->TabIndex = 96;
			this->lbl_end->Text = L"End:";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_schoolyear_start->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear_start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_start->Location = System::Drawing::Point(196, 109);
			this->txt_schoolyear_start->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(83, 29);
			this->txt_schoolyear_start->TabIndex = 95;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &ViewAListStudentInACourse::txt_schoolyear_start_TextChanged);
			// 
			// lbl_start
			// 
			this->lbl_start->AutoSize = true;
			this->lbl_start->BackColor = System::Drawing::Color::Transparent;
			this->lbl_start->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_start->Location = System::Drawing::Point(129, 114);
			this->lbl_start->Name = L"lbl_start";
			this->lbl_start->Size = System::Drawing::Size(56, 24);
			this->lbl_start->TabIndex = 94;
			this->lbl_start->Text = L"Start:";
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(287, 147);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(42, 28);
			this->chkbox_sem3->TabIndex = 93;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &ViewAListStudentInACourse::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(241, 147);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(42, 28);
			this->chkbox_sem2->TabIndex = 92;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &ViewAListStudentInACourse::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(196, 147);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(42, 28);
			this->chkbox_sem1->TabIndex = 91;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ViewAListStudentInACourse::chkbox_sem1_CheckedChanged);
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(91, 151);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(94, 24);
			this->lbl_semester->TabIndex = 90;
			this->lbl_semester->Text = L"Semester:";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(196, 73);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(233, 29);
			this->txt_schoolyear->TabIndex = 89;
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_schoolyear->Location = System::Drawing::Point(70, 78);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(115, 24);
			this->lbl_schoolyear->TabIndex = 88;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(740, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 29);
			this->label1->TabIndex = 99;
			this->label1->Text = L"Course Information";
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_teacher->Location = System::Drawing::Point(607, 189);
			this->txt_teacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(238, 29);
			this->txt_teacher->TabIndex = 103;
			// 
			// lbl_teacher
			// 
			this->lbl_teacher->AutoSize = true;
			this->lbl_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_teacher->Location = System::Drawing::Point(462, 195);
			this->lbl_teacher->Name = L"lbl_teacher";
			this->lbl_teacher->Size = System::Drawing::Size(139, 24);
			this->lbl_teacher->TabIndex = 102;
			this->lbl_teacher->Text = L"Teacher Name:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(607, 152);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(238, 29);
			this->txt_coursename->TabIndex = 101;
			// 
			// lbl_coursename
			// 
			this->lbl_coursename->AutoSize = true;
			this->lbl_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_coursename->Location = System::Drawing::Point(469, 157);
			this->lbl_coursename->Name = L"lbl_coursename";
			this->lbl_coursename->Size = System::Drawing::Size(129, 24);
			this->lbl_coursename->TabIndex = 100;
			this->lbl_coursename->Text = L"Course Name:";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_courseID->Location = System::Drawing::Point(607, 115);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseID->MaxLength = 10;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(238, 29);
			this->txt_courseID->TabIndex = 105;
			// 
			// lbl_courseID
			// 
			this->lbl_courseID->AutoSize = true;
			this->lbl_courseID->BackColor = System::Drawing::Color::Transparent;
			this->lbl_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseID->Location = System::Drawing::Point(501, 120);
			this->lbl_courseID->Name = L"lbl_courseID";
			this->lbl_courseID->Size = System::Drawing::Size(97, 24);
			this->lbl_courseID->TabIndex = 104;
			this->lbl_courseID->Text = L"Course ID:";
			// 
			// txt_totalstudent
			// 
			this->txt_totalstudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_totalstudent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_totalstudent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_totalstudent->Location = System::Drawing::Point(1047, 189);
			this->txt_totalstudent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_totalstudent->Name = L"txt_totalstudent";
			this->txt_totalstudent->ReadOnly = true;
			this->txt_totalstudent->Size = System::Drawing::Size(110, 29);
			this->txt_totalstudent->TabIndex = 107;
			// 
			// lbl_totalstudent
			// 
			this->lbl_totalstudent->AutoSize = true;
			this->lbl_totalstudent->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_totalstudent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_totalstudent->Location = System::Drawing::Point(901, 195);
			this->lbl_totalstudent->Name = L"lbl_totalstudent";
			this->lbl_totalstudent->Size = System::Drawing::Size(139, 24);
			this->lbl_totalstudent->TabIndex = 106;
			this->lbl_totalstudent->Text = L"Total Students:";
			// 
			// txt_dayperform
			// 
			this->txt_dayperform->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_dayperform->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_dayperform->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_dayperform->Location = System::Drawing::Point(1047, 115);
			this->txt_dayperform->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_dayperform->Name = L"txt_dayperform";
			this->txt_dayperform->ReadOnly = true;
			this->txt_dayperform->Size = System::Drawing::Size(110, 29);
			this->txt_dayperform->TabIndex = 109;
			// 
			// lbl_dayperform
			// 
			this->lbl_dayperform->AutoSize = true;
			this->lbl_dayperform->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_dayperform->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_dayperform->Location = System::Drawing::Point(896, 120);
			this->lbl_dayperform->Name = L"lbl_dayperform";
			this->lbl_dayperform->Size = System::Drawing::Size(144, 24);
			this->lbl_dayperform->TabIndex = 108;
			this->lbl_dayperform->Text = L"Day performed:";
			// 
			// txt_session
			// 
			this->txt_session->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_session->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_session->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_session->Location = System::Drawing::Point(1047, 152);
			this->txt_session->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_session->Name = L"txt_session";
			this->txt_session->ReadOnly = true;
			this->txt_session->Size = System::Drawing::Size(110, 29);
			this->txt_session->TabIndex = 111;
			// 
			// lbl_session
			// 
			this->lbl_session->AutoSize = true;
			this->lbl_session->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_session->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_session->Location = System::Drawing::Point(866, 157);
			this->lbl_session->Name = L"lbl_session";
			this->lbl_session->Size = System::Drawing::Size(174, 24);
			this->lbl_session->TabIndex = 110;
			this->lbl_session->Text = L"Session performed:";
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Location = System::Drawing::Point(70, 471);
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Size = System::Drawing::Size(178, 135);
			this->pnl_account->TabIndex = 112;
			this->pnl_account->Visible = false;
			// 
			// btn_aboutUs
			// 
			this->btn_aboutUs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_aboutUs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_aboutUs->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_aboutUs->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_aboutUs->Location = System::Drawing::Point(3, 0);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(172, 45);
			this->btn_aboutUs->TabIndex = 97;
			this->btn_aboutUs->Text = L"About us";
			this->btn_aboutUs->UseVisualStyleBackColor = false;
			this->btn_aboutUs->Click += gcnew System::EventHandler(this, &ViewAListStudentInACourse::btn_aboutUs_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_exit->Location = System::Drawing::Point(3, 90);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(172, 45);
			this->btn_exit->TabIndex = 99;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &ViewAListStudentInACourse::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_logout->Location = System::Drawing::Point(3, 45);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(172, 45);
			this->btn_logout->TabIndex = 98;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &ViewAListStudentInACourse::btn_logout_Click);
			// 
			// ViewAListStudentInACourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1178, 610);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->txt_session);
			this->Controls->Add(this->lbl_session);
			this->Controls->Add(this->txt_dayperform);
			this->Controls->Add(this->lbl_dayperform);
			this->Controls->Add(this->txt_totalstudent);
			this->Controls->Add(this->lbl_totalstudent);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->lbl_courseID);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->lbl_teacher);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->lbl_coursename);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->lbl_end);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->lbl_start);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->lbl_schoolyear);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->listview_student);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewAListStudentInACourse";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Text = L"ViewAListStudentInACourse";
			this->Load += gcnew System::EventHandler(this, &ViewAListStudentInACourse::ViewAListStudentInACourse_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_account->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void viewnone() {
			ListViewItem^ item = listview_student->Items->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
		}
#pragma endregion
	private: System::Void ViewAListStudentInACourse_Load(System::Object^ sender, System::EventArgs^ e) {
		txt_schoolyear_start->Text = System::Convert::ToString(g_currentSchoolYear->begin);
		switch (g_currentSemester->No)
		{
		case 1:
		{
			chkbox_sem1->Checked = true;
			break;
		}
		case 2:
		{
			chkbox_sem2->Checked = true;
			break;
		}
		case 3:
		{
			chkbox_sem3->Checked = true;
			break;
		}
		default:
			break;
		}
	}
	private: System::Void chkbox_sem1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_sem1->Checked) {
			chkbox_sem2->Checked = 0;
			chkbox_sem3->Checked = 0;
		}
	}
	private: System::Void chkbox_sem2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_sem2->Checked) {
			chkbox_sem1->Checked = 0;
			chkbox_sem3->Checked = 0;
		}
	}
	private: System::Void chkbox_sem3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_sem3->Checked) {
			chkbox_sem1->Checked = 0;
			chkbox_sem2->Checked = 0;
		}
	}
	private: System::Void txt_schoolyear_start_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_account->Visible = !pnl_account->Visible;
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		listview_student->Items->Clear();

		txt_coursename->Text = "";
		txt_teacher->Text = "";
		txt_dayperform->Text = "";
		txt_session->Text = "";
		txt_totalstudent->Text = "";

		int yearbegin;
		yearbegin = System::Convert::ToInt32(txt_schoolyear_start->Text);

		DLL<SCHOOLYEAR*>* cur = L_SchoolYear.head;
		while (cur && cur->data->begin != yearbegin) {
			cur = cur->next;
		}
		if (cur == nullptr) {
			txt_courseID->Text = "";
			MessageBox::Show("This SchoolYear does not exist!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}
		SEMESTER* sem = nullptr;
		if (chkbox_sem1->Checked && cur->data->sem1 != nullptr)
			sem = cur->data->sem1;
		if (chkbox_sem2->Checked && cur->data->sem2 != nullptr)
			sem = cur->data->sem2;
		if (chkbox_sem3->Checked && cur->data->sem3 != nullptr)
			sem = cur->data->sem3;

		if (sem == nullptr) {
			txt_courseID->Text = "";
			if (cur->data->sem1 == nullptr && cur->data->sem2 == nullptr && cur->data->sem3 == nullptr)
				MessageBox::Show("This SchoolYear does not have any Semesters! Please Create new one!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("This Semester does not occur!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}

		DLL<COURSE*>* list = sem->course.head;
		while (list != nullptr && gcnew System::String((list->data->ID).c_str()) != txt_courseID->Text)
			list = list->next;
		if (list == nullptr) {
			if (sem->course.head == nullptr)
				MessageBox::Show("This Semester does not have any Courses! Please Add new one!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("The Course [" + txt_courseID->Text + "] does not exist! Input again!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			txt_courseID->Text = "";
			viewnone();
			return;
		}

		txt_totalstudent->Text = "0";
		txt_coursename->Text = gcnew System::String((list->data->name).c_str());
		txt_teacher->Text = gcnew System::String((list->data->teacher).c_str());
		txt_dayperform->Text = gcnew System::String((DayToString(list->data->day)).c_str());
		switch (list->data->session)
		{
		case S1:
		{
			txt_session->Text = "S1 (07:30)";
			break;
		}
		case S2:
		{
			txt_session->Text = "S2 (09:30)";
			break;
		}
		case S3:
		{
			txt_session->Text = "S3 (11:30)";
			break;
		}
		case S4:
		{
			txt_session->Text = "S4 (15:30)";
			break;
		}
		default:
			break;
		}

		DLL<SCOREBOARD*>* stu = list->data->students.head;
		if (stu == nullptr) {
			MessageBox::Show("This Course does not have any Students! Please Add new one!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}
		int count = 1;
		while (stu != nullptr) {
			STUDENT* s = stu->data->student;
			ListViewItem^ item = listview_student->Items->Add(System::Convert::ToString(count));
			item->SubItems->Add(gcnew System::String((s->studentID).c_str()));
			item->SubItems->Add(gcnew System::String((s->firstname).c_str()));
			item->SubItems->Add(gcnew System::String((s->lastname).c_str()));
			if (s->gender == 0)
				item->SubItems->Add("Male");
			else
				item->SubItems->Add("Female");
			item->SubItems->Add(gcnew System::String((DateToString(s->DoB)).c_str()));
			item->SubItems->Add(gcnew System::String((s->socialID).c_str()));
			item->SubItems->Add(gcnew System::String((s->Class->convertToString()).c_str()));

			count++;
			stu = stu->next;
		}

		txt_totalstudent->Text = System::Convert::ToString(count - 1);
	}
	private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ form = gcnew CMS::AboutUs(this);
		form->Show();
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
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