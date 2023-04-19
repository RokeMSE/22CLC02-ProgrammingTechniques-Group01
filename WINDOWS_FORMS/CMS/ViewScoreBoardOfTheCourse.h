#pragma once
#include<string>
#include "header.h"
#include <msclr/marshal_cppstd.h>
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary forViewScoreBoardOfTheCourse
	/// </summary>
	public ref class ViewScoreBoardOfTheCourse : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewScoreBoardOfTheCourse(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			this->sourceForm = form;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::btn_Search_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// 
		~ViewScoreBoardOfTheCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_courseID;
	protected:

	private: System::Windows::Forms::Label^ lbl_courseID;
	private: System::Windows::Forms::TextBox^ txt_namecourse;
	protected:


	private: System::Windows::Forms::Label^ lbl_nameCourse;

	private: System::Windows::Forms::TextBox^ txt_semester;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::ListView^ listView1;


	private: System::Windows::Forms::ColumnHeader^ col_ID;
	private: System::Windows::Forms::ColumnHeader^ col_name;
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ button1;

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
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseID = (gcnew System::Windows::Forms::Label());
			this->txt_namecourse = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nameCourse = (gcnew System::Windows::Forms::Label());
			this->txt_semester = (gcnew System::Windows::Forms::TextBox());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->col_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_name = (gcnew System::Windows::Forms::ColumnHeader());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_courseID->Location = System::Drawing::Point(787, 96);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseID->MaxLength = 15;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(242, 24);
			this->txt_courseID->TabIndex = 94;
			// 
			// lbl_courseID
			// 
			this->lbl_courseID->AutoSize = true;
			this->lbl_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->lbl_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_courseID->Location = System::Drawing::Point(666, 97);
			this->lbl_courseID->Name = L"lbl_courseID";
			this->lbl_courseID->Size = System::Drawing::Size(93, 23);
			this->lbl_courseID->TabIndex = 93;
			this->lbl_courseID->Text = L"Course ID:";
			// 
			// txt_namecourse
			// 
			this->txt_namecourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_namecourse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_namecourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_namecourse->Location = System::Drawing::Point(787, 157);
			this->txt_namecourse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_namecourse->MaxLength = 30;
			this->txt_namecourse->Name = L"txt_namecourse";
			this->txt_namecourse->Size = System::Drawing::Size(242, 24);
			this->txt_namecourse->TabIndex = 92;
			// 
			// lbl_nameCourse
			// 
			this->lbl_nameCourse->AutoSize = true;
			this->lbl_nameCourse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->lbl_nameCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_nameCourse->Location = System::Drawing::Point(635, 157);
			this->lbl_nameCourse->Name = L"lbl_nameCourse";
			this->lbl_nameCourse->Size = System::Drawing::Size(124, 23);
			this->lbl_nameCourse->TabIndex = 91;
			this->lbl_nameCourse->Text = L"Name Course:";
			// 
			// txt_semester
			// 
			this->txt_semester->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_semester->Location = System::Drawing::Point(209, 155);
			this->txt_semester->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_semester->MaxLength = 10;
			this->txt_semester->Name = L"txt_semester";
			this->txt_semester->Size = System::Drawing::Size(52, 24);
			this->txt_semester->TabIndex = 90;
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_schoolyear->Location = System::Drawing::Point(209, 96);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear->MaxLength = 20;
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->Size = System::Drawing::Size(254, 24);
			this->txt_schoolyear->TabIndex = 89;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->col_ID, this->col_name,
					this->col_firstname, this->col_lastname, this->col_othermark, this->col_midtermMark, this->col_finalmark, this->col_totalMark
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(54, 237);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1177, 431);
			this->listView1->TabIndex = 88;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::listView1_SelectedIndexChanged);
			// 
			// col_ID
			// 
			this->col_ID->Text = L"ID";
			this->col_ID->Width = 95;
			// 
			// col_name
			// 
			this->col_name->Text = L"Name Course";
			this->col_name->Width = 182;
			// 
			// col_firstname
			// 
			this->col_firstname->Text = L"FirstName";
			this->col_firstname->Width = 225;
			// 
			// col_lastname
			// 
			this->col_lastname->Text = L"LastName";
			this->col_lastname->Width = 118;
			// 
			// col_othermark
			// 
			this->col_othermark->Text = L"Other Mark";
			this->col_othermark->Width = 97;
			// 
			// col_midtermMark
			// 
			this->col_midtermMark->Text = L"Midterm Mark";
			this->col_midtermMark->Width = 95;
			// 
			// col_finalmark
			// 
			this->col_finalmark->Text = L"Final Mark";
			this->col_finalmark->Width = 95;
			// 
			// col_totalMark
			// 
			this->col_totalMark->Text = L"Total Mark";
			this->col_totalMark->Width = 111;
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_semester->Location = System::Drawing::Point(103, 158);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(90, 23);
			this->lbl_semester->TabIndex = 87;
			this->lbl_semester->Text = L"Semester:";
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->BackColor = System::Drawing::Color::Transparent;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_schoolyear->Location = System::Drawing::Point(83, 96);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(110, 23);
			this->lbl_schoolyear->TabIndex = 86;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->lbl_title->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 23, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->lbl_title->Location = System::Drawing::Point(329, 20);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(567, 54);
			this->lbl_title->TabIndex = 84;
			this->lbl_title->Text = L"The ScoreBoard of a Course ";
			this->lbl_title->Click += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::lbl_title_Click);
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Search->Location = System::Drawing::Point(353, 171);
			this->btn_Search->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(96, 29);
			this->btn_Search->TabIndex = 95;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::btn_Search_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Location = System::Drawing::Point(206, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 17);
			this->label2->TabIndex = 132;
			this->label2->Text = L"( Example: 2017-2018,... )";
			this->label2->Click += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::label2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkGreen;
			this->label6->Location = System::Drawing::Point(206, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 17);
			this->label6->TabIndex = 134;
			this->label6->Text = L"( Example: 1,2,3 )";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkGreen;
			this->label7->Location = System::Drawing::Point(784, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 17);
			this->label7->TabIndex = 137;
			this->label7->Text = L"( Example: 12344,...)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(784, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 17);
			this->label3->TabIndex = 138;
			this->label3->Text = L"( Example: ABC course,...)";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->account);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4);
			this->panel1->Size = System::Drawing::Size(60, 668);
			this->panel1->TabIndex = 139;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Location = System::Drawing::Point(4, 612);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(52, 52);
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
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(4);
			this->button1->Size = System::Drawing::Size(52, 52);
			this->button1->TabIndex = 57;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::btn_back_Click);
			// 
			// ViewScoreBoardOfTheCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1214, 668);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->lbl_courseID);
			this->Controls->Add(this->txt_namecourse);
			this->Controls->Add(this->lbl_nameCourse);
			this->Controls->Add(this->txt_semester);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->lbl_schoolyear);
			this->Controls->Add(this->lbl_title);
			this->Name = L"ViewScoreBoardOfTheCourse";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &ViewScoreBoardOfTheCourse::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {

		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curShoolyear = L_SchoolYear.head;
		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* tempSchoolYear = curShoolyear;
		System::String^ schoolyear = this->txt_schoolyear->Text;
		System::String^ sem = this->txt_semester->Text;
		System::String^ coursename = this->txt_namecourse->Text;
		System::String^ courseid = this->txt_courseID->Text;
		std::string str = std::to_string(curShoolyear->data->begin) + "-" + std::to_string(curShoolyear->data->end);
		GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem1->course.head;
		ListViewItem^ item;
		bool foundYear = false;
		bool foundSemester = false;
		bool foundCourse = false;
		while (tempSchoolYear != NULL && !foundYear) {
			if (str == msclr::interop::marshal_as<std::string>(schoolyear)) {
				foundYear = true;
				break;
			}
			tempSchoolYear = tempSchoolYear->next;
		}
		tempSchoolYear = curShoolyear;
		while (tempSchoolYear) {
			if (msclr::interop::marshal_as<std::string>(sem) == "1" || msclr::interop::marshal_as<std::string>(sem) == "2" || msclr::interop::marshal_as<std::string>(sem) == "3") {

				foundSemester = true;
				break;

			}
			tempSchoolYear = tempSchoolYear->next;
		}
		tempSchoolYear = curShoolyear;
		while (tempSchoolYear != NULL) {
			GROUP1::DLL<GROUP1::COURSE*>* tempCourse = NULL;
			if (msclr::interop::marshal_as<std::string>(sem) == "1") {
				tempCourse = tempSchoolYear->data->sem1->course.head;
			}
			else if (msclr::interop::marshal_as<std::string>(sem) == "2") {
				tempCourse = tempSchoolYear->data->sem2->course.head;
			}
			else if (msclr::interop::marshal_as<std::string>(sem) == "3") {
				tempCourse = tempSchoolYear->data->sem3->course.head;
			}

			while (tempCourse != NULL) {
				if (msclr::interop::marshal_as<std::string>(coursename) == tempCourse->data->name) {
					foundCourse = true;
					break;
				}
				else if (tempCourse->data->ID == msclr::interop::marshal_as<std::string >(courseid)) {
					foundCourse = true;
					break;
				}
				tempCourse = tempCourse->next;
			}

			if (foundCourse) {
				break;
			}

			tempSchoolYear = tempSchoolYear->next;
		}

		if (!foundYear) {
			MessageBox::Show("Shool year does not exit.Please enter valid !", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}

		else if (!foundSemester) {
			MessageBox::Show("A academic year only has a maximum of 3 semesters. Please enter valid !", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


		else if (!foundCourse) {
			MessageBox::Show("Course does not exit. Please enter valid !", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


		while (curShoolyear) {
			if (str == msclr::interop::marshal_as<std::string >(schoolyear)) {
				if (std::to_string(curShoolyear->data->sem1->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem1->course.head;
					while (course) {
						if (course->data->name == msclr::interop::marshal_as<std::string >(coursename) || course->data->ID == msclr::interop::marshal_as<std::string >(courseid)) {
							GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
							while (tmp) {
								item = gcnew ListViewItem();
								item->Text = gcnew System::String((tmp->data->student->studentID).c_str());
								//item->SubItems->Add(gcnew System::String((tmp->data->student->courses.head->data->name).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->otherMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->midtermMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->finalMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->totalMark).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;

							}
							course = course->next;
						}
						else {
							course = course->next;
						}
					}
				}
				else if (std::to_string(curShoolyear->data->sem2->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem2->course.head;
					while (course) {
						if (course->data->name == msclr::interop::marshal_as<std::string >(coursename) || course->data->ID == msclr::interop::marshal_as<std::string >(courseid)) {
							GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
							while (tmp) {

								item = gcnew ListViewItem();
								item->Text = gcnew System::String((tmp->data->student->studentID).c_str());
								//item->SubItems->Add(gcnew System::String((tmp->data->student->courses.head->data->name).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->otherMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->midtermMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->finalMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->totalMark).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;
							}
							course = course->next;
						}
						else {
							course = course->next;
						}
					}
				}
				else if (std::to_string(curShoolyear->data->sem3->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem3->course.head;
					while (course) {
						if (course->data->name == msclr::interop::marshal_as<std::string >(coursename) || course->data->ID == msclr::interop::marshal_as<std::string >(courseid)) {
							GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
							while (tmp) {

								item = gcnew ListViewItem();
								item->Text = gcnew System::String((tmp->data->student->studentID).c_str());
								//	item->SubItems->Add(gcnew System::String((tmp->data->student->courses.head->data->name).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->otherMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->midtermMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->finalMark).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->totalMark).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;

							}
							course = course->next;

						}
						else {
							course = course->next;
						}
					}
				}
				curShoolyear = curShoolyear->next;

			}
			else {
				curShoolyear = curShoolyear->next;
			}
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
