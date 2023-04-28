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
	/// Summary for Delete1Course
	/// </summary>
	public ref class Delete1Course : public System::Windows::Forms::Form
	{
	public:
		Delete1Course(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Delete1Course()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Delete1CourseLab;
	private: System::Windows::Forms::Label^ SchoolYearLab;
	private: System::Windows::Forms::TextBox^ SchoolYearTextBox;
	private: System::Windows::Forms::Label^ SemesterLab;

	private: System::Windows::Forms::TextBox^ SemesterTextBox;
	private: System::Windows::Forms::TextBox^ CourseIDTextBox;

	private: System::Windows::Forms::Label^ CourseIDLab;

	private: System::Windows::Forms::Button^ EnterBtn;

	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Panel^ StartPanel;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Delete1Course::typeid));
			this->Delete1CourseLab = (gcnew System::Windows::Forms::Label());
			this->SchoolYearLab = (gcnew System::Windows::Forms::Label());
			this->SchoolYearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SemesterLab = (gcnew System::Windows::Forms::Label());
			this->SemesterTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseIDLab = (gcnew System::Windows::Forms::Label());
			this->EnterBtn = (gcnew System::Windows::Forms::Button());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->StartPanel = (gcnew System::Windows::Forms::Panel());
			this->StartPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Delete1CourseLab
			// 
			this->Delete1CourseLab->AutoSize = true;
			this->Delete1CourseLab->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Delete1CourseLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15, System::Drawing::FontStyle::Bold));
			this->Delete1CourseLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Delete1CourseLab->Location = System::Drawing::Point(188, 9);
			this->Delete1CourseLab->Name = L"Delete1CourseLab";
			this->Delete1CourseLab->Size = System::Drawing::Size(552, 36);
			this->Delete1CourseLab->TabIndex = 0;
			this->Delete1CourseLab->Text = L"Delete a course in current semester";
			this->Delete1CourseLab->Visible = false;
			// 
			// SchoolYearLab
			// 
			this->SchoolYearLab->AutoSize = true;
			this->SchoolYearLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SchoolYearLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->SchoolYearLab->Location = System::Drawing::Point(279, 100);
			this->SchoolYearLab->Name = L"SchoolYearLab";
			this->SchoolYearLab->Size = System::Drawing::Size(147, 32);
			this->SchoolYearLab->TabIndex = 1;
			this->SchoolYearLab->Text = L"School year";
			// 
			// SchoolYearTextBox
			// 
			this->SchoolYearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SchoolYearTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->SchoolYearTextBox->Location = System::Drawing::Point(457, 97);
			this->SchoolYearTextBox->Name = L"SchoolYearTextBox";
			this->SchoolYearTextBox->ReadOnly = true;
			this->SchoolYearTextBox->Size = System::Drawing::Size(179, 39);
			this->SchoolYearTextBox->TabIndex = 2;
			this->SchoolYearTextBox->Click += gcnew System::EventHandler(this, &Delete1Course::SchoolYearTextBox_Click);
			// 
			// SemesterLab
			// 
			this->SemesterLab->AutoSize = true;
			this->SemesterLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SemesterLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->SemesterLab->Location = System::Drawing::Point(279, 150);
			this->SemesterLab->Name = L"SemesterLab";
			this->SemesterLab->Size = System::Drawing::Size(119, 32);
			this->SemesterLab->TabIndex = 3;
			this->SemesterLab->Text = L"Semester";
			// 
			// SemesterTextBox
			// 
			this->SemesterTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SemesterTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->SemesterTextBox->Location = System::Drawing::Point(457, 148);
			this->SemesterTextBox->Name = L"SemesterTextBox";
			this->SemesterTextBox->ReadOnly = true;
			this->SemesterTextBox->Size = System::Drawing::Size(179, 39);
			this->SemesterTextBox->TabIndex = 4;
			// 
			// CourseIDTextBox
			// 
			this->CourseIDTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CourseIDTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->CourseIDTextBox->Location = System::Drawing::Point(457, 199);
			this->CourseIDTextBox->Name = L"CourseIDTextBox";
			this->CourseIDTextBox->Size = System::Drawing::Size(179, 39);
			this->CourseIDTextBox->TabIndex = 6;
			// 
			// CourseIDLab
			// 
			this->CourseIDLab->AutoSize = true;
			this->CourseIDLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CourseIDLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->CourseIDLab->Location = System::Drawing::Point(279, 202);
			this->CourseIDLab->Name = L"CourseIDLab";
			this->CourseIDLab->Size = System::Drawing::Size(127, 32);
			this->CourseIDLab->TabIndex = 5;
			this->CourseIDLab->Text = L"Course ID";
			// 
			// EnterBtn
			// 
			this->EnterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->EnterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EnterBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnterBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->EnterBtn->Location = System::Drawing::Point(585, 271);
			this->EnterBtn->Name = L"EnterBtn";
			this->EnterBtn->Size = System::Drawing::Size(90, 48);
			this->EnterBtn->TabIndex = 7;
			this->EnterBtn->Text = L"Enter";
			this->EnterBtn->UseVisualStyleBackColor = false;
			this->EnterBtn->Click += gcnew System::EventHandler(this, &Delete1Course::EnterBtn_Click);
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitBtn->Location = System::Drawing::Point(690, 271);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(81, 48);
			this->ExitBtn->TabIndex = 8;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &Delete1Course::ExitBtn_Click);
			// 
			// StartPanel
			// 
			this->StartPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->StartPanel->Controls->Add(this->Delete1CourseLab);
			this->StartPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StartPanel->Location = System::Drawing::Point(0, 0);
			this->StartPanel->Name = L"StartPanel";
			this->StartPanel->Size = System::Drawing::Size(920, 64);
			this->StartPanel->TabIndex = 9;
			this->StartPanel->Visible = false;
			// 
			// Delete1Course
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(920, 405);
			this->ControlBox = false;
			this->Controls->Add(this->StartPanel);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->EnterBtn);
			this->Controls->Add(this->CourseIDTextBox);
			this->Controls->Add(this->CourseIDLab);
			this->Controls->Add(this->SemesterTextBox);
			this->Controls->Add(this->SemesterLab);
			this->Controls->Add(this->SchoolYearTextBox);
			this->Controls->Add(this->SchoolYearLab);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Delete1Course";
			this->Text = L"Delete1Course";
			this->Load += gcnew System::EventHandler(this, &Delete1Course::Delete1Course_Load);
			this->StartPanel->ResumeLayout(false);
			this->StartPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Delete1Course_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SchoolYearTextBox->Text = msclr::interop::marshal_as<System::String^>(std::to_string(g_currentSchoolYear->begin) + '-' + std::to_string(g_currentSchoolYear->end));
		this->SemesterTextBox->Text = msclr::interop::marshal_as<System::String^>(std::to_string(g_currentSemester->No));
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteFiles();
		if (latestCheckRememberLogin) {
			latestUsername = g_currentStaff->user.username;
			latestPassword = g_currentStaff->user.password;
		}
		else {
			latestUsername = latestPassword = "";
		}
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	private: System::Void EnterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CourseIDTextBox->Text == "")
		{
			MessageBox::Show("Invalid!");
			CourseIDTextBox->Clear();
			return;
		}
		GROUP1::DLL<GROUP1::COURSE*>* courseInSem = g_currentSemester->course.head;
		if (!courseInSem)
		{
			MessageBox::Show("There's no course in current semester!");
			return;
		}
		while (courseInSem)
		{
			if (courseInSem->data->ID == msclr::interop::marshal_as<std::string>(this->CourseIDTextBox->Text))
			{
				if (courseInSem != g_currentSemester->course.head && courseInSem != g_currentSemester->course.tail)
				{
					courseInSem->prev->next = courseInSem->next;
					courseInSem->next->prev = courseInSem->prev;
				}
				if (courseInSem == g_currentSemester->course.head)
				{
					g_currentSemester->course.head = courseInSem -> next;
					if (courseInSem->next)
						courseInSem->next->prev = nullptr;
				}
				if (courseInSem == g_currentSemester->course.tail)
				{
					g_currentSemester->course.tail = courseInSem->prev;
					if (courseInSem->prev)
						courseInSem->prev->next = nullptr;
				}
				GROUP1::DLL<GROUP1::SCOREBOARD*>* scoreboardInCourse = courseInSem->data->students.head;
				while (scoreboardInCourse && scoreboardInCourse->next)
				{
					GROUP1::DLL<GROUP1::COURSE*>* courseOfStudent = scoreboardInCourse->data->student->courses.head;
					while (courseOfStudent)
					{
						if (courseOfStudent == courseInSem)
						{
							if (courseOfStudent == scoreboardInCourse->data->student->courses.head)
							{
								scoreboardInCourse->data->student->courses.head = courseOfStudent->next;
								if (courseOfStudent->next)
									courseOfStudent->next->prev = nullptr;
							}
							if (courseOfStudent == scoreboardInCourse->data->student->courses.tail)
							{
								scoreboardInCourse->data->student->courses.tail = courseOfStudent->prev;
								if (courseOfStudent->prev)
									courseOfStudent->prev->next = nullptr;
							}
							else
							{
								courseOfStudent->prev->next = courseOfStudent->next;
								courseOfStudent->next->prev = courseOfStudent->prev;
							}
							break;
						}
						courseOfStudent = courseOfStudent->next;
					}
					scoreboardInCourse = scoreboardInCourse->next;
					delete scoreboardInCourse->prev->data;
					delete scoreboardInCourse->prev;
				}
				if (scoreboardInCourse) {
					delete scoreboardInCourse->data;
					delete scoreboardInCourse;
				}
				std::string filename = "CSV/SemInSchoolYear/CourseInSemester/StudentsInCourse/" + std::to_string(g_currentSchoolYear->begin) + "_sem" + std::to_string(g_currentSemester->No) + "_course" + courseInSem->data->ID + ".CSV";
				bool k = remove(filename.c_str());
				delete courseInSem->data;
				delete courseInSem;
				MessageBox::Show("Successfully deleted!");
				return;
			}
			courseInSem = courseInSem->next;
		}
		if (!courseInSem)
		{
			MessageBox::Show("The course does not existed in current semester!");
		}
	}
	private: System::Void SchoolYearTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("You can only do this change with current school year.");
	}
	private: System::Void SemesterTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("You can only do this change with current semester.");
	}
	};
}