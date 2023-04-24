#pragma once

#include "header.h"
#include "ChangePass.h"
#include "ViewListCoursesOfStu.h"
#include "ViewScoreOf1Stu.h"

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
		System::Windows::Forms::Form^ sourceForm, ^childForm;
		System::Windows::Forms::Panel^ curPanel;
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







	private: System::Windows::Forms::Panel^ AccountPanel;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ ChangePassBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Button^ ViewScoreOfACourseBtn;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ ProfileBtn;
private: System::Windows::Forms::Button^ BackBtn;

















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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ViewBtn = (gcnew System::Windows::Forms::Button());
			this->ImagePanel = (gcnew System::Windows::Forms::Panel());
			this->Icon = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->MenuLabel = (gcnew System::Windows::Forms::Label());
			this->ViewPanel = (gcnew System::Windows::Forms::Panel());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->ViewScoreOfACourseBtn = (gcnew System::Windows::Forms::Button());
			this->btn_ViewCourses = (gcnew System::Windows::Forms::Button());
			this->AccountPanel = (gcnew System::Windows::Forms::Panel());
			this->ProfileBtn = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->ChangePassBtn = (gcnew System::Windows::Forms::Button());
			this->OptionPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->ImagePanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
			this->MenuPanel->SuspendLayout();
			this->ViewPanel->SuspendLayout();
			this->AccountPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// OptionPanel
			// 
			this->OptionPanel->AutoScroll = true;
			this->OptionPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->OptionPanel->Controls->Add(this->pictureBox1);
			this->OptionPanel->Controls->Add(this->ViewBtn);
			this->OptionPanel->Controls->Add(this->ImagePanel);
			this->OptionPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->OptionPanel->Location = System::Drawing::Point(0, 0);
			this->OptionPanel->Margin = System::Windows::Forms::Padding(2);
			this->OptionPanel->Name = L"OptionPanel";
			this->OptionPanel->Size = System::Drawing::Size(208, 587);
			this->OptionPanel->TabIndex = 26;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(65, 482);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 67);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 52;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MenuStudent::AccountBtn_Click);
			// 
			// ViewBtn
			// 
			this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ViewBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewBtn->FlatAppearance->BorderSize = 0;
			this->ViewBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ViewBtn->Location = System::Drawing::Point(0, 122);
			this->ViewBtn->Margin = System::Windows::Forms::Padding(2);
			this->ViewBtn->Name = L"ViewBtn";
			this->ViewBtn->Size = System::Drawing::Size(208, 41);
			this->ViewBtn->TabIndex = 42;
			this->ViewBtn->Text = L"VIEW";
			this->ViewBtn->UseVisualStyleBackColor = false;
			this->ViewBtn->Click += gcnew System::EventHandler(this, &MenuStudent::ViewBtn_Click);
			// 
			// ImagePanel
			// 
			this->ImagePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ImagePanel->Controls->Add(this->Icon);
			this->ImagePanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ImagePanel->Location = System::Drawing::Point(0, 0);
			this->ImagePanel->Margin = System::Windows::Forms::Padding(2);
			this->ImagePanel->Name = L"ImagePanel";
			this->ImagePanel->Size = System::Drawing::Size(208, 122);
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
			this->Icon->Location = System::Drawing::Point(49, 8);
			this->Icon->Margin = System::Windows::Forms::Padding(2);
			this->Icon->Name = L"Icon";
			this->Icon->Padding = System::Windows::Forms::Padding(3);
			this->Icon->Size = System::Drawing::Size(98, 107);
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
			this->MenuPanel->Location = System::Drawing::Point(208, 0);
			this->MenuPanel->Margin = System::Windows::Forms::Padding(2);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(780, 122);
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
			this->ExitBtn->Location = System::Drawing::Point(722, 22);
			this->ExitBtn->Margin = System::Windows::Forms::Padding(2);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(38, 38);
			this->ExitBtn->TabIndex = 14;
			this->ExitBtn->Text = L"x";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &MenuStudent::btn_exit_Click);
			// 
			// MenuLabel
			// 
			this->MenuLabel->AutoSize = true;
			this->MenuLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 25, System::Drawing::FontStyle::Bold));
			this->MenuLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->MenuLabel->Location = System::Drawing::Point(37, 30);
			this->MenuLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->MenuLabel->Name = L"MenuLabel";
			this->MenuLabel->Size = System::Drawing::Size(301, 57);
			this->MenuLabel->TabIndex = 13;
			this->MenuLabel->Text = L"DASHBOARD";
			this->MenuLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ViewPanel
			// 
			this->ViewPanel->AutoSize = true;
			this->ViewPanel->Controls->Add(this->BackBtn);
			this->ViewPanel->Controls->Add(this->ViewScoreOfACourseBtn);
			this->ViewPanel->Controls->Add(this->btn_ViewCourses);
			this->ViewPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewPanel->Location = System::Drawing::Point(208, 122);
			this->ViewPanel->Margin = System::Windows::Forms::Padding(2);
			this->ViewPanel->Name = L"ViewPanel";
			this->ViewPanel->Size = System::Drawing::Size(780, 84);
			this->ViewPanel->TabIndex = 52;
			this->ViewPanel->Visible = false;
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
			this->BackBtn->Location = System::Drawing::Point(687, 4);
			this->BackBtn->Margin = System::Windows::Forms::Padding(2);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(38, 38);
			this->BackBtn->TabIndex = 59;
			this->BackBtn->Text = L"<";
			this->BackBtn->UseVisualStyleBackColor = false;
			this->BackBtn->Visible = false;
			this->BackBtn->Click += gcnew System::EventHandler(this, &MenuStudent::BackBtn_Click);
			// 
			// ViewScoreOfACourseBtn
			// 
			this->ViewScoreOfACourseBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ViewScoreOfACourseBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ViewScoreOfACourseBtn->FlatAppearance->BorderSize = 0;
			this->ViewScoreOfACourseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewScoreOfACourseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ViewScoreOfACourseBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ViewScoreOfACourseBtn->Location = System::Drawing::Point(0, 42);
			this->ViewScoreOfACourseBtn->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->ViewScoreOfACourseBtn->Name = L"ViewScoreOfACourseBtn";
			this->ViewScoreOfACourseBtn->Size = System::Drawing::Size(780, 42);
			this->ViewScoreOfACourseBtn->TabIndex = 44;
			this->ViewScoreOfACourseBtn->Text = L"View the scoreboard";
			this->ViewScoreOfACourseBtn->UseVisualStyleBackColor = false;
			this->ViewScoreOfACourseBtn->Click += gcnew System::EventHandler(this, &MenuStudent::ViewScoreOfACourseBtn_Click);
			// 
			// btn_ViewCourses
			// 
			this->btn_ViewCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_ViewCourses->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_ViewCourses->FlatAppearance->BorderSize = 0;
			this->btn_ViewCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ViewCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_ViewCourses->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_ViewCourses->Location = System::Drawing::Point(0, 0);
			this->btn_ViewCourses->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(780, 42);
			this->btn_ViewCourses->TabIndex = 40;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = false;
			this->btn_ViewCourses->Click += gcnew System::EventHandler(this, &MenuStudent::btn_ViewCourses_Click);
			// 
			// AccountPanel
			// 
			this->AccountPanel->AutoSize = true;
			this->AccountPanel->Controls->Add(this->ProfileBtn);
			this->AccountPanel->Controls->Add(this->btn_exit);
			this->AccountPanel->Controls->Add(this->btn_logout);
			this->AccountPanel->Controls->Add(this->ChangePassBtn);
			this->AccountPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->AccountPanel->Location = System::Drawing::Point(208, 206);
			this->AccountPanel->Margin = System::Windows::Forms::Padding(2);
			this->AccountPanel->Name = L"AccountPanel";
			this->AccountPanel->Size = System::Drawing::Size(780, 168);
			this->AccountPanel->TabIndex = 57;
			this->AccountPanel->Visible = false;
			// 
			// ProfileBtn
			// 
			this->ProfileBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ProfileBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ProfileBtn->FlatAppearance->BorderSize = 0;
			this->ProfileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ProfileBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ProfileBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ProfileBtn->Location = System::Drawing::Point(0, 126);
			this->ProfileBtn->Margin = System::Windows::Forms::Padding(2);
			this->ProfileBtn->Name = L"ProfileBtn";
			this->ProfileBtn->Size = System::Drawing::Size(780, 42);
			this->ProfileBtn->TabIndex = 19;
			this->ProfileBtn->Text = L"Profile";
			this->ProfileBtn->UseVisualStyleBackColor = false;
			this->ProfileBtn->Click += gcnew System::EventHandler(this, &MenuStudent::ProfileBtn_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_exit->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_exit->FlatAppearance->BorderSize = 0;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_exit->Location = System::Drawing::Point(0, 84);
			this->btn_exit->Margin = System::Windows::Forms::Padding(2);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(780, 42);
			this->btn_exit->TabIndex = 18;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStudent::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_logout->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_logout->FlatAppearance->BorderSize = 0;
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_logout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_logout->Location = System::Drawing::Point(0, 42);
			this->btn_logout->Margin = System::Windows::Forms::Padding(2);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(780, 42);
			this->btn_logout->TabIndex = 17;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStudent::btn_logout_Click);
			// 
			// ChangePassBtn
			// 
			this->ChangePassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ChangePassBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->ChangePassBtn->FlatAppearance->BorderSize = 0;
			this->ChangePassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChangePassBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->ChangePassBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ChangePassBtn->Location = System::Drawing::Point(0, 0);
			this->ChangePassBtn->Margin = System::Windows::Forms::Padding(2);
			this->ChangePassBtn->Name = L"ChangePassBtn";
			this->ChangePassBtn->Size = System::Drawing::Size(780, 42);
			this->ChangePassBtn->TabIndex = 16;
			this->ChangePassBtn->Text = L"Change password";
			this->ChangePassBtn->UseVisualStyleBackColor = false;
			this->ChangePassBtn->Click += gcnew System::EventHandler(this, &MenuStudent::ChangePassBtn_Click);
			// 
			// MenuStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(988, 587);
			this->ControlBox = false;
			this->Controls->Add(this->AccountPanel);
			this->Controls->Add(this->ViewPanel);
			this->Controls->Add(this->MenuPanel);
			this->Controls->Add(this->OptionPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"MenuStudent";
			this->Text = L"MenuStudent";
			this->Load += gcnew System::EventHandler(this, &MenuStudent::MenuStudent_Load);
			this->OptionPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ImagePanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->MenuPanel->ResumeLayout(false);
			this->MenuPanel->PerformLayout();
			this->ViewPanel->ResumeLayout(false);
			this->AccountPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuStudent_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string namedisplay = g_currentStudent->firstname + " " + g_currentStudent->lastname;
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
		g_currentStudent = nullptr;
		this->Hide();
		this->sourceForm->Show();
	}

	private: System::Void btn_ViewCourses_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ViewListCoursesOfStu^ form = gcnew CMS::ViewListCoursesOfStu(this, this->sourceForm);
		form->Show();
	}
	private: System::Void ViewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackBtn->PerformClick();
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
		this->AccountPanel->Visible = false;
		this->ViewPanel->Visible = !this->ViewPanel->Visible;
	}
	private: System::Void AccountBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ViewBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
			static_cast<System::Int32>(static_cast<System::Byte>(41)));
		this->ViewBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
		this->ViewPanel->Visible = false;
		this->AccountPanel->Visible = !this->AccountPanel->Visible;
	}
	private: System::Void ChangePassBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePass^ form = gcnew ChangePass();
		this->Hide();
		form->Show();
	}
	private: System::Void ViewScoreOfACourseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewScoreOf1Stu^ form = gcnew ViewScoreOf1Stu(this, this->sourceForm);
		this->Hide();
		form->Show();
	}
	private: System::Void ProfileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ form = gcnew CMS::Profile();
		form->TopMost = false;
		form->TopLevel = false;
		this->AccountPanel->Controls->Add(form);
		//this->CreatePanel->Controls->Add(this->BackBtn);
		this->AccountPanel->Controls->Add(this->BackBtn);
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
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->childForm->Close();
		this->curPanel->Controls->Remove(childForm);
		for each (Control ^ control in this->curPanel->Controls)
			control->Show();
		this->BackBtn->Visible = false;
	}
};
}