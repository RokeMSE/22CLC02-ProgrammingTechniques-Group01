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
	
	private: System::Windows::Forms::TextBox^ txt_sem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Search;
	private: System::Windows::Forms::TextBox^ txt_courseName;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;











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
			this->txt_sem = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Search = (gcnew System::Windows::Forms::Button());
			this->txt_courseName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// txt_sem
			// 
			this->txt_sem->Location = System::Drawing::Point(724, 163);
			this->txt_sem->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->txt_sem->Name = L"txt_sem";
			this->txt_sem->Size = System::Drawing::Size(62, 27);
			this->txt_sem->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(604, 165);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 19);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Semester";
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->Location = System::Drawing::Point(226, 159);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->Size = System::Drawing::Size(289, 27);
			this->txt_schoolyear->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(100, 163);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 19);
			this->label4->TabIndex = 13;
			this->label4->Text = L"School Year";
			// 
			// btn_Search
			// 
			this->btn_Search->Location = System::Drawing::Point(1042, 192);
			this->btn_Search->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->btn_Search->Name = L"btn_Search";
			this->btn_Search->Size = System::Drawing::Size(100, 32);
			this->btn_Search->TabIndex = 12;
			this->btn_Search->Text = L"Search";
			this->btn_Search->UseVisualStyleBackColor = true;
			this->btn_Search->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_Search_Click);
			// 
			// txt_courseName
			// 
			this->txt_courseName->Location = System::Drawing::Point(952, 163);
			this->txt_courseName->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->txt_courseName->Name = L"txt_courseName";
			this->txt_courseName->Size = System::Drawing::Size(289, 27);
			this->txt_courseName->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(846, 165);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 19);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Name of Course";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(1276, 51);
			this->btn_back->Margin = System::Windows::Forms::Padding(4);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(94, 27);
			this->btn_back->TabIndex = 18;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewListStudentInACourses::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Location = System::Drawing::Point(654, 59);
			this->lbl_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(187, 19);
			this->lbl_title->TabIndex = 19;
			this->lbl_title->Text = L"List Student in A Course";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 248);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1701, 601);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewListStudentInACourses::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No";
			this->columnHeader1->Width = 81;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Student ID";
			this->columnHeader2->Width = 151;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"FirstName";
			this->columnHeader3->Width = 320;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"LastName";
			this->columnHeader4->Width = 153;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Gender";
			this->columnHeader5->Width = 115;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Date of Birth";
			this->columnHeader6->Width = 235;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Social ID";
			this->columnHeader7->Width = 177;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Class";
			this->columnHeader8->Width = 517;
			// 
			// ViewListStudentInACourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1701, 849);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->txt_sem);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_Search);
			this->Controls->Add(this->txt_courseName);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewListStudentInACourses";
			this->Text = L"ViewListStudentInACourses";
			this->Load += gcnew System::EventHandler(this, &ViewListStudentInACourses::ViewListStudentInACourses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		//listBox1->Items->Clear();
		
		GROUP1::DLL<GROUP1::SCHOOLYEAR*>* curShoolyear = L_SchoolYear.head;
		System::String^ schoolyear = this->txt_schoolyear->Text;
		System::String^ sem = this->txt_sem->Text;
		System::String^ coursename = this->txt_courseName->Text;
		ListViewItem^ item;
		
		
		while (curShoolyear) {
			std::string str = std::to_string(curShoolyear->data->begin) + "-" + std::to_string(curShoolyear->data->end);
			if (str == msclr::interop::marshal_as<std::string >(schoolyear)) {
				if (std::to_string(curShoolyear->data->sem1->No) == msclr::interop::marshal_as<std::string >(sem)) {
					GROUP1::DLL<GROUP1::COURSE*>* course = curShoolyear->data->sem1->course.head;
					while (course) {
						if (course->data->name == msclr::interop::marshal_as<std::string >(coursename)) {
							GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp = course->data->students.head;
							while (tmp ) {
								item = gcnew ListViewItem();
								/*listBox1->Items->Add(gcnew System::String((course->data->name).c_str()) + "," + tmp->data->student->No + "," + gcnew System::String((tmp->data->student->studentID).c_str()) + "," + gcnew System::String((tmp->data->student->lastname).c_str()) + "," + gcnew System::String((tmp->data->student->firstname).c_str()) + "," + (tmp->data->student->gender + ","
									+ gcnew System::String(DateToString(tmp->data->student->DoB).c_str()) + "," + gcnew System::String((tmp->data->student->socialID).c_str()) + "," + gcnew System::String((tmp->data->student->Class->convertToString()).c_str())));*/
								item->Text = gcnew System::String(std::to_string(tmp->data->student->No).c_str());
								item->SubItems->Add(gcnew System::String((tmp->data->student->studentID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));							
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->student->gender).c_str()));
								item->SubItems->Add(gcnew System::String(DateToString(tmp->data->student->DoB).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->socialID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->Class->convertToString()).c_str()));
								listView1->Items->Add(item);
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
								
								item = gcnew ListViewItem();
								/*listBox1->Items->Add(gcnew System::String((course->data->name).c_str()) + "," + tmp->data->student->No + "," + gcnew System::String((tmp->data->student->studentID).c_str()) + "," + gcnew System::String((tmp->data->student->lastname).c_str()) + "," + gcnew System::String((tmp->data->student->firstname).c_str()) + "," + (tmp->data->student->gender + ","
									+ gcnew System::String(DateToString(tmp->data->student->DoB).c_str()) + "," + gcnew System::String((tmp->data->student->socialID).c_str()) + "," + gcnew System::String((tmp->data->student->Class->convertToString()).c_str())));*/
								item->Text = gcnew System::String(std::to_string(tmp->data->student->No).c_str());
								item->SubItems->Add(gcnew System::String((tmp->data->student->studentID).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));						
								item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->student->gender).c_str()));
								item->SubItems->Add(gcnew System::String(DateToString(tmp->data->student->DoB).c_str()));
								item->SubItems->Add(gcnew System::String((tmp->data->student->socialID).c_str()));		
								item->SubItems->Add(gcnew System::String((tmp->data->student->Class->convertToString()).c_str()));
								listView1->Items->Add(item);
								tmp = tmp->next;
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
									
									item = gcnew ListViewItem();
									/*listBox1->Items->Add(gcnew System::String((course->data->name).c_str()) + "," + tmp->data->student->No + "," + gcnew System::String((tmp->data->student->studentID).c_str()) + "," + gcnew System::String((tmp->data->student->lastname).c_str()) + "," + gcnew System::String((tmp->data->student->firstname).c_str()) + "," + (tmp->data->student->gender + ","
										+ gcnew System::String(DateToString(tmp->data->student->DoB).c_str()) + "," + gcnew System::String((tmp->data->student->socialID).c_str()) + "," + gcnew System::String((tmp->data->student->Class->convertToString()).c_str())));*/
									item->Text = gcnew System::String(std::to_string(tmp->data->student->No).c_str());
									item->SubItems->Add(gcnew System::String((tmp->data->student->studentID).c_str()));
									item->SubItems->Add(gcnew System::String((tmp->data->student->firstname).c_str()));
									item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));				
									item->SubItems->Add(gcnew System::String(std::to_string(tmp->data->student->gender).c_str()));
									item->SubItems->Add(gcnew System::String(DateToString(tmp->data->student->DoB).c_str()));
									item->SubItems->Add(gcnew System::String((tmp->data->student->socialID).c_str()));
									item->SubItems->Add(gcnew System::String((tmp->data->student->lastname).c_str()));
									item->SubItems->Add(gcnew System::String((tmp->data->student->Class->convertToString()).c_str()));
									listView1->Items->Add(item);
									tmp = tmp->next;
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
	   private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		   this->Close();
		   this->sourceForm->Show();
	   }
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
