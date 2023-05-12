#pragma once
#pragma warning(disable : 4996)
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <fstream>
using namespace std;
using namespace GROUP1;

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExpListStuInCourseCSV
	/// </summary>
	public ref class ExpListStuInCourseCSV : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ExpListStuInCourseCSV(System::Windows::Forms::Form^ form)
		{
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
		~ExpListStuInCourseCSV()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:









	private: System::Windows::Forms::Button^ btn_search;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ CourseIDTextBox;

	private: System::Windows::Forms::Label^ lbl_courseInf;
	private: System::Windows::Forms::Label^ lbl_coursename;
	private: System::Windows::Forms::Label^ lbl_teacher;
	private: System::Windows::Forms::TextBox^ txt_coursename;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::Label^ lbl_input;
	private: System::Windows::Forms::TextBox^ txt_pathfile;
	private: System::Windows::Forms::Button^ btn_browse;
	private: System::Windows::Forms::Button^ btn_export;


	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ schoolyeartxt;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpListStuInCourseCSV::typeid));
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CourseIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseInf = (gcnew System::Windows::Forms::Label());
			this->lbl_coursename = (gcnew System::Windows::Forms::Label());
			this->lbl_teacher = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->txt_pathfile = (gcnew System::Windows::Forms::TextBox());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->btn_export = (gcnew System::Windows::Forms::Button());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->schoolyeartxt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->pnl_title->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(480, 215);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(119, 84);
			this->btn_search->TabIndex = 92;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::btn_search_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(232, 252);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 27);
			this->label1->TabIndex = 90;
			this->label1->Text = L"Course ID";
			// 
			// CourseIDTextBox
			// 
			this->CourseIDTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->CourseIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->CourseIDTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CourseIDTextBox->Location = System::Drawing::Point(154, 290);
			this->CourseIDTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CourseIDTextBox->MaxLength = 10;
			this->CourseIDTextBox->Name = L"CourseIDTextBox";
			this->CourseIDTextBox->Size = System::Drawing::Size(260, 33);
			this->CourseIDTextBox->TabIndex = 91;
			// 
			// lbl_courseInf
			// 
			this->lbl_courseInf->AutoSize = true;
			this->lbl_courseInf->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_courseInf->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13, System::Drawing::FontStyle::Bold));
			this->lbl_courseInf->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseInf->Location = System::Drawing::Point(741, 146);
			this->lbl_courseInf->Name = L"lbl_courseInf";
			this->lbl_courseInf->Size = System::Drawing::Size(275, 36);
			this->lbl_courseInf->TabIndex = 93;
			this->lbl_courseInf->Text = L"Course Information";
			// 
			// lbl_coursename
			// 
			this->lbl_coursename->AutoSize = true;
			this->lbl_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_coursename->Location = System::Drawing::Point(648, 215);
			this->lbl_coursename->Name = L"lbl_coursename";
			this->lbl_coursename->Size = System::Drawing::Size(154, 27);
			this->lbl_coursename->TabIndex = 94;
			this->lbl_coursename->Text = L"Course Name:";
			// 
			// lbl_teacher
			// 
			this->lbl_teacher->AutoSize = true;
			this->lbl_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_teacher->Location = System::Drawing::Point(637, 276);
			this->lbl_teacher->Name = L"lbl_teacher";
			this->lbl_teacher->Size = System::Drawing::Size(165, 27);
			this->lbl_teacher->TabIndex = 95;
			this->lbl_teacher->Text = L"Teacher Name:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(800, 209);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(310, 33);
			this->txt_coursename->TabIndex = 96;
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_teacher->Location = System::Drawing::Point(800, 272);
			this->txt_teacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(310, 33);
			this->txt_teacher->TabIndex = 97;
			// 
			// lbl_input
			// 
			this->lbl_input->AutoSize = true;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_input->Location = System::Drawing::Point(90, 434);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(282, 31);
			this->lbl_input->TabIndex = 98;
			this->lbl_input->Text = L"Input the path of file: ";
			// 
			// txt_pathfile
			// 
			this->txt_pathfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_pathfile->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
			this->txt_pathfile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_pathfile->Location = System::Drawing::Point(357, 429);
			this->txt_pathfile->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_pathfile->Name = L"txt_pathfile";
			this->txt_pathfile->ReadOnly = true;
			this->txt_pathfile->Size = System::Drawing::Size(626, 38);
			this->txt_pathfile->TabIndex = 99;
			this->txt_pathfile->TextChanged += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::txt_pathfile_TextChanged);
			// 
			// btn_browse
			// 
			this->btn_browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_browse->Enabled = false;
			this->btn_browse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->btn_browse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_browse->Location = System::Drawing::Point(996, 426);
			this->btn_browse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(90, 41);
			this->btn_browse->TabIndex = 100;
			this->btn_browse->Text = L"Browse";
			this->btn_browse->UseVisualStyleBackColor = false;
			this->btn_browse->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::btn_browse_Click);
			// 
			// btn_export
			// 
			this->btn_export->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_export->Enabled = false;
			this->btn_export->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_export->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_export->Location = System::Drawing::Point(548, 505);
			this->btn_export->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_export->Name = L"btn_export";
			this->btn_export->Size = System::Drawing::Size(119, 84);
			this->btn_export->TabIndex = 101;
			this->btn_export->Text = L"Export";
			this->btn_export->UseVisualStyleBackColor = false;
			this->btn_export->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::btn_export_Click);
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label2);
			this->pnl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->pnl_title->Location = System::Drawing::Point(78, 1);
			this->pnl_title->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(1084, 75);
			this->pnl_title->TabIndex = 103;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(252, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 37);
			this->label2->TabIndex = 58;
			this->label2->Text = L"EXPORT LIST STUDENT IN COURSE";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel2->Controls->Add(this->account);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Size = System::Drawing::Size(75, 705);
			this->panel2->TabIndex = 104;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 635);
			this->account->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(67, 65);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 58;
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
			this->button1->Size = System::Drawing::Size(67, 65);
			this->button1->TabIndex = 57;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label3->Location = System::Drawing::Point(132, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 27);
			this->label3->TabIndex = 105;
			this->label3->Text = L"School year:";
			// 
			// schoolyeartxt
			// 
			this->schoolyeartxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->schoolyeartxt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->schoolyeartxt->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->schoolyeartxt->Location = System::Drawing::Point(271, 150);
			this->schoolyeartxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->schoolyeartxt->MaxLength = 10;
			this->schoolyeartxt->Name = L"schoolyeartxt";
			this->schoolyeartxt->Size = System::Drawing::Size(144, 33);
			this->schoolyeartxt->TabIndex = 106;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label4->Location = System::Drawing::Point(154, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 27);
			this->label4->TabIndex = 107;
			this->label4->Text = L"Semester:";
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(271, 204);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 108;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::chkbox_sem1_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(318, 204);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 109;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(368, 204);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 110;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::chkbox_sem3_CheckedChanged);
			// 
			// ExpListStuInCourseCSV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1161, 705);
			this->ControlBox = false;
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->schoolyeartxt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->btn_export);
			this->Controls->Add(this->btn_browse);
			this->Controls->Add(this->txt_pathfile);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->lbl_teacher);
			this->Controls->Add(this->lbl_coursename);
			this->Controls->Add(this->lbl_courseInf);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->CourseIDTextBox);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ExpListStuInCourseCSV";
			this->Text = L"ExpListStuInCourseCSV";
			this->Load += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::ExpListStuInCourseCSV_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		DLL<COURSE*>* curCourse;

	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void btn_browse_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->Title = "Select a File";
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filename = openFileDialog1->FileName;
			txt_pathfile->Text = filename;
		}
		btn_export->Enabled = true;
	}
	private: System::Void btn_export_Click(System::Object^ sender, System::EventArgs^ e) {
		DLL<COURSE*>* cur = curCourse;

		string filename = msclr::interop::marshal_as<std::string>(txt_pathfile->Text);
		ofstream ofs(filename);
		ofs << "No,Student ID,Name,othermark,midtermMark,finalMark,totalMark\n";
		DLL<SCOREBOARD*>* stu = cur->data->students.head;
		if (stu == nullptr) {
			MessageBox::Show("Can not find any Students in this Course! You must add a new one before exporting!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}
		for (int i = 1; stu; i++)
		{
			ofs << i << "," << stu->data->student->studentID << "," << stu->data->student->lastname + " " + stu->data->student->firstname << "," << stu->data->otherMark << "," << stu->data->midtermMark << "," << stu->data->finalMark << "," << stu->data->totalMark;
			if (stu->next)
				ofs << endl;
			stu = stu->next;
		}
		ofs.close();
		MessageBox::Show("Export Successfully!");

	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		btn_export->Enabled = false;
		btn_browse->Enabled = false;
		txt_coursename->Text = "";
		txt_teacher->Text = "";
		DLL<SCHOOLYEAR*>* year = L_SchoolYear.head;
		while (year && gcnew System::String((to_string(year->data->begin) + "-" + to_string(year->data->end)).c_str()) != schoolyeartxt->Text)
			year = year->next;
		if (year == nullptr) {
			MessageBox::Show("Invalid SchoolYear!");
			CourseIDTextBox->Text = "";
			return;
		}

		SEMESTER* sem = nullptr;
		if (chkbox_sem1->Checked && year->data->sem1 != nullptr)
			sem = year->data->sem1;
		if (chkbox_sem2->Checked && year->data->sem2 != nullptr)
			sem = year->data->sem2;
		if (chkbox_sem3->Checked && year->data->sem3 != nullptr)
			sem = year->data->sem3;

		if (sem == nullptr) {
			if (year->data->sem1 == nullptr && year->data->sem2 == nullptr && year->data->sem3 == nullptr)
				MessageBox::Show("This SchoolYear does not have any Semesters! Please add a new one!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
				MessageBox::Show("This Semester does not occur!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			CourseIDTextBox->Text = "";
			return;
		}

		if (CourseIDTextBox->Text == "") {
			MessageBox::Show("Please input Course ID!");
			return;
		}

		DLL<COURSE*>* cur = sem->course.head;
		while (cur)
		{
			if (cur->data->ID == msclr::interop::marshal_as<std::string>(CourseIDTextBox->Text))
				break;
			cur = cur->next;
		}
		if (!cur) {
			if (g_currentSemester->course.head == nullptr) {
				MessageBox::Show("Can not find any Courses in this Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				this->Close();
				this->sourceForm->Show();
				return;
			}
			else MessageBox::Show("Invalid course ID");
			CourseIDTextBox->Text = "";
		}
		else
		{
			curCourse = cur;
			txt_coursename->Text = msclr::interop::marshal_as<System::String^>(cur->data->name);
			txt_teacher->Text = msclr::interop::marshal_as<System::String^>(cur->data->teacher);
			btn_browse->Enabled = true;
		}
	}
	private: System::Void ExpListStuInCourseCSV_Load(System::Object^ sender, System::EventArgs^ e) {

		if (g_currentSemester == nullptr) {
			if (g_currentSchoolYear == nullptr)
				MessageBox::Show("Can not find any SchoolYear! You must create a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
				MessageBox::Show("Can not find any Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		string str = to_string(g_currentSchoolYear->begin) + "-" + to_string(g_currentSchoolYear->end);
		this->schoolyeartxt->Text = msclr::interop::marshal_as<String^>(str);
		this->schoolyeartxt->ReadOnly = false;
		if (g_currentSemester == g_currentSchoolYear->sem1)
			chkbox_sem1->Checked = true;
		else if (g_currentSemester == g_currentSchoolYear->sem2)
			chkbox_sem2->Checked = true;
		else if (g_currentSemester == g_currentSchoolYear->sem3)
			chkbox_sem3->Checked = true;
	}
	private: System::Void txt_pathfile_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_pathfile->Text != "")
			btn_export->Enabled = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
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
	};
}
