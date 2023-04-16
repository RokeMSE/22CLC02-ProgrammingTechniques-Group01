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
	/// Summary for MenuStudent
	/// </summary>
	public ref class MenuStudent : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		//GROUP1::STAFF* currentStaff;
		MenuStudent(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			this->sourceForm = form;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuStudent()
		{
			if (components)
			{
				delete components;
			}
		}




	protected:

	protected:


































	private: System::Windows::Forms::Panel^ OptionPanel;















	private: System::Windows::Forms::Panel^ MenuPanel;
	private: System::Windows::Forms::Label^ MenuLabel;




	private: System::Windows::Forms::PictureBox^ Icon;

	private: System::Windows::Forms::Panel^ ImagePanel;
























	private: System::Windows::Forms::Button^ ViewBtn;














	private: System::Windows::Forms::Panel^ ViewPanel;
	private: System::Windows::Forms::Button^ btn_ViewCourses;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_nameOfUser;

	private: System::Windows::Forms::Button^ AccountBtn;

	private: System::Windows::Forms::Panel^ AccountPanel;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ ChangePassBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Button^ ViewScoreOfACourseBtn;

















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuStudent::typeid));
			this->OptionPanel = (gcnew System::Windows::Forms::Panel());
			this->AccountBtn = (gcnew System::Windows::Forms::Button());
			this->ViewBtn = (gcnew System::Windows::Forms::Button());
			this->ImagePanel = (gcnew System::Windows::Forms::Panel());
			this->Icon = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->MenuLabel = (gcnew System::Windows::Forms::Label());
			this->ViewPanel = (gcnew System::Windows::Forms::Panel());
			this->ViewScoreOfACourseBtn = (gcnew System::Windows::Forms::Button());
			this->btn_ViewCourses = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nameOfUser = (gcnew System::Windows::Forms::TextBox());
			this->AccountPanel = (gcnew System::Windows::Forms::Panel());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->ChangePassBtn = (gcnew System::Windows::Forms::Button());
			this->OptionPanel->SuspendLayout();
			this->ImagePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
			this->MenuPanel->SuspendLayout();
			this->ViewPanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->AccountPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// OptionPanel
			// 
			this->OptionPanel->AutoScroll = true;
			this->OptionPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->OptionPanel->Controls->Add(this->AccountBtn);
			this->OptionPanel->Controls->Add(this->ViewBtn);
			this->OptionPanel->Controls->Add(this->ImagePanel);
			this->OptionPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->OptionPanel->Location = System::Drawing::Point(0, 0);
			this->OptionPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OptionPanel->Name = L"OptionPanel";
			this->OptionPanel->Size = System::Drawing::Size(221, 563);
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
			this->AccountBtn->Location = System::Drawing::Point(0, 156);
			this->AccountBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AccountBtn->Name = L"AccountBtn";
			this->AccountBtn->Size = System::Drawing::Size(221, 39);
			this->AccountBtn->TabIndex = 51;
			this->AccountBtn->Text = L"ACCOUNT";
			this->AccountBtn->UseVisualStyleBackColor = false;
			this->AccountBtn->Click += gcnew System::EventHandler(this, &MenuStudent::AccountBtn_Click);
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
			this->ViewBtn->Click += gcnew System::EventHandler(this, &MenuStudent::ViewBtn_Click);
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
			this->Icon->ErrorImage = nullptr;
			this->Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.Image")));
			this->Icon->InitialImage = nullptr;
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
			this->MenuPanel->Size = System::Drawing::Size(832, 59);
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
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MenuStudent::btn_exit_Click);
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
			// ViewPanel
			// 
			this->ViewPanel->AutoSize = true;
			this->ViewPanel->Controls->Add(this->ViewScoreOfACourseBtn);
			this->ViewPanel->Controls->Add(this->btn_ViewCourses);
			this->ViewPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewPanel->Location = System::Drawing::Point(221, 117);
			this->ViewPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ViewPanel->Name = L"ViewPanel";
			this->ViewPanel->Size = System::Drawing::Size(832, 80);
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
			this->ViewScoreOfACourseBtn->Location = System::Drawing::Point(0, 40);
			this->ViewScoreOfACourseBtn->Name = L"ViewScoreOfACourseBtn";
			this->ViewScoreOfACourseBtn->Size = System::Drawing::Size(832, 40);
			this->ViewScoreOfACourseBtn->TabIndex = 44;
			this->ViewScoreOfACourseBtn->Text = L"View the scoreboard of a course";
			this->ViewScoreOfACourseBtn->UseVisualStyleBackColor = false;
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
			this->btn_ViewCourses->Location = System::Drawing::Point(0, 0);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(832, 40);
			this->btn_ViewCourses->TabIndex = 40;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = false;
			this->btn_ViewCourses->Click += gcnew System::EventHandler(this, &MenuStudent::btn_ViewCourses_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->txt_nameOfUser);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(221, 59);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(832, 58);
			this->panel1->TabIndex = 51;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(10, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Student";
			// 
			// txt_nameOfUser
			// 
			this->txt_nameOfUser->BackColor = System::Drawing::Color::LemonChiffon;
			this->txt_nameOfUser->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nameOfUser->Location = System::Drawing::Point(77, 11);
			this->txt_nameOfUser->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_nameOfUser->Name = L"txt_nameOfUser";
			this->txt_nameOfUser->ReadOnly = true;
			this->txt_nameOfUser->Size = System::Drawing::Size(337, 24);
			this->txt_nameOfUser->TabIndex = 17;
			// 
			// AccountPanel
			// 
			this->AccountPanel->AutoSize = true;
			this->AccountPanel->Controls->Add(this->btn_exit);
			this->AccountPanel->Controls->Add(this->btn_logout);
			this->AccountPanel->Controls->Add(this->ChangePassBtn);
			this->AccountPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AccountPanel->Location = System::Drawing::Point(221, 197);
			this->AccountPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AccountPanel->Name = L"AccountPanel";
			this->AccountPanel->Size = System::Drawing::Size(832, 120);
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
			this->btn_exit->Size = System::Drawing::Size(832, 40);
			this->btn_exit->TabIndex = 18;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStudent::btn_exit_Click);
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
			this->btn_logout->Size = System::Drawing::Size(832, 40);
			this->btn_logout->TabIndex = 17;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStudent::btn_logout_Click);
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
			this->ChangePassBtn->Size = System::Drawing::Size(832, 40);
			this->ChangePassBtn->TabIndex = 16;
			this->ChangePassBtn->Text = L"Change password";
			this->ChangePassBtn->UseVisualStyleBackColor = false;
			this->ChangePassBtn->Click += gcnew System::EventHandler(this, &MenuStudent::ChangePassBtn_Click);
			// 
			// MenuStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(1053, 563);
			this->ControlBox = false;
			this->Controls->Add(this->AccountPanel);
			this->Controls->Add(this->ViewPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->MenuPanel);
			this->Controls->Add(this->OptionPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MenuStudent";
			this->Text = L"MenuStudent";
			this->Load += gcnew System::EventHandler(this, &MenuStudent::MenuStudent_Load);
			this->OptionPanel->ResumeLayout(false);
			this->ImagePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			this->ViewPanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->AccountPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuStudent_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string namedisplay = g_currentStudent->firstname + " " + g_currentStudent->lastname;
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
		g_currentStudent = nullptr;
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
		Add1StuToCourse^ form = gcnew Add1StuToCourse(this, sourceForm);
		form->Show();
	}
	private: System::Void ViewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->ViewPanel->Visible)
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
		else
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
			static_cast<System::Int32>(static_cast<System::Byte>(87)));
		this->AccountPanel->Visible = false;
		this->ViewPanel->Visible = !this->ViewPanel->Visible;
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
		this->ViewPanel->Visible = false;
		this->AccountPanel->Visible = !this->AccountPanel->Visible;
	}
	private: System::Void ChangePassBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btn_StuInCourseCSV_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Create1NewClass_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}