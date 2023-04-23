#pragma once

#include "header.h"
#include "AboutUs.h"
#include "ChangePass.h"
#include "CreateSchoolYear.h"
#include "Create1Class.h"
#include "Add1StuToClass.h"
#include "ImpNewStuCSV.h"
#include "Create1NewSem.h"
#include "Add1Course.h"
#include "ImpStuToCourseCSV.h"
#include "ViewListCourses.h"
#include "UpdateCourseInfo.h"
#include "Add1StuToCourse.h"
#include "RemoveStuFromCourse.h"
#include "Delete1Course.h"
#include "ViewClasses.h"
#include "ViewAListInAClasses.h"
#include "ViewAListStudentInACourse.h"
#include "ExpListStuInCourseCSV.h"
#include "ImpScoreOfCourse.h"
#include "ViewScoreOfCourse.h"
#include "UpdateResult.h"
#include "ViewScoreOfClass.h"

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuStaff
	/// </summary>
	public ref class MenuStaff : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm, ^ childForm;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Button^ BtnViewScoreOfClass;
	private: System::Windows::Forms::Button^ BtnImpStuToClass;
	private: System::Windows::Forms::Button^ AboutUsBtn;

	public:
		System::Windows::Forms::Panel^ curPanel;
	public:

	public:
	public:
		//GROUP1::STAFF* currentStaff;
		MenuStaff(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			this->sourceForm = form;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuStaff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_ImportStuInCourseCSV;
	protected:




	protected:

	protected:






	private: System::Windows::Forms::Button^ btn_ViewClasses;
	public:
	private: System::Windows::Forms::Button^ btn_ViewCourses;
	private: System::Windows::Forms::Button^ ViewStusInClassBtn;
	private: System::Windows::Forms::Button^ ViewStusInACourseBtn;
	private: System::Windows::Forms::Button^ ViewScoreOfACourseBtn;
	private: System::Windows::Forms::Panel^ ViewPanel;


	private: System::Windows::Forms::Button^ BackBtn;









	private: System::Windows::Forms::Button^ btn_Remove1StuInCourse;


	private: System::Windows::Forms::Button^ btn_Delete1Course;










	private: System::Windows::Forms::Button^ btn_ImportScore;



	private: System::Windows::Forms::Panel^ OptionPanel;















	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::Label^ MenuLabel;




	private: System::Windows::Forms::PictureBox^ Icon;

	private: System::Windows::Forms::Panel^ ImagePanel;




















	private: System::Windows::Forms::Button^ RemoveBtn;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::Button^ UpdateBtn;
	private: System::Windows::Forms::Button^ CreateBtn;
	private: System::Windows::Forms::Button^ ViewBtn;












	private: System::Windows::Forms::Panel^ RemovePanel;
	private: System::Windows::Forms::Panel^ UpdatePanel;
	private: System::Windows::Forms::Button^ btn_UpdateCourse;
	private: System::Windows::Forms::Button^ btn_UpdateResult;
	private: System::Windows::Forms::Panel^ AddPanel;

	private: System::Windows::Forms::Button^ btn_Add1StuToCourse;
	private: System::Windows::Forms::Button^ btn_AddStuToClass;
	private: System::Windows::Forms::Button^ btn_Add1CourseToCurSem;






	private: System::Windows::Forms::Button^ btn_Create1Sem;
	private: System::Windows::Forms::Button^ btn_CreateSchoolYear;
	private: System::Windows::Forms::Button^ btn_Create1NewClass;
	private: System::Windows::Forms::Panel^ CreatePanel;

	private: System::Windows::Forms::Button^ ImportExportBtn;
	private: System::Windows::Forms::Panel^ ImportExportPanel;
	private: System::Windows::Forms::Panel^ AccountPanel;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ ChangePassBtn;




	private: System::Windows::Forms::Button^ ExportStusInACourseBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuStaff::typeid));
			this->btn_ImportStuInCourseCSV = (gcnew System::Windows::Forms::Button());
			this->btn_Remove1StuInCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Delete1Course = (gcnew System::Windows::Forms::Button());
			this->btn_ImportScore = (gcnew System::Windows::Forms::Button());
			this->OptionPanel = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ImportExportBtn = (gcnew System::Windows::Forms::Button());
			this->RemoveBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateBtn = (gcnew System::Windows::Forms::Button());
			this->CreateBtn = (gcnew System::Windows::Forms::Button());
			this->ViewBtn = (gcnew System::Windows::Forms::Button());
			this->ImagePanel = (gcnew System::Windows::Forms::Panel());
			this->Icon = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->MenuLabel = (gcnew System::Windows::Forms::Label());
			this->RemovePanel = (gcnew System::Windows::Forms::Panel());
			this->UpdatePanel = (gcnew System::Windows::Forms::Panel());
			this->btn_UpdateCourse = (gcnew System::Windows::Forms::Button());
			this->btn_UpdateResult = (gcnew System::Windows::Forms::Button());
			this->AddPanel = (gcnew System::Windows::Forms::Panel());
			this->btn_Add1StuToCourse = (gcnew System::Windows::Forms::Button());
			this->btn_AddStuToClass = (gcnew System::Windows::Forms::Button());
			this->btn_Add1CourseToCurSem = (gcnew System::Windows::Forms::Button());
			this->btn_Create1Sem = (gcnew System::Windows::Forms::Button());
			this->btn_CreateSchoolYear = (gcnew System::Windows::Forms::Button());
			this->btn_Create1NewClass = (gcnew System::Windows::Forms::Button());
			this->CreatePanel = (gcnew System::Windows::Forms::Panel());
			this->ImportExportPanel = (gcnew System::Windows::Forms::Panel());
			this->BtnImpStuToClass = (gcnew System::Windows::Forms::Button());
			this->ExportStusInACourseBtn = (gcnew System::Windows::Forms::Button());
			this->AccountPanel = (gcnew System::Windows::Forms::Panel());
			this->AboutUsBtn = (gcnew System::Windows::Forms::Button());
			this->ChangePassBtn = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_ViewClasses = (gcnew System::Windows::Forms::Button());
			this->btn_ViewCourses = (gcnew System::Windows::Forms::Button());
			this->ViewStusInClassBtn = (gcnew System::Windows::Forms::Button());
			this->ViewStusInACourseBtn = (gcnew System::Windows::Forms::Button());
			this->ViewScoreOfACourseBtn = (gcnew System::Windows::Forms::Button());
			this->ViewPanel = (gcnew System::Windows::Forms::Panel());
			this->BtnViewScoreOfClass = (gcnew System::Windows::Forms::Button());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->OptionPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->ImagePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
			this->MenuPanel->SuspendLayout();
			this->RemovePanel->SuspendLayout();
			this->UpdatePanel->SuspendLayout();
			this->AddPanel->SuspendLayout();
			this->CreatePanel->SuspendLayout();
			this->ImportExportPanel->SuspendLayout();
			this->AccountPanel->SuspendLayout();
			this->ViewPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_ImportStuInCourseCSV
			// 
			this->btn_ImportStuInCourseCSV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_ImportStuInCourseCSV->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ImportStuInCourseCSV->FlatAppearance->BorderSize = 0;
			this->btn_ImportStuInCourseCSV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ImportStuInCourseCSV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ImportStuInCourseCSV->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_ImportStuInCourseCSV->Location = System::Drawing::Point(0, 100);
			this->btn_ImportStuInCourseCSV->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ImportStuInCourseCSV->Name = L"btn_ImportStuInCourseCSV";
			this->btn_ImportStuInCourseCSV->Padding = System::Windows::Forms::Padding(4);
			this->btn_ImportStuInCourseCSV->Size = System::Drawing::Size(1060, 50);
			this->btn_ImportStuInCourseCSV->TabIndex = 6;
			this->btn_ImportStuInCourseCSV->Text = L"Upload a CSV file of students enrolled in a course of current semester";
			this->btn_ImportStuInCourseCSV->UseVisualStyleBackColor = false;
			this->btn_ImportStuInCourseCSV->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ImportStuInCourseCSV_Click);
			// 
			// btn_Remove1StuInCourse
			// 
			this->btn_Remove1StuInCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_Remove1StuInCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Remove1StuInCourse->FlatAppearance->BorderSize = 0;
			this->btn_Remove1StuInCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Remove1StuInCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Remove1StuInCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Remove1StuInCourse->Location = System::Drawing::Point(0, 50);
			this->btn_Remove1StuInCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Remove1StuInCourse->Name = L"btn_Remove1StuInCourse";
			this->btn_Remove1StuInCourse->Padding = System::Windows::Forms::Padding(4);
			this->btn_Remove1StuInCourse->Size = System::Drawing::Size(1060, 50);
			this->btn_Remove1StuInCourse->TabIndex = 10;
			this->btn_Remove1StuInCourse->Text = L"Remove a student from a course in current semester";
			this->btn_Remove1StuInCourse->UseVisualStyleBackColor = false;
			this->btn_Remove1StuInCourse->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Remove1StuInCourse_Click);
			// 
			// btn_Delete1Course
			// 
			this->btn_Delete1Course->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_Delete1Course->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Delete1Course->FlatAppearance->BorderSize = 0;
			this->btn_Delete1Course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Delete1Course->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Delete1Course->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Delete1Course->Location = System::Drawing::Point(0, 0);
			this->btn_Delete1Course->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Delete1Course->Name = L"btn_Delete1Course";
			this->btn_Delete1Course->Padding = System::Windows::Forms::Padding(4);
			this->btn_Delete1Course->Size = System::Drawing::Size(1060, 50);
			this->btn_Delete1Course->TabIndex = 11;
			this->btn_Delete1Course->Text = L"Delete a course of current semester";
			this->btn_Delete1Course->UseVisualStyleBackColor = false;
			this->btn_Delete1Course->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Delete1Course_Click);
			// 
			// btn_ImportScore
			// 
			this->btn_ImportScore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_ImportScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ImportScore->FlatAppearance->BorderSize = 0;
			this->btn_ImportScore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ImportScore->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ImportScore->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_ImportScore->Location = System::Drawing::Point(0, 50);
			this->btn_ImportScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ImportScore->Name = L"btn_ImportScore";
			this->btn_ImportScore->Padding = System::Windows::Forms::Padding(4);
			this->btn_ImportScore->Size = System::Drawing::Size(1060, 50);
			this->btn_ImportScore->TabIndex = 19;
			this->btn_ImportScore->Text = L"Import the ScoreBoard of a Course";
			this->btn_ImportScore->UseVisualStyleBackColor = false;
			this->btn_ImportScore->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ImportScore_Click);
			// 
			// OptionPanel
			// 
			this->OptionPanel->AutoScroll = true;
			this->OptionPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->OptionPanel->Controls->Add(this->pictureBox1);
			this->OptionPanel->Controls->Add(this->ImportExportBtn);
			this->OptionPanel->Controls->Add(this->RemoveBtn);
			this->OptionPanel->Controls->Add(this->AddBtn);
			this->OptionPanel->Controls->Add(this->UpdateBtn);
			this->OptionPanel->Controls->Add(this->CreateBtn);
			this->OptionPanel->Controls->Add(this->ViewBtn);
			this->OptionPanel->Controls->Add(this->ImagePanel);
			this->OptionPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->OptionPanel->Location = System::Drawing::Point(0, 0);
			this->OptionPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OptionPanel->Name = L"OptionPanel";
			this->OptionPanel->Size = System::Drawing::Size(235, 1346);
			this->OptionPanel->TabIndex = 26;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(78, 516);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 80);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MenuStaff::pictureBox1_Click);
			// 
			// ImportExportBtn
			// 
			this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ImportExportBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->ImportExportBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImportExportBtn->FlatAppearance->BorderSize = 0;
			this->ImportExportBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImportExportBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ImportExportBtn->Location = System::Drawing::Point(0, 391);
			this->ImportExportBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ImportExportBtn->Name = L"ImportExportBtn";
			this->ImportExportBtn->Size = System::Drawing::Size(235, 49);
			this->ImportExportBtn->TabIndex = 50;
			this->ImportExportBtn->Text = L"IMPORT/EXPORT";
			this->ImportExportBtn->UseVisualStyleBackColor = false;
			this->ImportExportBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ImportExportBtn_Click);
			// 
			// RemoveBtn
			// 
			this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->RemoveBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->RemoveBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->RemoveBtn->FlatAppearance->BorderSize = 0;
			this->RemoveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RemoveBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->RemoveBtn->Location = System::Drawing::Point(0, 342);
			this->RemoveBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RemoveBtn->Name = L"RemoveBtn";
			this->RemoveBtn->Size = System::Drawing::Size(235, 49);
			this->RemoveBtn->TabIndex = 48;
			this->RemoveBtn->Text = L"REMOVE";
			this->RemoveBtn->UseVisualStyleBackColor = false;
			this->RemoveBtn->Click += gcnew System::EventHandler(this, &MenuStaff::RemoveBtn_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->AddBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->AddBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddBtn->FlatAppearance->BorderSize = 0;
			this->AddBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->AddBtn->Location = System::Drawing::Point(0, 293);
			this->AddBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Padding = System::Windows::Forms::Padding(4);
			this->AddBtn->Size = System::Drawing::Size(235, 49);
			this->AddBtn->TabIndex = 47;
			this->AddBtn->Text = L"ADD";
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MenuStaff::AddBtn_Click);
			// 
			// UpdateBtn
			// 
			this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->UpdateBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->UpdateBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdateBtn->FlatAppearance->BorderSize = 0;
			this->UpdateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->UpdateBtn->Location = System::Drawing::Point(0, 244);
			this->UpdateBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Padding = System::Windows::Forms::Padding(4);
			this->UpdateBtn->Size = System::Drawing::Size(235, 49);
			this->UpdateBtn->TabIndex = 46;
			this->UpdateBtn->Text = L"UPDATE";
			this->UpdateBtn->UseVisualStyleBackColor = false;
			this->UpdateBtn->Click += gcnew System::EventHandler(this, &MenuStaff::UpdateBtn_Click);
			// 
			// CreateBtn
			// 
			this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->CreateBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->CreateBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->CreateBtn->FlatAppearance->BorderSize = 0;
			this->CreateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->CreateBtn->Location = System::Drawing::Point(0, 195);
			this->CreateBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CreateBtn->Name = L"CreateBtn";
			this->CreateBtn->Padding = System::Windows::Forms::Padding(4);
			this->CreateBtn->Size = System::Drawing::Size(235, 49);
			this->CreateBtn->TabIndex = 45;
			this->CreateBtn->Text = L"CREATE";
			this->CreateBtn->UseVisualStyleBackColor = false;
			this->CreateBtn->Click += gcnew System::EventHandler(this, &MenuStaff::CreateBtn_Click);
			// 
			// ViewBtn
			// 
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ViewBtn->Cursor = System::Windows::Forms::Cursors::Default;
			this->ViewBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewBtn->FlatAppearance->BorderSize = 0;
			this->ViewBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ViewBtn->Location = System::Drawing::Point(0, 146);
			this->ViewBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ViewBtn->Name = L"ViewBtn";
			this->ViewBtn->Size = System::Drawing::Size(235, 49);
			this->ViewBtn->TabIndex = 42;
			this->ViewBtn->Text = L"VIEW";
			this->ViewBtn->UseVisualStyleBackColor = false;
			this->ViewBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ViewBtn_Click);
			// 
			// ImagePanel
			// 
			this->ImagePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ImagePanel->Controls->Add(this->Icon);
			this->ImagePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImagePanel->Location = System::Drawing::Point(0, 0);
			this->ImagePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ImagePanel->Name = L"ImagePanel";
			this->ImagePanel->Size = System::Drawing::Size(235, 146);
			this->ImagePanel->TabIndex = 32;
			// 
			// Icon
			// 
			this->Icon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Icon->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.ErrorImage")));
			this->Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.Image")));
			this->Icon->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.InitialImage")));
			this->Icon->Location = System::Drawing::Point(61, 14);
			this->Icon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Icon->Name = L"Icon";
			this->Icon->Padding = System::Windows::Forms::Padding(4);
			this->Icon->Size = System::Drawing::Size(110, 120);
			this->Icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Icon->TabIndex = 31;
			this->Icon->TabStop = false;
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->MenuPanel->Controls->Add(this->ExitBtn);
			this->MenuPanel->Controls->Add(this->MenuLabel);
			this->MenuPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->MenuPanel->Location = System::Drawing::Point(235, 0);
			this->MenuPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(1060, 146);
			this->MenuPanel->TabIndex = 28;
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitBtn->Location = System::Drawing::Point(1003, 11);
			this->ExitBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(45, 45);
			this->ExitBtn->TabIndex = 15;
			this->ExitBtn->Text = L"x";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MenuStaff::btn_exit_Click);
			// 
			// MenuLabel
			// 
			this->MenuLabel->AutoSize = true;
			this->MenuLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 23, System::Drawing::FontStyle::Bold));
			this->MenuLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->MenuLabel->Location = System::Drawing::Point(26, 38);
			this->MenuLabel->Name = L"MenuLabel";
			this->MenuLabel->Padding = System::Windows::Forms::Padding(4);
			this->MenuLabel->Size = System::Drawing::Size(336, 70);
			this->MenuLabel->TabIndex = 13;
			this->MenuLabel->Text = L"DASHBOARD";
			this->MenuLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->MenuLabel->Click += gcnew System::EventHandler(this, &MenuStaff::MenuLabel_Click);
			// 
			// RemovePanel
			// 
			this->RemovePanel->AutoSize = true;
			this->RemovePanel->Controls->Add(this->btn_Remove1StuInCourse);
			this->RemovePanel->Controls->Add(this->btn_Delete1Course);
			this->RemovePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->RemovePanel->Location = System::Drawing::Point(235, 846);
			this->RemovePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RemovePanel->Name = L"RemovePanel";
			this->RemovePanel->Size = System::Drawing::Size(1060, 100);
			this->RemovePanel->TabIndex = 50;
			this->RemovePanel->Visible = false;
			// 
			// UpdatePanel
			// 
			this->UpdatePanel->AutoSize = true;
			this->UpdatePanel->Controls->Add(this->btn_UpdateCourse);
			this->UpdatePanel->Controls->Add(this->btn_UpdateResult);
			this->UpdatePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdatePanel->Location = System::Drawing::Point(235, 596);
			this->UpdatePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UpdatePanel->Name = L"UpdatePanel";
			this->UpdatePanel->Size = System::Drawing::Size(1060, 100);
			this->UpdatePanel->TabIndex = 54;
			this->UpdatePanel->Visible = false;
			// 
			// btn_UpdateCourse
			// 
			this->btn_UpdateCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_UpdateCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_UpdateCourse->FlatAppearance->BorderSize = 0;
			this->btn_UpdateCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdateCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_UpdateCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_UpdateCourse->Location = System::Drawing::Point(0, 50);
			this->btn_UpdateCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_UpdateCourse->Name = L"btn_UpdateCourse";
			this->btn_UpdateCourse->Padding = System::Windows::Forms::Padding(4);
			this->btn_UpdateCourse->Size = System::Drawing::Size(1060, 50);
			this->btn_UpdateCourse->TabIndex = 41;
			this->btn_UpdateCourse->Text = L"Update information of a course in current semester";
			this->btn_UpdateCourse->UseVisualStyleBackColor = false;
			this->btn_UpdateCourse->Click += gcnew System::EventHandler(this, &MenuStaff::btn_UpdateCourse_Click);
			// 
			// btn_UpdateResult
			// 
			this->btn_UpdateResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_UpdateResult->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_UpdateResult->FlatAppearance->BorderSize = 0;
			this->btn_UpdateResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdateResult->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_UpdateResult->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_UpdateResult->Location = System::Drawing::Point(0, 0);
			this->btn_UpdateResult->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_UpdateResult->Name = L"btn_UpdateResult";
			this->btn_UpdateResult->Size = System::Drawing::Size(1060, 50);
			this->btn_UpdateResult->TabIndex = 42;
			this->btn_UpdateResult->Text = L"Update a student\'s result";
			this->btn_UpdateResult->UseVisualStyleBackColor = false;
			this->btn_UpdateResult->Click += gcnew System::EventHandler(this, &MenuStaff::btn_UpdateResult_Click);
			// 
			// AddPanel
			// 
			this->AddPanel->AutoSize = true;
			this->AddPanel->Controls->Add(this->btn_Add1StuToCourse);
			this->AddPanel->Controls->Add(this->btn_AddStuToClass);
			this->AddPanel->Controls->Add(this->btn_Add1CourseToCurSem);
			this->AddPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddPanel->Location = System::Drawing::Point(235, 446);
			this->AddPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddPanel->Name = L"AddPanel";
			this->AddPanel->Size = System::Drawing::Size(1060, 150);
			this->AddPanel->TabIndex = 53;
			this->AddPanel->Visible = false;
			// 
			// btn_Add1StuToCourse
			// 
			this->btn_Add1StuToCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_Add1StuToCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Add1StuToCourse->FlatAppearance->BorderSize = 0;
			this->btn_Add1StuToCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add1StuToCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Add1StuToCourse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Add1StuToCourse->Location = System::Drawing::Point(0, 100);
			this->btn_Add1StuToCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Add1StuToCourse->Name = L"btn_Add1StuToCourse";
			this->btn_Add1StuToCourse->Size = System::Drawing::Size(1060, 50);
			this->btn_Add1StuToCourse->TabIndex = 42;
			this->btn_Add1StuToCourse->Text = L"Add a student to a course in current semester";
			this->btn_Add1StuToCourse->UseVisualStyleBackColor = false;
			this->btn_Add1StuToCourse->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Add1StuToCourse_Click);
			// 
			// btn_AddStuToClass
			// 
			this->btn_AddStuToClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_AddStuToClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_AddStuToClass->FlatAppearance->BorderSize = 0;
			this->btn_AddStuToClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AddStuToClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_AddStuToClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_AddStuToClass->Location = System::Drawing::Point(0, 50);
			this->btn_AddStuToClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AddStuToClass->Name = L"btn_AddStuToClass";
			this->btn_AddStuToClass->Size = System::Drawing::Size(1060, 50);
			this->btn_AddStuToClass->TabIndex = 39;
			this->btn_AddStuToClass->Text = L"Add new 1st year students to 1st-year classes";
			this->btn_AddStuToClass->UseVisualStyleBackColor = false;
			this->btn_AddStuToClass->Click += gcnew System::EventHandler(this, &MenuStaff::btn_AddStuToClass_Click);
			// 
			// btn_Add1CourseToCurSem
			// 
			this->btn_Add1CourseToCurSem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_Add1CourseToCurSem->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Add1CourseToCurSem->FlatAppearance->BorderSize = 0;
			this->btn_Add1CourseToCurSem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add1CourseToCurSem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Add1CourseToCurSem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Add1CourseToCurSem->Location = System::Drawing::Point(0, 0);
			this->btn_Add1CourseToCurSem->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Add1CourseToCurSem->Name = L"btn_Add1CourseToCurSem";
			this->btn_Add1CourseToCurSem->Size = System::Drawing::Size(1060, 50);
			this->btn_Add1CourseToCurSem->TabIndex = 41;
			this->btn_Add1CourseToCurSem->Text = L"Add a course to current semester";
			this->btn_Add1CourseToCurSem->UseVisualStyleBackColor = false;
			this->btn_Add1CourseToCurSem->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Add1CourseToCurSem_Click);
			// 
			// btn_Create1Sem
			// 
			this->btn_Create1Sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_Create1Sem->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Create1Sem->FlatAppearance->BorderSize = 0;
			this->btn_Create1Sem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Create1Sem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Create1Sem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Create1Sem->Location = System::Drawing::Point(0, 0);
			this->btn_Create1Sem->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Create1Sem->Name = L"btn_Create1Sem";
			this->btn_Create1Sem->Padding = System::Windows::Forms::Padding(4);
			this->btn_Create1Sem->Size = System::Drawing::Size(1060, 50);
			this->btn_Create1Sem->TabIndex = 37;
			this->btn_Create1Sem->Text = L"Create a semester";
			this->btn_Create1Sem->UseVisualStyleBackColor = false;
			this->btn_Create1Sem->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Create1Sem_Click);
			// 
			// btn_CreateSchoolYear
			// 
			this->btn_CreateSchoolYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_CreateSchoolYear->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_CreateSchoolYear->FlatAppearance->BorderSize = 0;
			this->btn_CreateSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CreateSchoolYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_CreateSchoolYear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_CreateSchoolYear->Location = System::Drawing::Point(0, 50);
			this->btn_CreateSchoolYear->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_CreateSchoolYear->Name = L"btn_CreateSchoolYear";
			this->btn_CreateSchoolYear->Padding = System::Windows::Forms::Padding(4);
			this->btn_CreateSchoolYear->Size = System::Drawing::Size(1060, 50);
			this->btn_CreateSchoolYear->TabIndex = 35;
			this->btn_CreateSchoolYear->Text = L"Create a school year";
			this->btn_CreateSchoolYear->UseVisualStyleBackColor = false;
			this->btn_CreateSchoolYear->Click += gcnew System::EventHandler(this, &MenuStaff::btn_CreateSchoolYear_Click);
			// 
			// btn_Create1NewClass
			// 
			this->btn_Create1NewClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_Create1NewClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Create1NewClass->FlatAppearance->BorderSize = 0;
			this->btn_Create1NewClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Create1NewClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Create1NewClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_Create1NewClass->Location = System::Drawing::Point(0, 100);
			this->btn_Create1NewClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Create1NewClass->Name = L"btn_Create1NewClass";
			this->btn_Create1NewClass->Padding = System::Windows::Forms::Padding(4);
			this->btn_Create1NewClass->Size = System::Drawing::Size(1060, 50);
			this->btn_Create1NewClass->TabIndex = 36;
			this->btn_Create1NewClass->Text = L"Create classes for 1st-year students";
			this->btn_Create1NewClass->UseVisualStyleBackColor = false;
			this->btn_Create1NewClass->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Create1NewClass_Click);
			// 
			// CreatePanel
			// 
			this->CreatePanel->AutoSize = true;
			this->CreatePanel->Controls->Add(this->btn_Create1NewClass);
			this->CreatePanel->Controls->Add(this->btn_CreateSchoolYear);
			this->CreatePanel->Controls->Add(this->btn_Create1Sem);
			this->CreatePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->CreatePanel->Location = System::Drawing::Point(235, 696);
			this->CreatePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CreatePanel->Name = L"CreatePanel";
			this->CreatePanel->Size = System::Drawing::Size(1060, 150);
			this->CreatePanel->TabIndex = 55;
			this->CreatePanel->Visible = false;
			// 
			// ImportExportPanel
			// 
			this->ImportExportPanel->AutoSize = true;
			this->ImportExportPanel->Controls->Add(this->BtnImpStuToClass);
			this->ImportExportPanel->Controls->Add(this->btn_ImportStuInCourseCSV);
			this->ImportExportPanel->Controls->Add(this->btn_ImportScore);
			this->ImportExportPanel->Controls->Add(this->ExportStusInACourseBtn);
			this->ImportExportPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImportExportPanel->Location = System::Drawing::Point(235, 946);
			this->ImportExportPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ImportExportPanel->Name = L"ImportExportPanel";
			this->ImportExportPanel->Size = System::Drawing::Size(1060, 200);
			this->ImportExportPanel->TabIndex = 56;
			this->ImportExportPanel->Visible = false;
			// 
			// BtnImpStuToClass
			// 
			this->BtnImpStuToClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->BtnImpStuToClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnImpStuToClass->FlatAppearance->BorderSize = 0;
			this->BtnImpStuToClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnImpStuToClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->BtnImpStuToClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BtnImpStuToClass->Location = System::Drawing::Point(0, 150);
			this->BtnImpStuToClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnImpStuToClass->Name = L"BtnImpStuToClass";
			this->BtnImpStuToClass->Padding = System::Windows::Forms::Padding(4);
			this->BtnImpStuToClass->Size = System::Drawing::Size(1060, 50);
			this->BtnImpStuToClass->TabIndex = 42;
			this->BtnImpStuToClass->Text = L"Import 1st-year students into class";
			this->BtnImpStuToClass->UseVisualStyleBackColor = false;
			this->BtnImpStuToClass->Click += gcnew System::EventHandler(this, &MenuStaff::BtnImpStuToClass_Click);
			// 
			// ExportStusInACourseBtn
			// 
			this->ExportStusInACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExportStusInACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ExportStusInACourseBtn->FlatAppearance->BorderSize = 0;
			this->ExportStusInACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExportStusInACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ExportStusInACourseBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ExportStusInACourseBtn->Location = System::Drawing::Point(0, 0);
			this->ExportStusInACourseBtn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ExportStusInACourseBtn->Name = L"ExportStusInACourseBtn";
			this->ExportStusInACourseBtn->Padding = System::Windows::Forms::Padding(4);
			this->ExportStusInACourseBtn->Size = System::Drawing::Size(1060, 50);
			this->ExportStusInACourseBtn->TabIndex = 41;
			this->ExportStusInACourseBtn->Text = L"Export students in a course";
			this->ExportStusInACourseBtn->UseVisualStyleBackColor = false;
			this->ExportStusInACourseBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ExportStusInACourseBtn_Click);
			// 
			// AccountPanel
			// 
			this->AccountPanel->AutoSize = true;
			this->AccountPanel->Controls->Add(this->AboutUsBtn);
			this->AccountPanel->Controls->Add(this->ChangePassBtn);
			this->AccountPanel->Controls->Add(this->btn_logout);
			this->AccountPanel->Controls->Add(this->btn_exit);
			this->AccountPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AccountPanel->Location = System::Drawing::Point(235, 1146);
			this->AccountPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AccountPanel->Name = L"AccountPanel";
			this->AccountPanel->Size = System::Drawing::Size(1060, 200);
			this->AccountPanel->TabIndex = 57;
			this->AccountPanel->Visible = false;
			// 
			// AboutUsBtn
			// 
			this->AboutUsBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->AboutUsBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->AboutUsBtn->FlatAppearance->BorderSize = 0;
			this->AboutUsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AboutUsBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->AboutUsBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->AboutUsBtn->Location = System::Drawing::Point(0, 150);
			this->AboutUsBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AboutUsBtn->Name = L"AboutUsBtn";
			this->AboutUsBtn->Padding = System::Windows::Forms::Padding(4);
			this->AboutUsBtn->Size = System::Drawing::Size(1060, 50);
			this->AboutUsBtn->TabIndex = 19;
			this->AboutUsBtn->Text = L"About us";
			this->AboutUsBtn->UseVisualStyleBackColor = false;
			this->AboutUsBtn->Click += gcnew System::EventHandler(this, &MenuStaff::AboutUsBtn_Click);
			// 
			// ChangePassBtn
			// 
			this->ChangePassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ChangePassBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ChangePassBtn->FlatAppearance->BorderSize = 0;
			this->ChangePassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChangePassBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ChangePassBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ChangePassBtn->Location = System::Drawing::Point(0, 100);
			this->ChangePassBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChangePassBtn->Name = L"ChangePassBtn";
			this->ChangePassBtn->Padding = System::Windows::Forms::Padding(4);
			this->ChangePassBtn->Size = System::Drawing::Size(1060, 50);
			this->ChangePassBtn->TabIndex = 16;
			this->ChangePassBtn->Text = L"Change password";
			this->ChangePassBtn->UseVisualStyleBackColor = false;
			this->ChangePassBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ChangePassBtn_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_logout->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_logout->FlatAppearance->BorderSize = 0;
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_logout->Location = System::Drawing::Point(0, 50);
			this->btn_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Padding = System::Windows::Forms::Padding(4);
			this->btn_logout->Size = System::Drawing::Size(1060, 50);
			this->btn_logout->TabIndex = 17;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStaff::btn_logout_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_exit->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_exit->FlatAppearance->BorderSize = 0;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_exit->Location = System::Drawing::Point(0, 0);
			this->btn_exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Padding = System::Windows::Forms::Padding(4);
			this->btn_exit->Size = System::Drawing::Size(1060, 50);
			this->btn_exit->TabIndex = 18;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStaff::btn_exit_Click);
			// 
			// btn_ViewClasses
			// 
			this->btn_ViewClasses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_ViewClasses->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ViewClasses->FlatAppearance->BorderSize = 0;
			this->btn_ViewClasses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ViewClasses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ViewClasses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_ViewClasses->Location = System::Drawing::Point(0, 0);
			this->btn_ViewClasses->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ViewClasses->Name = L"btn_ViewClasses";
			this->btn_ViewClasses->Size = System::Drawing::Size(1060, 51);
			this->btn_ViewClasses->TabIndex = 41;
			this->btn_ViewClasses->Text = L"View classes";
			this->btn_ViewClasses->UseVisualStyleBackColor = false;
			this->btn_ViewClasses->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewClasses_Click);
			// 
			// btn_ViewCourses
			// 
			this->btn_ViewCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_ViewCourses->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ViewCourses->FlatAppearance->BorderSize = 0;
			this->btn_ViewCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ViewCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ViewCourses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_ViewCourses->Location = System::Drawing::Point(0, 51);
			this->btn_ViewCourses->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(1060, 50);
			this->btn_ViewCourses->TabIndex = 40;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = false;
			this->btn_ViewCourses->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewCourses_Click);
			// 
			// ViewStusInClassBtn
			// 
			this->ViewStusInClassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ViewStusInClassBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewStusInClassBtn->FlatAppearance->BorderSize = 0;
			this->ViewStusInClassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewStusInClassBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewStusInClassBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ViewStusInClassBtn->Location = System::Drawing::Point(0, 101);
			this->ViewStusInClassBtn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ViewStusInClassBtn->Name = L"ViewStusInClassBtn";
			this->ViewStusInClassBtn->Size = System::Drawing::Size(1060, 50);
			this->ViewStusInClassBtn->TabIndex = 42;
			this->ViewStusInClassBtn->Text = L"View students of a class";
			this->ViewStusInClassBtn->UseVisualStyleBackColor = false;
			this->ViewStusInClassBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ViewStusInClassBtn_Click);
			// 
			// ViewStusInACourseBtn
			// 
			this->ViewStusInACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ViewStusInACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewStusInACourseBtn->FlatAppearance->BorderSize = 0;
			this->ViewStusInACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewStusInACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewStusInACourseBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ViewStusInACourseBtn->Location = System::Drawing::Point(0, 151);
			this->ViewStusInACourseBtn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ViewStusInACourseBtn->Name = L"ViewStusInACourseBtn";
			this->ViewStusInACourseBtn->Size = System::Drawing::Size(1060, 50);
			this->ViewStusInACourseBtn->TabIndex = 43;
			this->ViewStusInACourseBtn->Text = L"View students in a course";
			this->ViewStusInACourseBtn->UseVisualStyleBackColor = false;
			this->ViewStusInACourseBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ViewStusInACourseBtn_Click);
			// 
			// ViewScoreOfACourseBtn
			// 
			this->ViewScoreOfACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ViewScoreOfACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewScoreOfACourseBtn->FlatAppearance->BorderSize = 0;
			this->ViewScoreOfACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewScoreOfACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewScoreOfACourseBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ViewScoreOfACourseBtn->Location = System::Drawing::Point(0, 201);
			this->ViewScoreOfACourseBtn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ViewScoreOfACourseBtn->Name = L"ViewScoreOfACourseBtn";
			this->ViewScoreOfACourseBtn->Size = System::Drawing::Size(1060, 50);
			this->ViewScoreOfACourseBtn->TabIndex = 44;
			this->ViewScoreOfACourseBtn->Text = L"View the scoreboard of a course";
			this->ViewScoreOfACourseBtn->UseVisualStyleBackColor = false;
			this->ViewScoreOfACourseBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ViewScoreOfACourseBtn_Click);
			// 
			// ViewPanel
			// 
			this->ViewPanel->AutoSize = true;
			this->ViewPanel->Controls->Add(this->BtnViewScoreOfClass);
			this->ViewPanel->Controls->Add(this->BackBtn);
			this->ViewPanel->Controls->Add(this->ViewScoreOfACourseBtn);
			this->ViewPanel->Controls->Add(this->ViewStusInACourseBtn);
			this->ViewPanel->Controls->Add(this->ViewStusInClassBtn);
			this->ViewPanel->Controls->Add(this->btn_ViewCourses);
			this->ViewPanel->Controls->Add(this->btn_ViewClasses);
			this->ViewPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewPanel->Location = System::Drawing::Point(235, 146);
			this->ViewPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ViewPanel->Name = L"ViewPanel";
			this->ViewPanel->Size = System::Drawing::Size(1060, 300);
			this->ViewPanel->TabIndex = 52;
			this->ViewPanel->Visible = false;
			// 
			// BtnViewScoreOfClass
			// 
			this->BtnViewScoreOfClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->BtnViewScoreOfClass->FlatAppearance->BorderSize = 0;
			this->BtnViewScoreOfClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnViewScoreOfClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnViewScoreOfClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BtnViewScoreOfClass->Location = System::Drawing::Point(0, 251);
			this->BtnViewScoreOfClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BtnViewScoreOfClass->Name = L"BtnViewScoreOfClass";
			this->BtnViewScoreOfClass->Size = System::Drawing::Size(1060, 49);
			this->BtnViewScoreOfClass->TabIndex = 59;
			this->BtnViewScoreOfClass->Text = L"View Score Of Class";
			this->BtnViewScoreOfClass->UseVisualStyleBackColor = true;
			this->BtnViewScoreOfClass->Click += gcnew System::EventHandler(this, &MenuStaff::BtnViewScoreOfClass_Click);
			// 
			// BackBtn
			// 
			this->BackBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->BackBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->BackBtn->Location = System::Drawing::Point(1003, 4);
			this->BackBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(45, 45);
			this->BackBtn->TabIndex = 58;
			this->BackBtn->Text = L"<";
			this->BackBtn->UseVisualStyleBackColor = false;
			this->BackBtn->Visible = false;
			this->BackBtn->Click += gcnew System::EventHandler(this, &MenuStaff::BackBtn_Click);
			// 
			// MenuStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(1321, 608);
			this->ControlBox = false;
			this->Controls->Add(this->AccountPanel);
			this->Controls->Add(this->ImportExportPanel);
			this->Controls->Add(this->RemovePanel);
			this->Controls->Add(this->CreatePanel);
			this->Controls->Add(this->UpdatePanel);
			this->Controls->Add(this->AddPanel);
			this->Controls->Add(this->ViewPanel);
			this->Controls->Add(this->MenuPanel);
			this->Controls->Add(this->OptionPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MenuStaff";
			this->Text = L"MenuStaff";
			this->Load += gcnew System::EventHandler(this, &MenuStaff::MenuStaff_Load);
			this->OptionPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ImagePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			this->RemovePanel->ResumeLayout(false);
			this->UpdatePanel->ResumeLayout(false);
			this->AddPanel->ResumeLayout(false);
			this->CreatePanel->ResumeLayout(false);
			this->ImportExportPanel->ResumeLayout(false);
			this->AccountPanel->ResumeLayout(false);
			this->ViewPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuStaff_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string namedisplay = g_currentStaff->firstname + " " + g_currentStaff->lastname;
		//txt_nameOfUser->Text = gcnew System::String(namedisplay.c_str());
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}

	private: System::Void btn_UpdateResult_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateResult^ form = gcnew CMS::UpdateResult(this);
		this->Hide();
		form->Show();
	}

	private: System::Void btn_Remove1StuInCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		RemoveStuFromCourse^ form = gcnew RemoveStuFromCourse(this, sourceForm);
		this->Hide();
		form->Show();
	}
	private: System::Void btn_ViewCourses_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewListCourses^ form = gcnew CMS::ViewListCourses(this, this->sourceForm);
		form->Show();
	}
	private: System::Void btn_ImportScore_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ImpScoreOfCourse^ form = gcnew CMS::ImpScoreOfCourse(this, this->sourceForm);
		form->Show();
	}
	private: System::Void btn_Add1StuToCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Add1StuToCourse^ form = gcnew Add1StuToCourse(this, sourceForm);
		form->Show();
	}
	private: System::Void ViewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->ViewPanel->Visible)
		{
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
		}
		else
		{
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
		}
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->ViewPanel->Visible = !this->ViewPanel->Visible;
	}
	private: System::Void CreateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->CreatePanel->Visible)
		{
			this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
		}
		else
		{
			this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
		}
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->CreatePanel->Visible = !this->CreatePanel->Visible;
	}
	private: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->AddPanel->Visible)
		{
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
		}
		else
		{
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
		}
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->AddPanel->Visible = !this->AddPanel->Visible;
	}
	private: System::Void UpdateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->UpdatePanel->Visible)
		{
			this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
		}
		else
		{
			this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
		}
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->UpdatePanel->Visible = !this->UpdatePanel->Visible;
	}
	private: System::Void RemoveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->RemovePanel->Visible)
		{
			this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
		}
		else
		{
			this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
		}
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->RemovePanel->Visible = !this->RemovePanel->Visible;
	}
	private: System::Void AccountBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->AccountPanel->Visible = !this->AccountPanel->Visible;
	}
	private: System::Void ImportExportBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->ImportExportPanel->Visible)
		{
			this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
		}
		else
		{
			this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ImportExportBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
		}
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->CreateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->AddBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->RemoveBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->UpdateBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = !this->ImportExportPanel->Visible;
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->AccountPanel->Visible = !this->AccountPanel->Visible;
	}
	private: System::Void ChangePassBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePass^ form = gcnew CMS::ChangePass();
		form->TopMost = false;
		form->TopLevel = false;

		//form->ClientSize = 
		AccountPanel->Controls->Add(form);
		AccountPanel->Controls->Add(this->BackBtn);
		this->BackBtn->BringToFront();
		for each (Control ^ control in this->AccountPanel->Controls) {

			if (control != form)
				control->Hide();
			else
			{
				control->Dock = DockStyle::Top;
				control->Show();
				this->childForm = form;
				this->BackBtn->Visible = true;
			}
		}
		this->curPanel = AccountPanel;
	}
	private: System::Void btn_ImportStuInCourseCSV_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ImpStuToCourseCSV^ form = gcnew ImpStuToCourseCSV(this);
		form->Show();
	}
	private: System::Void btn_Create1NewClass_Click(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSchoolYear == nullptr)
		{
			MessageBox::Show("Create a school year first!");
			btn_CreateSchoolYear->PerformClick();
		}
		else
		{
			Create1Class^ form = gcnew CMS::Create1Class();
			form->TopMost = false;
			form->TopLevel = false;
			CreatePanel->Controls->Add(form);
			//this->CreatePanel->Controls->Add(this->BackBtn);
			CreatePanel->Controls->Add(this->BackBtn);
			this->BackBtn->BringToFront();
			for each (Control ^ control in this->CreatePanel->Controls) {

				if (control != form)
					control->Hide();
				else
				{
					control->Dock = DockStyle::Top;
					control->Show();
					this->childForm = form;
					this->BackBtn->Visible = true;
				}
			}
			this->curPanel = CreatePanel;
		}
		//CreatePanel->Contr
	}
	private: System::Void btn_ViewClasses_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewClasses^ form = gcnew ViewClasses(this);
		form->Show();
	}
	private: System::Void ViewStusInClassBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewAListInAClasses^ form = gcnew ViewAListInAClasses(this);
		form->Show();
	}
	private: System::Void ViewStusInACourseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewAListStudentInACourse^ form = gcnew ViewAListStudentInACourse(this, this->sourceForm);
		form->Show();
	}
	private: System::Void ViewScoreOfACourseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewScoreOfCourse^ form = gcnew ViewScoreOfCourse(this);
		form->Show();
	}
	private: System::Void btn_Add1CourseToCurSem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Add1Course^ form = gcnew Add1Course(this, sourceForm);
		form->Show();
	}
	private: System::Void MenuLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_CreateSchoolYear_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateSchoolYear^ form = gcnew CMS::CreateSchoolYear(this);
		form->TopMost = false;
		form->TopLevel = false;

		//form->ClientSize = 
		CreatePanel->Controls->Add(form);
		CreatePanel->Controls->Add(this->BackBtn);
		this->BackBtn->BringToFront();
		for each (Control ^ control in this->CreatePanel->Controls) {

			if (control != form)
				control->Hide();
			else
			{
				control->Dock = DockStyle::Top;
				control->Show();
				this->childForm = form;
				this->BackBtn->Visible = true;
			}
		}
		this->curPanel = CreatePanel;
	}
	private: System::Void btn_AddStuToClass_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form^ form = gcnew Add1StuToClass(this, sourceForm);
		form->Show();
	}
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->childForm->Close();
		this->curPanel->Controls->Remove(childForm);
		for each (Control ^ control in this->curPanel->Controls)
			control->Show();
		this->BackBtn->Visible = false;
	}
	private: System::Void btn_Delete1Course_Click(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSchoolYear == nullptr)
		{
			MessageBox::Show("Create a school year first!");
			btn_CreateSchoolYear->PerformClick();
		}
		else if (g_currentSemester == nullptr)
		{
			MessageBox::Show("Create a semester for current school year first!");
			btn_Create1Sem->PerformClick();
		}
		Delete1Course^ form = gcnew CMS::Delete1Course();
		form->TopMost = false;
		form->TopLevel = false;
		//form->ClientSize = 
		RemovePanel->Controls->Add(form);
		RemovePanel->Controls->Add(this->BackBtn);
		this->BackBtn->BringToFront();
		for each (Control ^ control in this->RemovePanel->Controls) {

			if (control != form)
				control->Hide();
			else
			{
				control->Dock = DockStyle::Top;
				control->Show();
				this->childForm = form;
				this->BackBtn->Visible = true;
			}
		}
		this->curPanel = RemovePanel;
	}
	private: System::Void btn_Create1Sem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Create1NewSem^ form = gcnew Create1NewSem(this);
		form->TopMost = false;
		form->TopLevel = false;

		//form->ClientSize = 
		CreatePanel->Controls->Add(form);
		CreatePanel->Controls->Add(this->BackBtn);
		this->BackBtn->BringToFront();
		for each (Control ^ control in this->CreatePanel->Controls) {

			if (control != form)
				control->Hide();
			else
			{
				control->Dock = DockStyle::Top;
				control->Show();
				this->childForm = form;
				this->BackBtn->Visible = true;
			}
		}
		this->curPanel = CreatePanel;
	}
	private: System::Void btn_UpdateCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		UpdateCourseInfo^ form = gcnew UpdateCourseInfo(this);
		form->Show();
	}
	private: System::Void ExportStusInACourseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ExpListStuInCourseCSV^ form = gcnew ExpListStuInCourseCSV(this);
		form->Show();
	}
	private: System::Void BtnViewScoreOfClass_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewScoreOfClass^ form = gcnew ViewScoreOfClass(this);
		form->Show();
	}
	private: System::Void BtnImpStuToClass_Click(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSchoolYear == nullptr)
		{
			MessageBox::Show("Create a school year first!");
			btn_CreateSchoolYear->PerformClick();
		}
		else
		{
			ImpNewStuCSV^ form = gcnew CMS::ImpNewStuCSV(this);
			form->TopMost = false;
			form->TopLevel = false;
			this->ImportExportPanel->Controls->Add(form);
			//this->CreatePanel->Controls->Add(this->BackBtn);
			this->ImportExportPanel->Controls->Add(this->BackBtn);
			this->BackBtn->BringToFront();
			for each (Control ^ control in this->ImportExportPanel->Controls) {

				if (control != form)
					control->Hide();
				else
				{
					control->Dock = DockStyle::Top;
					control->Show();
					this->childForm = form;
					this->BackBtn->Visible = true;
				}
			}
			this->curPanel = ImportExportPanel;
		}
	}
	private: System::Void AboutUsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		AboutUs^ form = gcnew AboutUs(this);
		form->Show();
	}
};
}