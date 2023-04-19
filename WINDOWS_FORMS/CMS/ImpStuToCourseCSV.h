#pragma once
#include "header.h"
#include <fstream>
#include <string>
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
	/// Summary for ImpStuToCourseCSV
	/// </summary>
	public ref class ImpStuToCourseCSV : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ImpStuToCourseCSV(System::Windows::Forms::Form^ form)
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
		~ImpStuToCourseCSV()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ lbl_schoolyear;
	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::Label^ lbl_courseID;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Label^ lbl_courseInf;
	private: System::Windows::Forms::Label^ lbl_coursename;
	private: System::Windows::Forms::Label^ lbl_teacher;
	private: System::Windows::Forms::Label^ lbl_input;
	private: System::Windows::Forms::TextBox^ txt_coursename;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::TextBox^ txt_pathfile;
	private: System::Windows::Forms::Button^ btn_browse;
	private: System::Windows::Forms::Button^ btn_import;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ImpStuToCourseCSV::typeid));
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->lbl_schoolyear = (gcnew System::Windows::Forms::Label());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_courseID = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->lbl_courseInf = (gcnew System::Windows::Forms::Label());
			this->lbl_coursename = (gcnew System::Windows::Forms::Label());
			this->lbl_teacher = (gcnew System::Windows::Forms::Label());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->txt_pathfile = (gcnew System::Windows::Forms::TextBox());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->btn_import = (gcnew System::Windows::Forms::Button());
			this->pnl_title->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label1);
			this->pnl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->pnl_title->Location = System::Drawing::Point(66, 0);
			this->pnl_title->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(975, 75);
			this->pnl_title->TabIndex = 96;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(252, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(499, 37);
			this->label1->TabIndex = 58;
			this->label1->Text = L"IMPORT STUDENTS TO A COURSE";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel2->Controls->Add(this->account);
			this->panel2->Controls->Add(this->btn_back);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Size = System::Drawing::Size(68, 738);
			this->panel2->TabIndex = 97;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 668);
			this->account->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(60, 65);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 58;
			this->account->TabStop = false;
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_back->Location = System::Drawing::Point(4, 5);
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(60, 65);
			this->btn_back->TabIndex = 57;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ImpStuToCourseCSV::btn_back_Click);
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(325, 149);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(260, 33);
			this->txt_schoolyear->TabIndex = 98;
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_schoolyear->Location = System::Drawing::Point(181, 149);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(136, 27);
			this->lbl_schoolyear->TabIndex = 99;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(181, 205);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(112, 27);
			this->lbl_semester->TabIndex = 100;
			this->lbl_semester->Text = L"Semester:";
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem1->Location = System::Drawing::Point(325, 205);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem1->TabIndex = 101;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem2->Location = System::Drawing::Point(399, 205);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem2->TabIndex = 102;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->chkbox_sem3->Location = System::Drawing::Point(470, 205);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(50, 31);
			this->chkbox_sem3->TabIndex = 103;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			// 
			// lbl_courseID
			// 
			this->lbl_courseID->AutoSize = true;
			this->lbl_courseID->BackColor = System::Drawing::Color::Transparent;
			this->lbl_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseID->Location = System::Drawing::Point(181, 262);
			this->lbl_courseID->Name = L"lbl_courseID";
			this->lbl_courseID->Size = System::Drawing::Size(116, 27);
			this->lbl_courseID->TabIndex = 104;
			this->lbl_courseID->Text = L"Course ID:";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_courseID->Location = System::Drawing::Point(325, 256);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseID->MaxLength = 10;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(260, 33);
			this->txt_courseID->TabIndex = 105;
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(738, 188);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(127, 68);
			this->btn_search->TabIndex = 106;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &ImpStuToCourseCSV::btn_search_Click);
			// 
			// lbl_courseInf
			// 
			this->lbl_courseInf->AutoSize = true;
			this->lbl_courseInf->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->lbl_courseInf->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_courseInf->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl_courseInf->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseInf->Location = System::Drawing::Point(436, 355);
			this->lbl_courseInf->Name = L"lbl_courseInf";
			this->lbl_courseInf->Size = System::Drawing::Size(254, 33);
			this->lbl_courseInf->TabIndex = 107;
			this->lbl_courseInf->Text = L"Course Information";
			// 
			// lbl_coursename
			// 
			this->lbl_coursename->AutoSize = true;
			this->lbl_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_coursename->Location = System::Drawing::Point(181, 436);
			this->lbl_coursename->Name = L"lbl_coursename";
			this->lbl_coursename->Size = System::Drawing::Size(154, 27);
			this->lbl_coursename->TabIndex = 108;
			this->lbl_coursename->Text = L"Course Name:";
			// 
			// lbl_teacher
			// 
			this->lbl_teacher->AutoSize = true;
			this->lbl_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_teacher->Location = System::Drawing::Point(170, 508);
			this->lbl_teacher->Name = L"lbl_teacher";
			this->lbl_teacher->Size = System::Drawing::Size(165, 27);
			this->lbl_teacher->TabIndex = 109;
			this->lbl_teacher->Text = L"Teacher Name:";
			// 
			// lbl_input
			// 
			this->lbl_input->AutoSize = true;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_input->Location = System::Drawing::Point(104, 581);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(234, 27);
			this->lbl_input->TabIndex = 110;
			this->lbl_input->Text = L"Input the path of file: ";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(344, 436);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(267, 33);
			this->txt_coursename->TabIndex = 111;
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_teacher->Location = System::Drawing::Point(344, 504);
			this->txt_teacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(267, 33);
			this->txt_teacher->TabIndex = 112;
			// 
			// txt_pathfile
			// 
			this->txt_pathfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_pathfile->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_pathfile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_pathfile->Location = System::Drawing::Point(344, 575);
			this->txt_pathfile->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_pathfile->Name = L"txt_pathfile";
			this->txt_pathfile->ReadOnly = true;
			this->txt_pathfile->Size = System::Drawing::Size(511, 33);
			this->txt_pathfile->TabIndex = 113;
			this->txt_pathfile->TextChanged += gcnew System::EventHandler(this, &ImpStuToCourseCSV::txt_pathfile_TextChanged);
			// 
			// btn_browse
			// 
			this->btn_browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_browse->Enabled = false;
			this->btn_browse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->btn_browse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_browse->Location = System::Drawing::Point(906, 575);
			this->btn_browse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(79, 38);
			this->btn_browse->TabIndex = 114;
			this->btn_browse->Text = L"Browse";
			this->btn_browse->UseVisualStyleBackColor = false;
			this->btn_browse->Click += gcnew System::EventHandler(this, &ImpStuToCourseCSV::btn_browse_Click);
			// 
			// btn_import
			// 
			this->btn_import->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_import->Enabled = false;
			this->btn_import->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_import->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_import->Location = System::Drawing::Point(470, 656);
			this->btn_import->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_import->Name = L"btn_import";
			this->btn_import->Size = System::Drawing::Size(141, 68);
			this->btn_import->TabIndex = 115;
			this->btn_import->Text = L"Import";
			this->btn_import->UseVisualStyleBackColor = false;
			this->btn_import->Click += gcnew System::EventHandler(this, &ImpStuToCourseCSV::btn_import_Click);
			// 
			// ImpStuToCourseCSV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1043, 738);
			this->ControlBox = false;
			this->Controls->Add(this->btn_import);
			this->Controls->Add(this->btn_browse);
			this->Controls->Add(this->txt_pathfile);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->lbl_teacher);
			this->Controls->Add(this->lbl_coursename);
			this->Controls->Add(this->lbl_courseInf);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->lbl_courseID);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->lbl_schoolyear);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pnl_title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ImpStuToCourseCSV";
			this->Text = L"ImpStuToCourseCSV";
			this->Load += gcnew System::EventHandler(this, &ImpStuToCourseCSV::ImpStuToCourseCSV_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ImpStuToCourseCSV_Load(System::Object^ sender, System::EventArgs^ e) {
		txt_schoolyear->Text = (g_currentSchoolYear->begin) + "_" + (g_currentSchoolYear->end);
		txt_schoolyear->ReadOnly = true;
		if (g_currentSemester == g_currentSchoolYear->sem1)
			chkbox_sem1->Checked = true;
		else if (g_currentSemester == g_currentSchoolYear->sem2)
			chkbox_sem2->Checked = true;
		else if (g_currentSemester == g_currentSchoolYear->sem3)
			chkbox_sem3->Checked = true;

		chkbox_sem1->Enabled = false;
		chkbox_sem2->Enabled = false;
		chkbox_sem3->Enabled = false;
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		while (cur)
		{
			if (cur->data->ID == msclr::interop::marshal_as<string>(txt_courseID->Text))
				break;
			cur = cur->next;
		}
		if (!cur)
			MessageBox::Show("Invalid Course ID");
		else
		{
			txt_coursename->Text = msclr::interop::marshal_as<System::String^>(cur->data->name);
			txt_teacher->Text = msclr::interop::marshal_as<System::String^>(cur->data->teacher);
		}
		btn_browse->Enabled = true;
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
	}
	private: System::Void txt_pathfile_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_pathfile->Text != "")
			btn_browse->Enabled = true;
	}
	private: System::Void btn_import_Click(System::Object^ sender, System::EventArgs^ e) {
		string filename = msclr::interop::marshal_as<std::string>(txt_pathfile->Text);
		ifstream inp(filename);
		if (inp.is_open())
		{
			string str;
			getline(inp, str);//skipTitle
			if (str != "StudentID,othermark,midtermMark,finalMark,totalMark") {
				inp.close();
				MessageBox::Show("This file is not correct! Choose again!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			DLL<COURSE*>* cur = g_currentSemester->course.head;
			while (cur)
			{
				if (cur->data->ID == msclr::interop::marshal_as<string>(txt_courseID->Text))
					break;
			}
			if (!cur)
			{
				MessageBox::Show("Invalid Course ID");
				return;
			}
			while (!inp.eof())
			{
				getline(inp, str, ',');//StudentID
				cur->data->students.head->data->student->studentID = str;
				getline(inp, str, ',');//otherMark
				cur->data->students.head->data->otherMark = stoi(str);
				getline(inp, str, ',');//midtermMark
				cur->data->students.head->data->midtermMark = stoi(str);
				getline(inp, str, ',');//finalMark
				cur->data->students.head->data->finalMark = stoi(str);
				getline(inp, str, ',');//totalMark
				cur->data->students.head->data->otherMark = stoi(str);
			}
			inp.close();
			MessageBox::Show("Import Successfully!", "Notification", MessageBoxButtons::OK);
		}
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	};
}
