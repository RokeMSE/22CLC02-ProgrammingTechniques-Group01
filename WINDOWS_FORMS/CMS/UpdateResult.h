#pragma once
#include "header.h"
#include <msclr/marshal_cppstd.h>
#include <string>

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateResult
	/// </summary>
	public ref class UpdateResult : public System::Windows::Forms::Form
	{
	public:
		UpdateResult(void)
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
		~UpdateResult()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_courseID;
	private: System::Windows::Forms::TextBox^ txt_coursename;

	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Search;

	private: System::Windows::Forms::TextBox^ txt_schoolyear;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_sem;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_credit;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txt_maxStu;
	private: System::Windows::Forms::Label^ label8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_courseID = (gcnew System::Windows::Forms::TextBox());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_sem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_credit = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_maxStu = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(719, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course ID";
			// 
			// txt_courseID
			// 
			this->txt_courseID->Location = System::Drawing::Point(814, 87);
			this->txt_courseID->Name = L"txt_courseID";
			this->txt_courseID->Size = System::Drawing::Size(261, 26);
			this->txt_courseID->TabIndex = 1;
			this->txt_courseID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UpdateResult::txt_studentID_KeyPress);
			// 
			// txt_coursename
			// 
			this->txt_coursename->Location = System::Drawing::Point(161, 208);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(261, 26);
			this->txt_coursename->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Course name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(213, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(286, 30);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Update Score of Student";
			// 
			// btn_Search
			// 
			this->btn_Search->Location = System::Drawing::Point(896, 119);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(90, 34);
			this->btn_Search->TabIndex = 5;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &UpdateResult::btn_Search_Click);
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->Location = System::Drawing::Point(161, 84);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(261, 26);
			this->txt_schoolyear->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(47, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"School Year";
			// 
			// txt_sem
			// 
			this->txt_sem->Location = System::Drawing::Point(609, 87);
			this->txt_sem->Name = L"txt_sem";
			this->txt_sem->ReadOnly = true;
			this->txt_sem->Size = System::Drawing::Size(56, 26);
			this->txt_sem->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(501, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Semester";
			// 
			// txt_teacher
			// 
			this->txt_teacher->Location = System::Drawing::Point(536, 208);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(233, 26);
			this->txt_teacher->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(463, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Teacher";
			// 
			// txt_credit
			// 
			this->txt_credit->Location = System::Drawing::Point(916, 211);
			this->txt_credit->Name = L"txt_credit";
			this->txt_credit->ReadOnly = true;
			this->txt_credit->Size = System::Drawing::Size(41, 26);
			this->txt_credit->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(840, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Credit(s)";
			// 
			// txt_maxStu
			// 
			this->txt_maxStu->Location = System::Drawing::Point(1113, 211);
			this->txt_maxStu->Name = L"txt_maxStu";
			this->txt_maxStu->ReadOnly = true;
			this->txt_maxStu->Size = System::Drawing::Size(48, 26);
			this->txt_maxStu->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1000, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Max Students";
			// 
			// UpdateResult
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1215, 611);
			this->ControlBox = false;
			this->Controls->Add(this->txt_maxStu);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txt_credit);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_sem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_courseID);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UpdateResult";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Load += gcnew System::EventHandler(this, &UpdateResult::UpdateResult_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateResult_Load(System::Object^ sender, System::EventArgs^ e) {
		std::string str = std::to_string(g_currentSchoolYear->begin) + " - " + std::to_string(g_currentSchoolYear->end);
		txt_schoolyear->Text = gcnew System::String(str.c_str());
		str = std::to_string(g_currentSemester->No);
		txt_sem->Text = gcnew System::String(str.c_str());
	}

	private: System::Void txt_studentID_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
			e->Handled = true;
		}
	}

	private: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string id = msclr::interop::marshal_as<std::string>(txt_courseID->Text);
		GROUP1::DLL<GROUP1::COURSE*>* course = g_currentSemester->course.head;
		while (course) {
			if (id == course->data->ID) {
				txt_coursename->Text = gcnew System::String((course->data->name).c_str());
				txt_teacher->Text = gcnew System::String((course->data->teacher).c_str());
				txt_credit->Text = gcnew System::String((std::to_string(course->data->credit)).c_str());
				txt_maxStu->Text = gcnew System::String((std::to_string(course->data->maxStudents)).c_str());
			}
			course = course->next;
		}

		// id now is used for storing message (not an ID anymore)
		id = "There is no course with ID " + id + " in this semester.";
		System::String^ message = gcnew System::String(id.c_str());
		if (!course) MessageBox::Show(message);
	}
};
}
