#pragma once
#include "header.h"

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RemoveStuFromCourse
	/// </summary>
	public ref class RemoveStuFromCourse : public System::Windows::Forms::Form
	{
	public:
		RemoveStuFromCourse(System::Windows::Forms::Form^ form)
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
		~RemoveStuFromCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
		System::Windows::Forms::Form^ sourceForm;
		GROUP1::DLL<GROUP1::COURSE*>* curCourse = nullptr;	// the course this form is working on
															// this pointer is get when course ID has been entered and button search is clicked 
		GROUP1::DLL<GROUP1::SCOREBOARD*>* curStudent;
	private: Point mouseDownLocation, formLocation;
	private: System::Windows::Forms::Panel^ pnl_titleRemv;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::TextBox^ txt_StudentID;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_sem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::TextBox^ txt_name;











	private: System::Windows::Forms::TextBox^ txt_yearIn;



	private: System::Windows::Forms::ListView^ lstView_listCourses;
	private: System::Windows::Forms::Button^ btn_remove;

	private: System::Windows::Forms::ColumnHeader^ col_No;
	private: System::Windows::Forms::ColumnHeader^ col_name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_StudentID_2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_class;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_socialID;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_gender;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_DoB;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::ColumnHeader^ col_ID;
	private: System::Windows::Forms::ColumnHeader^ col_nStu;
	private: System::Windows::Forms::ColumnHeader^ col_teacher;
	private: System::Windows::Forms::TextBox^ txt_coursename;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RemoveStuFromCourse::typeid));
			this->pnl_titleRemv = (gcnew System::Windows::Forms::Panel());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_sem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_yearIn = (gcnew System::Windows::Forms::TextBox());
			this->lstView_listCourses = (gcnew System::Windows::Forms::ListView());
			this->col_No = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_nStu = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_teacher = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_remove = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID_2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_class = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_socialID = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_gender = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_DoB = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->pnl_titleRemv->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_titleRemv
			// 
			this->pnl_titleRemv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->pnl_titleRemv->Controls->Add(this->btn_back);
			this->pnl_titleRemv->Controls->Add(this->label1);
			this->pnl_titleRemv->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_titleRemv->Location = System::Drawing::Point(4, 4);
			this->pnl_titleRemv->Name = L"pnl_titleRemv";
			this->pnl_titleRemv->Size = System::Drawing::Size(1206, 46);
			this->pnl_titleRemv->TabIndex = 0;
			this->pnl_titleRemv->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &RemoveStuFromCourse::pnl_titleRemv_MouseDown);
			this->pnl_titleRemv->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &RemoveStuFromCourse::pnl_titleRemv_MouseMove);
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(1166, 7);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(35, 33);
			this->btn_back->TabIndex = 42;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &RemoveStuFromCourse::btn_back_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label1->Location = System::Drawing::Point(398, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Remove A Student From The Course";
			// 
			// txt_StudentID
			// 
			this->txt_StudentID->BackColor = System::Drawing::SystemColors::Control;
			this->txt_StudentID->Location = System::Drawing::Point(743, 112);
			this->txt_StudentID->Name = L"txt_StudentID";
			this->txt_StudentID->Size = System::Drawing::Size(147, 26);
			this->txt_StudentID->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label9->Location = System::Drawing::Point(648, 115);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 21);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Student ID";
			// 
			// txt_sem
			// 
			this->txt_sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_sem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_sem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_sem->Location = System::Drawing::Point(175, 114);
			this->txt_sem->Name = L"txt_sem";
			this->txt_sem->ReadOnly = true;
			this->txt_sem->Size = System::Drawing::Size(56, 28);
			this->txt_sem->TabIndex = 24;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label5->Location = System::Drawing::Point(90, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 21);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Semester";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_schoolyear->Location = System::Drawing::Point(175, 75);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(261, 28);
			this->txt_schoolyear->TabIndex = 22;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Location = System::Drawing::Point(70, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 21);
			this->label4->TabIndex = 21;
			this->label4->Text = L"School Year";
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_Search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Search->Location = System::Drawing::Point(776, 144);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(84, 35);
			this->btn_Search->TabIndex = 20;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &RemoveStuFromCourse::btn_Search_Click);
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::SystemColors::Control;
			this->txt_courseID->Location = System::Drawing::Point(743, 73);
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(147, 26);
			this->txt_courseID->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->Location = System::Drawing::Point(653, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 21);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Course ID";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel2->Location = System::Drawing::Point(290, 198);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(659, 3);
			this->panel2->TabIndex = 27;
			// 
			// txt_name
			// 
			this->txt_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_name->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_name->Location = System::Drawing::Point(743, 224);
			this->txt_name->Name = L"txt_name";
			this->txt_name->ReadOnly = true;
			this->txt_name->Size = System::Drawing::Size(376, 28);
			this->txt_name->TabIndex = 48;
			// 
			// txt_yearIn
			// 
			this->txt_yearIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_yearIn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_yearIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_yearIn->Location = System::Drawing::Point(1030, 268);
			this->txt_yearIn->Name = L"txt_yearIn";
			this->txt_yearIn->ReadOnly = true;
			this->txt_yearIn->Size = System::Drawing::Size(89, 28);
			this->txt_yearIn->TabIndex = 58;
			// 
			// lstView_listCourses
			// 
			this->lstView_listCourses->BackColor = System::Drawing::SystemColors::Control;
			this->lstView_listCourses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->col_No,
					this->col_ID, this->col_name, this->col_nStu, this->col_teacher
			});
			this->lstView_listCourses->HideSelection = false;
			this->lstView_listCourses->Location = System::Drawing::Point(95, 115);
			this->lstView_listCourses->Name = L"lstView_listCourses";
			this->lstView_listCourses->RightToLeftLayout = true;
			this->lstView_listCourses->Size = System::Drawing::Size(944, 290);
			this->lstView_listCourses->TabIndex = 59;
			this->lstView_listCourses->UseCompatibleStateImageBehavior = false;
			this->lstView_listCourses->View = System::Windows::Forms::View::Details;
			// 
			// col_No
			// 
			this->col_No->Text = L"No";
			this->col_No->Width = 38;
			// 
			// col_ID
			// 
			this->col_ID->Text = L"Course ID";
			this->col_ID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->col_ID->Width = 126;
			// 
			// col_name
			// 
			this->col_name->Text = L"Course";
			this->col_name->Width = 275;
			// 
			// col_nStu
			// 
			this->col_nStu->Text = L"Number of students";
			this->col_nStu->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->col_nStu->Width = 164;
			// 
			// col_teacher
			// 
			this->col_teacher->Text = L"Teacher";
			this->col_teacher->Width = 337;
			// 
			// btn_remove
			// 
			this->btn_remove->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_remove->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_remove->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_remove->Location = System::Drawing::Point(576, 642);
			this->btn_remove->Name = L"btn_remove";
			this->btn_remove->Size = System::Drawing::Size(104, 39);
			this->btn_remove->TabIndex = 60;
			this->btn_remove->Text = L"Remove";
			this->btn_remove->UseVisualStyleBackColor = false;
			this->btn_remove->Click += gcnew System::EventHandler(this, &RemoveStuFromCourse::btn_remove_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label3->Location = System::Drawing::Point(2, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 21);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Student ID";
			// 
			// txt_StudentID_2
			// 
			this->txt_StudentID_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_StudentID_2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StudentID_2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_StudentID_2->Location = System::Drawing::Point(96, 10);
			this->txt_StudentID_2->Name = L"txt_StudentID_2";
			this->txt_StudentID_2->ReadOnly = true;
			this->txt_StudentID_2->Size = System::Drawing::Size(146, 28);
			this->txt_StudentID_2->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label6->Location = System::Drawing::Point(576, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 21);
			this->label6->TabIndex = 47;
			this->label6->Text = L"Full name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label7->Location = System::Drawing::Point(329, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 21);
			this->label7->TabIndex = 49;
			this->label7->Text = L"Class";
			// 
			// txt_class
			// 
			this->txt_class->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_class->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_class->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_class->Location = System::Drawing::Point(383, 10);
			this->txt_class->Name = L"txt_class";
			this->txt_class->ReadOnly = true;
			this->txt_class->Size = System::Drawing::Size(96, 28);
			this->txt_class->TabIndex = 50;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label8->Location = System::Drawing::Point(18, 57);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 21);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Social ID";
			// 
			// txt_socialID
			// 
			this->txt_socialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_socialID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_socialID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_socialID->Location = System::Drawing::Point(96, 53);
			this->txt_socialID->Name = L"txt_socialID";
			this->txt_socialID->ReadOnly = true;
			this->txt_socialID->Size = System::Drawing::Size(146, 28);
			this->txt_socialID->TabIndex = 52;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label10->Location = System::Drawing::Point(312, 56);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 21);
			this->label10->TabIndex = 53;
			this->label10->Text = L"Gender";
			// 
			// txt_gender
			// 
			this->txt_gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_gender->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_gender->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_gender->Location = System::Drawing::Point(383, 53);
			this->txt_gender->Name = L"txt_gender";
			this->txt_gender->ReadOnly = true;
			this->txt_gender->Size = System::Drawing::Size(96, 28);
			this->txt_gender->TabIndex = 54;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label12->Location = System::Drawing::Point(553, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 21);
			this->label12->TabIndex = 55;
			this->label12->Text = L"Date of Birth";
			// 
			// txt_DoB
			// 
			this->txt_DoB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_DoB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_DoB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_DoB->Location = System::Drawing::Point(664, 54);
			this->txt_DoB->Name = L"txt_DoB";
			this->txt_DoB->ReadOnly = true;
			this->txt_DoB->Size = System::Drawing::Size(146, 28);
			this->txt_DoB->TabIndex = 56;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label11->Location = System::Drawing::Point(818, 58);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 21);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Enrollment year";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label13->Location = System::Drawing::Point(22, 119);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 21);
			this->label13->TabIndex = 61;
			this->label13->Text = L"Courses";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->lstView_listCourses);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->txt_DoB);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->txt_gender);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->txt_socialID);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->txt_class);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->txt_StudentID_2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(80, 215);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1059, 405);
			this->panel3->TabIndex = 62;
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_coursename->Location = System::Drawing::Point(902, 71);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txt_coursename->Size = System::Drawing::Size(217, 28);
			this->txt_coursename->TabIndex = 63;
			// 
			// RemoveStuFromCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(1214, 708);
			this->ControlBox = false;
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->btn_remove);
			this->Controls->Add(this->txt_yearIn);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txt_StudentID);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txt_sem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pnl_titleRemv);
			this->Controls->Add(this->panel3);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RemoveStuFromCourse";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Load += gcnew System::EventHandler(this, &RemoveStuFromCourse::RemoveStuFromCourse_Load);
			this->pnl_titleRemv->ResumeLayout(false);
			this->pnl_titleRemv->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RemoveStuFromCourse_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string str = std::to_string(g_currentSchoolYear->begin) + " - " + std::to_string(g_currentSchoolYear->end);
		txt_schoolyear->Text = gcnew System::String(str.c_str());
		str = std::to_string(g_currentSemester->No);
		txt_sem->Text = gcnew System::String(str.c_str());
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		// search for course
		std::string id = msclr::interop::marshal_as<std::string>(txt_courseID->Text);
		if (this->curCourse && this->curCourse->data->ID == id)	goto _skipfindcourse;
		this->curCourse = g_currentSemester->course.head;

		while (this->curCourse) {
			if (id == this->curCourse->data->ID)	break;
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
		if (this->curStudent && this->curStudent->data->student->studentID == id)	goto _skipfindstu;
		this->curStudent = this->curCourse->data->students.head; //type == DLL<SCOREBOARD*>*
		while (this->curStudent) {
			if (this->curStudent->data->student->studentID == id) {
			_skipfindstu:
				txt_StudentID_2->Text = gcnew System::String(id.c_str());
				txt_class->Text = gcnew System::String(this->curStudent->data->student->Class->convertToString().c_str());
				txt_socialID->Text = gcnew System::String(this->curStudent->data->student->socialID.c_str());
				std::string tmpString = (this->curStudent->data->student->gender == 1) ? "Male" : "Female";
				txt_gender->Text = gcnew System::String(tmpString.c_str());
				tmpString = this->curStudent->data->student->firstname + " " + this->curStudent->data->student->lastname;
				txt_name->Text = gcnew System::String(tmpString.c_str());
				txt_DoB->Text = gcnew System::String(DateToString(this->curStudent->data->student->DoB).c_str());
				txt_yearIn->Text = gcnew System::String(this->curStudent->data->student->yearIn.ToString());
				// list courses
				int i = 0;
				GROUP1::DLL<GROUP1::COURSE*>* _curCourse = this->curStudent->data->student->courses.head;
				while (_curCourse) {
					// create a new list view item and add sub-items
					i++;
					ListViewItem^ item1 = gcnew ListViewItem(i.ToString()); // No
					System::String^ tmp;

					tmp = gcnew System::String(_curCourse->data->ID.c_str());
					item1->SubItems->Add(tmp);	// course ID

					tmp = gcnew System::String(_curCourse->data->name.c_str());
					item1->SubItems->Add(tmp);	// course name

					tmp = gcnew System::String(_curCourse->data->maxStudents.ToString());
					item1->SubItems->Add(tmp);	// number of student

					tmp = gcnew System::String(_curCourse->data->teacher.c_str());
					item1->SubItems->Add(tmp);	// teacher

					// add the item to the list view
					lstView_listCourses->Items->Add(item1);
					_curCourse = _curCourse->next;
				}
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

	private: System::Void btn_remove_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_StudentID->Text = "";
		txt_StudentID_2->Text = "";
		txt_class->Text = "";
		txt_socialID->Text = "";
		txt_gender->Text = "";
		txt_name->Text = "";
		txt_DoB->Text = "";
		txt_yearIn->Text = "";

		// remove
		std::string message = "Student" + this->curStudent->data->student->studentID + "was successfully removed";
		MessageBox::Show("Student");
	}

	private: System::Void pnl_titleRemv_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Record the mouse position when the panel is clicked
		mouseDownLocation = e->Location;
		// Record the form position
		formLocation = this->Location;
	}

	private: System::Void pnl_titleRemv_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
