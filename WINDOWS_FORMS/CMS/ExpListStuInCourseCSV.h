#pragma once
#pragma warning(disable : 4996)
#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <fstream>
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
	/// Summary for ExpListStuInCourseCSV
	/// </summary>
	public ref class ExpListStuInCourseCSV : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ExpListStuInCourseCSV(System::Windows::Forms::Form^ form)
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
		~ExpListStuInCourseCSV()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:









	private: System::Windows::Forms::Button^ btn_search;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ CourseIDTextBox;

	private: System::Windows::Forms::Label^ lbl_courseInf;
	private: System::Windows::Forms::Label^ lbl_coursename;
	private: System::Windows::Forms::Label^ lbl_teacher;
	private: System::Windows::Forms::TextBox^ txt_coursename;
	private: System::Windows::Forms::TextBox^ txt_teacher;
	private: System::Windows::Forms::Label^ lbl_input;
	private: System::Windows::Forms::TextBox^ txt_pathfile;
	private: System::Windows::Forms::Button^ btn_browse;
	private: System::Windows::Forms::Button^ btn_export;


	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ button1;




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
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CourseIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lbl_courseInf = (gcnew System::Windows::Forms::Label());
			this->lbl_coursename = (gcnew System::Windows::Forms::Label());
			this->lbl_teacher = (gcnew System::Windows::Forms::Label());
			this->txt_coursename = (gcnew System::Windows::Forms::TextBox());
			this->txt_teacher = (gcnew System::Windows::Forms::TextBox());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->txt_pathfile = (gcnew System::Windows::Forms::TextBox());
			this->btn_browse = (gcnew System::Windows::Forms::Button());
			this->btn_export = (gcnew System::Windows::Forms::Button());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pnl_title->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(427, 172);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(106, 67);
			this->btn_search->TabIndex = 92;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::btn_search_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(187, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 30);
			this->label1->TabIndex = 90;
			this->label1->Text = L"Course ID";
			// 
			// CourseIDTextBox
			// 
			this->CourseIDTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->CourseIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->CourseIDTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CourseIDTextBox->Location = System::Drawing::Point(136, 182);
			this->CourseIDTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CourseIDTextBox->MaxLength = 10;
			this->CourseIDTextBox->Name = L"CourseIDTextBox";
			this->CourseIDTextBox->Size = System::Drawing::Size(232, 29);
			this->CourseIDTextBox->TabIndex = 91;
			// 
			// lbl_courseInf
			// 
			this->lbl_courseInf->AutoSize = true;
			this->lbl_courseInf->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbl_courseInf->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13, System::Drawing::FontStyle::Bold));
			this->lbl_courseInf->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_courseInf->Location = System::Drawing::Point(659, 117);
			this->lbl_courseInf->Name = L"lbl_courseInf";
			this->lbl_courseInf->Size = System::Drawing::Size(230, 32);
			this->lbl_courseInf->TabIndex = 93;
			this->lbl_courseInf->Text = L"Course Information";
			// 
			// lbl_coursename
			// 
			this->lbl_coursename->AutoSize = true;
			this->lbl_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_coursename->Location = System::Drawing::Point(566, 172);
			this->lbl_coursename->Name = L"lbl_coursename";
			this->lbl_coursename->Size = System::Drawing::Size(129, 24);
			this->lbl_coursename->TabIndex = 94;
			this->lbl_coursename->Text = L"Course Name:";
			// 
			// lbl_teacher
			// 
			this->lbl_teacher->AutoSize = true;
			this->lbl_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_teacher->Location = System::Drawing::Point(566, 221);
			this->lbl_teacher->Name = L"lbl_teacher";
			this->lbl_teacher->Size = System::Drawing::Size(139, 24);
			this->lbl_teacher->TabIndex = 95;
			this->lbl_teacher->Text = L"Teacher Name:";
			// 
			// txt_coursename
			// 
			this->txt_coursename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_coursename->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_coursename->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_coursename->Location = System::Drawing::Point(711, 167);
			this->txt_coursename->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_coursename->Name = L"txt_coursename";
			this->txt_coursename->ReadOnly = true;
			this->txt_coursename->Size = System::Drawing::Size(276, 29);
			this->txt_coursename->TabIndex = 96;
			// 
			// txt_teacher
			// 
			this->txt_teacher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_teacher->Location = System::Drawing::Point(711, 218);
			this->txt_teacher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_teacher->Name = L"txt_teacher";
			this->txt_teacher->ReadOnly = true;
			this->txt_teacher->Size = System::Drawing::Size(276, 29);
			this->txt_teacher->TabIndex = 97;
			// 
			// lbl_input
			// 
			this->lbl_input->AutoSize = true;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_input->Location = System::Drawing::Point(68, 347);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(234, 27);
			this->lbl_input->TabIndex = 98;
			this->lbl_input->Text = L"Input the path of file: ";
			// 
			// txt_pathfile
			// 
			this->txt_pathfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_pathfile->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
			this->txt_pathfile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_pathfile->Location = System::Drawing::Point(297, 343);
			this->txt_pathfile->Name = L"txt_pathfile";
			this->txt_pathfile->ReadOnly = true;
			this->txt_pathfile->Size = System::Drawing::Size(557, 33);
			this->txt_pathfile->TabIndex = 99;
			this->txt_pathfile->TextChanged += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::txt_pathfile_TextChanged);
			// 
			// btn_browse
			// 
			this->btn_browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_browse->Enabled = false;
			this->btn_browse->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			this->btn_browse->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_browse->Location = System::Drawing::Point(885, 341);
			this->btn_browse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_browse->Name = L"btn_browse";
			this->btn_browse->Size = System::Drawing::Size(80, 33);
			this->btn_browse->TabIndex = 100;
			this->btn_browse->Text = L"Browse";
			this->btn_browse->UseVisualStyleBackColor = false;
			this->btn_browse->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::btn_browse_Click);
			// 
			// btn_export
			// 
			this->btn_export->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_export->Enabled = false;
			this->btn_export->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_export->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_export->Location = System::Drawing::Point(487, 404);
			this->btn_export->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_export->Name = L"btn_export";
			this->btn_export->Size = System::Drawing::Size(106, 67);
			this->btn_export->TabIndex = 101;
			this->btn_export->Text = L"Export";
			this->btn_export->UseVisualStyleBackColor = false;
			this->btn_export->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::btn_export_Click);
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label2);
			this->pnl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->pnl_title->Location = System::Drawing::Point(69, 1);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(964, 60);
			this->pnl_title->TabIndex = 103;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(224, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(435, 31);
			this->label2->TabIndex = 58;
			this->label2->Text = L"EXPORT LIST STUDENT IN COURSE";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel2->Controls->Add(this->account);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(4);
			this->panel2->Size = System::Drawing::Size(67, 564);
			this->panel2->TabIndex = 104;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Location = System::Drawing::Point(4, 508);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(59, 52);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 58;
			this->account->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(4, 4);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 52);
			this->button1->TabIndex = 57;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::button1_Click);
			// 
			// ExpListStuInCourseCSV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1032, 564);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->btn_export);
			this->Controls->Add(this->btn_browse);
			this->Controls->Add(this->txt_pathfile);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->txt_teacher);
			this->Controls->Add(this->txt_coursename);
			this->Controls->Add(this->lbl_teacher);
			this->Controls->Add(this->lbl_coursename);
			this->Controls->Add(this->lbl_courseInf);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->CourseIDTextBox);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ExpListStuInCourseCSV";
			this->Text = L"ExpListStuInCourseCSV";
			this->Load += gcnew System::EventHandler(this, &ExpListStuInCourseCSV::ExpListStuInCourseCSV_Load);
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void btn_browse_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->Title = "Select a File";
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filename = openFileDialog1->FileName;
			txt_pathfile->Text = filename;
		}
	}
	private: System::Void btn_export_Click(System::Object^ sender, System::EventArgs^ e) {
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		while (cur)
		{
			if (cur->data->ID == msclr::interop::marshal_as<std::string>(CourseIDTextBox->Text))
				break;
			cur = cur->next;
		}
		if (!cur)
			MessageBox::Show("Invalid course ID");
		else
		{
			string filename = msclr::interop::marshal_as<std::string>(txt_pathfile->Text);
			ofstream ofs(filename);
			ofs << "No,Student ID,Name,othermark,midtermMark,finalMark,totalMark\n";
			DLL<SCOREBOARD*>* stu = cur->data->students.head;
			for (int i = 1; stu; i++)
			{
				ofs << i << "," << stu->data->student->studentID << "," << stu->data->student->lastname + " " + stu->data->student->firstname << "," << stu->data->otherMark << "," << stu->data->midtermMark << "," << stu->data->finalMark << "," << stu->data->totalMark << "\n";
				stu = stu->next;
			}
			ofs.close();
			MessageBox::Show("Export Successfully!");
		}
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		while (cur)
		{
			if (cur->data->ID == msclr::interop::marshal_as<std::string>(CourseIDTextBox->Text))
				break;
			cur = cur->next;
		}
		if (!cur)
			MessageBox::Show("Invalid course ID");
		else
		{
			txt_coursename->Text = msclr::interop::marshal_as<System::String^>(cur->data->name);
			txt_teacher->Text = msclr::interop::marshal_as<System::String^>(cur->data->teacher);
			btn_browse->Enabled = true;
		}
	}
	private: System::Void ExpListStuInCourseCSV_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txt_pathfile_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_pathfile->Text != "")
			btn_browse->Enabled = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	};
}
