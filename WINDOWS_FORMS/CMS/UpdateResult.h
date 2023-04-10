#pragma once
#include "header.h"
#include <msclr/marshal_cppstd.h>
#include <string>

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateResult
	/// </summary>
	public ref class UpdateResult : public System::Windows::Forms::Form
	{
	public:
		UpdateResult(System::Windows::Forms::Form^ form)
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
		~UpdateResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;	// the course this form is working on
															// this pointer is get when course ID has been entered and button search is clicked 
		GROUP1::DLL<GROUP1::SCOREBOARD*>* curStudent;
		System::Windows::Forms::Form^ sourceForm;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::TextBox^ txt_coursename;

	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_title;

	private: System::Windows::Forms::Button^ btn_Search;

	private: System::Windows::Forms::TextBox^ txt_schoolyear;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_sem;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_credit;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_maxStu;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_StudentID;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ txt_othermark;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_midmark;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txt_rateOther;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_rateMid;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txt_rateFinal;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txt_finalmark;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txt_totalmark;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txt_rateTotal;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Panel^ pnl_titleUpdateScore;
	private: System::Windows::Forms::TextBox^ txt_StudentID_2;
	private: System::Windows::Forms::Label^ label3;
	private: Point mouseDownLocation, formLocation;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateResult::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_sem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_credit = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_maxStu = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txt_othermark = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_midmark = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txt_rateOther = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_rateMid = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txt_rateFinal = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txt_finalmark = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txt_totalmark = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txt_rateTotal = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pnl_titleUpdateScore = (gcnew System::Windows::Forms::Panel());
			this->txt_StudentID_2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnl_titleUpdateScore->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label1->Location = System::Drawing::Point(724, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course ID";
			// 
			// txt_courseID
			// 
			this->txt_courseID->Location = System::Drawing::Point(814, 81);
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(261, 26);
			this->txt_courseID->TabIndex = 1;
			this->txt_courseID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_coursename->Location = System::Drawing::Point(161, 208);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(261, 26);
			this->txt_coursename->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->Location = System::Drawing::Point(53, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Course name";
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_title->Location = System::Drawing::Point(458, 8);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(286, 30);
			this->lbl_title->TabIndex = 4;
			this->lbl_title->Text = L"Update Score of Student";
			// 
			// btn_Search
			// 
			this->btn_Search->Location = System::Drawing::Point(1094, 123);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(83, 26);
			this->btn_Search->TabIndex = 5;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &UpdateResult::btn_Search_Click);
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_schoolyear->Location = System::Drawing::Point(161, 84);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(261, 26);
			this->txt_schoolyear->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Location = System::Drawing::Point(47, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"School Year";
			// 
			// txt_sem
			// 
			this->txt_sem->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_sem->Location = System::Drawing::Point(609, 81);
			this->txt_sem->Name = L"txt_sem";
			this->txt_sem->ReadOnly = true;
			this->txt_sem->Size = System::Drawing::Size(56, 26);
			this->txt_sem->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Location = System::Drawing::Point(501, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Semester";
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_teacher->Location = System::Drawing::Point(536, 208);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(233, 26);
			this->txt_teacher->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label6->Location = System::Drawing::Point(463, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Teacher";
			// 
			// txt_credit
			// 
			this->txt_credit->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_credit->Location = System::Drawing::Point(916, 211);
			this->txt_credit->Name = L"txt_credit";
			this->txt_credit->ReadOnly = true;
			this->txt_credit->Size = System::Drawing::Size(41, 26);
			this->txt_credit->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label7->Location = System::Drawing::Point(840, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Credit(s)";
			// 
			// txt_maxStu
			// 
			this->txt_maxStu->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_maxStu->Location = System::Drawing::Point(1113, 211);
			this->txt_maxStu->Name = L"txt_maxStu";
			this->txt_maxStu->ReadOnly = true;
			this->txt_maxStu->Size = System::Drawing::Size(48, 26);
			this->txt_maxStu->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label8->Location = System::Drawing::Point(1000, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Max Students";
			// 
			// txt_StudentID
			// 
			this->txt_StudentID->BackColor = System::Drawing::SystemColors::Control;
			this->txt_StudentID->Location = System::Drawing::Point(814, 123);
			this->txt_StudentID->Name = L"txt_StudentID";
			this->txt_StudentID->ReadOnly = false;
			this->txt_StudentID->Size = System::Drawing::Size(261, 26);
			this->txt_StudentID->TabIndex = 17;
			this->txt_StudentID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label9->Location = System::Drawing::Point(719, 126);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Student ID";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(285, 258);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(659, 3);
			this->panel1->TabIndex = 18;
			// 
			// txt_othermark
			// 
			this->txt_othermark->Location = System::Drawing::Point(609, 302);
			this->txt_othermark->MaxLength = 10;
			this->txt_othermark->Name = L"txt_othermark";
			this->txt_othermark->ReadOnly = true;
			this->txt_othermark->Size = System::Drawing::Size(84, 26);
			this->txt_othermark->TabIndex = 20;
			this->txt_othermark->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_doubleOnly_KeyPress);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label10->Location = System::Drawing::Point(515, 305);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Other Mark";
			// 
			// txt_midmark
			// 
			this->txt_midmark->Location = System::Drawing::Point(609, 351);
			this->txt_midmark->MaxLength = 10;
			this->txt_midmark->Name = L"txt_midmark";
			this->txt_midmark->ReadOnly = true;
			this->txt_midmark->Size = System::Drawing::Size(84, 26);
			this->txt_midmark->TabIndex = 22;
			this->txt_midmark->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_doubleOnly_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label11->Location = System::Drawing::Point(498, 354);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(105, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Midterm Mark";
			// 
			// txt_rateOther
			// 
			this->txt_rateOther->Location = System::Drawing::Point(814, 302);
			this->txt_rateOther->Name = L"txt_rateOther";
			this->txt_rateOther->ReadOnly = true;
			this->txt_rateOther->Size = System::Drawing::Size(62, 26);
			this->txt_rateOther->TabIndex = 24;
			this->txt_rateOther->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label12->Location = System::Drawing::Point(766, 305);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 20);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Rate";
			// 
			// txt_rateMid
			// 
			this->txt_rateMid->Location = System::Drawing::Point(814, 351);
			this->txt_rateMid->Name = L"txt_rateMid";
			this->txt_rateMid->ReadOnly = true;
			this->txt_rateMid->Size = System::Drawing::Size(62, 26);
			this->txt_rateMid->TabIndex = 26;
			this->txt_rateMid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label13->Location = System::Drawing::Point(766, 354);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 20);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Rate";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label14->Location = System::Drawing::Point(881, 305);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(23, 20);
			this->label14->TabIndex = 27;
			this->label14->Text = L"%";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label16->Location = System::Drawing::Point(881, 354);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 20);
			this->label16->TabIndex = 29;
			this->label16->Text = L"%";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label15->Location = System::Drawing::Point(881, 402);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 20);
			this->label15->TabIndex = 34;
			this->label15->Text = L"%";
			// 
			// txt_rateFinal
			// 
			this->txt_rateFinal->Location = System::Drawing::Point(814, 399);
			this->txt_rateFinal->Name = L"txt_rateFinal";
			this->txt_rateFinal->ReadOnly = true;
			this->txt_rateFinal->Size = System::Drawing::Size(62, 26);
			this->txt_rateFinal->TabIndex = 33;
			this->txt_rateFinal->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_intOnly_KeyPress);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label17->Location = System::Drawing::Point(766, 402);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 20);
			this->label17->TabIndex = 32;
			this->label17->Text = L"Rate";
			// 
			// txt_finalmark
			// 
			this->txt_finalmark->Location = System::Drawing::Point(609, 399);
			this->txt_finalmark->MaxLength = 10;
			this->txt_finalmark->Name = L"txt_finalmark";
			this->txt_finalmark->ReadOnly = true;
			this->txt_finalmark->Size = System::Drawing::Size(84, 26);
			this->txt_finalmark->TabIndex = 31;
			this->txt_finalmark->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_doubleOnly_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label18->Location = System::Drawing::Point(521, 402);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(82, 20);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Final Mark";
			// 
			// txt_totalmark
			// 
			this->txt_totalmark->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_totalmark->Location = System::Drawing::Point(609, 453);
			this->txt_totalmark->MaxLength = 10;
			this->txt_totalmark->Name = L"txt_totalmark";
			this->txt_totalmark->ReadOnly = true;
			this->txt_totalmark->Size = System::Drawing::Size(84, 26);
			this->txt_totalmark->TabIndex = 36;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label19->Location = System::Drawing::Point(520, 456);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(83, 20);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Total Mark";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(463, 437);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 1);
			this->panel2->TabIndex = 19;
			// 
			// btn_Update
			// 
			this->btn_Update->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_Update->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Update->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Update->Location = System::Drawing::Point(609, 499);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(84, 30);
			this->btn_Update->TabIndex = 37;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = false;
			this->btn_Update->Click += gcnew System::EventHandler(this, &UpdateResult::btn_Update_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label20->Location = System::Drawing::Point(881, 456);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(23, 20);
			this->label20->TabIndex = 40;
			this->label20->Text = L"%";
			// 
			// txt_rateTotal
			// 
			this->txt_rateTotal->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_rateTotal->Location = System::Drawing::Point(814, 453);
			this->txt_rateTotal->Name = L"txt_rateTotal";
			this->txt_rateTotal->ReadOnly = true;
			this->txt_rateTotal->Size = System::Drawing::Size(62, 26);
			this->txt_rateTotal->TabIndex = 39;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label21->Location = System::Drawing::Point(726, 456);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(83, 20);
			this->label21->TabIndex = 38;
			this->label21->Text = L"Total Rate";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(1165, 6);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(35, 33);
			this->btn_back->TabIndex = 41;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &UpdateResult::btn_back_Click);
			// 
			// pnl_titleUpdateScore
			// 
			this->pnl_titleUpdateScore->Controls->Add(this->btn_back);
			this->pnl_titleUpdateScore->Controls->Add(this->lbl_title);
			this->pnl_titleUpdateScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_titleUpdateScore->Location = System::Drawing::Point(4, 4);
			this->pnl_titleUpdateScore->Name = L"pnl_titleUpdateScore";
			this->pnl_titleUpdateScore->Padding = System::Windows::Forms::Padding(4);
			this->pnl_titleUpdateScore->Size = System::Drawing::Size(1207, 46);
			this->pnl_titleUpdateScore->TabIndex = 42;
			this->pnl_titleUpdateScore->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateResult::pnl_titleUpdateScore_MouseDown);
			this->pnl_titleUpdateScore->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UpdateResult::pnl_titleUpdateScore_MouseMove);
			// 
			// txt_StudentID_2
			// 
			this->txt_StudentID_2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->txt_StudentID_2->Location = System::Drawing::Point(161, 302);
			this->txt_StudentID_2->Name = L"txt_StudentID_2";
			this->txt_StudentID_2->ReadOnly = true;
			this->txt_StudentID_2->Size = System::Drawing::Size(261, 26);
			this->txt_StudentID_2->TabIndex = 44;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label3->Location = System::Drawing::Point(66, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 20);
			this->label3->TabIndex = 43;
			this->label3->Text = L"Student ID";
			// 
			// UpdateResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(1215, 611);
			this->ControlBox = false;
			this->Controls->Add(this->txt_StudentID_2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->txt_rateTotal);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txt_totalmark);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txt_rateFinal);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->txt_finalmark);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txt_rateMid);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_rateOther);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txt_midmark);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txt_othermark);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txt_StudentID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_maxStu);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_credit);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_sem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pnl_titleUpdateScore);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UpdateResult";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Load += gcnew System::EventHandler(this, &UpdateResult::UpdateResult_Load);
			this->pnl_titleUpdateScore->ResumeLayout(false);
			this->pnl_titleUpdateScore->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateResult_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string str = std::to_string(g_currentSchoolYear->begin) + " - " + std::to_string(g_currentSchoolYear->end);
		txt_schoolyear->Text = gcnew System::String(str.c_str());
		str = std::to_string(g_currentSemester->No);
		txt_sem->Text = gcnew System::String(str.c_str());

		txt_othermark->ReadOnly = true;
		txt_othermark->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_midmark->ReadOnly = true;
		txt_midmark->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_finalmark->ReadOnly = true;
		txt_finalmark->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_rateOther->ReadOnly = true;
		txt_rateOther->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_rateMid->ReadOnly = true;
		txt_rateMid->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_rateFinal->ReadOnly = true;
		txt_rateFinal->BackColor = System::Drawing::SystemColors::AppWorkspace;

		this->curCourse = nullptr;
		this->curStudent = nullptr;

		pnl_titleUpdateScore->BackColor = Color::FromArgb(50, 255, 255, 255);
		lbl_title->BackColor = System::Drawing::Color::Transparent;
	}

	private: System::Void txt_intOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// integers only
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))	e->Handled = true;
	}
	
	private: bool existDot(System::String^ s) {
		std::string str = msclr::interop::marshal_as<std::string>(s);
		for (int i = 0; i < str.length(); i++)	if (str[i] == '.')	return 1;
		return 0;
	}
	private: System::Void txt_doubleOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		//// Allow digits, decimal point, backspace, and delete keys
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '.' && e->KeyChar != '\u007F')	e->Handled = true;
		// '\u007F' == backspace

		// Allow only one decimal point
		if (e->KeyChar == '.' && existDot(static_cast<System::String^>(sender)))	e->Handled = true;
	}

	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		// search for course
		std::string id = msclr::interop::marshal_as<std::string>(txt_courseID->Text);
		if (this->curCourse && this->curCourse->data->ID == id)	goto _skipfindcourse;
		this->curCourse = g_currentSemester->course.head;
		
		while (this->curCourse) {
			if (id == this->curCourse->data->ID) {
				txt_coursename->Text = gcnew System::String((this->curCourse->data->name).c_str());
				txt_teacher->Text = gcnew System::String((this->curCourse->data->teacher).c_str());
				txt_credit->Text = System::Convert::ToString(this->curCourse->data->credit);
				txt_maxStu->Text = System::Convert::ToString(this->curCourse->data->maxStudents);
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

		// then search for student in the course
	_skipfindcourse:
		id = msclr::interop::marshal_as<std::string>(txt_StudentID->Text);
		if (this->curStudent && this->curStudent->data->student->studentID == id)	goto _skipfindstudent;
		this->curStudent = this->curCourse->data->students.head; //type == DLL<SCOREBOARD*>*
		while (this->curStudent) {
			if (this->curStudent->data->student->studentID == id) {
			_skipfindstudent:
				txt_othermark->ReadOnly = false;
				txt_othermark->BackColor = System::Drawing::SystemColors::Control;

				txt_midmark->ReadOnly = false;
				txt_midmark->BackColor = System::Drawing::SystemColors::Control;

				txt_finalmark->ReadOnly = false;
				txt_finalmark->BackColor = System::Drawing::SystemColors::Control;

				txt_rateOther->ReadOnly = false;
				txt_rateOther->BackColor = System::Drawing::SystemColors::Control;

				txt_rateMid->ReadOnly = false;
				txt_rateMid->BackColor = System::Drawing::SystemColors::Control;

				txt_rateFinal->ReadOnly = false;
				txt_rateFinal->BackColor = System::Drawing::SystemColors::Control;

				txt_StudentID_2->Text = txt_StudentID->Text;
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

	private: System::Void btn_Update_Click(System::Object^ sender, System::EventArgs^ e) {		
		int rateOther = -1, rateMid = -1, rateFinal = -1;
		try {
			rateOther = System::Convert::ToInt32(txt_rateOther->Text);
			rateMid = System::Convert::ToInt32(txt_rateMid->Text);
			rateFinal = System::Convert::ToInt32(txt_rateFinal->Text);
		}
		catch (System::FormatException^) {
			MessageBox::Show("Rate is not valid. Please enter again!");
			return;
		}

		if (rateOther + rateMid + rateFinal != 100) {
			MessageBox::Show("Total rate must be 100%");
			return;
		}
		double val_otherMark, val_midtermMark, val_finalMark;
		try {
			val_otherMark = System::Convert::ToDouble(txt_othermark->Text); // Use the input_value as a floating-point number
			val_midtermMark = System::Convert::ToDouble(txt_midmark->Text); // Use the input_value as a floating-point number
			val_finalMark = System::Convert::ToDouble(txt_finalmark->Text); // Use the input_value as a floating-point number
		}
		catch (System::FormatException^) {
			// Handle the case when the input is not a valid floating-point number
			MessageBox::Show("Mark is not valid. Please enter again!");
			return;
		}
		if (val_otherMark > 10 || val_otherMark < 0 || val_midtermMark > 10 || val_midtermMark < 0 || val_finalMark > 10 || val_finalMark < 0) {
			MessageBox::Show("Score must be non-negative and less than or equal to 10");
			return;
		}

		curStudent->data->otherMark = val_otherMark;
		curStudent->data->midtermMark = val_midtermMark;
		curStudent->data->finalMark = val_finalMark;
		curStudent->data->totalMark = (val_otherMark * rateOther + val_midtermMark * rateMid + val_finalMark * rateFinal) / 100.0;
		MessageBox::Show("Successfully updated");

		txt_StudentID->Text = "";
		txt_StudentID_2->Text = "";

		txt_othermark->Text = "";
		txt_othermark->ReadOnly = true;
		txt_othermark->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_midmark->Text = "";
		txt_midmark->ReadOnly = true;
		txt_midmark->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_finalmark->Text = "";
		txt_finalmark->ReadOnly = true;
		txt_finalmark->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_rateOther->Text = "";
		txt_rateOther->ReadOnly = true;
		txt_rateOther->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_rateMid->Text = "";
		txt_rateMid->ReadOnly = true;
		txt_rateMid->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_rateFinal->Text = "";
		txt_rateFinal->ReadOnly = true;
		txt_rateFinal->BackColor = System::Drawing::SystemColors::AppWorkspace;

		txt_coursename->Text = "";
		txt_teacher->Text = "";
		txt_credit->Text = "";
		txt_maxStu->Text = "";
	}

	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}

	private: System::Void pnl_titleUpdateScore_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Record the mouse position when the panel is clicked
		mouseDownLocation = e->Location;
		// Record the form position
		formLocation = this->Location;
	}

	private: System::Void pnl_titleUpdateScore_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
};
}
