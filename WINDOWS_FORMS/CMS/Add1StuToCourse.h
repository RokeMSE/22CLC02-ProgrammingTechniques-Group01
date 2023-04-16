#pragma once
#include "header.h"
using namespace GROUP1;
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add1StuToCourse
	/// </summary>
	public ref class Add1StuToCourse : public System::Windows::Forms::Form
	{
	public:
		Add1StuToCourse(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			this->sourceForm = form;
			//
			//TODO: Add the constructor code here
			//
		}
		/*private:*/
		GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;	// the course this form is working on
													// this pointer is get when course ID has been entered and button search is clicked 
		GROUP1::DLL<GROUP1::STUDENT*>* curStudent;
		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curSchoolyear;
		GROUP1::SEMESTER* curSemester;
		System::Windows::Forms::Form^ sourceForm;
		Point mouseDownLocation, formLocation;

	public:
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add1StuToCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ chkbox_sem3;
	private: System::Windows::Forms::CheckBox^ chkbox_sem2;
	private: System::Windows::Forms::CheckBox^ chkbox_sem1;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_end;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ txt_schoolyear_start;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txt_coursename;
	private: System::Windows::Forms::TextBox^ txt_StudentID;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnl_title;

	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ txt_DoB;
	private: System::Windows::Forms::Button^ btn_add;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_yearIn;
	private: System::Windows::Forms::TextBox^ txt_gender;
	private: System::Windows::Forms::TextBox^ txt_name;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_socialID;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_class;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_StudentID_2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_search;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add1StuToCourse::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chkbox_sem3 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_sem1 = (gcnew System::Windows::Forms::CheckBox());
			this->txt_schoolyear_end = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear_start = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->txt_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txt_DoB = (gcnew System::Windows::Forms::TextBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_yearIn = (gcnew System::Windows::Forms::TextBox());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_socialID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_class = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->pnl_title->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label5->Location = System::Drawing::Point(96, 390);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 22);
			this->label5->TabIndex = 90;
			this->label5->Text = L"Course name";
			// 
			// chkbox_sem3
			// 
			this->chkbox_sem3->AutoSize = true;
			this->chkbox_sem3->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->chkbox_sem3->Location = System::Drawing::Point(229, 146);
			this->chkbox_sem3->Name = L"chkbox_sem3";
			this->chkbox_sem3->Size = System::Drawing::Size(45, 25);
			this->chkbox_sem3->TabIndex = 89;
			this->chkbox_sem3->Text = L"3";
			this->chkbox_sem3->UseVisualStyleBackColor = false;
			this->chkbox_sem3->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem3_CheckedChanged);
			// 
			// chkbox_sem2
			// 
			this->chkbox_sem2->AutoSize = true;
			this->chkbox_sem2->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->chkbox_sem2->Location = System::Drawing::Point(178, 146);
			this->chkbox_sem2->Name = L"chkbox_sem2";
			this->chkbox_sem2->Size = System::Drawing::Size(45, 25);
			this->chkbox_sem2->TabIndex = 88;
			this->chkbox_sem2->Text = L"2";
			this->chkbox_sem2->UseVisualStyleBackColor = false;
			this->chkbox_sem2->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem2_CheckedChanged);
			// 
			// chkbox_sem1
			// 
			this->chkbox_sem1->AutoSize = true;
			this->chkbox_sem1->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_sem1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_sem1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->chkbox_sem1->Location = System::Drawing::Point(127, 146);
			this->chkbox_sem1->Name = L"chkbox_sem1";
			this->chkbox_sem1->Size = System::Drawing::Size(45, 25);
			this->chkbox_sem1->TabIndex = 87;
			this->chkbox_sem1->Text = L"1";
			this->chkbox_sem1->UseVisualStyleBackColor = false;
			this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem1_CheckedChanged);
			// 
			// txt_schoolyear_end
			// 
			this->txt_schoolyear_end->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_schoolyear_end->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_schoolyear_end->Location = System::Drawing::Point(297, 106);
			this->txt_schoolyear_end->Name = L"txt_schoolyear_end";
			this->txt_schoolyear_end->ReadOnly = true;
			this->txt_schoolyear_end->Size = System::Drawing::Size(92, 28);
			this->txt_schoolyear_end->TabIndex = 86;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label23->Location = System::Drawing::Point(255, 109);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 22);
			this->label23->TabIndex = 85;
			this->label23->Text = L"End";
			// 
			// txt_schoolyear_start
			// 
			this->txt_schoolyear_start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->txt_schoolyear_start->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->txt_schoolyear_start->Location = System::Drawing::Point(128, 106);
			this->txt_schoolyear_start->MaxLength = 4;
			this->txt_schoolyear_start->Name = L"txt_schoolyear_start";
			this->txt_schoolyear_start->Size = System::Drawing::Size(92, 28);
			this->txt_schoolyear_start->TabIndex = 84;
			this->txt_schoolyear_start->TextChanged += gcnew System::EventHandler(this, &Add1StuToCourse::txt_SchoolYear_TextChanged);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label22->Location = System::Drawing::Point(68, 109);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(55, 22);
			this->label22->TabIndex = 83;
			this->label22->Text = L"Start:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label13->Location = System::Drawing::Point(34, 147);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 22);
			this->label13->TabIndex = 82;
			this->label13->Text = L"Semester:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_coursename->Location = System::Drawing::Point(27, 356);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txt_coursename->Size = System::Drawing::Size(265, 28);
			this->txt_coursename->TabIndex = 81;
			// 
			// txt_StudentID
			// 
			this->txt_StudentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->txt_StudentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->txt_StudentID->Location = System::Drawing::Point(124, 310);
			this->txt_StudentID->MaxLength = 10;
			this->txt_StudentID->Name = L"txt_StudentID";
			this->txt_StudentID->Size = System::Drawing::Size(168, 28);
			this->txt_StudentID->TabIndex = 80;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label9->Location = System::Drawing::Point(20, 313);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 22);
			this->label9->TabIndex = 79;
			this->label9->Text = L"Student ID:";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_schoolyear->Location = System::Drawing::Point(128, 66);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(261, 28);
			this->txt_schoolyear->TabIndex = 78;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label4->Location = System::Drawing::Point(18, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 22);
			this->label4->TabIndex = 77;
			this->label4->Text = L"School Year";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->txt_courseID->Location = System::Drawing::Point(124, 269);
			this->txt_courseID->MaxLength = 10;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(168, 28);
			this->txt_courseID->TabIndex = 76;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label2->Location = System::Drawing::Point(27, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 22);
			this->label2->TabIndex = 75;
			this->label2->Text = L"Course ID:";
			// 
			// pnl_title
			// 
			this->pnl_title->Controls->Add(this->btn_back);
			this->pnl_title->Controls->Add(this->lbl_title);
			this->pnl_title->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_title->Location = System::Drawing::Point(0, 0);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Padding = System::Windows::Forms::Padding(4);
			this->pnl_title->Size = System::Drawing::Size(838, 46);
			this->pnl_title->TabIndex = 91;
			this->pnl_title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1StuToCourse::pnl_title_MouseDown);
			this->pnl_title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1StuToCourse::pnl_title_MouseMove);
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btn_back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Location = System::Drawing::Point(0, 0);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(43, 46);
			this->btn_back->TabIndex = 93;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->lbl_title->Location = System::Drawing::Point(284, 9);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(330, 30);
			this->lbl_title->TabIndex = 92;
			this->lbl_title->Text = L"Add a Student to the Course";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(543, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(155, 155);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 92;
			this->pictureBox1->TabStop = false;
			// 
			// txt_DoB
			// 
			this->txt_DoB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_DoB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_DoB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_DoB->Location = System::Drawing::Point(444, 398);
			this->txt_DoB->Name = L"txt_DoB";
			this->txt_DoB->ReadOnly = true;
			this->txt_DoB->Size = System::Drawing::Size(146, 28);
			this->txt_DoB->TabIndex = 105;
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_add->Location = System::Drawing::Point(574, 440);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(104, 39);
			this->btn_add->TabIndex = 108;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_add_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label12->Location = System::Drawing::Point(328, 401);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(115, 22);
			this->label12->TabIndex = 104;
			this->label12->Text = L"Date of Birth";
			// 
			// txt_yearIn
			// 
			this->txt_yearIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_yearIn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_yearIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_yearIn->Location = System::Drawing::Point(731, 396);
			this->txt_yearIn->Name = L"txt_yearIn";
			this->txt_yearIn->ReadOnly = true;
			this->txt_yearIn->Size = System::Drawing::Size(89, 28);
			this->txt_yearIn->TabIndex = 107;
			// 
			// txt_gender
			// 
			this->txt_gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_gender->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_gender->Location = System::Drawing::Point(731, 311);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->ReadOnly = true;
			this->txt_gender->Size = System::Drawing::Size(89, 28);
			this->txt_gender->TabIndex = 103;
			// 
			// txt_name
			// 
			this->txt_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_name->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_name->Location = System::Drawing::Point(444, 354);
			this->txt_name->Name = L"txt_name";
			this->txt_name->ReadOnly = true;
			this->txt_name->Size = System::Drawing::Size(376, 28);
			this->txt_name->TabIndex = 97;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label10->Location = System::Drawing::Point(660, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 22);
			this->label10->TabIndex = 102;
			this->label10->Text = L"Gender";
			// 
			// txt_socialID
			// 
			this->txt_socialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_socialID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_socialID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_socialID->Location = System::Drawing::Point(444, 311);
			this->txt_socialID->Name = L"txt_socialID";
			this->txt_socialID->ReadOnly = true;
			this->txt_socialID->Size = System::Drawing::Size(146, 28);
			this->txt_socialID->TabIndex = 101;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label8->Location = System::Drawing::Point(362, 315);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 22);
			this->label8->TabIndex = 100;
			this->label8->Text = L"Social ID";
			// 
			// txt_class
			// 
			this->txt_class->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_class->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_class->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_class->Location = System::Drawing::Point(731, 268);
			this->txt_class->Name = L"txt_class";
			this->txt_class->ReadOnly = true;
			this->txt_class->Size = System::Drawing::Size(89, 28);
			this->txt_class->TabIndex = 99;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label7->Location = System::Drawing::Point(677, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 22);
			this->label7->TabIndex = 98;
			this->label7->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label6->Location = System::Drawing::Point(355, 357);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 22);
			this->label6->TabIndex = 96;
			this->label6->Text = L"Full name";
			// 
			// txt_StudentID_2
			// 
			this->txt_StudentID_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_StudentID_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StudentID_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_StudentID_2->Location = System::Drawing::Point(444, 268);
			this->txt_StudentID_2->Name = L"txt_StudentID_2";
			this->txt_StudentID_2->ReadOnly = true;
			this->txt_StudentID_2->Size = System::Drawing::Size(146, 28);
			this->txt_StudentID_2->TabIndex = 95;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->label3->Location = System::Drawing::Point(346, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 22);
			this->label3->TabIndex = 94;
			this->label3->Text = L"Student ID";
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_search->Location = System::Drawing::Point(100, 440);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(104, 39);
			this->btn_search->TabIndex = 109;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &Add1StuToCourse::btn_search_Click);
			// 
			// Add1StuToCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(838, 505);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_DoB);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_yearIn);
			this->Controls->Add(this->chkbox_sem3);
			this->Controls->Add(this->txt_gender);
			this->Controls->Add(this->chkbox_sem2);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->chkbox_sem1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_schoolyear_end);
			this->Controls->Add(this->txt_socialID);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_schoolyear_start);
			this->Controls->Add(this->txt_class);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->txt_StudentID_2);
			this->Controls->Add(this->txt_StudentID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Add1StuToCourse";
			this->Text = L"Add1StuToCourse";
			this->Load += gcnew System::EventHandler(this, &Add1StuToCourse::Add1StuToCourse_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		///////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////
	private: System::Void Add1StuToCourse_Load(System::Object^ sender, System::EventArgs^ e) {
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
		this->curStudent = nullptr;
		this->curCourse = nullptr;
	}
		   //GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;
		   //GROUP1::DLL<GROUP1::STUDENT*>* curStudent;
		   //GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curSchoolyear;
		   //GROUP1::SEMESTER* curSemester;
		   //System::Windows::Forms::Form^ sourceForm;
	///////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////
	// panel
			// Point mouseDownLocation, formLocation;
			//this->pnl_titleRemv->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RemoveStuFromCourse::pnl_titleRemv_MouseDown);
			//this->pnl_titleRemv->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &RemoveStuFromCourse::pnl_titleRemv_MouseMove);
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
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // checkbox semester 1 2 3
		   //this->chkbox_sem1->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToCourse::chkbox_sem1_CheckedChanged);
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
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // Schoolyear_textChanged
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
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


		   ///////////////////////////////////////////////////////////////////////
		   // button back clicked
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_coursename->Text = "";
		this->Close();
		this->sourceForm->Show();
	}
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////
	// button Search/Add clicked
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
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
		this->curCourse = this->curSemester->course.head;

		while (this->curCourse) {
			if (id == this->curCourse->data->ID) {
			_skipfindcourse:
				txt_coursename->Text = gcnew System::String((this->curCourse->data->name).c_str());
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

		// then search for student in list L_Student
		id = msclr::interop::marshal_as<std::string>(txt_StudentID->Text);
		this->curStudent = L_Student.head; //type == DLL<STUDENT*>*
		while (this->curStudent) {
			if (this->curStudent->data->studentID == id) {
				txt_StudentID_2->Text = gcnew System::String(id.c_str());
				txt_class->Text = gcnew System::String(this->curStudent->data->Class->convertToString().c_str());
				txt_socialID->Text = gcnew System::String(this->curStudent->data->socialID.c_str());
				std::string tmpString = (this->curStudent->data->gender == 1) ? "Male" : "Female";
				txt_gender->Text = gcnew System::String(tmpString.c_str());
				tmpString = this->curStudent->data->firstname + " " + this->curStudent->data->lastname;
				txt_name->Text = gcnew System::String(tmpString.c_str());
				txt_DoB->Text = gcnew System::String(DateToString(this->curStudent->data->DoB).c_str());
				txt_yearIn->Text = gcnew System::String(this->curStudent->data->Class->yearIn.ToString());
				txt_coursename->Text = gcnew System::String(this->curCourse->data->name.c_str());
				return;
			}
			this->curStudent = this->curStudent->next;
		}
		if (!this->curStudent) {
			id = "Cannot find student " + id;
			System::String^ message = gcnew System::String(id.c_str());
			MessageBox::Show(message);
			return;
		}
	}
		   // %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% //

	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->curStudent || !this->curCourse) {
			MessageBox::Show("Which student should be added???");
			return;
		}

		// check whether this student has occurred in the course
		GROUP1::DLL<GROUP1::SCOREBOARD*>* tmpScore = this->curCourse->data->students.head;
		while (tmpScore) {
			if (tmpScore->data->student == this->curStudent->data) {
				// pointing to the same address, which is equivalent to `they are the same`
				MessageBox::Show("This student has already been in this course!");
				return;
			}
			tmpScore = tmpScore->next;
		}
		// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
				// add a new student to list COURSE::students
		tmpScore = new GROUP1::DLL<GROUP1::SCOREBOARD*>;
		tmpScore->data = new GROUP1::SCOREBOARD;
		tmpScore->data->student = this->curStudent->data;
		tmpScore->next = nullptr;
		tmpScore->prev = this->curCourse->data->students.tail;

		/// Update the list, 2 cases: the list is empty or not
		if (this->curCourse->data->students.head == nullptr) {
			this->curCourse->data->students.head = tmpScore;
			this->curCourse->data->students.tail = tmpScore;
		}
		else {
			this->curCourse->data->students.tail->next = tmpScore;
			this->curCourse->data->students.tail = tmpScore;
		}

		////////////////////////////////////////////
		////////////////////////////////////////////
////////////////////////////////////////////

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
		// add a new course to list STUDENT::courses
		// new a node
		DLL<COURSE*>* tmp = new DLL<COURSE*>;
		tmp->data = this->curCourse->data;

		/// Update the list, 2 cases: the list is empty or not
		if (this->curStudent->data->courses.head == nullptr) {
			this->curStudent->data->courses.head = tmp;
			this->curStudent->data->courses.head = tmp;
		}
		else {
			this->curStudent->data->courses.tail->next = tmp;
			this->curStudent->data->courses.tail = tmp;
		}
		////////////////////////////////////////////
		////////////////////////////////////////////
////////////////////////////////////////////

		std::string message = "Student" + this->curStudent->data->studentID + "was successfully added";
		MessageBox::Show(gcnew System::String(message.c_str()));
		this->curStudent = nullptr;
	}
		   ///////////////////////////////////////////////////////////////////////
		   ///////////////////////////////////////////////////////////////////////
	};
}