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
		System::Windows::Forms::Form^ sourceForm;
		System::Windows::Forms::Form^ loginForm;
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
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Button^ btn_back;



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
	private: System::Windows::Forms::TextBox^ txt_semester;
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
			this->txt_semester = (gcnew System::Windows::Forms::TextBox());
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
			this->lbl_title->Location = System::Drawing::Point(231, 13);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(559, 31);
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
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Padding = System::Windows::Forms::Padding(4);
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
			this->lbl_semester->Location = System::Drawing::Point(181, 133);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(94, 24);
			this->lbl_semester->TabIndex = 60;
			this->lbl_semester->Text = L"Semester:";
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_schoolyear->Location = System::Drawing::Point(161, 94);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(115, 24);
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
			this->txt_schoolyear->Location = System::Drawing::Point(281, 87);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(232, 29);
			this->txt_schoolyear->TabIndex = 78;
			// 
			// txt_semester
			// 
			this->txt_semester->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_semester->Location = System::Drawing::Point(281, 125);
			this->txt_semester->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_semester->Name = L"txt_semester";
			this->txt_semester->ReadOnly = true;
			this->txt_semester->Size = System::Drawing::Size(52, 29);
			this->txt_semester->TabIndex = 79;
			// 
			// txt_fullname
			// 
			this->txt_fullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_fullname->Location = System::Drawing::Point(778, 87);
			this->txt_fullname->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_fullname->Name = L"txt_fullname";
			this->txt_fullname->ReadOnly = true;
			this->txt_fullname->Size = System::Drawing::Size(232, 29);
			this->txt_fullname->TabIndex = 81;
			// 
			// lbl_fullname
			// 
			this->lbl_fullname->AutoSize = true;
			this->lbl_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_fullname->Location = System::Drawing::Point(667, 95);
			this->lbl_fullname->Name = L"lbl_fullname";
			this->lbl_fullname->Size = System::Drawing::Size(101, 24);
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
			this->txt_studentID->Location = System::Drawing::Point(778, 126);
			this->txt_studentID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_studentID->Name = L"txt_studentID";
			this->txt_studentID->ReadOnly = true;
			this->txt_studentID->Size = System::Drawing::Size(232, 29);
			this->txt_studentID->TabIndex = 83;
			// 
			// lbl_studentID
			// 
			this->lbl_studentID->AutoSize = true;
			this->lbl_studentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_studentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_studentID->Location = System::Drawing::Point(664, 134);
			this->lbl_studentID->Name = L"lbl_studentID";
			this->lbl_studentID->Size = System::Drawing::Size(106, 24);
			this->lbl_studentID->TabIndex = 82;
			this->lbl_studentID->Text = L"Student ID:";
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(61, 4);
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
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4);
			this->panel1->Size = System::Drawing::Size(60, 520);
			this->panel1->TabIndex = 85;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 464);
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
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Size = System::Drawing::Size(178, 135);
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
			this->btn_aboutUs->Location = System::Drawing::Point(3, 0);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(172, 45);
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
			this->btn_exit->Location = System::Drawing::Point(3, 90);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(172, 45);
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
			this->btn_logout->Location = System::Drawing::Point(3, 45);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(172, 45);
			this->btn_logout->TabIndex = 98;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &ViewListCoursesOfStu::btn_logout_Click);
			// 
			// ViewListCoursesOfStu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1095, 528);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->txt_studentID);
			this->Controls->Add(this->lbl_studentID);
			this->Controls->Add(this->txt_fullname);
			this->Controls->Add(this->lbl_fullname);
			this->Controls->Add(this->txt_semester);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->listview_course);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->lbl_schoolyear);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F));
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ViewListCoursesOfStu";
			this->Padding = System::Windows::Forms::Padding(4);
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
#pragma endregion
	private: System::Void ViewListCoursesOfStu_Load(System::Object^ sender, System::EventArgs^ e) {
		txt_semester->Text = System::Convert::ToString(g_currentSemester->No);
		txt_schoolyear->Text = System::Convert::ToString(g_currentSchoolYear->begin) + "-" + System::Convert::ToString(g_currentSchoolYear->end);
		txt_fullname->Text = gcnew System::String((g_currentStudent->firstname + " " + g_currentStudent->lastname).c_str());
		txt_studentID->Text = gcnew System::String((g_currentStudent->studentID).c_str());
		listview_course->Items->Clear();
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
			}
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

	private: System::Void account_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_account->Visible = !pnl_account->Visible;
	}
	};
}
