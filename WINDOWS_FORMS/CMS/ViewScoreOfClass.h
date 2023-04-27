#pragma once
#include "header.h"
#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;
using namespace GROUP1;
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewScoreOfClass
	/// </summary>
	public ref class ViewScoreOfClass : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewScoreOfClass(System::Windows::Forms::Form^ form)
		{
			this->sourceForm = form;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewScoreOfClass()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:


	private: System::Windows::Forms::Label^ labelClass;


	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::ListView^ listViewScoreOfClass;



	private: System::Windows::Forms::ColumnHeader^ col_no;
	private: System::Windows::Forms::ColumnHeader^ col_ID;
	private: System::Windows::Forms::ColumnHeader^ col_name;
	private: System::Windows::Forms::ColumnHeader^ col_teacher;
	private: System::Windows::Forms::ColumnHeader^ col_credit;
	private: System::Windows::Forms::ColumnHeader^ col_maxstu;
	private: System::Windows::Forms::ColumnHeader^ col_day;
	private: System::Windows::Forms::ColumnHeader^ col_session;
	private: System::Windows::Forms::DomainUpDown^ ChooseClass;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label1;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewScoreOfClass::typeid));
			this->labelClass = (gcnew System::Windows::Forms::Label());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->listViewScoreOfClass = (gcnew System::Windows::Forms::ListView());
			this->col_no = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_teacher = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_credit = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_maxstu = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_day = (gcnew System::Windows::Forms::ColumnHeader());
			this->col_session = (gcnew System::Windows::Forms::ColumnHeader());
			this->ChooseClass = (gcnew System::Windows::Forms::DomainUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->pnl_title->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelClass
			// 
			this->labelClass->AutoSize = true;
			this->labelClass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10));
			this->labelClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->labelClass->Location = System::Drawing::Point(150, 102);
			this->labelClass->Name = L"labelClass";
			this->labelClass->Size = System::Drawing::Size(59, 27);
			this->labelClass->TabIndex = 58;
			this->labelClass->Text = L"Class";
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->searchButton->Location = System::Drawing::Point(850, 99);
			this->searchButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(104, 39);
			this->searchButton->TabIndex = 76;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &ViewScoreOfClass::searchButton_Click);
			// 
			// listViewScoreOfClass
			// 
			this->listViewScoreOfClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listViewScoreOfClass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->listViewScoreOfClass->FullRowSelect = true;
			this->listViewScoreOfClass->GridLines = true;
			this->listViewScoreOfClass->HideSelection = false;
			this->listViewScoreOfClass->Location = System::Drawing::Point(72, 159);
			this->listViewScoreOfClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listViewScoreOfClass->Name = L"listViewScoreOfClass";
			this->listViewScoreOfClass->Size = System::Drawing::Size(1064, 478);
			this->listViewScoreOfClass->TabIndex = 77;
			this->listViewScoreOfClass->UseCompatibleStateImageBehavior = false;
			this->listViewScoreOfClass->View = System::Windows::Forms::View::Details;
			// 
			// col_no
			// 
			this->col_no->Text = L"No";
			this->col_no->Width = 40;
			// 
			// col_ID
			// 
			this->col_ID->Text = L"ID";
			this->col_ID->Width = 160;
			// 
			// col_name
			// 
			this->col_name->Text = L"Name";
			this->col_name->Width = 254;
			// 
			// col_teacher
			// 
			this->col_teacher->Text = L"Teacher";
			this->col_teacher->Width = 254;
			// 
			// col_credit
			// 
			this->col_credit->Text = L"Credit";
			// 
			// col_maxstu
			// 
			this->col_maxstu->Text = L"Max Student";
			this->col_maxstu->Width = 100;
			// 
			// col_day
			// 
			this->col_day->Text = L"Day";
			this->col_day->Width = 55;
			// 
			// col_session
			// 
			this->col_session->Text = L"Session";
			this->col_session->Width = 85;
			// 
			// ChooseClass
			// 
			this->ChooseClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ChooseClass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->ChooseClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ChooseClass->Location = System::Drawing::Point(244, 104);
			this->ChooseClass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChooseClass->Name = L"ChooseClass";
			this->ChooseClass->Size = System::Drawing::Size(244, 43);
			this->ChooseClass->TabIndex = 78;
			this->ChooseClass->Text = L"Choose Class";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel2->Controls->Add(this->account);
			this->panel2->Controls->Add(this->btn_back);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Size = System::Drawing::Size(68, 645);
			this->panel2->TabIndex = 98;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 575);
			this->account->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(60, 65);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 58;
			this->account->TabStop = false;
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_back->Location = System::Drawing::Point(4, 5);
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(60, 65);
			this->btn_back->TabIndex = 57;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewScoreOfClass::btn_back_Click_1);
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label1);
			this->pnl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->pnl_title->Location = System::Drawing::Point(69, 0);
			this->pnl_title->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(1068, 75);
			this->pnl_title->TabIndex = 99;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(405, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(256, 37);
			this->label1->TabIndex = 58;
			this->label1->Text = L"SCORE OF CLASS";
			// 
			// ViewScoreOfClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1141, 645);
			this->ControlBox = false;
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ChooseClass);
			this->Controls->Add(this->listViewScoreOfClass);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->labelClass);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"ViewScoreOfClass";
			this->Text = L"ViewScoreOfClass";
			this->Load += gcnew System::EventHandler(this, &ViewScoreOfClass::ViewScoreOfClass_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}

	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		listViewScoreOfClass->Clear();
		this->listViewScoreOfClass->Columns->Add("Student");
		DLL<COURSE*>* course = g_currentSemester->course.head;
		while (course)
		{
			this->listViewScoreOfClass->Columns->Add(msclr::interop::marshal_as<System::String^>(course->data->ID));
			course = course->next;
		}
		this->listViewScoreOfClass->Columns->Add("GPA this semester");
		this->listViewScoreOfClass->Columns->Add("Overall GPA");
		course = g_currentSemester->course.head;
		int* i = new int;
		*i = 0;
		this->listViewScoreOfClass->Columns[*i]->Width = 160;
		for (*i = 1; course; (*i)++)
		{
			this->listViewScoreOfClass->Columns[*i]->Width = 100;
			course = course->next;
		}

		this->listViewScoreOfClass->Columns[*i]->Width = 125;
		(*i)++;
		this->listViewScoreOfClass->Columns[*i]->Width = 100;
		delete i;
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		int* count = new int;
		*count = 0;
		while (!cur)
		{
			(*count)++;
			cur = cur->next;
		}
		cur = g_currentSemester->course.head;
		int* temp = new int;
		DLL<CLASS>* curClas = L_Class.head;
		String^ selectedValue = ChooseClass->Text;
		msclr::interop::marshal_context context;
		string dummy = context.marshal_as<std::string>(selectedValue);
		while (curClas)
		{
			if (to_string(curClas->data.K) + convertFromProgram(curClas->data.program) + to_string(curClas->data.No) == dummy)
				break;
			curClas = curClas->next;
		}
		if (curClas == nullptr) {
			MessageBox::Show("Please choose a Class!", "Notification");
			return;
		}
		DLL<STUDENT*>* stu = curClas->data.student.head;

		if (stu == nullptr) {
			MessageBox::Show("Can not find any Students in this Class! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		if (!cur)
		{
			*temp = 1;
			ListViewItem^ item = listViewScoreOfClass->Items->Add("x");
			while (*temp != *count)
			{
				item->SubItems->Add("x");
				(*temp)++;
			}
		}
		else
		{

			while (stu && stu->data->Class->convertToString() == dummy)
			{
				cur = g_currentSemester->course.head;
				ListViewItem^ item = listViewScoreOfClass->Items->Add(msclr::interop::marshal_as<System::String^>(stu->data->firstname + " " + stu->data->lastname));
				while (cur)
				{
					bool found = false;
					DLL<SCOREBOARD*>* stuScore = cur->data->students.head;
					while (stuScore)
					{
						if (stuScore->data->student == stu->data)
						{
							String^ str = String::Format("{0:0.00}", stuScore->data->finalMark);
							item->SubItems->Add(str);
							found = true;
						}
						stuScore = stuScore->next;
					}
					if (!found)
						item->SubItems->Add("x");

					cur = cur->next;
				}
				cur = g_currentSemester->course.head;
				float* thisSemGPA = new float;
				*thisSemGPA = 0;
				int* cre = new int;
				*cre = 0;
				while (cur)
				{
					bool found = false;
					DLL<SCOREBOARD*>* stuScore = cur->data->students.head;
					while (stuScore != nullptr)
					{
						if (stuScore->data->student == stu->data && stuScore->data->totalMark != 0)
						{
							float* tempGPA = new float;
							if (stuScore->data->totalMark >= 9 && stuScore->data->totalMark <= 10)
								*tempGPA = 4;
							else if (stuScore->data->totalMark >= 8 && stuScore->data->totalMark < 9)
								*tempGPA = 3.5;
							else if (stuScore->data->totalMark >= 7 && stuScore->data->totalMark < 8)
								*tempGPA = 3;
							else if (stuScore->data->totalMark >= 6 && stuScore->data->totalMark < 7)
								*tempGPA = 2.5;
							else if (stuScore->data->totalMark >= 5 && stuScore->data->totalMark < 6)
								*tempGPA = 2;
							else if (stuScore->data->totalMark >= 4 && stuScore->data->totalMark < 5)
								*tempGPA = 1.5;
							else if (stuScore->data->totalMark >= 3 && stuScore->data->totalMark < 4)
								*tempGPA = 1;
							else if (stuScore->data->totalMark < 3 && stuScore->data->totalMark > 0)
								*tempGPA = 0;
							*thisSemGPA = *thisSemGPA + (*tempGPA) * (cur->data->credit);
							found = true;
							*cre += cur->data->credit;
							delete tempGPA;
							break;
						}
						stuScore = stuScore->next;
					}
					cur = cur->next;
				}
				if (*thisSemGPA == 0)
					item->SubItems->Add("x");
				else
				{
					msclr::interop::marshal_context context;
					string dummy = context.marshal_as<std::string>(((*thisSemGPA) / (*cre)).ToString("0.00"));
					item->SubItems->Add(msclr::interop::marshal_as<System::String^>(dummy));
				}
				delete thisSemGPA;
				float* GPA = new float;

				DLL<SCHOOLYEAR*>* year = L_SchoolYear.head;
				*GPA = 0;
				*cre = 0;
				while (year)
				{
					if (!year->data->sem1)
						break;
					cur = year->data->sem1->course.head;
					while (cur)
					{
						bool found = false;
						DLL<SCOREBOARD*>* stuScore = cur->data->students.head;
						while (stuScore != nullptr)
						{
							if (stuScore->data->student == stu->data && stuScore->data->totalMark != 0)
							{
								float* tempGPA = new float;
								if (stuScore->data->totalMark >= 9 && stuScore->data->totalMark <= 10)
									*tempGPA = 4;
								else if (stuScore->data->totalMark >= 8 && stuScore->data->totalMark < 9)
									*tempGPA = 3.5;
								else if (stuScore->data->totalMark >= 7 && stuScore->data->totalMark < 8)
									*tempGPA = 3;
								else if (stuScore->data->totalMark >= 6 && stuScore->data->totalMark < 7)
									*tempGPA = 2.5;
								else if (stuScore->data->totalMark >= 5 && stuScore->data->totalMark < 6)
									*tempGPA = 2;
								else if (stuScore->data->totalMark >= 4 && stuScore->data->totalMark < 5)
									*tempGPA = 1.5;
								else if (stuScore->data->totalMark >= 3 && stuScore->data->totalMark < 4)
									*tempGPA = 1;
								else if (stuScore->data->totalMark < 3 && stuScore->data->totalMark > 0)
									*tempGPA = 0;
								*GPA = *GPA + (*tempGPA) * (cur->data->credit);
								found = true;
								*cre += cur->data->credit;
								delete tempGPA;
								break;
							}
							stuScore = stuScore->next;
						}
						cur = cur->next;
					}
					if (!year->data->sem2)
						break;
					cur = year->data->sem2->course.head;

					while (cur)
					{
						bool found = false;
						DLL<SCOREBOARD*>* stuScore = cur->data->students.head;
						while (stuScore != nullptr)
						{
							if (stuScore->data->student == stu->data && stuScore->data->totalMark != 0)
							{
								float* tempGPA = new float;
								if (stuScore->data->totalMark >= 9 && stuScore->data->totalMark <= 10)
									*tempGPA = 4;
								else if (stuScore->data->totalMark >= 8 && stuScore->data->totalMark < 9)
									*tempGPA = 3.5;
								else if (stuScore->data->totalMark >= 7 && stuScore->data->totalMark < 8)
									*tempGPA = 3;
								else if (stuScore->data->totalMark >= 6 && stuScore->data->totalMark < 7)
									*tempGPA = 2.5;
								else if (stuScore->data->totalMark >= 5 && stuScore->data->totalMark < 6)
									*tempGPA = 2;
								else if (stuScore->data->totalMark >= 4 && stuScore->data->totalMark < 5)
									*tempGPA = 1.5;
								else if (stuScore->data->totalMark >= 3 && stuScore->data->totalMark < 4)
									*tempGPA = 1;
								else if (stuScore->data->totalMark < 3 && stuScore->data->totalMark > 0)
									*tempGPA = 0;
								*GPA = *GPA + (*tempGPA) * (cur->data->credit);
								found = true;
								*cre += cur->data->credit;
								delete tempGPA;
								break;
							}
							stuScore = stuScore->next;
						}
						cur = cur->next;
					}

					if (!year->data->sem3)
						break;
					cur = year->data->sem3->course.head;
					while (cur)
					{
						bool found = false;
						DLL<SCOREBOARD*>* stuScore = cur->data->students.head;
						while (stuScore != nullptr)
						{
							if (stuScore->data->student == stu->data && stuScore->data->totalMark != 0)
							{
								float* tempGPA = new float;
								if (stuScore->data->totalMark >= 9 && stuScore->data->totalMark <= 10)
									*tempGPA = 4;
								else if (stuScore->data->totalMark >= 8 && stuScore->data->totalMark < 9)
									*tempGPA = 3.5;
								else if (stuScore->data->totalMark >= 7 && stuScore->data->totalMark < 8)
									*tempGPA = 3;
								else if (stuScore->data->totalMark >= 6 && stuScore->data->totalMark < 7)
									*tempGPA = 2.5;
								else if (stuScore->data->totalMark >= 5 && stuScore->data->totalMark < 6)
									*tempGPA = 2;
								else if (stuScore->data->totalMark >= 4 && stuScore->data->totalMark < 5)
									*tempGPA = 1.5;
								else if (stuScore->data->totalMark >= 3 && stuScore->data->totalMark < 4)
									*tempGPA = 1;
								else if (stuScore->data->totalMark < 3 && stuScore->data->totalMark > 0)
									*tempGPA = 0;
								*GPA = *GPA + (*tempGPA) * (cur->data->credit);
								found = true;
								*cre += cur->data->credit;
								delete tempGPA;
								break;
							}
							stuScore = stuScore->next;
						}
						cur = cur->next;
					}
					year = year->next;
				}
				if (*GPA == 0)
					item->SubItems->Add("x");
				else
				{
					msclr::interop::marshal_context context;
					string dummy = context.marshal_as<std::string>(((*GPA) / (*cre)).ToString("0.00"));
					item->SubItems->Add(msclr::interop::marshal_as<System::String^>(dummy));
				}
				stu = stu->next;
			}

		}
		delete temp;
		delete count;
	}
	private: System::Void ViewScoreOfClass_Load(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSemester == nullptr) {
			if (g_currentSchoolYear == nullptr)
				MessageBox::Show("Can not find any SchoolYear! You must create a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			else
				MessageBox::Show("Can not find any Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		if (g_currentSemester->course.head == nullptr) {
			MessageBox::Show("Can not find any Courses in current Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		if (L_Class.head == nullptr) {
			MessageBox::Show("Can not find any Classes in current Semester! You must add a new one!", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			this->Close();
			this->sourceForm->Show();
			return;
		}

		this->listViewScoreOfClass->Columns->Add("Student");
		DLL<COURSE*>* course = g_currentSemester->course.head;
		while (course)
		{
			this->listViewScoreOfClass->Columns->Add(msclr::interop::marshal_as<System::String^>(course->data->ID));
			course = course->next;
		}
		this->listViewScoreOfClass->Columns->Add("GPA this semester");
		this->listViewScoreOfClass->Columns->Add("Overall GPA");
		course = g_currentSemester->course.head;
		int* i = new int;
		*i = 0;
		this->listViewScoreOfClass->Columns[*i]->Width = 160;
		for (*i = 1; course; (*i)++)
		{
			this->listViewScoreOfClass->Columns[*i]->Width = 100;
			course = course->next;
		}

		this->listViewScoreOfClass->Columns[*i]->Width = 125;
		(*i)++;
		this->listViewScoreOfClass->Columns[*i]->Width = 100;
		delete i;
		DLL<CLASS>* Class = L_Class.head;
		while (Class)
		{
			this->ChooseClass->Items->Add(msclr::interop::marshal_as<System::String^>(Class->data.convertToString()));
			Class = Class->next;
		}
	}
	private: System::Void btn_back_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	};
}
