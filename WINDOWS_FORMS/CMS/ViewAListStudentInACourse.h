#pragma once
#pragma once
#include<string>
#include "header.h"
#include <msclr/marshal_cppstd.h>



namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewListStudentInACourses
	/// </summary>
	public ref class ViewListStudentInACourses : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewListStudentInACourses(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->sourceForm = form;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_Search_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewListStudentInACourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ txt_sem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_courseName;
	private: System::Windows::Forms::Label^ label1;



	protected:

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->txt_sem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_courseName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(0, 167);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1215, 548);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewListStudentInACourses::listBox1_SelectedIndexChanged);
			// 
			// txt_sem
			// 
			this->txt_sem->Location = System::Drawing::Point(612, 57);
			this->txt_sem->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_sem->Name = L"txt_sem";
			//this->txt_sem->ReadOnly = true;
			this->txt_sem->Size = System::Drawing::Size(50, 22);
			this->txt_sem->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(516, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Semester";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->Location = System::Drawing::Point(214, 54);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			//this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(232, 22);
			this->txt_schoolyear->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(113, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 16);
			this->label4->TabIndex = 13;
			this->label4->Text = L"School Year";
			// 
			// btn_Search
			// 
			this->btn_Search->Location = System::Drawing::Point(867, 82);
			this->btn_Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(80, 27);
			this->btn_Search->TabIndex = 12;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_Search_Click);
			// 
			// txt_courseName
			// 
			this->txt_courseName->Location = System::Drawing::Point(795, 57);
			this->txt_courseName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_courseName->Name = L"txt_courseName";
			this->txt_courseName->Size = System::Drawing::Size(232, 22);
			this->txt_courseName->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(710, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Course ID";
			// 
			// ViewListStudentInACourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1215, 715);
			this->Controls->Add(this->txt_sem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_courseName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"ViewListStudentInACourses";
			this->Text = L"ViewListStudentInACourses";
			this->Load += gcnew System::EventHandler(this, &ViewListStudentInACourses::ViewListStudentInACourses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		
		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curShoolyear = L_SchoolYear.head;
		System::String^ schoolyear = this->txt_schoolyear->Text;
		System::String^ sem = this->txt_sem->Text;
		System::String^ coursename = this->txt_courseName->Text;
		
		while (curShoolyear) {
			std::string str = std::to_string(curShoolyear->data->begin) + "-" + std::to_string(curShoolyear->data->end);
			if (str == msclr::interop::marshal_as<std::string >(schoolyear)) {
				if (std::to_string(curShoolyear->data->sem1->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem1->course.head;
					while (course) {
						if (course->data->name == msclr::interop::marshal_as<std::string >(coursename)) {
							GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
							while (tmp ) {
								
								listBox1->Items->Add(gcnew System::String((course->data->name).c_str()) + "," + tmp->data->student->No + "," + gcnew System::String((tmp->data->student->studentID).c_str()) + "," + gcnew System::String((tmp->data->student->lastname).c_str()) + "," + gcnew System::String((tmp->data->student->firstname).c_str()) + "," + (tmp->data->student->gender + ","
									+ gcnew System::String(DateToString(tmp->data->student->DoB).c_str()) + "," + gcnew System::String((tmp->data->student->socialID).c_str()) + "," + gcnew System::String((tmp->data->student->Class->convertToString()).c_str())));
								
								tmp = tmp->next;
							
							}
							course = course->next;
						}
						else {
							course = course->next;
						}
					}
				}
				else if (std::to_string(curShoolyear->data->sem2->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem2->course.head;
					while (course) {
						if (course->data->name == msclr::interop::marshal_as<std::string >(coursename)) {
							GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
							while (tmp) {
								

								listBox1->Items->Add(gcnew System::String((course->data->name).c_str()) + "," + tmp->data->student->No + "," + gcnew System::String((tmp->data->student->studentID).c_str()) + "," + gcnew System::String((tmp->data->student->lastname).c_str()) + "," + gcnew System::String((tmp->data->student->firstname).c_str()) + "," + (tmp->data->student->gender + ","
									+ gcnew System::String(DateToString(tmp->data->student->DoB).c_str()) + "," + gcnew System::String((tmp->data->student->socialID).c_str()) + "," + gcnew System::String((tmp->data->student->Class->convertToString()).c_str())));
						
								tmp = tmp->next;
								//}
							}
							course = course->next;
						}
						else {
							course = course->next;
						}
					}
				}
				else if (std::to_string(curShoolyear->data->sem3->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem3->course.head;
					while (course) {
							if (course->data->name == msclr::interop::marshal_as<std::string >(coursename)) {
								GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
								while (tmp) {
									

									listBox1->Items->Add(gcnew System::String((course->data->name).c_str()) + "," + tmp->data->student->No + "," + gcnew System::String((tmp->data->student->studentID).c_str()) + "," + gcnew System::String((tmp->data->student->lastname).c_str()) + "," + gcnew System::String((tmp->data->student->firstname).c_str()) + "," + (tmp->data->student->gender + ","
										+ gcnew System::String(DateToString(tmp->data->student->DoB).c_str()) + "," + gcnew System::String((tmp->data->student->socialID).c_str()) + "," + gcnew System::String((tmp->data->student->Class->convertToString()).c_str())));
									
									tmp = tmp->next;
								
								}
								course = course->next;
							
						}
						else {
							course = course->next;
						}
					}
				}
				curShoolyear = curShoolyear->next;
						
			}
			else {
				curShoolyear = curShoolyear->next;
			}
		}
	}
	private: System::Void ViewListStudentInACourses_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
