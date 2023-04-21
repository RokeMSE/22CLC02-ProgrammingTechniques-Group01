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
	/// Summary for ViewListStudentInACourses
	/// </summary>
	public ref class ViewListStudentInACourses : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewListStudentInACourses(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->sourceForm = form;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_Search_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewListStudentInACourses()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ txt_sem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_courseName;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::Label^ lbl_courseID;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ button1;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewListStudentInACourses::typeid));
			this->txt_sem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_courseName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseID = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_sem
			// 
			this->txt_sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_sem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_sem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_sem->Location = System::Drawing::Point(208, 177);
			this->txt_sem->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->txt_sem->MaxLength = 10;
			this->txt_sem->Name = L"txt_sem";
			this->txt_sem->Size = System::Drawing::Size(65, 33);
			this->txt_sem->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label5->Location = System::Drawing::Point(95, 183);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 27);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Semester";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Location = System::Drawing::Point(217, 114);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->txt_schoolyear->MaxLength = 20;
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->Size = System::Drawing::Size(289, 33);
			this->txt_schoolyear->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label4->Location = System::Drawing::Point(86, 117);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 27);
			this->label4->TabIndex = 13;
			this->label4->Text = L"School Year";
			// 
			// btn_Search
			// 
			this->btn_Search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_Search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Search->Location = System::Drawing::Point(410, 183);
			this->btn_Search->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(96, 37);
			this->btn_Search->TabIndex = 12;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = false;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_Search_Click);
			// 
			// txt_courseName
			// 
			this->txt_courseName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_courseName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_courseName->Location = System::Drawing::Point(944, 173);
			this->txt_courseName->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->txt_courseName->MaxLength = 30;
			this->txt_courseName->Name = L"txt_courseName";
			this->txt_courseName->Size = System::Drawing::Size(289, 33);
			this->txt_courseName->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(766, 177);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 27);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Name of Course";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(1405, 27);
			this->btn_back->Margin = System::Windows::Forms::Padding(4);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(94, 28);
			this->btn_back->TabIndex = 18;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(509, 27);
			this->lbl_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(559, 58);
			this->lbl_title->TabIndex = 4;
			this->lbl_title->Text = L"List Student in A Course";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(67, 258);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1521, 632);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewListStudentInACourses::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No";
			this->columnHeader1->Width = 81;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Student ID";
			this->columnHeader2->Width = 151;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"FirstName";
			this->columnHeader3->Width = 320;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"LastName";
			this->columnHeader4->Width = 153;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Gender";
			this->columnHeader5->Width = 115;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Date of Birth";
			this->columnHeader6->Width = 235;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Social ID";
			this->columnHeader7->Width = 177;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Class";
			this->columnHeader8->Width = 517;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Location = System::Drawing::Point(214, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 20);
			this->label2->TabIndex = 131;
			this->label2->Text = L"( Example: 2017-2018,... )";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(941, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 20);
			this->label3->TabIndex = 132;
			this->label3->Text = L"( Example: ABC course,...)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkGreen;
			this->label6->Location = System::Drawing::Point(205, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 20);
			this->label6->TabIndex = 133;
			this->label6->Text = L"( Example: 1,2,3 )";
			// 
			// txt_courseID
			// 
			this->txt_courseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_courseID->Location = System::Drawing::Point(944, 118);
			this->txt_courseID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseID->MaxLength = 12;
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(289, 33);
			this->txt_courseID->TabIndex = 135;
			// 
			// lbl_courseID
			// 
			this->lbl_courseID->AutoSize = true;
			this->lbl_courseID->BackColor = System::Drawing::Color::Transparent;
			this->lbl_courseID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_courseID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseID->Location = System::Drawing::Point(811, 119);
			this->lbl_courseID->Name = L"lbl_courseID";
			this->lbl_courseID->Size = System::Drawing::Size(116, 27);
			this->lbl_courseID->TabIndex = 134;
			this->lbl_courseID->Text = L"Course ID:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkGreen;
			this->label7->Location = System::Drawing::Point(943, 149);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 20);
			this->label7->TabIndex = 136;
			this->label7->Text = L"( Example: 12344,...)";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->account);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4);
			this->panel1->Size = System::Drawing::Size(60, 886);
			this->panel1->TabIndex = 137;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			//this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 830);
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
			this->button1->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_back_Click);
			// 
			// ViewListStudentInACourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1592, 894);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->lbl_courseID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->txt_sem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_courseName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			//this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewListStudentInACourses";
			this->Padding = System::Windows::Forms::Padding(4);
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"ViewListStudentInACourses";
			this->Load += gcnew System::EventHandler(this, &ViewListStudentInACourses::ViewListStudentInACourses_Load);
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
		System::String^ sem = this->txt_sem->Text;
		System::String^ coursename = this->txt_courseName->Text;
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
							int* count = new int;
							*count = 0;
							while (tmp) {
								
								item = gcnew ListViewItem();
								item->Text = gcnew System::String(std::to_string((*count)).c_str());
								item->SubItems->Add(gcnew System::String((tmp->data->student->studentID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->student->gender).c_str()));
								item->SubItems->Add(gcnew System::String(DateToString(tmp->data->student->DoB).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->socialID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->Class->convertToString()).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;

							}
							delete count;
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
							int* count = new int;
							*count = 0;
							while (tmp) {

								item = gcnew ListViewItem();
								item->Text = gcnew System::String(std::to_string((*count)++).c_str());
								item->SubItems->Add(gcnew System::String((tmp->data->student->studentID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->student->gender).c_str()));
								item->SubItems->Add(gcnew System::String(DateToString(tmp->data->student->DoB).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->socialID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->Class->convertToString()).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;
							}
							delete count;
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
							int* count = new int;
							*count = 0;
							while (tmp) {

								item = gcnew ListViewItem();
								item->Text = gcnew System::String(std::to_string((*count)++).c_str());
								item->SubItems->Add(gcnew System::String((tmp->data->student->studentID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->student->gender).c_str()));
								item->SubItems->Add(gcnew System::String(DateToString(tmp->data->student->DoB).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->socialID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->Class->convertToString()).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;

							}
							delete count;
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
	private: System::Void ViewListStudentInACourses_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
