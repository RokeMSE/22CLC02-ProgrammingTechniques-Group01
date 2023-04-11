#pragma once

#include "header.h"
#include "UpdateResult.h"

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
			this->SuspendLayout();
			// 
			// btn_CreateSchoolYear
			// 
			this->btn_CreateSchoolYear->Location = System::Drawing::Point(51, 115);
			this->btn_CreateSchoolYear->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_CreateSchoolYear->Name = L"btn_CreateSchoolYear";
			this->btn_CreateSchoolYear->Size = System::Drawing::Size(423, 35);
			this->btn_CreateSchoolYear->TabIndex = 0;
			this->btn_CreateSchoolYear->Text = L"Create a school year";
			this->btn_CreateSchoolYear->UseVisualStyleBackColor = true;
			// 
			// btn_Create1NewClass
			// 
			this->btn_Create1NewClass->Location = System::Drawing::Point(51, 201);
			this->btn_Create1NewClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Create1NewClass->Name = L"btn_Create1NewClass";
			this->btn_Create1NewClass->Size = System::Drawing::Size(423, 35);
			this->btn_Create1NewClass->TabIndex = 1;
			this->btn_Create1NewClass->Text = L"Create classes for 1st-year students";
			this->btn_Create1NewClass->UseVisualStyleBackColor = true;
			// 
			// btn_AddStuToClass
			// 
			this->btn_AddStuToClass->Location = System::Drawing::Point(51, 374);
			this->btn_AddStuToClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AddStuToClass->Name = L"btn_AddStuToClass";
			this->btn_AddStuToClass->Size = System::Drawing::Size(423, 35);
			this->btn_AddStuToClass->TabIndex = 2;
			this->btn_AddStuToClass->Text = L"Add new 1st year students to 1st-year classes one by one";
			this->btn_AddStuToClass->UseVisualStyleBackColor = true;
			// 
			// btn_AddStuCSV
			// 
			this->btn_AddStuCSV->Location = System::Drawing::Point(51, 244);
			this->btn_AddStuCSV->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_AddStuCSV->Name = L"btn_AddStuCSV";
			this->btn_AddStuCSV->Size = System::Drawing::Size(423, 35);
			this->btn_AddStuCSV->TabIndex = 3;
			this->btn_AddStuCSV->Text = L"Add new 1st year students to a 1st-year class by CSV file";
			this->btn_AddStuCSV->UseVisualStyleBackColor = true;
			// 
			// btn_Create1Sem
			// 
			this->btn_Create1Sem->Location = System::Drawing::Point(51, 287);
			this->btn_Create1Sem->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Create1Sem->Name = L"btn_Create1Sem";
			this->btn_Create1Sem->Size = System::Drawing::Size(423, 35);
			this->btn_Create1Sem->TabIndex = 4;
			this->btn_Create1Sem->Text = L"Create a semester";
			this->btn_Create1Sem->UseVisualStyleBackColor = true;
			// 
			// btn_Add1CourseToCurSem
			// 
			this->btn_Add1CourseToCurSem->Location = System::Drawing::Point(51, 330);
			this->btn_Add1CourseToCurSem->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Add1CourseToCurSem->Name = L"btn_Add1CourseToCurSem";
			this->btn_Add1CourseToCurSem->Size = System::Drawing::Size(423, 35);
			this->btn_Add1CourseToCurSem->TabIndex = 5;
			this->btn_Add1CourseToCurSem->Text = L"Add a course to current semester";
			this->btn_Add1CourseToCurSem->UseVisualStyleBackColor = true;
			// 
			// btn_StuInCourseCSV
			// 
			this->btn_StuInCourseCSV->Location = System::Drawing::Point(534, 332);
			this->btn_StuInCourseCSV->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_StuInCourseCSV->Name = L"btn_StuInCourseCSV";
			this->btn_StuInCourseCSV->Size = System::Drawing::Size(423, 33);
			this->btn_StuInCourseCSV->TabIndex = 6;
			this->btn_StuInCourseCSV->Text = L"Upload a CSV file of students enrolled in a course of current semester";
			this->btn_StuInCourseCSV->UseVisualStyleBackColor = true;
			// 
			// btn_ViewCourses
			// 
			this->btn_ViewCourses->Location = System::Drawing::Point(534, 160);
			this->btn_ViewCourses->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ViewCourses->Name = L"btn_ViewCourses";
			this->btn_ViewCourses->Size = System::Drawing::Size(423, 33);
			this->btn_ViewCourses->TabIndex = 7;
			this->btn_ViewCourses->Text = L"View courses of current semester";
			this->btn_ViewCourses->UseVisualStyleBackColor = true;
			// 
			// btn_UpdateCourse
			// 
			this->btn_UpdateCourse->Location = System::Drawing::Point(534, 246);
			this->btn_UpdateCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_UpdateCourse->Name = L"btn_UpdateCourse";
			this->btn_UpdateCourse->Size = System::Drawing::Size(423, 33);
			this->btn_UpdateCourse->TabIndex = 8;
			this->btn_UpdateCourse->Text = L"Update information of a course in current semester";
			this->btn_UpdateCourse->UseVisualStyleBackColor = true;
			// 
			// btn_Add1StuToCourse
			// 
			this->btn_Add1StuToCourse->Location = System::Drawing::Point(534, 115);
			this->btn_Add1StuToCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Add1StuToCourse->Name = L"btn_Add1StuToCourse";
			this->btn_Add1StuToCourse->Size = System::Drawing::Size(423, 33);
			this->btn_Add1StuToCourse->TabIndex = 9;
			this->btn_Add1StuToCourse->Text = L"Add a student to a course in current semester";
			this->btn_Add1StuToCourse->UseVisualStyleBackColor = true;
			// 
			// btn_Remove1StuInCourse
			// 
			this->btn_Remove1StuInCourse->Location = System::Drawing::Point(534, 289);
			this->btn_Remove1StuInCourse->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Remove1StuInCourse->Name = L"btn_Remove1StuInCourse";
			this->btn_Remove1StuInCourse->Size = System::Drawing::Size(423, 33);
			this->btn_Remove1StuInCourse->TabIndex = 10;
			this->btn_Remove1StuInCourse->Text = L"Remove a student from a course in current semester";
			this->btn_Remove1StuInCourse->UseVisualStyleBackColor = true;
			// 
			// btn_Delete1Course
			// 
			this->btn_Delete1Course->Location = System::Drawing::Point(534, 203);
			this->btn_Delete1Course->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_Delete1Course->Name = L"btn_Delete1Course";
			this->btn_Delete1Course->Size = System::Drawing::Size(423, 33);
			this->btn_Delete1Course->TabIndex = 11;
			this->btn_Delete1Course->Text = L"Delete a course of current semester";
			this->btn_Delete1Course->UseVisualStyleBackColor = true;
			// 
			// btn_ViewClasses
			// 
			this->btn_ViewClasses->Location = System::Drawing::Point(51, 158);
			this->btn_ViewClasses->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_ViewClasses->Name = L"btn_ViewClasses";
			this->btn_ViewClasses->Size = System::Drawing::Size(423, 35);
			this->btn_ViewClasses->TabIndex = 12;
			this->btn_ViewClasses->Text = L"View classes";
			this->btn_ViewClasses->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(55, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 46);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Menu";
			// 
			// btn_logout
			// 
			this->btn_logout->Location = System::Drawing::Point(789, 531);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(81, 38);
			this->btn_logout->TabIndex = 14;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = true;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStaff::btn_logout_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->Location = System::Drawing::Point(876, 531);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(81, 38);
			this->btn_exit->TabIndex = 15;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStaff::btn_exit_Click);
			// 
			// btn_UpdateResult
			// 
			this->btn_UpdateResult->Location = System::Drawing::Point(51, 417);
			this->btn_UpdateResult->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_UpdateResult->Name = L"btn_UpdateResult";
			this->btn_UpdateResult->Size = System::Drawing::Size(423, 35);
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
			this->txt_nameOfUser->Location = System::Drawing::Point(63, 10);
			this->txt_nameOfUser->Name = L"txt_nameOfUser";
			this->txt_nameOfUser->ReadOnly = true;
			this->txt_nameOfUser->Size = System::Drawing::Size(379, 28);
			this->txt_nameOfUser->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Staff";
			// 
			// MenuStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 581);
			this->ControlBox = false;
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
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
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
};
}