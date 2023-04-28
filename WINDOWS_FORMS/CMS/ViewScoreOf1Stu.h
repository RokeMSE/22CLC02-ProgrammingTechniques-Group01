#pragma once

#include <string>
#include "header.h"
#include "AboutUs.h"
#include "Login.h"

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewScoreOf1Stu
	/// </summary>
	public ref class ViewScoreOf1Stu : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		System::Windows::Forms::Form^ loginForm;
		ViewScoreOf1Stu(System::Windows::Forms::Form^ form, System::Windows::Forms::Form^ loginform)
		{
			this->sourceForm = form;
			this->loginForm = loginform;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ListView^ listview_score;
	public:

	public:
	private: System::Windows::Forms::ColumnHeader^ col_courseID;
	private: System::Windows::Forms::ColumnHeader^ col_coursename;
	private: System::Windows::Forms::ColumnHeader^ col_no;
	private: System::Windows::Forms::ColumnHeader^ col_teachername;
	private: System::Windows::Forms::ColumnHeader^ col_othermark;

	private: System::Windows::Forms::ColumnHeader^ col_midtermmark;
	private: System::Windows::Forms::ColumnHeader^ col_finalmark;
	private: System::Windows::Forms::ColumnHeader^ col_totalmark;
	private: System::Windows::Forms::Panel^ pnl_account;
	private: System::Windows::Forms::Button^ btn_aboutUs;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewScoreOf1Stu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_back;




	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ lbl_schoolyear;
	private: System::Windows::Forms::TextBox^ txt_averagemark;

	private: System::Windows::Forms::Label^ lbl_averagemark;

	private: System::Windows::Forms::Label^ lbl_coursepass;

	private: System::Windows::Forms::TextBox^ txt_totalcourses;

	private: System::Windows::Forms::Label^ lbl_totalcourses;
	private: System::Windows::Forms::TextBox^ txt_coursespass;
	private: System::Windows::Forms::TextBox^ txt_gpa;
	private: System::Windows::Forms::Label^ lbl_gpa;
	private: System::Windows::Forms::TextBox^ txt_fullname;

	private: System::Windows::Forms::Label^ lbl_fullname;
	private: System::Windows::Forms::TextBox^ txt_studentID;


	private: System::Windows::Forms::Label^ lbl_studentID;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewScoreOf1Stu::typeid));
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->lbl_schoolyear = (gcnew System::Windows::Forms::Label());
			this->txt_averagemark = (gcnew System::Windows::Forms::TextBox());
			this->lbl_averagemark = (gcnew System::Windows::Forms::Label());
			this->lbl_coursepass = (gcnew System::Windows::Forms::Label());
			this->txt_totalcourses = (gcnew System::Windows::Forms::TextBox());
			this->lbl_totalcourses = (gcnew System::Windows::Forms::Label());
			this->txt_coursespass = (gcnew System::Windows::Forms::TextBox());
			this->txt_gpa = (gcnew System::Windows::Forms::TextBox());
			this->lbl_gpa = (gcnew System::Windows::Forms::Label());
			this->txt_fullname = (gcnew System::Windows::Forms::TextBox());
			this->lbl_fullname = (gcnew System::Windows::Forms::Label());
			this->txt_studentID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_studentID = (gcnew System::Windows::Forms::Label());
			this->listview_score = (gcnew System::Windows::Forms::ListView());
			this->col_no = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_courseID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_coursename = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_teachername = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_othermark = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_midtermmark = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_finalmark = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_totalmark = (gcnew System::Windows::Forms::ColumnHeader());
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
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Location = System::Drawing::Point(60, 4);
			this->pnl_title->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(952, 62);
			this->pnl_title->TabIndex = 87;
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(317, 13);
			this->lbl_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(336, 31);
			this->lbl_title->TabIndex = 5;
			this->lbl_title->Text = L"VIEW YOUR SCOREBOARD";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->btn_back);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Size = System::Drawing::Size(57, 562);
			this->panel1->TabIndex = 88;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 504);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(51, 54);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 124;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ViewScoreOf1Stu::pictureBox1_Click);
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_back->Location = System::Drawing::Point(3, 4);
			this->btn_back->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_back->Size = System::Drawing::Size(48, 54);
			this->btn_back->TabIndex = 89;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewScoreOf1Stu::btn_back_Click);
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Search->Location = System::Drawing::Point(742, 173);
			this->btn_Search->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(96, 42);
			this->btn_Search->TabIndex = 110;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewScoreOf1Stu::btn_Search_Click);
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear_end->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(870, 108);
			this->txt_schoolyear_end->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(78, 29);
			this->txt_schoolyear_end->TabIndex = 109;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label23->Location = System::Drawing::Point(820, 112);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(47, 24);
			this->label23->TabIndex = 108;
			this->label23->Text = L"End:";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_schoolyear_start->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear_start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear_start->Location = System::Drawing::Point(728, 108);
			this->txt_schoolyear_start->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(78, 29);
			this->txt_schoolyear_start->TabIndex = 107;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &ViewScoreOf1Stu::txt_schoolyear_start_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label22->Location = System::Drawing::Point(668, 112);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(56, 24);
			this->label22->TabIndex = 106;
			this->label22->Text = L"Start:";
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(818, 142);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(42, 28);
			this->chkbox_sem3->TabIndex = 105;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOf1Stu::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(774, 142);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(42, 28);
			this->chkbox_sem2->TabIndex = 104;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOf1Stu::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(732, 142);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(42, 28);
			this->chkbox_sem1->TabIndex = 103;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ViewScoreOf1Stu::chkbox_sem1_CheckedChanged);
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(635, 142);
			this->lbl_semester->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(94, 24);
			this->lbl_semester->TabIndex = 102;
			this->lbl_semester->Text = L"Semester:";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(728, 72);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(219, 29);
			this->txt_schoolyear->TabIndex = 101;
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_schoolyear->Location = System::Drawing::Point(613, 77);
			this->lbl_schoolyear->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(115, 24);
			this->lbl_schoolyear->TabIndex = 100;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// txt_averagemark
			// 
			this->txt_averagemark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_averagemark->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_averagemark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_averagemark->Location = System::Drawing::Point(233, 145);
			this->txt_averagemark->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_averagemark->Name = L"txt_averagemark";
			this->txt_averagemark->ReadOnly = true;
			this->txt_averagemark->Size = System::Drawing::Size(61, 29);
			this->txt_averagemark->TabIndex = 112;
			// 
			// lbl_averagemark
			// 
			this->lbl_averagemark->AutoSize = true;
			this->lbl_averagemark->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_averagemark->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_averagemark->Location = System::Drawing::Point(93, 148);
			this->lbl_averagemark->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_averagemark->Name = L"lbl_averagemark";
			this->lbl_averagemark->Size = System::Drawing::Size(135, 24);
			this->lbl_averagemark->TabIndex = 111;
			this->lbl_averagemark->Text = L"Average mark:";
			// 
			// lbl_coursepass
			// 
			this->lbl_coursepass->AutoSize = true;
			this->lbl_coursepass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_coursepass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_coursepass->Location = System::Drawing::Point(303, 188);
			this->lbl_coursepass->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_coursepass->Name = L"lbl_coursepass";
			this->lbl_coursepass->Size = System::Drawing::Size(144, 24);
			this->lbl_coursepass->TabIndex = 113;
			this->lbl_coursepass->Text = L"Courses passed:";
			// 
			// txt_totalcourses
			// 
			this->txt_totalcourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_totalcourses->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_totalcourses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_totalcourses->Location = System::Drawing::Point(233, 182);
			this->txt_totalcourses->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_totalcourses->Name = L"txt_totalcourses";
			this->txt_totalcourses->ReadOnly = true;
			this->txt_totalcourses->Size = System::Drawing::Size(61, 29);
			this->txt_totalcourses->TabIndex = 116;
			// 
			// lbl_totalcourses
			// 
			this->lbl_totalcourses->AutoSize = true;
			this->lbl_totalcourses->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_totalcourses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_totalcourses->Location = System::Drawing::Point(100, 188);
			this->lbl_totalcourses->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_totalcourses->Name = L"lbl_totalcourses";
			this->lbl_totalcourses->Size = System::Drawing::Size(128, 24);
			this->lbl_totalcourses->TabIndex = 115;
			this->lbl_totalcourses->Text = L"Total courses:";
			// 
			// txt_coursespass
			// 
			this->txt_coursespass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursespass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_coursespass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursespass->Location = System::Drawing::Point(451, 183);
			this->txt_coursespass->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_coursespass->Name = L"txt_coursespass";
			this->txt_coursespass->ReadOnly = true;
			this->txt_coursespass->Size = System::Drawing::Size(61, 29);
			this->txt_coursespass->TabIndex = 117;
			// 
			// txt_gpa
			// 
			this->txt_gpa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_gpa->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_gpa->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_gpa->Location = System::Drawing::Point(451, 145);
			this->txt_gpa->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_gpa->Name = L"txt_gpa";
			this->txt_gpa->ReadOnly = true;
			this->txt_gpa->Size = System::Drawing::Size(61, 29);
			this->txt_gpa->TabIndex = 119;
			// 
			// lbl_gpa
			// 
			this->lbl_gpa->AutoSize = true;
			this->lbl_gpa->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_gpa->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_gpa->Location = System::Drawing::Point(397, 150);
			this->lbl_gpa->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_gpa->Name = L"lbl_gpa";
			this->lbl_gpa->Size = System::Drawing::Size(52, 24);
			this->lbl_gpa->TabIndex = 118;
			this->lbl_gpa->Text = L"GPA:";
			// 
			// txt_fullname
			// 
			this->txt_fullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_fullname->Location = System::Drawing::Point(233, 72);
			this->txt_fullname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_fullname->Name = L"txt_fullname";
			this->txt_fullname->ReadOnly = true;
			this->txt_fullname->Size = System::Drawing::Size(277, 29);
			this->txt_fullname->TabIndex = 121;
			// 
			// lbl_fullname
			// 
			this->lbl_fullname->AutoSize = true;
			this->lbl_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_fullname->Location = System::Drawing::Point(127, 75);
			this->lbl_fullname->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_fullname->Name = L"lbl_fullname";
			this->lbl_fullname->Size = System::Drawing::Size(101, 24);
			this->lbl_fullname->TabIndex = 120;
			this->lbl_fullname->Text = L"Full Name:";
			// 
			// txt_studentID
			// 
			this->txt_studentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_studentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_studentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_studentID->Location = System::Drawing::Point(233, 108);
			this->txt_studentID->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_studentID->Name = L"txt_studentID";
			this->txt_studentID->ReadOnly = true;
			this->txt_studentID->Size = System::Drawing::Size(277, 29);
			this->txt_studentID->TabIndex = 123;
			// 
			// lbl_studentID
			// 
			this->lbl_studentID->AutoSize = true;
			this->lbl_studentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_studentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_studentID->Location = System::Drawing::Point(122, 113);
			this->lbl_studentID->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_studentID->Name = L"lbl_studentID";
			this->lbl_studentID->Size = System::Drawing::Size(106, 24);
			this->lbl_studentID->TabIndex = 122;
			this->lbl_studentID->Text = L"Student ID:";
			// 
			// listview_score
			// 
			this->listview_score->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listview_score->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->col_no, this->col_courseID,
					this->col_coursename, this->col_teachername, this->col_othermark, this->col_midtermmark, this->col_finalmark, this->col_totalmark
			});
			this->listview_score->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->listview_score->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->listview_score->FullRowSelect = true;
			this->listview_score->GridLines = true;
			this->listview_score->HideSelection = false;
			this->listview_score->Location = System::Drawing::Point(67, 224);
			this->listview_score->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->listview_score->Name = L"listview_score";
			this->listview_score->Size = System::Drawing::Size(946, 342);
			this->listview_score->TabIndex = 124;
			this->listview_score->UseCompatibleStateImageBehavior = false;
			this->listview_score->View = System::Windows::Forms::View::Details;
			// 
			// col_no
			// 
			this->col_no->Text = L"No";
			this->col_no->Width = 38;
			// 
			// col_courseID
			// 
			this->col_courseID->Text = L"Course ID";
			this->col_courseID->Width = 120;
			// 
			// col_coursename
			// 
			this->col_coursename->Text = L"Course name";
			this->col_coursename->Width = 220;
			// 
			// col_teachername
			// 
			this->col_teachername->Text = L"Teacher name";
			this->col_teachername->Width = 220;
			// 
			// col_othermark
			// 
			this->col_othermark->Text = L"Other mark";
			this->col_othermark->Width = 100;
			// 
			// col_midtermmark
			// 
			this->col_midtermmark->Text = L"Midterm mark";
			this->col_midtermmark->Width = 110;
			// 
			// col_finalmark
			// 
			this->col_finalmark->Text = L"Final mark";
			this->col_finalmark->Width = 100;
			// 
			// col_totalmark
			// 
			this->col_totalmark->Text = L"Total mark";
			this->col_totalmark->Width = 100;
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Location = System::Drawing::Point(66, 425);
			this->pnl_account->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Size = System::Drawing::Size(167, 141);
			this->pnl_account->TabIndex = 125;
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
			this->btn_aboutUs->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(162, 47);
			this->btn_aboutUs->TabIndex = 97;
			this->btn_aboutUs->Text = L"About us";
			this->btn_aboutUs->UseVisualStyleBackColor = false;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_exit->Location = System::Drawing::Point(2, 93);
			this->btn_exit->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(162, 47);
			this->btn_exit->TabIndex = 99;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &ViewScoreOf1Stu::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_logout->Location = System::Drawing::Point(2, 47);
			this->btn_logout->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(162, 47);
			this->btn_logout->TabIndex = 98;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &ViewScoreOf1Stu::btn_logout_Click);
			// 
			// ViewScoreOf1Stu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1015, 570);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->listview_score);
			this->Controls->Add(this->txt_studentID);
			this->Controls->Add(this->lbl_studentID);
			this->Controls->Add(this->txt_fullname);
			this->Controls->Add(this->lbl_fullname);
			this->Controls->Add(this->txt_gpa);
			this->Controls->Add(this->lbl_gpa);
			this->Controls->Add(this->txt_coursespass);
			this->Controls->Add(this->txt_totalcourses);
			this->Controls->Add(this->lbl_totalcourses);
			this->Controls->Add(this->lbl_coursepass);
			this->Controls->Add(this->txt_averagemark);
			this->Controls->Add(this->lbl_averagemark);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->lbl_schoolyear);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"ViewScoreOf1Stu";
			this->Padding = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Text = L"ViewScoreOf1Stu";
			this->Load += gcnew System::EventHandler(this, &ViewScoreOf1Stu::ViewScoreOf1Stu_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_account->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void viewnone() {
			ListViewItem^ item = listview_score->Items->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
			item->SubItems->Add("None");
		}
#pragma endregion

	private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
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
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_account->Visible = !pnl_account->Visible;
	}
	private: System::Void ViewScoreOf1Stu_Load(System::Object^ sender, System::EventArgs^ e) {

		if (g_currentSemester == nullptr) {
			if (g_currentSchoolYear == nullptr)
				MessageBox::Show("Can not find any SchoolYear! Staff must create a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
				MessageBox::Show("Can not find any Semester! Staff must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		txt_schoolyear_start->Text = System::Convert::ToString(g_currentSchoolYear->begin);
		txt_fullname->Text = gcnew System::String((g_currentStudent->firstname + " " + g_currentStudent->lastname).c_str());
		txt_studentID->Text = gcnew System::String((g_currentStudent->studentID).c_str());
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
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
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
		listview_score->Items->Clear();
		txt_averagemark->Text = "0";
		txt_totalcourses->Text = "0";
		txt_coursespass->Text = "0";
		txt_gpa->Text = "0";

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
			int count = 1, totalcourse = 0, coursepass = 0, sumcredit = 0;
			double averagemark = 0, gpa = 0;

			while (list != nullptr) {
				DLL<SCOREBOARD*>* stu = list->data->students.head;
				while (stu && stu->data->student != g_currentStudent)	stu = stu->next;
				if (stu) {
					ListViewItem^ item = listview_score->Items->Add(System::Convert::ToString(count));
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
			averagemark = averagemark / double(totalcourse);
			averagemark = (round(averagemark * 100)) / 100.0;

			gpa = (averagemark * 4) / 10.0;
			gpa = (round(gpa * 100)) / 100.0;

			txt_averagemark->Text = System::Convert::ToString(averagemark);
			txt_gpa->Text = System::Convert::ToString(gpa);
			txt_coursespass->Text = System::Convert::ToString(coursepass);
			txt_totalcourses->Text = System::Convert::ToString(totalcourse);
		}
	}
	};
}
