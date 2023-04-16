#pragma once

#include "header.h"
#include "UpdateResult.h"
#include "RemoveStuFromCourse.h"
#include "ViewListCourses.h"
#include "ImpScoreOfCourse.h"
#include "Add1StuToCourse.h"
#include "ViewClasses.h"
#include"ViewAListInAClasses.h"
#include "ViewAListStudentInACourse.h"

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




	protected:

	protected:





	private: System::Windows::Forms::Button^ btn_StuInCourseCSV;










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
	private: System::Windows::Forms::Panel^ ViewPanel;
	private: System::Windows::Forms::Button^ btn_ViewCourses;
	private: System::Windows::Forms::Button^ btn_ViewClasses;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_nameOfUser;
	private: System::Windows::Forms::Button^ btn_Create1Sem;
	private: System::Windows::Forms::Button^ btn_CreateSchoolYear;
	private: System::Windows::Forms::Button^ btn_Create1NewClass;
	private: System::Windows::Forms::Panel^ CreatePanel;
	private: System::Windows::Forms::Button^ AccountBtn;
	private: System::Windows::Forms::Button^ ImportExportBtn;
	private: System::Windows::Forms::Panel^ ImportExportPanel;
	private: System::Windows::Forms::Panel^ AccountPanel;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ ChangePassBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Button^ ViewScoreOfACourseBtn;
	private: System::Windows::Forms::Button^ ViewStusInACourseBtn;
	private: System::Windows::Forms::Button^ ViewStusInClassBtn;
	private: System::Windows::Forms::Button^ ExportStusInACourseBtn;














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
			this->btn_StuInCourseCSV = (gcnew System::Windows::Forms::Button());
			this->btn_Remove1StuInCourse = (gcnew System::Windows::Forms::Button());
			this->btn_Delete1Course = (gcnew System::Windows::Forms::Button());
			this->btn_ImportScore = (gcnew System::Windows::Forms::Button());
			this->OptionPanel = (gcnew System::Windows::Forms::Panel());
			this->AccountBtn = (gcnew System::Windows::Forms::Button());
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
			this->ViewPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewScoreOfACourseBtn = (gcnew System::Windows::Forms::Button());
			this->ViewStusInACourseBtn = (gcnew System::Windows::Forms::Button());
			this->ViewStusInClassBtn = (gcnew System::Windows::Forms::Button());
			this->btn_ViewCourses = (gcnew System::Windows::Forms::Button());
			this->btn_ViewClasses = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nameOfUser = (gcnew System::Windows::Forms::TextBox());
			this->btn_Create1Sem = (gcnew System::Windows::Forms::Button());
			this->btn_CreateSchoolYear = (gcnew System::Windows::Forms::Button());
			this->btn_Create1NewClass = (gcnew System::Windows::Forms::Button());
			this->CreatePanel = (gcnew System::Windows::Forms::Panel());
			this->ImportExportPanel = (gcnew System::Windows::Forms::Panel());
			this->ExportStusInACourseBtn = (gcnew System::Windows::Forms::Button());
			this->AccountPanel = (gcnew System::Windows::Forms::Panel());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->ChangePassBtn = (gcnew System::Windows::Forms::Button());
			this->OptionPanel->SuspendLayout();
			this->ImagePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
			this->MenuPanel->SuspendLayout();
			this->RemovePanel->SuspendLayout();
			this->UpdatePanel->SuspendLayout();
			this->AddPanel->SuspendLayout();
			this->ViewPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->CreatePanel->SuspendLayout();
			this->ImportExportPanel->SuspendLayout();
			this->AccountPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_StuInCourseCSV
			// 
			this->btn_StuInCourseCSV->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_StuInCourseCSV->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_StuInCourseCSV->FlatAppearance->BorderSize = 0;
			this->btn_StuInCourseCSV->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_StuInCourseCSV->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_StuInCourseCSV->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_StuInCourseCSV->Location = System::Drawing::Point(0, 0);
			this->btn_StuInCourseCSV->Name = L"btn_StuInCourseCSV";
			this->btn_StuInCourseCSV->Size = System::Drawing::Size(876, 40);
			this->btn_StuInCourseCSV->TabIndex = 6;
			this->btn_StuInCourseCSV->Text = L"Upload a CSV file of students enrolled in a course of current semester";
			this->btn_StuInCourseCSV->UseVisualStyleBackColor = false;
			this->btn_StuInCourseCSV->Click += gcnew System::EventHandler(this, &MenuStaff::btn_StuInCourseCSV_Click);
			// 
			// btn_Remove1StuInCourse
			// 
			this->btn_Remove1StuInCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Remove1StuInCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Remove1StuInCourse->FlatAppearance->BorderSize = 0;
			this->btn_Remove1StuInCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Remove1StuInCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Remove1StuInCourse->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Remove1StuInCourse->Location = System::Drawing::Point(0, 40);
			this->btn_Remove1StuInCourse->Name = L"btn_Remove1StuInCourse";
			this->btn_Remove1StuInCourse->Size = System::Drawing::Size(876, 40);
			this->btn_Remove1StuInCourse->TabIndex = 10;
			this->btn_Remove1StuInCourse->Text = L"Remove a student from a course in current semester";
			this->btn_Remove1StuInCourse->UseVisualStyleBackColor = false;
			this->btn_Remove1StuInCourse->Click += gcnew System::EventHandler(this, &MenuStaff::btn_Remove1StuInCourse_Click);
			// 
			// btn_Delete1Course
			// 
			this->btn_Delete1Course->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Delete1Course->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Delete1Course->FlatAppearance->BorderSize = 0;
			this->btn_Delete1Course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Delete1Course->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Delete1Course->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Delete1Course->Location = System::Drawing::Point(0, 0);
			this->btn_Delete1Course->Name = L"btn_Delete1Course";
			this->btn_Delete1Course->Size = System::Drawing::Size(876, 40);
			this->btn_Delete1Course->TabIndex = 11;
			this->btn_Delete1Course->Text = L"Delete a course of current semester";
			this->btn_Delete1Course->UseVisualStyleBackColor = false;
			// 
			// btn_ImportScore
			// 
			this->btn_ImportScore->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_ImportScore->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ImportScore->FlatAppearance->BorderSize = 0;
			this->btn_ImportScore->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ImportScore->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ImportScore->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_ImportScore->Location = System::Drawing::Point(0, 40);
			this->btn_ImportScore->Name = L"btn_ImportScore";
			this->btn_ImportScore->Size = System::Drawing::Size(876, 40);
			this->btn_ImportScore->TabIndex = 19;
			this->btn_ImportScore->Text = L"Import the ScoreBoard of a Course";
			this->btn_ImportScore->UseVisualStyleBackColor = false;
			this->btn_ImportScore->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ImportScore_Click);
			// 
			// OptionPanel
			// 
			this->OptionPanel->AutoScroll = true;
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
			this->OptionPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OptionPanel->Name = L"OptionPanel";
			this->OptionPanel->Size = System::Drawing::Size(221, 957);
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
			this->AccountBtn->Location = System::Drawing::Point(0, 351);
			this->AccountBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AccountBtn->Name = L"AccountBtn";
			this->AccountBtn->Size = System::Drawing::Size(221, 39);
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
			this->ImportExportBtn->Location = System::Drawing::Point(0, 312);
			this->ImportExportBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ImportExportBtn->Name = L"ImportExportBtn";
			this->ImportExportBtn->Size = System::Drawing::Size(221, 39);
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
			this->RemoveBtn->Location = System::Drawing::Point(0, 273);
			this->RemoveBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RemoveBtn->Name = L"RemoveBtn";
			this->RemoveBtn->Size = System::Drawing::Size(221, 39);
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
			this->AddBtn->Location = System::Drawing::Point(0, 234);
			this->AddBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->AddBtn->Size = System::Drawing::Size(221, 39);
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
			this->UpdateBtn->Location = System::Drawing::Point(0, 195);
			this->UpdateBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->UpdateBtn->Size = System::Drawing::Size(221, 39);
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
			this->CreateBtn->Location = System::Drawing::Point(0, 156);
			this->CreateBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CreateBtn->Name = L"CreateBtn";
			this->CreateBtn->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->CreateBtn->Size = System::Drawing::Size(221, 39);
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
			this->ViewBtn->Location = System::Drawing::Point(0, 117);
			this->ViewBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ViewBtn->Name = L"ViewBtn";
			this->ViewBtn->Size = System::Drawing::Size(221, 39);
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
			this->ImagePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ImagePanel->Name = L"ImagePanel";
			this->ImagePanel->Size = System::Drawing::Size(221, 117);
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
			this->Icon->Location = System::Drawing::Point(52, 8);
			this->Icon->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Icon->Name = L"Icon";
			this->Icon->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Icon->Size = System::Drawing::Size(104, 102);
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
			this->MenuPanel->Location = System::Drawing::Point(221, 0);
			this->MenuPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(876, 59);
			this->MenuPanel->TabIndex = 28;
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitBtn->ForeColor = System::Drawing::Color::LemonChiffon;
			this->ExitBtn->Location = System::Drawing::Point(752, 11);
			this->ExitBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(35, 35);
			this->ExitBtn->TabIndex = 14;
			this->ExitBtn->Text = L"x";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MenuStaff::btn_exit_Click);
			// 
			// MenuLabel
			// 
			this->MenuLabel->AutoSize = true;
			this->MenuLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MenuLabel->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->MenuLabel->Location = System::Drawing::Point(47, 8);
			this->MenuLabel->Name = L"MenuLabel";
			this->MenuLabel->Size = System::Drawing::Size(242, 46);
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
			this->RemovePanel->Location = System::Drawing::Point(221, 637);
			this->RemovePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RemovePanel->Name = L"RemovePanel";
			this->RemovePanel->Size = System::Drawing::Size(876, 80);
			this->RemovePanel->TabIndex = 50;
			this->RemovePanel->Visible = false;
			// 
			// UpdatePanel
			// 
			this->UpdatePanel->AutoSize = true;
			this->UpdatePanel->Controls->Add(this->btn_UpdateCourse);
			this->UpdatePanel->Controls->Add(this->btn_UpdateResult);
			this->UpdatePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->UpdatePanel->Location = System::Drawing::Point(221, 437);
			this->UpdatePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UpdatePanel->Name = L"UpdatePanel";
			this->UpdatePanel->Size = System::Drawing::Size(876, 80);
			this->UpdatePanel->TabIndex = 54;
			this->UpdatePanel->Visible = false;
			// 
			// btn_UpdateCourse
			// 
			this->btn_UpdateCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_UpdateCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_UpdateCourse->FlatAppearance->BorderSize = 0;
			this->btn_UpdateCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdateCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_UpdateCourse->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_UpdateCourse->Location = System::Drawing::Point(0, 40);
			this->btn_UpdateCourse->Name = L"btn_UpdateCourse";
			this->btn_UpdateCourse->Size = System::Drawing::Size(876, 40);
			this->btn_UpdateCourse->TabIndex = 41;
			this->btn_UpdateCourse->Text = L"Update information of a course in current semester";
			this->btn_UpdateCourse->UseVisualStyleBackColor = false;
			// 
			// btn_UpdateResult
			// 
			this->btn_UpdateResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_UpdateResult->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_UpdateResult->FlatAppearance->BorderSize = 0;
			this->btn_UpdateResult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_UpdateResult->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_UpdateResult->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_UpdateResult->Location = System::Drawing::Point(0, 0);
			this->btn_UpdateResult->Name = L"btn_UpdateResult";
			this->btn_UpdateResult->Size = System::Drawing::Size(876, 40);
			this->btn_UpdateResult->TabIndex = 42;
			this->btn_UpdateResult->Text = L"Update a student\'s result";
			this->btn_UpdateResult->UseVisualStyleBackColor = false;
			// 
			// AddPanel
			// 
			this->AddPanel->AutoSize = true;
			this->AddPanel->Controls->Add(this->btn_Add1StuToCourse);
			this->AddPanel->Controls->Add(this->btn_AddStuToClass);
			this->AddPanel->Controls->Add(this->btn_Add1CourseToCurSem);
			this->AddPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AddPanel->Location = System::Drawing::Point(221, 317);
			this->AddPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddPanel->Name = L"AddPanel";
			this->AddPanel->Size = System::Drawing::Size(876, 120);
			this->AddPanel->TabIndex = 53;
			this->AddPanel->Visible = false;
			// 
			// btn_Add1StuToCourse
			// 
			this->btn_Add1StuToCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Add1StuToCourse->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Add1StuToCourse->FlatAppearance->BorderSize = 0;
			this->btn_Add1StuToCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add1StuToCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Add1StuToCourse->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Add1StuToCourse->Location = System::Drawing::Point(0, 80);
			this->btn_Add1StuToCourse->Name = L"btn_Add1StuToCourse";
			this->btn_Add1StuToCourse->Size = System::Drawing::Size(876, 40);
			this->btn_Add1StuToCourse->TabIndex = 42;
			this->btn_Add1StuToCourse->Text = L"Add a student to a course in current semester";
			this->btn_Add1StuToCourse->UseVisualStyleBackColor = false;
			// 
			// btn_AddStuToClass
			// 
			this->btn_AddStuToClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_AddStuToClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_AddStuToClass->FlatAppearance->BorderSize = 0;
			this->btn_AddStuToClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_AddStuToClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_AddStuToClass->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_AddStuToClass->Location = System::Drawing::Point(0, 40);
			this->btn_AddStuToClass->Name = L"btn_AddStuToClass";
			this->btn_AddStuToClass->Size = System::Drawing::Size(876, 40);
			this->btn_AddStuToClass->TabIndex = 39;
			this->btn_AddStuToClass->Text = L"Add new 1st year students to 1st-year classes";
			this->btn_AddStuToClass->UseVisualStyleBackColor = false;
			this->btn_AddStuToClass->Click += gcnew System::EventHandler(this, &MenuStaff::btn_AddStuToClass_Click);
			// 
			// btn_Add1CourseToCurSem
			// 
			this->btn_Add1CourseToCurSem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Add1CourseToCurSem->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Add1CourseToCurSem->FlatAppearance->BorderSize = 0;
			this->btn_Add1CourseToCurSem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Add1CourseToCurSem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Add1CourseToCurSem->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Add1CourseToCurSem->Location = System::Drawing::Point(0, 0);
			this->btn_Add1CourseToCurSem->Name = L"btn_Add1CourseToCurSem";
			this->btn_Add1CourseToCurSem->Size = System::Drawing::Size(876, 40);
			this->btn_Add1CourseToCurSem->TabIndex = 41;
			this->btn_Add1CourseToCurSem->Text = L"Add a course to current semester";
			this->btn_Add1CourseToCurSem->UseVisualStyleBackColor = false;
			// 
			// ViewPanel
			// 
			this->ViewPanel->AutoSize = true;
			this->ViewPanel->Controls->Add(this->ViewScoreOfACourseBtn);
			this->ViewPanel->Controls->Add(this->ViewStusInACourseBtn);
			this->ViewPanel->Controls->Add(this->ViewStusInClassBtn);
			this->ViewPanel->Controls->Add(this->btn_ViewCourses);
			this->ViewPanel->Controls->Add(this->btn_ViewClasses);
			this->ViewPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewPanel->Location = System::Drawing::Point(221, 117);
			this->ViewPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ViewPanel->Name = L"ViewPanel";
			this->ViewPanel->Size = System::Drawing::Size(876, 200);
			this->ViewPanel->TabIndex = 52;
			this->ViewPanel->Visible = false;
			// 
			// ViewScoreOfACourseBtn
			// 
			this->ViewScoreOfACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->ViewScoreOfACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewScoreOfACourseBtn->FlatAppearance->BorderSize = 0;
			this->ViewScoreOfACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewScoreOfACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewScoreOfACourseBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->ViewScoreOfACourseBtn->Location = System::Drawing::Point(0, 160);
			this->ViewScoreOfACourseBtn->Name = L"ViewScoreOfACourseBtn";
			this->ViewScoreOfACourseBtn->Size = System::Drawing::Size(876, 40);
			this->ViewScoreOfACourseBtn->TabIndex = 44;
			this->ViewScoreOfACourseBtn->Text = L"View the scoreboard of a course";
			this->ViewScoreOfACourseBtn->UseVisualStyleBackColor = false;
			this->ViewScoreOfACourseBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ViewScoreOfACourseBtn_Click);
			// 
			// ViewStusInACourseBtn
			// 
			this->ViewStusInACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->ViewStusInACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewStusInACourseBtn->FlatAppearance->BorderSize = 0;
			this->ViewStusInACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewStusInACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewStusInACourseBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->ViewStusInACourseBtn->Location = System::Drawing::Point(0, 120);
			this->ViewStusInACourseBtn->Name = L"ViewStusInACourseBtn";
			this->ViewStusInACourseBtn->Size = System::Drawing::Size(876, 40);
			this->ViewStusInACourseBtn->TabIndex = 43;
			this->ViewStusInACourseBtn->Text = L"View students in a course";
			this->ViewStusInACourseBtn->UseVisualStyleBackColor = false;
			this->ViewStusInACourseBtn->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewAListInACourse_Click);
			// 
			// ViewStusInClassBtn
			// 
			this->ViewStusInClassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->ViewStusInClassBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewStusInClassBtn->FlatAppearance->BorderSize = 0;
			this->ViewStusInClassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewStusInClassBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewStusInClassBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->ViewStusInClassBtn->Location = System::Drawing::Point(0, 80);
			this->ViewStusInClassBtn->Name = L"ViewStusInClassBtn";
			this->ViewStusInClassBtn->Size = System::Drawing::Size(876, 40);
			this->ViewStusInClassBtn->TabIndex = 42;
			this->ViewStusInClassBtn->Text = L"View students of a class";
			this->ViewStusInClassBtn->UseVisualStyleBackColor = false;
			this->ViewStusInClassBtn->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewAListInAClasses_Click);
			// 
			// btn_ViewCourses
			// 
			this->btn_ViewCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_ViewCourses->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ViewCourses->FlatAppearance->BorderSize = 0;
			this->btn_ViewCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ViewCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ViewCourses->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_ViewCourses->Location = System::Drawing::Point(0, 40);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(876, 40);
			this->btn_ViewCourses->TabIndex = 40;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = false;
			this->btn_ViewCourses->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewCourses_Click);
			// 
			// btn_ViewClasses
			// 
			this->btn_ViewClasses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_ViewClasses->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ViewClasses->FlatAppearance->BorderSize = 0;
			this->btn_ViewClasses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ViewClasses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ViewClasses->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_ViewClasses->Location = System::Drawing::Point(0, 0);
			this->btn_ViewClasses->Name = L"btn_ViewClasses";
			this->btn_ViewClasses->Size = System::Drawing::Size(876, 40);
			this->btn_ViewClasses->TabIndex = 41;
			this->btn_ViewClasses->Text = L"View classes";
			this->btn_ViewClasses->UseVisualStyleBackColor = false;
			this->btn_ViewClasses->Click += gcnew System::EventHandler(this, &MenuStaff::btn_ViewClasses_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txt_nameOfUser);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(221, 59);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(876, 58);
			this->panel1->TabIndex = 51;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(10, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Staff";
			// 
			// txt_nameOfUser
			// 
			this->txt_nameOfUser->BackColor = System::Drawing::Color::LemonChiffon;
			this->txt_nameOfUser->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nameOfUser->Location = System::Drawing::Point(54, 8);
			this->txt_nameOfUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nameOfUser->Name = L"txt_nameOfUser";
			this->txt_nameOfUser->ReadOnly = true;
			this->txt_nameOfUser->Size = System::Drawing::Size(337, 24);
			this->txt_nameOfUser->TabIndex = 17;
			// 
			// btn_Create1Sem
			// 
			this->btn_Create1Sem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Create1Sem->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Create1Sem->FlatAppearance->BorderSize = 0;
			this->btn_Create1Sem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Create1Sem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Create1Sem->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Create1Sem->Location = System::Drawing::Point(0, 0);
			this->btn_Create1Sem->Name = L"btn_Create1Sem";
			this->btn_Create1Sem->Size = System::Drawing::Size(876, 40);
			this->btn_Create1Sem->TabIndex = 37;
			this->btn_Create1Sem->Text = L"Create a semester";
			this->btn_Create1Sem->UseVisualStyleBackColor = false;
			// 
			// btn_CreateSchoolYear
			// 
			this->btn_CreateSchoolYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_CreateSchoolYear->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_CreateSchoolYear->FlatAppearance->BorderSize = 0;
			this->btn_CreateSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_CreateSchoolYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_CreateSchoolYear->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_CreateSchoolYear->Location = System::Drawing::Point(0, 40);
			this->btn_CreateSchoolYear->Name = L"btn_CreateSchoolYear";
			this->btn_CreateSchoolYear->Size = System::Drawing::Size(876, 40);
			this->btn_CreateSchoolYear->TabIndex = 35;
			this->btn_CreateSchoolYear->Text = L"Create a school year";
			this->btn_CreateSchoolYear->UseVisualStyleBackColor = false;
			// 
			// btn_Create1NewClass
			// 
			this->btn_Create1NewClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_Create1NewClass->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Create1NewClass->FlatAppearance->BorderSize = 0;
			this->btn_Create1NewClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Create1NewClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_Create1NewClass->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_Create1NewClass->Location = System::Drawing::Point(0, 80);
			this->btn_Create1NewClass->Name = L"btn_Create1NewClass";
			this->btn_Create1NewClass->Size = System::Drawing::Size(876, 40);
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
			this->CreatePanel->Location = System::Drawing::Point(221, 517);
			this->CreatePanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CreatePanel->Name = L"CreatePanel";
			this->CreatePanel->Size = System::Drawing::Size(876, 120);
			this->CreatePanel->TabIndex = 55;
			this->CreatePanel->Visible = false;
			// 
			// ImportExportPanel
			// 
			this->ImportExportPanel->AutoSize = true;
			this->ImportExportPanel->Controls->Add(this->ExportStusInACourseBtn);
			this->ImportExportPanel->Controls->Add(this->btn_ImportScore);
			this->ImportExportPanel->Controls->Add(this->btn_StuInCourseCSV);
			this->ImportExportPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImportExportPanel->Location = System::Drawing::Point(221, 717);
			this->ImportExportPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ImportExportPanel->Name = L"ImportExportPanel";
			this->ImportExportPanel->Size = System::Drawing::Size(876, 120);
			this->ImportExportPanel->TabIndex = 56;
			this->ImportExportPanel->Visible = false;
			// 
			// ExportStusInACourseBtn
			// 
			this->ExportStusInACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(93)), static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->ExportStusInACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ExportStusInACourseBtn->FlatAppearance->BorderSize = 0;
			this->ExportStusInACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExportStusInACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ExportStusInACourseBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->ExportStusInACourseBtn->Location = System::Drawing::Point(0, 80);
			this->ExportStusInACourseBtn->Name = L"ExportStusInACourseBtn";
			this->ExportStusInACourseBtn->Size = System::Drawing::Size(876, 40);
			this->ExportStusInACourseBtn->TabIndex = 41;
			this->ExportStusInACourseBtn->Text = L"Export students in a course";
			this->ExportStusInACourseBtn->UseVisualStyleBackColor = false;
			// 
			// AccountPanel
			// 
			this->AccountPanel->AutoSize = true;
			this->AccountPanel->Controls->Add(this->btn_exit);
			this->AccountPanel->Controls->Add(this->btn_logout);
			this->AccountPanel->Controls->Add(this->ChangePassBtn);
			this->AccountPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AccountPanel->Location = System::Drawing::Point(221, 837);
			this->AccountPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AccountPanel->Name = L"AccountPanel";
			this->AccountPanel->Size = System::Drawing::Size(876, 120);
			this->AccountPanel->TabIndex = 57;
			this->AccountPanel->Visible = false;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_exit->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_exit->FlatAppearance->BorderSize = 0;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_exit->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_exit->Location = System::Drawing::Point(0, 80);
			this->btn_exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(876, 40);
			this->btn_exit->TabIndex = 18;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStaff::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_logout->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_logout->FlatAppearance->BorderSize = 0;
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_logout->ForeColor = System::Drawing::Color::FloralWhite;
			this->btn_logout->Location = System::Drawing::Point(0, 40);
			this->btn_logout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(876, 40);
			this->btn_logout->TabIndex = 17;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStaff::btn_logout_Click);
			// 
			// ChangePassBtn
			// 
			this->ChangePassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->ChangePassBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ChangePassBtn->FlatAppearance->BorderSize = 0;
			this->ChangePassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChangePassBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ChangePassBtn->ForeColor = System::Drawing::Color::FloralWhite;
			this->ChangePassBtn->Location = System::Drawing::Point(0, 0);
			this->ChangePassBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChangePassBtn->Name = L"ChangePassBtn";
			this->ChangePassBtn->Size = System::Drawing::Size(876, 40);
			this->ChangePassBtn->TabIndex = 16;
			this->ChangePassBtn->Text = L"Change password";
			this->ChangePassBtn->UseVisualStyleBackColor = false;
			this->ChangePassBtn->Click += gcnew System::EventHandler(this, &MenuStaff::ChangePassBtn_Click);
			// 
			// MenuStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(1118, 563);
			this->ControlBox = false;
			this->Controls->Add(this->AccountPanel);
			this->Controls->Add(this->ImportExportPanel);
			this->Controls->Add(this->RemovePanel);
			this->Controls->Add(this->CreatePanel);
			this->Controls->Add(this->UpdatePanel);
			this->Controls->Add(this->AddPanel);
			this->Controls->Add(this->ViewPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->MenuPanel);
			this->Controls->Add(this->OptionPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuStaff";
			this->Text = L"MenuStaff";
			this->Load += gcnew System::EventHandler(this, &MenuStaff::MenuStaff_Load);
			this->OptionPanel->ResumeLayout(false);
			this->ImagePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			this->RemovePanel->ResumeLayout(false);
			this->UpdatePanel->ResumeLayout(false);
			this->AddPanel->ResumeLayout(false);
			this->ViewPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->CreatePanel->ResumeLayout(false);
			this->ImportExportPanel->ResumeLayout(false);
			this->AccountPanel->ResumeLayout(false);
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
	private: System::Void btn_Add1StuToCourse_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Add1StuToCourse^ form = gcnew Add1StuToCourse(this);
		form->Show();
	}
	private: System::Void ViewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->ViewPanel->Visible)
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = false;
		this->RemovePanel->Visible = !this->RemovePanel->Visible;
	}
	private: System::Void AccountBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->AccountPanel->Visible)
			this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->ImportExportBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->CreateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->RemoveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->UpdateBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->ViewPanel->Visible = false;
		this->CreatePanel->Visible = false;
		this->AddPanel->Visible = false;
		this->UpdatePanel->Visible = false;
		this->RemovePanel->Visible = false;
		this->AccountPanel->Visible = false;
		this->ImportExportPanel->Visible = !this->ImportExportPanel->Visible;
	}
		private:System::Void btn_ViewClasses_Click(System::Object^ sender, System::EventArgs^ e) {

			ViewClasses^ form = gcnew CMS::ViewClasses(this);
			this->Hide();
			form->btnPrint_ClicK(sender, e);
			form->Show();

		}
		private:System::Void btn_ViewAListInAClasses_Click(System::Object^ sender, System::EventArgs^ e) {

			ViewAListInAClasses^ form = gcnew CMS::ViewAListInAClasses(this);

			this->Hide();

			form->ShowDialog();

		}
		private:System::Void btn_ViewAListInACourse_Click(System::Object^ sender, System::EventArgs^ e) {

			ViewListStudentInACourses^ form = gcnew CMS::ViewListStudentInACourses(this);
			this->Hide();
			form->ShowDialog();


		}
	private: System::Void ChangePassBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_StuInCourseCSV_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Create1NewClass_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewScoreOfACourseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_AddStuToClass_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}