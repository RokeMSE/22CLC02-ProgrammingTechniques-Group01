#pragma once

#include "header.h"
#include "UpdateResult.h"
#include "RemoveStuFromCourse.h"
#include "ViewListCourses.h"
#include "ImpScoreOfCourse.h"

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
		System::Windows::Forms::Form^ sourceForm;
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
	private: System::Windows::Forms::Button^ btn_CreateSchoolYear;
	private: System::Windows::Forms::Button^ btn_Create1NewClass;
	private: System::Windows::Forms::Button^ btn_AddStuToClass;

	protected:

	protected:


	private: System::Windows::Forms::Button^ btn_AddStuCSV;
	private: System::Windows::Forms::Button^ btn_Create1Sem;
	private: System::Windows::Forms::Button^ btn_Add1CourseToCurSem;
	private: System::Windows::Forms::Button^ btn_StuInCourseCSV;




	private: System::Windows::Forms::Button^ btn_ViewCourses;
	private: System::Windows::Forms::Button^ btn_UpdateCourse;



	private: System::Windows::Forms::Button^ btn_Add1StuToCourse;
	private: System::Windows::Forms::Button^ btn_Remove1StuInCourse;


	private: System::Windows::Forms::Button^ btn_Delete1Course;

	private: System::Windows::Forms::Button^ btn_ViewClasses;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_UpdateResult;
	private: System::Windows::Forms::TextBox^ txt_nameOfUser;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_ImportScore;





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
			this->btn_CreateSchoolYear = (gcnew System::Windows::Forms::Button());
			this->btn_Create1NewClass = (gcnew System::Windows::Forms::Button());
			this->btn_AddStuToClass = (gcnew System::Windows::Forms::Button());
			this->btn_AddStuCSV = (gcnew System::Windows::Forms::Button());
			this->btn_Create1Sem = (gcnew System::Windows::Forms::Button());
			this->btn_Add1CourseToCurSem = (gcnew System::Windows::Forms::Button());
			this->btn_StuInCourseCSV = (gcnew System::Windows::Forms::Button());
			this->btn_ViewCourses = (gcnew System::Windows::Forms::Button());
			this->btn_UpdateCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Add1StuToCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Remove1StuInCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Delete1Course = (gcnew System::Windows::Forms::Button());
			this->btn_ViewClasses = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_UpdateResult = (gcnew System::Windows::Forms::Button());
			this->txt_nameOfUser = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_ImportScore = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_CreateSchoolYear
			// 
			this->btn_CreateSchoolYear->Location = System::Drawing::Point(45, 92);
			this->btn_CreateSchoolYear->Name = L"btn_CreateSchoolYear";
			this->btn_CreateSchoolYear->Size = System::Drawing::Size(376, 28);
			this->btn_CreateSchoolYear->TabIndex = 0;
			this->btn_CreateSchoolYear->Text = L"Create a school year";
			this->btn_CreateSchoolYear->UseVisualStyleBackColor = true;
			// 
			// btn_Create1NewClass
			// 
			this->btn_Create1NewClass->Location = System::Drawing::Point(45, 161);
			this->btn_Create1NewClass->Name = L"btn_Create1NewClass";
			this->btn_Create1NewClass->Size = System::Drawing::Size(376, 28);
			this->btn_Create1NewClass->TabIndex = 1;
			this->btn_Create1NewClass->Text = L"Create classes for 1st-year students";
			this->btn_Create1NewClass->UseVisualStyleBackColor = true;
			// 
			// btn_AddStuToClass
			// 
			this->btn_AddStuToClass->Location = System::Drawing::Point(45, 299);
			this->btn_AddStuToClass->Name = L"btn_AddStuToClass";
			this->btn_AddStuToClass->Size = System::Drawing::Size(376, 28);
			this->btn_AddStuToClass->TabIndex = 2;
			this->btn_AddStuToClass->Text = L"Add new 1st year students to 1st-year classes one by one";
			this->btn_AddStuToClass->UseVisualStyleBackColor = true;
			// 
			// btn_AddStuCSV
			// 
			this->btn_AddStuCSV->Location = System::Drawing::Point(45, 195);
			this->btn_AddStuCSV->Name = L"btn_AddStuCSV";
			this->btn_AddStuCSV->Size = System::Drawing::Size(376, 28);
			this->btn_AddStuCSV->TabIndex = 3;
			this->btn_AddStuCSV->Text = L"Add new 1st year students to a 1st-year class by CSV file";
			this->btn_AddStuCSV->UseVisualStyleBackColor = true;
			// 
			// btn_Create1Sem
			// 
			this->btn_Create1Sem->Location = System::Drawing::Point(45, 230);
			this->btn_Create1Sem->Name = L"btn_Create1Sem";
			this->btn_Create1Sem->Size = System::Drawing::Size(376, 28);
			this->btn_Create1Sem->TabIndex = 4;
			this->btn_Create1Sem->Text = L"Create a semester";
			this->btn_Create1Sem->UseVisualStyleBackColor = true;
			// 
			// btn_Add1CourseToCurSem
			// 
			this->btn_Add1CourseToCurSem->Location = System::Drawing::Point(45, 264);
			this->btn_Add1CourseToCurSem->Name = L"btn_Add1CourseToCurSem";
			this->btn_Add1CourseToCurSem->Size = System::Drawing::Size(376, 28);
			this->btn_Add1CourseToCurSem->TabIndex = 5;
			this->btn_Add1CourseToCurSem->Text = L"Add a course to current semester";
			this->btn_Add1CourseToCurSem->UseVisualStyleBackColor = true;
			// 
			// btn_StuInCourseCSV
			// 
			this->btn_StuInCourseCSV->Location = System::Drawing::Point(475, 266);
			this->btn_StuInCourseCSV->Name = L"btn_StuInCourseCSV";
			this->btn_StuInCourseCSV->Size = System::Drawing::Size(376, 26);
			this->btn_StuInCourseCSV->TabIndex = 6;
			this->btn_StuInCourseCSV->Text = L"Upload a CSV file of students enrolled in a course of current semester";
			this->btn_StuInCourseCSV->UseVisualStyleBackColor = true;
			// 
			// btn_ViewCourses
			// 
			this->btn_ViewCourses->Location = System::Drawing::Point(475, 128);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(376, 26);
			this->btn_ViewCourses->TabIndex = 7;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = true;
			this->btn_ViewCourses->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewCourses_Click);
			// 
			// btn_UpdateCourse
			// 
			this->btn_UpdateCourse->Location = System::Drawing::Point(475, 197);
			this->btn_UpdateCourse->Name = L"btn_UpdateCourse";
			this->btn_UpdateCourse->Size = System::Drawing::Size(376, 26);
			this->btn_UpdateCourse->TabIndex = 8;
			this->btn_UpdateCourse->Text = L"Update information of a course in current semester";
			this->btn_UpdateCourse->UseVisualStyleBackColor = true;
			// 
			// btn_Add1StuToCourse
			// 
			this->btn_Add1StuToCourse->Location = System::Drawing::Point(475, 92);
			this->btn_Add1StuToCourse->Name = L"btn_Add1StuToCourse";
			this->btn_Add1StuToCourse->Size = System::Drawing::Size(376, 26);
			this->btn_Add1StuToCourse->TabIndex = 9;
			this->btn_Add1StuToCourse->Text = L"Add a student to a course in current semester";
			this->btn_Add1StuToCourse->UseVisualStyleBackColor = true;
			// 
			// btn_Remove1StuInCourse
			// 
			this->btn_Remove1StuInCourse->Location = System::Drawing::Point(475, 231);
			this->btn_Remove1StuInCourse->Name = L"btn_Remove1StuInCourse";
			this->btn_Remove1StuInCourse->Size = System::Drawing::Size(376, 26);
			this->btn_Remove1StuInCourse->TabIndex = 10;
			this->btn_Remove1StuInCourse->Text = L"Remove a student from a course in current semester";
			this->btn_Remove1StuInCourse->UseVisualStyleBackColor = true;
			this->btn_Remove1StuInCourse->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Remove1StuInCourse_Click);
			// 
			// btn_Delete1Course
			// 
			this->btn_Delete1Course->Location = System::Drawing::Point(475, 162);
			this->btn_Delete1Course->Name = L"btn_Delete1Course";
			this->btn_Delete1Course->Size = System::Drawing::Size(376, 26);
			this->btn_Delete1Course->TabIndex = 11;
			this->btn_Delete1Course->Text = L"Delete a course of current semester";
			this->btn_Delete1Course->UseVisualStyleBackColor = false;
			// 
			// btn_ImportScore
			// 
			this->btn_ImportScore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_ImportScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ImportScore->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ImportScore->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_ImportScore->Location = System::Drawing::Point(0, 50);
			this->btn_ImportScore->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ImportScore->Name = L"btn_ImportScore";
			this->btn_ImportScore->Size = System::Drawing::Size(1019, 50);
			this->btn_ImportScore->TabIndex = 19;
			this->btn_ImportScore->Text = L"Import the ScoreBoard of a Course";
			this->btn_ImportScore->UseVisualStyleBackColor = false;
			this->btn_ImportScore->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ImportScore_Click);
			// 
			// OptionPanel
			// 
			this->OptionPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->OptionPanel->Controls->Add(this->AccountBtn);
			this->OptionPanel->Controls->Add(this->ImportExportBtn);
			this->OptionPanel->Controls->Add(this->RemoveBtn);
			this->OptionPanel->Controls->Add(this->AddBtn);
			this->OptionPanel->Controls->Add(this->UpdateBtn);
			this->OptionPanel->Controls->Add(this->CreateBtn);
			this->OptionPanel->Controls->Add(this->ViewBtn);
			this->OptionPanel->Controls->Add(this->ImagePanel);
			this->OptionPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->OptionPanel->Location = System::Drawing::Point(0, 0);
			this->OptionPanel->Name = L"OptionPanel";
			this->OptionPanel->Size = System::Drawing::Size(249, 1046);
			this->OptionPanel->TabIndex = 26;
			// 
			// AccountBtn
			// 
			this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->AccountBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->AccountBtn->FlatAppearance->BorderSize = 0;
			this->AccountBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AccountBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->AccountBtn->Location = System::Drawing::Point(0, 440);
			this->AccountBtn->Name = L"AccountBtn";
			this->AccountBtn->Size = System::Drawing::Size(249, 49);
			this->AccountBtn->TabIndex = 51;
			this->AccountBtn->Text = L"ACCOUNT";
			this->AccountBtn->UseVisualStyleBackColor = false;
			this->AccountBtn->Click += gcnew System::EventHandler(this, &MenuStaff::AccountBtn_Click);
			// 
			// ImportExportBtn
			// 
			this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ImportExportBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImportExportBtn->FlatAppearance->BorderSize = 0;
			this->ImportExportBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ImportExportBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImportExportBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->ImportExportBtn->Location = System::Drawing::Point(0, 391);
			this->ImportExportBtn->Name = L"ImportExportBtn";
			this->ImportExportBtn->Size = System::Drawing::Size(249, 49);
			this->ImportExportBtn->TabIndex = 50;
			this->ImportExportBtn->Text = L"IMPORT/EXPORT";
			this->ImportExportBtn->UseVisualStyleBackColor = false;
			this->ImportExportBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ImportExportBtn_Click);
			// 
			// RemoveBtn
			// 
			this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->RemoveBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->RemoveBtn->FlatAppearance->BorderSize = 0;
			this->RemoveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->RemoveBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->RemoveBtn->Location = System::Drawing::Point(0, 342);
			this->RemoveBtn->Name = L"RemoveBtn";
			this->RemoveBtn->Size = System::Drawing::Size(249, 49);
			this->RemoveBtn->TabIndex = 48;
			this->RemoveBtn->Text = L"REMOVE";
			this->RemoveBtn->UseVisualStyleBackColor = false;
			this->RemoveBtn->Click += gcnew System::EventHandler(this, &MenuStaff::RemoveBtn_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->AddBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddBtn->FlatAppearance->BorderSize = 0;
			this->AddBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->AddBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->AddBtn->Location = System::Drawing::Point(0, 293);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Padding = System::Windows::Forms::Padding(4);
			this->AddBtn->Size = System::Drawing::Size(249, 49);
			this->AddBtn->TabIndex = 47;
			this->AddBtn->Text = L"ADD";
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MenuStaff::AddBtn_Click);
			// 
			// UpdateBtn
			// 
			this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->UpdateBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdateBtn->FlatAppearance->BorderSize = 0;
			this->UpdateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->UpdateBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->UpdateBtn->Location = System::Drawing::Point(0, 244);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Padding = System::Windows::Forms::Padding(4);
			this->UpdateBtn->Size = System::Drawing::Size(249, 49);
			this->UpdateBtn->TabIndex = 46;
			this->UpdateBtn->Text = L"UPDATE";
			this->UpdateBtn->UseVisualStyleBackColor = false;
			this->UpdateBtn->Click += gcnew System::EventHandler(this, &MenuStaff::UpdateBtn_Click);
			// 
			// CreateBtn
			// 
			this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->CreateBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->CreateBtn->FlatAppearance->BorderSize = 0;
			this->CreateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->CreateBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->CreateBtn->Location = System::Drawing::Point(0, 195);
			this->CreateBtn->Name = L"CreateBtn";
			this->CreateBtn->Padding = System::Windows::Forms::Padding(4);
			this->CreateBtn->Size = System::Drawing::Size(249, 49);
			this->CreateBtn->TabIndex = 45;
			this->CreateBtn->Text = L"CREATE";
			this->CreateBtn->UseVisualStyleBackColor = false;
			this->CreateBtn->Click += gcnew System::EventHandler(this, &MenuStaff::CreateBtn_Click);
			// 
			// ViewBtn
			// 
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ViewBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewBtn->FlatAppearance->BorderSize = 0;
			this->ViewBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewBtn->ForeColor = System::Drawing::Color::Cornsilk;
			this->ViewBtn->Location = System::Drawing::Point(0, 146);
			this->ViewBtn->Name = L"ViewBtn";
			this->ViewBtn->Size = System::Drawing::Size(249, 49);
			this->ViewBtn->TabIndex = 42;
			this->ViewBtn->Text = L"VIEW";
			this->ViewBtn->UseVisualStyleBackColor = false;
			this->ViewBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ViewBtn_Click);
			// 
			// ImagePanel
			// 
			this->ImagePanel->Controls->Add(this->Icon);
			this->ImagePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImagePanel->Location = System::Drawing::Point(0, 0);
			this->ImagePanel->Name = L"ImagePanel";
			this->ImagePanel->Size = System::Drawing::Size(249, 146);
			this->ImagePanel->TabIndex = 32;
			// 
			// Icon
			// 
			this->Icon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.Image")));
			this->Icon->Location = System::Drawing::Point(59, 10);
			this->Icon->Name = L"Icon";
			this->Icon->Padding = System::Windows::Forms::Padding(4);
			this->Icon->Size = System::Drawing::Size(117, 127);
			this->Icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Icon->TabIndex = 31;
			this->Icon->TabStop = false;
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->MenuPanel->Controls->Add(this->ExitBtn);
			this->MenuPanel->Controls->Add(this->MenuLabel);
			this->MenuPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->MenuPanel->Location = System::Drawing::Point(249, 0);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(1019, 74);
			this->MenuPanel->TabIndex = 28;
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ExitBtn->ForeColor = System::Drawing::Color::Coral;
			this->ExitBtn->Location = System::Drawing::Point(896, 12);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(53, 52);
			this->ExitBtn->TabIndex = 14;
			this->ExitBtn->Text = L"x";
			this->ExitBtn->UseVisualStyleBackColor = false;
			// 
			// MenuLabel
			// 
			this->MenuLabel->AutoSize = true;
			this->MenuLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuLabel->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->MenuLabel->Location = System::Drawing::Point(53, 10);
			this->MenuLabel->Name = L"MenuLabel";
			this->MenuLabel->Size = System::Drawing::Size(284, 54);
			this->MenuLabel->TabIndex = 13;
			this->MenuLabel->Text = L"DASHBOARD";
			this->MenuLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RemovePanel
			// 
			this->RemovePanel->AutoSize = true;
			this->RemovePanel->Controls->Add(this->btn_Remove1StuInCourse);
			this->RemovePanel->Controls->Add(this->btn_Delete1Course);
			this->RemovePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->RemovePanel->Location = System::Drawing::Point(249, 696);
			this->RemovePanel->Name = L"RemovePanel";
			this->RemovePanel->Size = System::Drawing::Size(1019, 100);
			this->RemovePanel->TabIndex = 50;
			this->RemovePanel->Visible = false;
			// 
			// UpdatePanel
			// 
			this->UpdatePanel->AutoSize = true;
			this->UpdatePanel->Controls->Add(this->btn_UpdateCourse);
			this->UpdatePanel->Controls->Add(this->btn_UpdateResult);
			this->UpdatePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdatePanel->Location = System::Drawing::Point(249, 446);
			this->UpdatePanel->Name = L"UpdatePanel";
			this->UpdatePanel->Size = System::Drawing::Size(1019, 100);
			this->UpdatePanel->TabIndex = 54;
			this->UpdatePanel->Visible = false;
			// 
			// btn_UpdateCourse
			// 
			this->btn_UpdateCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_UpdateCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_UpdateCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_UpdateCourse->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_UpdateCourse->Location = System::Drawing::Point(0, 50);
			this->btn_UpdateCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_UpdateCourse->Name = L"btn_UpdateCourse";
			this->btn_UpdateCourse->Size = System::Drawing::Size(1019, 50);
			this->btn_UpdateCourse->TabIndex = 41;
			this->btn_UpdateCourse->Text = L"Update information of a course in current semester";
			this->btn_UpdateCourse->UseVisualStyleBackColor = false;
			// 
			// btn_UpdateResult
			// 
			this->btn_UpdateResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_UpdateResult->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_UpdateResult->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_UpdateResult->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_UpdateResult->Location = System::Drawing::Point(0, 0);
			this->btn_UpdateResult->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_UpdateResult->Name = L"btn_UpdateResult";
			this->btn_UpdateResult->Size = System::Drawing::Size(1019, 50);
			this->btn_UpdateResult->TabIndex = 42;
			this->btn_UpdateResult->Text = L"Update Student\'s Result";
			this->btn_UpdateResult->UseVisualStyleBackColor = false;
			// 
			// AddPanel
			// 
			this->AddPanel->AutoSize = true;
			this->AddPanel->Controls->Add(this->btn_AddStuCSV);
			this->AddPanel->Controls->Add(this->btn_Add1StuToCourse);
			this->AddPanel->Controls->Add(this->btn_AddStuToClass);
			this->AddPanel->Controls->Add(this->btn_Add1CourseToCurSem);
			this->AddPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddPanel->Location = System::Drawing::Point(249, 246);
			this->AddPanel->Name = L"AddPanel";
			this->AddPanel->Size = System::Drawing::Size(1019, 200);
			this->AddPanel->TabIndex = 53;
			this->AddPanel->Visible = false;
			// 
			// btn_AddStuCSV
			// 
			this->btn_AddStuCSV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_AddStuCSV->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_AddStuCSV->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_AddStuCSV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_AddStuCSV->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_AddStuCSV->Location = System::Drawing::Point(0, 150);
			this->btn_AddStuCSV->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AddStuCSV->Name = L"btn_AddStuCSV";
			this->btn_AddStuCSV->Size = System::Drawing::Size(1019, 50);
			this->btn_AddStuCSV->TabIndex = 40;
			this->btn_AddStuCSV->Text = L"Add new 1st year students to a 1st-year class by CSV file";
			this->btn_AddStuCSV->UseVisualStyleBackColor = false;
			// 
			// btn_Add1StuToCourse
			// 
			this->btn_Add1StuToCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Add1StuToCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Add1StuToCourse->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Add1StuToCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Add1StuToCourse->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Add1StuToCourse->Location = System::Drawing::Point(0, 100);
			this->btn_Add1StuToCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Add1StuToCourse->Name = L"btn_Add1StuToCourse";
			this->btn_Add1StuToCourse->Size = System::Drawing::Size(1019, 50);
			this->btn_Add1StuToCourse->TabIndex = 42;
			this->btn_Add1StuToCourse->Text = L"Add a student to a course in current semester";
			this->btn_Add1StuToCourse->UseVisualStyleBackColor = false;
			// 
			// btn_AddStuToClass
			// 
			this->btn_AddStuToClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_AddStuToClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_AddStuToClass->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_AddStuToClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_AddStuToClass->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_AddStuToClass->Location = System::Drawing::Point(0, 50);
			this->btn_AddStuToClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AddStuToClass->Name = L"btn_AddStuToClass";
			this->btn_AddStuToClass->Size = System::Drawing::Size(1019, 50);
			this->btn_AddStuToClass->TabIndex = 39;
			this->btn_AddStuToClass->Text = L"Add new 1st year students to 1st-year classes one by one";
			this->btn_AddStuToClass->UseVisualStyleBackColor = false;
			// 
			// btn_Add1CourseToCurSem
			// 
			this->btn_Add1CourseToCurSem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Add1CourseToCurSem->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Add1CourseToCurSem->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Add1CourseToCurSem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Add1CourseToCurSem->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Add1CourseToCurSem->Location = System::Drawing::Point(0, 0);
			this->btn_Add1CourseToCurSem->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Add1CourseToCurSem->Name = L"btn_Add1CourseToCurSem";
			this->btn_Add1CourseToCurSem->Size = System::Drawing::Size(1019, 50);
			this->btn_Add1CourseToCurSem->TabIndex = 41;
			this->btn_Add1CourseToCurSem->Text = L"Add a course to current semester";
			this->btn_Add1CourseToCurSem->UseVisualStyleBackColor = false;
			// 
			// ViewPanel
			// 
			this->ViewPanel->AutoSize = true;
			this->ViewPanel->Controls->Add(this->btn_ViewCourses);
			this->ViewPanel->Controls->Add(this->btn_ViewClasses);
			this->ViewPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewPanel->Location = System::Drawing::Point(249, 146);
			this->ViewPanel->Name = L"ViewPanel";
			this->ViewPanel->Size = System::Drawing::Size(1019, 100);
			this->ViewPanel->TabIndex = 52;
			this->ViewPanel->Visible = false;
			// 
			// btn_ViewCourses
			// 
			this->btn_ViewCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_ViewCourses->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ViewCourses->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ViewCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ViewCourses->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_ViewCourses->Location = System::Drawing::Point(0, 50);
			this->btn_ViewCourses->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(1019, 50);
			this->btn_ViewCourses->TabIndex = 40;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = false;
			// 
			// btn_ViewClasses
			// 
			this->btn_ViewClasses->Location = System::Drawing::Point(45, 126);
			this->btn_ViewClasses->Name = L"btn_ViewClasses";
			this->btn_ViewClasses->Size = System::Drawing::Size(376, 28);
			this->btn_ViewClasses->TabIndex = 12;
			this->btn_ViewClasses->Text = L"View classes";
			this->btn_ViewClasses->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(49, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 39);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Menu";
			// 
			// btn_logout
			// 
			this->btn_logout->Location = System::Drawing::Point(701, 425);
			this->btn_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(72, 30);
			this->btn_logout->TabIndex = 14;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = true;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStaff::btn_logout_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->Location = System::Drawing::Point(779, 425);
			this->btn_exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(72, 30);
			this->btn_exit->TabIndex = 15;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStaff::btn_exit_Click);
			// 
			// btn_UpdateResult
			// 
			this->btn_UpdateResult->Location = System::Drawing::Point(45, 334);
			this->btn_UpdateResult->Name = L"btn_UpdateResult";
			this->btn_UpdateResult->Size = System::Drawing::Size(376, 28);
			this->btn_UpdateResult->TabIndex = 16;
			this->btn_UpdateResult->Text = L"Update Student\'s Result";
			this->btn_UpdateResult->UseVisualStyleBackColor = true;
			this->btn_UpdateResult->Click += gcnew System::EventHandler(this, &MenuStaff::btn_UpdateResult_Click);
			// 
			// txt_nameOfUser
			// 
			this->txt_nameOfUser->BackColor = System::Drawing::Color::LemonChiffon;
			this->txt_nameOfUser->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nameOfUser->Location = System::Drawing::Point(56, 8);
			this->txt_nameOfUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nameOfUser->Name = L"txt_nameOfUser";
			this->txt_nameOfUser->ReadOnly = true;
			this->txt_nameOfUser->Size = System::Drawing::Size(337, 24);
			this->txt_nameOfUser->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Staff";
			// 
			// btn_ImportScore
			// 
			this->btn_ImportScore->Location = System::Drawing::Point(475, 301);
			this->btn_ImportScore->Name = L"btn_ImportScore";
			this->btn_ImportScore->Size = System::Drawing::Size(376, 26);
			this->btn_ImportScore->TabIndex = 19;
			this->btn_ImportScore->Text = L"Import the ScoreBoard of a Course";
			this->btn_ImportScore->UseVisualStyleBackColor = true;
			this->btn_ImportScore->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ImportScore_Click);
			// 
			// MenuStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(889, 465);
			this->ControlBox = false;
			this->Controls->Add(this->btn_ImportScore);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_nameOfUser);
			this->Controls->Add(this->btn_UpdateResult);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_logout);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_ViewClasses);
			this->Controls->Add(this->btn_Delete1Course);
			this->Controls->Add(this->btn_Remove1StuInCourse);
			this->Controls->Add(this->btn_Add1StuToCourse);
			this->Controls->Add(this->btn_UpdateCourse);
			this->Controls->Add(this->btn_ViewCourses);
			this->Controls->Add(this->btn_StuInCourseCSV);
			this->Controls->Add(this->btn_Add1CourseToCurSem);
			this->Controls->Add(this->btn_Create1Sem);
			this->Controls->Add(this->btn_AddStuCSV);
			this->Controls->Add(this->btn_AddStuToClass);
			this->Controls->Add(this->btn_Create1NewClass);
			this->Controls->Add(this->btn_CreateSchoolYear);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MenuStaff";
			this->Text = L"MenuStaff";
			this->Load += gcnew System::EventHandler(this, &MenuStaff::MenuStaff_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuStaff_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string namedisplay = g_currentStaff->firstname + " " + g_currentStaff->lastname;
		txt_nameOfUser->Text = gcnew System::String(namedisplay.c_str());
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
		RemoveStuFromCourse^ form = gcnew RemoveStuFromCourse(this);
		this->Hide();
		form->Show();
	}
private: System::Void btn_ViewCourses_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ViewListCourses^ form = gcnew CMS::ViewListCourses(this);
	form->Show();
}
private: System::Void btn_ImportScore_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ImpScoreOfCourse^ form = gcnew CMS::ImpScoreOfCourse(this);
	form->Show();
}
};
}