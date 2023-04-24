#pragma once

#include "header.h"

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
	/// Summary for Create1NewSem
	/// </summary>
	public ref class Create1NewSem : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		Create1NewSem(System::Windows::Forms::Form^ form)
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
		~Create1NewSem()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:













	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::DomainUpDown^ ChooseSem;










	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::Label^ lblStartDate;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Panel^ StartPanel;
	private: System::Windows::Forms::Label^ CreateSchoolYearLab;
	private: System::Windows::Forms::Button^ BackBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::TextBox^ startDay;

	private: System::Windows::Forms::TextBox^ startYear;
	private: System::Windows::Forms::TextBox^ endMonth;
	private: System::Windows::Forms::TextBox^ endYear;





	private: System::Windows::Forms::TextBox^ startMonth;
	private: System::Windows::Forms::TextBox^ endDay;
	private: System::Windows::Forms::Label^ startDaylbl;
	private: System::Windows::Forms::Label^ startMonthlbl;
	private: System::Windows::Forms::Label^ startYearlbl;
	private: System::Windows::Forms::Label^ endDaylbl;
	private: System::Windows::Forms::Label^ endMonthlbl;
	private: System::Windows::Forms::Label^ endYearlbl;



















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Create1NewSem::typeid));
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->ChooseSem = (gcnew System::Windows::Forms::DomainUpDown());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->lblStartDate = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->StartPanel = (gcnew System::Windows::Forms::Panel());
			this->CreateSchoolYearLab = (gcnew System::Windows::Forms::Label());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->startDay = (gcnew System::Windows::Forms::TextBox());
			this->startYear = (gcnew System::Windows::Forms::TextBox());
			this->endMonth = (gcnew System::Windows::Forms::TextBox());
			this->endYear = (gcnew System::Windows::Forms::TextBox());
			this->startMonth = (gcnew System::Windows::Forms::TextBox());
			this->endDay = (gcnew System::Windows::Forms::TextBox());
			this->startDaylbl = (gcnew System::Windows::Forms::Label());
			this->startMonthlbl = (gcnew System::Windows::Forms::Label());
			this->startYearlbl = (gcnew System::Windows::Forms::Label());
			this->endDaylbl = (gcnew System::Windows::Forms::Label());
			this->endMonthlbl = (gcnew System::Windows::Forms::Label());
			this->endYearlbl = (gcnew System::Windows::Forms::Label());
			this->StartPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// createButton
			// 
			this->createButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->createButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->createButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->createButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->createButton->Location = System::Drawing::Point(528, 320);
			this->createButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(86, 39);
			this->createButton->TabIndex = 8;
			this->createButton->Text = L"Enter";
			this->createButton->UseVisualStyleBackColor = false;
			this->createButton->Click += gcnew System::EventHandler(this, &Create1NewSem::createButton_Click);
			// 
			// ChooseSem
			// 
			this->ChooseSem->BackColor = System::Drawing::SystemColors::Window;
			this->ChooseSem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ChooseSem->ForeColor = System::Drawing::SystemColors::WindowText;
			this->ChooseSem->Location = System::Drawing::Point(278, 77);
			this->ChooseSem->Name = L"ChooseSem";
			this->ChooseSem->Size = System::Drawing::Size(182, 30);
			this->ChooseSem->TabIndex = 9;
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(135, 76);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(99, 28);
			this->lbl_semester->TabIndex = 99;
			this->lbl_semester->Text = L"Semester";
			// 
			// lblStartDate
			// 
			this->lblStartDate->AutoSize = true;
			this->lblStartDate->BackColor = System::Drawing::Color::Transparent;
			this->lblStartDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lblStartDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lblStartDate->Location = System::Drawing::Point(135, 122);
			this->lblStartDate->Name = L"lblStartDate";
			this->lblStartDate->Size = System::Drawing::Size(110, 28);
			this->lblStartDate->TabIndex = 100;
			this->lblStartDate->Text = L"Start Date";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label23->Location = System::Drawing::Point(135, 216);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(98, 28);
			this->label23->TabIndex = 101;
			this->label23->Text = L"End Date";
			// 
			// StartPanel
			// 
			this->StartPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->StartPanel->Controls->Add(this->CreateSchoolYearLab);
			this->StartPanel->Controls->Add(this->BackBtn);
			this->StartPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StartPanel->Location = System::Drawing::Point(0, 0);
			this->StartPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->StartPanel->Name = L"StartPanel";
			this->StartPanel->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->StartPanel->Size = System::Drawing::Size(818, 57);
			this->StartPanel->TabIndex = 102;
			this->StartPanel->Visible = false;
			// 
			// CreateSchoolYearLab
			// 
			this->CreateSchoolYearLab->AutoSize = true;
			this->CreateSchoolYearLab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->CreateSchoolYearLab->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CreateSchoolYearLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15, System::Drawing::FontStyle::Bold));
			this->CreateSchoolYearLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->CreateSchoolYearLab->Location = System::Drawing::Point(80, 10);
			this->CreateSchoolYearLab->Name = L"CreateSchoolYearLab";
			this->CreateSchoolYearLab->Size = System::Drawing::Size(316, 30);
			this->CreateSchoolYearLab->TabIndex = 0;
			this->CreateSchoolYearLab->Text = L"CREATE NEW SEMESTER";
			// 
			// BackBtn
			// 
			this->BackBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->BackBtn->FlatAppearance->BorderSize = 0;
			this->BackBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(8)));
			this->BackBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->BackBtn->Location = System::Drawing::Point(466, 10);
			this->BackBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(33, 30);
			this->BackBtn->TabIndex = 0;
			this->BackBtn->Text = L"<";
			this->BackBtn->UseVisualStyleBackColor = false;
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->ExitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitBtn->Location = System::Drawing::Point(620, 320);
			this->ExitBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(86, 39);
			this->ExitBtn->TabIndex = 103;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &Create1NewSem::ExitBtn_Click);
			// 
			// startDay
			// 
			this->startDay->BackColor = System::Drawing::SystemColors::Window;
			this->startDay->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->startDay->ForeColor = System::Drawing::SystemColors::WindowText;
			this->startDay->Location = System::Drawing::Point(221, 169);
			this->startDay->Name = L"startDay";
			this->startDay->Size = System::Drawing::Size(70, 29);
			this->startDay->TabIndex = 7;
			// 
			// startYear
			// 
			this->startYear->BackColor = System::Drawing::SystemColors::Window;
			this->startYear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->startYear->ForeColor = System::Drawing::SystemColors::WindowText;
			this->startYear->Location = System::Drawing::Point(604, 172);
			this->startYear->Name = L"startYear";
			this->startYear->Size = System::Drawing::Size(70, 29);
			this->startYear->TabIndex = 104;
			// 
			// endMonth
			// 
			this->endMonth->BackColor = System::Drawing::SystemColors::Window;
			this->endMonth->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->endMonth->ForeColor = System::Drawing::SystemColors::WindowText;
			this->endMonth->Location = System::Drawing::Point(429, 265);
			this->endMonth->Name = L"endMonth";
			this->endMonth->Size = System::Drawing::Size(70, 29);
			this->endMonth->TabIndex = 105;
			// 
			// endYear
			// 
			this->endYear->BackColor = System::Drawing::SystemColors::Window;
			this->endYear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->endYear->ForeColor = System::Drawing::SystemColors::WindowText;
			this->endYear->Location = System::Drawing::Point(604, 265);
			this->endYear->Name = L"endYear";
			this->endYear->Size = System::Drawing::Size(70, 29);
			this->endYear->TabIndex = 106;
			// 
			// startMonth
			// 
			this->startMonth->BackColor = System::Drawing::SystemColors::Window;
			this->startMonth->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->startMonth->ForeColor = System::Drawing::SystemColors::WindowText;
			this->startMonth->Location = System::Drawing::Point(429, 172);
			this->startMonth->Name = L"startMonth";
			this->startMonth->Size = System::Drawing::Size(70, 29);
			this->startMonth->TabIndex = 107;
			// 
			// endDay
			// 
			this->endDay->BackColor = System::Drawing::SystemColors::Window;
			this->endDay->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->endDay->ForeColor = System::Drawing::SystemColors::WindowText;
			this->endDay->Location = System::Drawing::Point(221, 262);
			this->endDay->Name = L"endDay";
			this->endDay->Size = System::Drawing::Size(70, 29);
			this->endDay->TabIndex = 108;
			// 
			// startDaylbl
			// 
			this->startDaylbl->AutoSize = true;
			this->startDaylbl->BackColor = System::Drawing::Color::Transparent;
			this->startDaylbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->startDaylbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->startDaylbl->Location = System::Drawing::Point(156, 170);
			this->startDaylbl->Name = L"startDaylbl";
			this->startDaylbl->Size = System::Drawing::Size(49, 28);
			this->startDaylbl->TabIndex = 109;
			this->startDaylbl->Text = L"Day";
			// 
			// startMonthlbl
			// 
			this->startMonthlbl->AutoSize = true;
			this->startMonthlbl->BackColor = System::Drawing::Color::Transparent;
			this->startMonthlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->startMonthlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->startMonthlbl->Location = System::Drawing::Point(336, 170);
			this->startMonthlbl->Name = L"startMonthlbl";
			this->startMonthlbl->Size = System::Drawing::Size(75, 28);
			this->startMonthlbl->TabIndex = 110;
			this->startMonthlbl->Text = L"Month";
			// 
			// startYearlbl
			// 
			this->startYearlbl->AutoSize = true;
			this->startYearlbl->BackColor = System::Drawing::Color::Transparent;
			this->startYearlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->startYearlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->startYearlbl->Location = System::Drawing::Point(546, 173);
			this->startYearlbl->Name = L"startYearlbl";
			this->startYearlbl->Size = System::Drawing::Size(52, 28);
			this->startYearlbl->TabIndex = 111;
			this->startYearlbl->Text = L"Year";
			// 
			// endDaylbl
			// 
			this->endDaylbl->AutoSize = true;
			this->endDaylbl->BackColor = System::Drawing::Color::Transparent;
			this->endDaylbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->endDaylbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->endDaylbl->Location = System::Drawing::Point(156, 260);
			this->endDaylbl->Name = L"endDaylbl";
			this->endDaylbl->Size = System::Drawing::Size(49, 28);
			this->endDaylbl->TabIndex = 112;
			this->endDaylbl->Text = L"Day";
			// 
			// endMonthlbl
			// 
			this->endMonthlbl->AutoSize = true;
			this->endMonthlbl->BackColor = System::Drawing::Color::Transparent;
			this->endMonthlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->endMonthlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->endMonthlbl->Location = System::Drawing::Point(336, 263);
			this->endMonthlbl->Name = L"endMonthlbl";
			this->endMonthlbl->Size = System::Drawing::Size(75, 28);
			this->endMonthlbl->TabIndex = 113;
			this->endMonthlbl->Text = L"Month";
			// 
			// endYearlbl
			// 
			this->endYearlbl->AutoSize = true;
			this->endYearlbl->BackColor = System::Drawing::Color::Transparent;
			this->endYearlbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->endYearlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->endYearlbl->Location = System::Drawing::Point(546, 263);
			this->endYearlbl->Name = L"endYearlbl";
			this->endYearlbl->Size = System::Drawing::Size(52, 28);
			this->endYearlbl->TabIndex = 114;
			this->endYearlbl->Text = L"Year";
			// 
			// Create1NewSem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(818, 388);
			this->Controls->Add(this->endYearlbl);
			this->Controls->Add(this->endMonthlbl);
			this->Controls->Add(this->endDaylbl);
			this->Controls->Add(this->startYearlbl);
			this->Controls->Add(this->startMonthlbl);
			this->Controls->Add(this->startDaylbl);
			this->Controls->Add(this->endDay);
			this->Controls->Add(this->startMonth);
			this->Controls->Add(this->endYear);
			this->Controls->Add(this->endMonth);
			this->Controls->Add(this->startYear);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->StartPanel);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->lblStartDate);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->ChooseSem);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->startDay);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Create1NewSem";
			this->Text = L"Create1NewSem";
			this->Load += gcnew System::EventHandler(this, &Create1NewSem::Create1NewSem_Load);
			this->StartPanel->ResumeLayout(false);
			this->StartPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		GROUP1::SEMESTER* tempSem = new SEMESTER;

		string* dayS = new string;
		string* monthS = new string;
		string* yearS = new string;
		string* dayE = new string;
		string* monthE = new string;
		string* yearE = new string;
		*dayS = msclr::interop::marshal_as<string>(startDay->Text);
		*monthS = msclr::interop::marshal_as<string>(startMonth->Text);
		*yearS = msclr::interop::marshal_as<string>(startYear->Text);
		if (stoi(*monthS) > 12 || stoi(*monthS) <= 0)
		{
			MessageBox::Show("Invalid month");
			return;
		}
		int* dayInMonth = new int;
		*dayInMonth = 30;
		switch (stoi(*monthS)) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			*dayInMonth = 31;
			break;
		case 2:
			if (((stoi(*yearS) % 4 == 0) && (stoi(*yearS) % 100 != 0)) || (stoi(*yearS) % 400 == 0))   *dayInMonth = 29;
			else    *dayInMonth = 28;
		}
		if (stoi(*dayS) > *dayInMonth || stoi(*dayS) <= 0)
		{
			MessageBox::Show("Invalid day");
			return;
		}

		*dayE = msclr::interop::marshal_as<string>(endDay->Text);
		*monthE = msclr::interop::marshal_as<string>(endMonth->Text);
		*yearE = msclr::interop::marshal_as<string>(endYear->Text);
		if (stoi(*monthE) > 12 || stoi(*monthE) <= 0)
		{
			MessageBox::Show("Invalid month");
			return;
		}
		*dayInMonth = 30;
		switch (stoi(*monthE)) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			*dayInMonth = 31;
			break;
		case 2:
			if (((stoi(*yearE) % 4 == 0) && (stoi(*yearE) % 100 != 0)) || (stoi(*yearE) % 400 == 0))   *dayInMonth = 29;
			else    *dayInMonth = 28;
		}
		if (stoi(*dayE) > *dayInMonth || stoi(*dayE) <= 0)
		{
			MessageBox::Show("Invalid day");
			return;
		}
		if (g_currentSemester != nullptr && stoi(*yearS) < g_currentSemester->enddate.year)
		{
			MessageBox::Show("Invalid start year");
			delete dayS;
			delete monthS;
			delete yearS;
			delete dayE;
			delete monthE;
			delete yearE;
			delete dayInMonth;
			return;
		}
		else if (g_currentSemester != nullptr && stoi(*yearS) == g_currentSemester->enddate.year)
		{
			if (stoi(*monthS) < g_currentSemester->enddate.month)
			{
				MessageBox::Show("Invalid start month");
				delete dayS;
				delete monthS;
				delete yearS;
				delete dayE;
				delete monthE;
				delete yearE;
				delete dayInMonth;
				return;
			}
			else if (stoi(*monthS) == g_currentSemester->enddate.month)
			{
				if (stoi(*dayS) < g_currentSemester->enddate.day)
				{
					MessageBox::Show("Invalid start day");
					delete dayS;
					delete monthS;
					delete yearS;
					delete dayE;
					delete monthE;
					delete yearE;
					delete dayInMonth;
					return;
				}
			}
		}
		if (stoi(*yearE) < stoi(*yearS))
		{
			MessageBox::Show("Invalid end year");
			delete dayS;
			delete monthS;
			delete yearS;
			delete dayE;
			delete monthE;
			delete yearE;
			delete dayInMonth;
			return;
		}
		else if (stoi(*yearS) == stoi(*yearE))
		{
			if (stoi(*monthE) < stoi(*monthS))
			{
				MessageBox::Show("Invalid end month");
				delete dayS;
				delete monthS;
				delete yearS;
				delete dayE;
				delete monthE;
				delete yearE;
				delete dayInMonth;
				return;
			}
			else if (stoi(*monthS) == stoi(*monthE))
			{
				if (stoi(*dayE) < stoi(*dayS))
				{
					MessageBox::Show("Invalid end day");
					delete dayS;
					delete monthS;
					delete yearS;
					delete dayE;
					delete monthE;
					delete yearE;
					delete dayInMonth;
					return;
				}
			}
		}
		if (stoi(*yearE) > g_currentSchoolYear->end)
		{
			MessageBox::Show("Invalid end year");
			return;
		}
		(*tempSem).enddate.day = stoi(*dayE);
		(*tempSem).enddate.month = stoi(*monthE);
		(*tempSem).enddate.year = stoi(*yearE);
		(*tempSem).startdate.day = stoi(*dayS);
		(*tempSem).startdate.month = stoi(*monthS);
		(*tempSem).startdate.year = stoi(*yearS);
		delete dayS;
		delete monthS;
		delete yearS;
		delete dayE;
		delete monthE;
		delete yearE;
		delete dayInMonth;
		if (ChooseSem->SelectedItem->ToString() == "1")
			g_currentSchoolYear->sem1 = tempSem;
		else if (ChooseSem->SelectedItem->ToString() == "2")
			g_currentSchoolYear->sem2 = tempSem;
		else if (ChooseSem->SelectedItem->ToString() == "3")
			g_currentSchoolYear->sem3 = tempSem;
		(*tempSem).No = stoi(msclr::interop::marshal_as<string>(ChooseSem->SelectedItem->ToString()));
		g_currentSemester = tempSem;
		DLL<STUDENT*>* stu = L_Student.head;
		while (stu)
		{
			DLL<COURSE*>* cur = stu->data->courses.head;
			DLL<COURSE*>* temp = stu->data->courses.head;
			DLL<COURSE*>* dummy;//node to be deleted
			while (temp)
			{
				cur = temp;
				if (!cur->next)
				{
					delete cur;
					break;
				}
				while (cur->next->next)
					cur = cur->next;
				dummy = cur->next;
				cur->next = cur->next->next;
				delete dummy;
			}
			stu = stu->next;
		}

		MessageBox::Show("Create successfully!!");
	}
	private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void Create1NewSem_Load(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSemester == nullptr)
		{
			this->startYear->Text = msclr::interop::marshal_as<String^>(to_string(g_currentSchoolYear->begin));
		}
		else
		{
			this->startYear->Text = msclr::interop::marshal_as<String^>(to_string(g_currentSemester->enddate.year));
		}
		this->startYear->Enabled = false;
		if (g_currentSemester == g_currentSchoolYear->sem1 && g_currentSemester != nullptr)
			this->ChooseSem->Items->Add("2");
		else if (g_currentSemester == g_currentSchoolYear->sem2 && g_currentSemester != nullptr)
			this->ChooseSem->Items->Add("3");
		else if (g_currentSemester == nullptr)
			this->ChooseSem->Items->Add("1");
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	};
}