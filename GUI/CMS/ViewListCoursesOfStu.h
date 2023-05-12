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
	/// Summary for ViewListCoursesOfStu
	/// </summary>
	public ref class ViewListCoursesOfStu : public System::Windows::Forms::Form
	{
	public:
		ViewListCoursesOfStu(System::Windows::Forms::Form^ form, System::Windows::Forms::Form^ loginform)
		{
			this->loginForm = loginform;
			this->sourceForm = form;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewListCoursesOfStu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form^ sourceForm;
	private: System::Windows::Forms::Form^ loginForm;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::Label^ lbl_schoolyear;
	private: System::Windows::Forms::ListView^ listview_course;
	private: System::Windows::Forms::ColumnHeader^ col_no;
	private: System::Windows::Forms::ColumnHeader^ col_ID;
	private: System::Windows::Forms::ColumnHeader^ col_name;
	private: System::Windows::Forms::ColumnHeader^ col_teacher;
	private: System::Windows::Forms::ColumnHeader^ col_credit;
	private: System::Windows::Forms::ColumnHeader^ col_maxstu;
	private: System::Windows::Forms::ColumnHeader^ col_day;
	private: System::Windows::Forms::ColumnHeader^ col_session;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::TextBox^ txt_fullname;
	private: System::Windows::Forms::Label^ lbl_fullname;
	private: System::Windows::Forms::TextBox^ txt_studentID;
	private: System::Windows::Forms::Label^ lbl_studentID;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pnl_account;
	private: System::Windows::Forms::Button^ btn_aboutUs;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::PictureBox^ account;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewListCoursesOfStu::typeid));
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->lbl_schoolyear = (gcnew System::Windows::Forms::Label());
			this->listview_course = (gcnew System::Windows::Forms::ListView());
			this->col_no = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_teacher = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_credit = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_maxstu = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_day = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_session = (gcnew System::Windows::Forms::ColumnHeader());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_fullname = (gcnew System::Windows::Forms::TextBox());
			this->lbl_fullname = (gcnew System::Windows::Forms::Label());
			this->txt_studentID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_studentID = (gcnew System::Windows::Forms::Label());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_account = (gcnew System::Windows::Forms::Panel());
			this->btn_aboutUs = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->pnl_title->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->pnl_account->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(230, 13);
			this->lbl_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(653, 37);
			this->lbl_title->TabIndex = 6;
			this->lbl_title->Text = L"VIEW YOUR COURSE IN CURRENT SEMESTER";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_back->Location = System::Drawing::Point(4, 4);
			this->btn_back->Margin = System::Windows::Forms::Padding(2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_back->Size = System::Drawing::Size(52, 52);
			this->btn_back->TabIndex = 57;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::btn_back_Click);
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(834, 76);
			this->lbl_semester->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(112, 27);
			this->lbl_semester->TabIndex = 60;
			this->lbl_semester->Text = L"Semester:";
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_schoolyear->Location = System::Drawing::Point(450, 76);
			this->lbl_schoolyear->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(136, 27);
			this->lbl_schoolyear->TabIndex = 58;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// listview_course
			// 
			this->listview_course->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listview_course->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->col_no, this->col_ID,
					this->col_name, this->col_teacher, this->col_credit, this->col_maxstu, this->col_day, this->col_session
			});
			this->listview_course->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->listview_course->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->listview_course->FullRowSelect = true;
			this->listview_course->GridLines = true;
			this->listview_course->HideSelection = false;
			this->listview_course->Location = System::Drawing::Point(78, 179);
			this->listview_course->Margin = System::Windows::Forms::Padding(2);
			this->listview_course->Name = L"listview_course";
			this->listview_course->Size = System::Drawing::Size(1008, 345);
			this->listview_course->TabIndex = 77;
			this->listview_course->UseCompatibleStateImageBehavior = false;
			this->listview_course->View = System::Windows::Forms::View::Details;
			// 
			// col_no
			// 
			this->col_no->Text = L"No";
			this->col_no->Width = 40;
			// 
			// col_ID
			// 
			this->col_ID->Text = L"ID";
			this->col_ID->Width = 160;
			// 
			// col_name
			// 
			this->col_name->Text = L"Name";
			this->col_name->Width = 254;
			// 
			// col_teacher
			// 
			this->col_teacher->Text = L"Teacher";
			this->col_teacher->Width = 254;
			// 
			// col_credit
			// 
			this->col_credit->Text = L"Credit";
			// 
			// col_maxstu
			// 
			this->col_maxstu->Text = L"Max Student";
			this->col_maxstu->Width = 100;
			// 
			// col_day
			// 
			this->col_day->Text = L"Day";
			this->col_day->Width = 55;
			// 
			// col_session
			// 
			this->col_session->Text = L"Session";
			this->col_session->Width = 85;
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(589, 70);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(232, 33);
			this->txt_schoolyear->TabIndex = 78;
			// 
			// txt_fullname
			// 
			this->txt_fullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_fullname->Location = System::Drawing::Point(212, 70);
			this->txt_fullname->Margin = System::Windows::Forms::Padding(2);
			this->txt_fullname->Name = L"txt_fullname";
			this->txt_fullname->ReadOnly = true;
			this->txt_fullname->Size = System::Drawing::Size(232, 33);
			this->txt_fullname->TabIndex = 81;
			// 
			// lbl_fullname
			// 
			this->lbl_fullname->AutoSize = true;
			this->lbl_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_fullname->Location = System::Drawing::Point(84, 76);
			this->lbl_fullname->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_fullname->Name = L"lbl_fullname";
			this->lbl_fullname->Size = System::Drawing::Size(121, 27);
			this->lbl_fullname->TabIndex = 80;
			this->lbl_fullname->Text = L"Full Name:";
			// 
			// txt_studentID
			// 
			this->txt_studentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_studentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_studentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_studentID->Location = System::Drawing::Point(212, 108);
			this->txt_studentID->Margin = System::Windows::Forms::Padding(2);
			this->txt_studentID->Name = L"txt_studentID";
			this->txt_studentID->ReadOnly = true;
			this->txt_studentID->Size = System::Drawing::Size(232, 33);
			this->txt_studentID->TabIndex = 83;
			// 
			// lbl_studentID
			// 
			this->lbl_studentID->AutoSize = true;
			this->lbl_studentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_studentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_studentID->Location = System::Drawing::Point(79, 115);
			this->lbl_studentID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_studentID->Name = L"lbl_studentID";
			this->lbl_studentID->Size = System::Drawing::Size(126, 27);
			this->lbl_studentID->TabIndex = 82;
			this->lbl_studentID->Text = L"Student ID:";
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(61, 4);
			this->pnl_title->Margin = System::Windows::Forms::Padding(2);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(1027, 60);
			this->pnl_title->TabIndex = 84;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->account);
			this->panel1->Controls->Add(this->btn_back);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Size = System::Drawing::Size(60, 520);
			this->panel1->TabIndex = 85;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 464);
			this->account->Margin = System::Windows::Forms::Padding(2);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(52, 52);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 102;
			this->account->TabStop = false;
			this->account->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::account_Click);
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Location = System::Drawing::Point(67, 389);
			this->pnl_account->Margin = System::Windows::Forms::Padding(2);
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Size = System::Drawing::Size(178, 134);
			this->pnl_account->TabIndex = 101;
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
			this->btn_aboutUs->Location = System::Drawing::Point(2, 0);
			this->btn_aboutUs->Margin = System::Windows::Forms::Padding(2);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(172, 46);
			this->btn_aboutUs->TabIndex = 97;
			this->btn_aboutUs->Text = L"About us";
			this->btn_aboutUs->UseVisualStyleBackColor = false;
			this->btn_aboutUs->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::btn_aboutUs_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_exit->Location = System::Drawing::Point(2, 90);
			this->btn_exit->Margin = System::Windows::Forms::Padding(2);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(172, 46);
			this->btn_exit->TabIndex = 99;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_logout->Location = System::Drawing::Point(2, 46);
			this->btn_logout->Margin = System::Windows::Forms::Padding(2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(172, 46);
			this->btn_logout->TabIndex = 98;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::btn_logout_Click);
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear_end->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(738, 108);
			this->txt_schoolyear_end->Margin = System::Windows::Forms::Padding(2);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(83, 33);
			this->txt_schoolyear_end->TabIndex = 112;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label23->Location = System::Drawing::Point(685, 115);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 27);
			this->label23->TabIndex = 111;
			this->label23->Text = L"End:";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_schoolyear_start->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear_start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_start->Location = System::Drawing::Point(589, 110);
			this->txt_schoolyear_start->Margin = System::Windows::Forms::Padding(2);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(83, 33);
			this->txt_schoolyear_start->TabIndex = 110;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &ViewListCoursesOfStu::txt_schoolyear_start_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label22->Location = System::Drawing::Point(521, 116);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(66, 27);
			this->label22->TabIndex = 109;
			this->label22->Text = L"Start:";
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Search->Location = System::Drawing::Point(910, 115);
			this->btn_Search->Margin = System::Windows::Forms::Padding(2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(104, 38);
			this->btn_Search->TabIndex = 116;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::btn_Search_Click);
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(1037, 74);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(2);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 115;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &ViewListCoursesOfStu::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(991, 74);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(2);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 114;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &ViewListCoursesOfStu::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(946, 74);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(2);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 113;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ViewListCoursesOfStu::chkbox_sem1_CheckedChanged);
			// 
			// ViewListCoursesOfStu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1094, 528);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->txt_studentID);
			this->Controls->Add(this->lbl_studentID);
			this->Controls->Add(this->txt_fullname);
			this->Controls->Add(this->lbl_fullname);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->listview_course);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->lbl_schoolyear);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F));
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"ViewListCoursesOfStu";
			this->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Text = L"ViewListCoursesOfStu";
			this->Load += gcnew System::EventHandler(this, &ViewListCoursesOfStu::ViewListCoursesOfStu_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->pnl_account->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void viewnone() {
			ListViewItem^ item = listview_course->Items->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
		}

		void viewdata(DLL<COURSE*>* list, int& count) {
			ListViewItem^ item = listview_course->Items->Add(System::Convert::ToString(count));
			item->SubItems->Add(gcnew System::String((list->data->ID).c_str()));
			item->SubItems->Add(gcnew System::String((list->data->name).c_str()));
			item->SubItems->Add(gcnew System::String((list->data->teacher).c_str()));
			item->SubItems->Add(System::Convert::ToString(list->data->credit));
			item->SubItems->Add(System::Convert::ToString(list->data->maxStudents));
			item->SubItems->Add(gcnew System::String((DayToString(list->data->day)).c_str()));
			item->SubItems->Add(gcnew System::String((convertFromSession(list->data->session)).c_str()));

			count++;
		}
#pragma endregion
	private: System::Void ViewListCoursesOfStu_Load(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSchoolYear == nullptr)
		{
			MessageBox::Show("Create school year first!!");
			this->Close();
			this->sourceForm->Show();
			return;
		}
		else if (g_currentSemester == nullptr)
		{
			MessageBox::Show("Create semester first!!");
			this->Close();
			this->sourceForm->Show();
			return;
		}

		if (g_currentSemester->No == 1)
			chkbox_sem1->Checked = true;
		if (g_currentSemester->No == 2)
			chkbox_sem2->Checked = true;
		if (g_currentSemester->No == 3)
			chkbox_sem3->Checked = true;
		txt_schoolyear_start->Text = System::Convert::ToString(g_currentSchoolYear->begin);
		txt_fullname->Text = gcnew System::String((g_currentStudent->firstname + " " + g_currentStudent->lastname).c_str());
		txt_studentID->Text = gcnew System::String((g_currentStudent->studentID).c_str());
		listview_course->Items->Clear();

		DLL<COURSE*>* list;
		if (g_currentSemester->No == 1)
			list = g_currentSchoolYear->sem1->course.head;
		if (g_currentSemester->No == 2)
			list = g_currentSchoolYear->sem2->course.head;
		if (g_currentSemester->No == 3)
			list = g_currentSchoolYear->sem3->course.head;

		int count = 1;
		while (list) {
			DLL<SCOREBOARD*>* cur = list->data->students.head;

			while (cur && cur->data->student != g_currentStudent) cur = cur->next;
			if (cur)
				viewdata(list, count);
			list = list->next;
		}


		/*
		int yearbegin;
		yearbegin = System::Convert::ToInt32(txt_schoolyear_start->Text);

		if (yearbegin % 100 < stoi(g_currentStudent->studentID.substr(0, 2))) {	///yearbegin<g_currentStudent->yearin
			MessageBox::Show("You did not study in this School year!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}
		DLL<SCHOOLYEAR*>* cur = L_SchoolYear.head;
		while (cur && cur->data->begin != yearbegin) {
			cur = cur->next;
		}
		if (cur == nullptr) {
			//MessageBox::Show("This SchoolYear does not exist!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}

		DLL<COURSE*>* list = nullptr;
		if (chkbox_sem1->Checked && cur->data->sem1 != nullptr)
			list = cur->data->sem1->course.head;
		if (chkbox_sem2->Checked && cur->data->sem2 != nullptr)
			list = cur->data->sem2->course.head;
		if (chkbox_sem3->Checked && cur->data->sem3 != nullptr)
			list = cur->data->sem3->course.head;

		if (list == nullptr)
			//MessageBox::Show("This Semester does not occur!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
		else {
			int count = 1, totalcourse = 0, coursepass = 0, sumcredit = 0;
			double averagemark = 0, gpa = 0;

			while (list != nullptr) {
				DLL<SCOREBOARD*>* stu = list->data->students.head;
				while (stu && stu->data->student != g_currentStudent)	stu = stu->next;
				if (stu) {
					ListViewItem^ item = listview_course->Items->Add(System::Convert::ToString(count));
					item->SubItems->Add(gcnew System::String((list->data->ID).c_str()));
					item->SubItems->Add(gcnew System::String((list->data->name).c_str()));
					item->SubItems->Add(gcnew System::String((list->data->teacher).c_str()));
					item->SubItems->Add(System::Convert::ToString(stu->data->otherMark));
					item->SubItems->Add(System::Convert::ToString(stu->data->midtermMark));
					item->SubItems->Add(System::Convert::ToString(stu->data->finalMark));
					item->SubItems->Add(System::Convert::ToString(stu->data->totalMark));

					totalcourse++;
					if (stu->data->totalMark >= 5.0)
						coursepass++;
					averagemark += stu->data->totalMark;
					sumcredit += list->data->credit;

					count++;
				}
				list = list->next;
			}
			if (count == 1) {
				viewnone();
				return;
			}
		}*/


		/*
		DLL<COURSE*>* list = g_currentStudent->courses.head;
		int count = 1;
		if (list == nullptr) {
			ListViewItem^ item = listview_course->Items->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
		}
		else
			while (list != nullptr) {
				ListViewItem^ item = listview_course->Items->Add(System::Convert::ToString(count));
				item->SubItems->Add(gcnew System::String((list->data->ID).c_str()));
				item->SubItems->Add(gcnew System::String((list->data->name).c_str()));
				item->SubItems->Add(gcnew System::String((list->data->teacher).c_str()));
				item->SubItems->Add(System::Convert::ToString(list->data->credit));
				item->SubItems->Add(System::Convert::ToString(list->data->maxStudents));
				item->SubItems->Add(gcnew System::String((DayToString(list->data->day)).c_str()));
				item->SubItems->Add(gcnew System::String((convertFromSession(list->data->session)).c_str()));
				list = list->next;
				count++;
			}*/
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ form = gcnew CMS::AboutUs(this);
		form->Show();
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteFiles();
		if (latestCheckRememberLogin) {
			latestUsername = g_currentStudent->user.username;
			latestPassword = g_currentStudent->user.password;
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

	private: System::Void account_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_account->Visible = !pnl_account->Visible;
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
	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		listview_course->Items->Clear();

		int yearbegin;
		yearbegin = System::Convert::ToInt32(txt_schoolyear_start->Text);

		if (yearbegin % 100 < stoi(g_currentStudent->studentID.substr(0, 2))) {	///yearbegin<g_currentStudent->yearin
			MessageBox::Show("You did not study in this School year!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}
		if (yearbegin % 100 > stoi(g_currentStudent->studentID.substr(0, 2)) + 7) {
			MessageBox::Show("You will not study in this School year!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}
		DLL<SCHOOLYEAR*>* cur = L_SchoolYear.head;
		while (cur && cur->data->begin != yearbegin) {
			cur = cur->next;
		}
		if (cur == nullptr) {
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
			if (chkbox_sem1->Checked == 0 && chkbox_sem2->Checked == 0 && chkbox_sem3->Checked == 0)
				MessageBox::Show("Please choose a Semester!", "Notification");
			else if (cur->data->sem1 == nullptr && cur->data->sem2 == nullptr && cur->data->sem3 == nullptr)
				MessageBox::Show("This SchoolYear does not have any Semesters! Please add a new one!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("This Semester does not occur!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			viewnone();
			return;
		}

		DLL<COURSE*>* list = sem->course.head;

		if (list == nullptr)
			viewnone();
		else {
			int count = 1;

			while (list != nullptr) {
				DLL<SCOREBOARD*>* stu = list->data->students.head;
				while (stu && stu->data->student != g_currentStudent)	stu = stu->next;
				if (stu) {
					viewdata(list, count);
				}
				list = list->next;
			}
			if (count == 1) {
				viewnone();
				return;
			}
		}
	}
	};
}
