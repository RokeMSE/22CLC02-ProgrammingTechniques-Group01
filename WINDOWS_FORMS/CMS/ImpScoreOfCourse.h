#pragma once
#include "header.h"
#include <msclr/marshal_cppstd.h>
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
	/// Summary for ImpScoreOfCourse
	/// </summary>
	public ref class ImpScoreOfCourse : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ImpScoreOfCourse(System::Windows::Forms::Form^ form)
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
		~ImpScoreOfCourse()
		{
			if (components)
			{
				delete components;
			}
		}
		DLL<COURSE*>* current_Course;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Label^ lbl_input;
	private: System::Windows::Forms::TextBox^ txt_pathfile;
	private: System::Windows::Forms::Button^ btn_import;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::Label^ lbl_semester;

	private: System::Windows::Forms::Label^ lbl_schoolyear;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::TextBox^ txt_courseID;

	private: System::Windows::Forms::Label^ lbl_courseID;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Label^ lbl_courseInf;
	private: System::Windows::Forms::TextBox^ txt_coursename;

	private: System::Windows::Forms::Label^ lbl_coursename;
	private: System::Windows::Forms::TextBox^ txt_teacher;

	private: System::Windows::Forms::Label^ lbl_teacher;

	private: System::Windows::Forms::Button^ btn_browse;






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
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->txt_pathfile = (gcnew System::Windows::Forms::TextBox());
			this->btn_import = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->lbl_schoolyear = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseID = (gcnew System::Windows::Forms::Label());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->lbl_courseInf = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->lbl_coursename = (gcnew System::Windows::Forms::Label());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->lbl_teacher = (gcnew System::Windows::Forms::Label());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(602, 455);
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(106, 67);
			this->btn_back->TabIndex = 57;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ImpScoreOfCourse::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_title->Location = System::Drawing::Point(276, 9);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(488, 52);
			this->lbl_title->TabIndex = 58;
			this->lbl_title->Text = L"Import Score of a Course";
			// 
			// lbl_input
			// 
			this->lbl_input->AutoSize = true;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
			this->lbl_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_input->Location = System::Drawing::Point(49, 377);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(218, 27);
			this->lbl_input->TabIndex = 59;
			this->lbl_input->Text = L"Input the path of file: ";
			// 
			// txt_pathfile
			// 
			this->txt_pathfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_pathfile->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
			this->txt_pathfile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_pathfile->Location = System::Drawing::Point(276, 371);
			this->txt_pathfile->Name = L"txt_pathfile";
			this->txt_pathfile->ReadOnly = true;
			this->txt_pathfile->Size = System::Drawing::Size(557, 33);
			this->txt_pathfile->TabIndex = 61;
			this->txt_pathfile->TextChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::txt_pathfile_TextChanged);
			// 
			// btn_import
			// 
			this->btn_import->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_import->Enabled = false;
			this->btn_import->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_import->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_import->Location = System::Drawing::Point(353, 455);
			this->btn_import->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_import->Name = L"btn_import";
			this->btn_import->Size = System::Drawing::Size(106, 67);
			this->btn_import->TabIndex = 62;
			this->btn_import->Text = L"Import";
			this->btn_import->UseVisualStyleBackColor = false;
			this->btn_import->Click += gcnew System::EventHandler(this, &ImpScoreOfCourse::btn_import_Click);
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_schoolyear_end->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(283, 171);
			this->txt_schoolyear_end->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(82, 24);
			this->txt_schoolyear_end->TabIndex = 84;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label23->Location = System::Drawing::Point(241, 173);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 19);
			this->label23->TabIndex = 83;
			this->label23->Text = L"End:";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::SystemColors::Control;
			this->txt_schoolyear_start->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txt_schoolyear_start->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txt_schoolyear_start->Location = System::Drawing::Point(136, 171);
			this->txt_schoolyear_start->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(82, 24);
			this->txt_schoolyear_start->TabIndex = 82;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::txt_schoolyear_start_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label22->Location = System::Drawing::Point(83, 173);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 19);
			this->label22->TabIndex = 81;
			this->label22->Text = L"Start:";
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->chkbox_sem3->Location = System::Drawing::Point(227, 216);
			this->chkbox_sem3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(39, 24);
			this->chkbox_sem3->TabIndex = 80;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = true;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->chkbox_sem2->Location = System::Drawing::Point(181, 216);
			this->chkbox_sem2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(39, 24);
			this->chkbox_sem2->TabIndex = 79;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = true;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->chkbox_sem1->Location = System::Drawing::Point(136, 216);
			this->chkbox_sem1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(39, 24);
			this->chkbox_sem1->TabIndex = 78;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = true;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::chkbox_sem1_CheckedChanged);
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_semester->Location = System::Drawing::Point(52, 218);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(73, 20);
			this->lbl_semester->TabIndex = 77;
			this->lbl_semester->Text = L"Semester:";
			// 
			// lbl_schoolyear
			// 
			this->lbl_schoolyear->AutoSize = true;
			this->lbl_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->lbl_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_schoolyear->Location = System::Drawing::Point(34, 125);
			this->lbl_schoolyear->Name = L"lbl_schoolyear";
			this->lbl_schoolyear->Size = System::Drawing::Size(91, 20);
			this->lbl_schoolyear->TabIndex = 75;
			this->lbl_schoolyear->Text = L"School Year:";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_schoolyear->Location = System::Drawing::Point(136, 125);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(232, 24);
			this->txt_schoolyear->TabIndex = 76;
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::SystemColors::Control;
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_courseID->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->txt_courseID->Location = System::Drawing::Point(136, 261);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseID->MaxLength = 10;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(232, 24);
			this->txt_courseID->TabIndex = 86;
			// 
			// lbl_courseID
			// 
			this->lbl_courseID->AutoSize = true;
			this->lbl_courseID->BackColor = System::Drawing::Color::Transparent;
			this->lbl_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_courseID->Location = System::Drawing::Point(52, 266);
			this->lbl_courseID->Name = L"lbl_courseID";
			this->lbl_courseID->Size = System::Drawing::Size(73, 19);
			this->lbl_courseID->TabIndex = 85;
			this->lbl_courseID->Text = L"Course ID:";
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_search->Location = System::Drawing::Point(462, 171);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(106, 67);
			this->btn_search->TabIndex = 87;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &ImpScoreOfCourse::btn_search_Click);
			// 
			// lbl_courseInf
			// 
			this->lbl_courseInf->AutoSize = true;
			this->lbl_courseInf->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_courseInf->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14));
			this->lbl_courseInf->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_courseInf->Location = System::Drawing::Point(695, 125);
			this->lbl_courseInf->Name = L"lbl_courseInf";
			this->lbl_courseInf->Size = System::Drawing::Size(237, 33);
			this->lbl_courseInf->TabIndex = 88;
			this->lbl_courseInf->Text = L"Course Information";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_coursename->Location = System::Drawing::Point(728, 189);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(265, 24);
			this->txt_coursename->TabIndex = 90;
			this->txt_coursename->TextChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::txt_coursename_TextChanged);
			// 
			// lbl_coursename
			// 
			this->lbl_coursename->AutoSize = true;
			this->lbl_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->lbl_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_coursename->Location = System::Drawing::Point(620, 193);
			this->lbl_coursename->Name = L"lbl_coursename";
			this->lbl_coursename->Size = System::Drawing::Size(102, 20);
			this->lbl_coursename->TabIndex = 89;
			this->lbl_coursename->Text = L"Course Name:";
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_teacher->Location = System::Drawing::Point(728, 236);
			this->txt_teacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(265, 24);
			this->txt_teacher->TabIndex = 92;
			// 
			// lbl_teacher
			// 
			this->lbl_teacher->AutoSize = true;
			this->lbl_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->lbl_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_teacher->Location = System::Drawing::Point(613, 239);
			this->lbl_teacher->Name = L"lbl_teacher";
			this->lbl_teacher->Size = System::Drawing::Size(109, 20);
			this->lbl_teacher->TabIndex = 91;
			this->lbl_teacher->Text = L"Teacher Name:";
			// 
			// btn_browse
			// 
			this->btn_browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_browse->Enabled = false;
			this->btn_browse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->btn_browse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_browse->Location = System::Drawing::Point(867, 371);
			this->btn_browse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(80, 33);
			this->btn_browse->TabIndex = 93;
			this->btn_browse->Text = L"Browse";
			this->btn_browse->UseVisualStyleBackColor = false;
			this->btn_browse->Click += gcnew System::EventHandler(this, &ImpScoreOfCourse::btn_browse_Click);
			// 
			// ImpScoreOfCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(1032, 563);
			this->Controls->Add(this->btn_browse);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->lbl_teacher);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->lbl_coursename);
			this->Controls->Add(this->lbl_courseInf);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->lbl_courseID);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->lbl_schoolyear);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_import);
			this->Controls->Add(this->txt_pathfile);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->btn_back);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ImpScoreOfCourse";
			this->Text = L"ImpScoreOfCourse";
			this->Load += gcnew System::EventHandler(this, &ImpScoreOfCourse::ImpScoreOfCourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txt_pathfile_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_pathfile->Text != "")
			btn_import->Enabled = true;
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void btn_import_Click(System::Object^ sender, System::EventArgs^ e) {
		string filename = msclr::interop::marshal_as<std::string>(txt_pathfile->Text);
		ifstream ifs(filename);
		if (ifs.is_open()) {
			string str;
			getline(ifs, str);	// skip title line
			if (str != "StudentID,othermark,midtermMark,finalMark,totalMark") {
				ifs.close();
				MessageBox::Show("This file is not correct! Choose again!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			while (!ifs.eof()) {
				getline(ifs, str, ',');	//student ID
				DLL<SCOREBOARD*>* cur = current_Course->data->students.head;
				while (cur != nullptr && cur->data->student->studentID != str)	cur = cur->next;
				if (cur == nullptr) {
					str = "The student [" + str + "] is not in this course! Check again!";
					MessageBox::Show(gcnew System::String((str).c_str()), "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				getline(ifs, str, ',');	//other mark
				cur->data->otherMark = stod(str);
				getline(ifs, str, ',');	//midterm mark
				cur->data->midtermMark = stod(str);
				getline(ifs, str, ',');	//final mark
				cur->data->finalMark = stod(str);
				getline(ifs, str);	//total mark (endline)
				cur->data->totalMark = stod(str);
			}
			ifs.close();
			MessageBox::Show("Import Successfully!", "Notification", MessageBoxButtons::OK);
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
	private: System::Void ImpScoreOfCourse_Load(System::Object^ sender, System::EventArgs^ e) {
		txt_schoolyear_start->Text = gcnew System::String((g_currentSchoolYear->begin).ToString());
	}

	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		int yearbegin;
		yearbegin = System::Convert::ToInt32(txt_schoolyear_start->Text);

		DLL<SCHOOLYEAR*>* cur = L_SchoolYear.head;
		while (cur && cur->data->begin != yearbegin)	cur = cur->next;
		if (cur == nullptr) {
			MessageBox::Show("This SchoolYear does not exist!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		DLL<COURSE*>* list = nullptr;
		if (chkbox_sem1->Checked && cur->data->sem1 != nullptr)
			list = cur->data->sem1->course.head;
		if (chkbox_sem2->Checked && cur->data->sem2 != nullptr)
			list = cur->data->sem2->course.head;
		if (chkbox_sem3->Checked && cur->data->sem3 != nullptr)
			list = cur->data->sem3->course.head;

		if (list == nullptr) {
			MessageBox::Show("This Semester does not occur!", "Notification", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		while (list != nullptr && txt_courseID->Text != gcnew System::String((list->data->ID).c_str())) {
			list = list->next;
		}
		if (list == nullptr) {
			MessageBox::Show("The Course [" + txt_courseID->Text + "] does not exist!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		current_Course = list;
		txt_coursename->Text = gcnew System::String((list->data->name).c_str());
		txt_teacher->Text = gcnew System::String((list->data->teacher).c_str());
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
	private: System::Void txt_coursename_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_coursename->Text != "")
			btn_browse->Enabled = true;
	}
	};
}
