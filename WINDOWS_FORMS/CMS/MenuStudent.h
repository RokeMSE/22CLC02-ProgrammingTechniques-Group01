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
		//GROUP1::STUDENT* currentStudent;
		MenuStudent(System::Windows::Forms::Form^ form)//, GROUP1::STUDENT* stu)
		{
			InitializeComponent();
			this->sourceForm = form;
			//this -> currentStudent = stu;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_stuViewCourses;
	protected:

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_logout;

	private: System::Windows::Forms::Button^ btn_exit;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_stuViewCourses = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(437, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Menu";
			// 
			// btn_stuViewCourses
			// 
			this->btn_stuViewCourses->Location = System::Drawing::Point(28, 154);
			this->btn_stuViewCourses->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_stuViewCourses->Name = L"btn_stuViewCourses";
			this->btn_stuViewCourses->Size = System::Drawing::Size(423, 72);
			this->btn_stuViewCourses->TabIndex = 1;
			this->btn_stuViewCourses->Text = L"View my courses in current semester";
			this->btn_stuViewCourses->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(549, 154);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(423, 72);
			this->button2->TabIndex = 2;
			this->button2->Text = L"View my scoreboard of current semester";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btn_logout
			// 
			this->btn_logout->Location = System::Drawing::Point(549, 401);
			this->btn_logout->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(423, 72);
			this->btn_logout->TabIndex = 3;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = true;
			this->btn_logout->Click += gcnew System::EventHandler(this, &MenuStudent::btn_logout_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->Location = System::Drawing::Point(28, 401);
			this->btn_exit->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(423, 72);
			this->btn_exit->TabIndex = 4;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MenuStudent::btn_exit_Click);
			// 
			// MenuStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 738);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_stuViewCourses);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_logout);
			this->Controls->Add(this->btn_exit);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MenuStudent";
			this->ShowInTaskbar = false;
			this->Text = L"MenuStudent";
			this->Load += gcnew System::EventHandler(this, &MenuStudent::MenuStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuStudent_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		//Log out
		g_currentStudent = nullptr;
		MessageBox::Show("Succcessfully logged out!");
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
};
}