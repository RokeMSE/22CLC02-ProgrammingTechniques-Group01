#pragma once

#include "header.h"
#include "CreateSchoolYear.h"

namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Create1Class
	/// </summary>
	public ref class Create1Class : public System::Windows::Forms::Form
	{
	public:
		Create1Class(void)
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
		~Create1Class()
		{
			if (components != nullptr)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Create1ClassLab;
	private: System::Windows::Forms::Label^ SchoolYearLab;
	private: System::Windows::Forms::TextBox^ SchoolYearTextBox;
	private: System::Windows::Forms::Label^ ProgramLab;
	private: System::Windows::Forms::DomainUpDown^ ProgramDomain;
	private: System::Windows::Forms::TextBox^ NoTextBox;
	private: System::Windows::Forms::Label^ NoLab;
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
			this->Create1ClassLab = (gcnew System::Windows::Forms::Label());
			this->SchoolYearLab = (gcnew System::Windows::Forms::Label());
			this->SchoolYearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProgramLab = (gcnew System::Windows::Forms::Label());
			this->ProgramDomain = (gcnew System::Windows::Forms::DomainUpDown());
			this->NoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NoLab = (gcnew System::Windows::Forms::Label());
			this->EnterBtn = (gcnew System::Windows::Forms::Button());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->StartPanel = (gcnew System::Windows::Forms::Panel());
			this->StartPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Create1ClassLab
			// 
			this->Create1ClassLab->AutoSize = true;
			this->Create1ClassLab->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Create1ClassLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15, System::Drawing::FontStyle::Bold));
			this->Create1ClassLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Create1ClassLab->Location = System::Drawing::Point(306, 18);
			this->Create1ClassLab->Name = L"Create1ClassLab";
			this->Create1ClassLab->Size = System::Drawing::Size(330, 36);
			this->Create1ClassLab->TabIndex = 0;
			this->Create1ClassLab->Text = L"Create 1st-year class";
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
			this->SchoolYearLab->Size = System::Drawing::Size(146, 32);
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
			this->SchoolYearTextBox->Click += gcnew System::EventHandler(this, &Create1Class::SchoolYearTextBox_Click);
			// 
			// ProgramLab
			// 
			this->ProgramLab->AutoSize = true;
			this->ProgramLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProgramLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ProgramLab->Location = System::Drawing::Point(279, 150);
			this->ProgramLab->Name = L"ProgramLab";
			this->ProgramLab->Size = System::Drawing::Size(114, 32);
			this->ProgramLab->TabIndex = 3;
			this->ProgramLab->Text = L"Program";
			// 
			// ProgramDomain
			// 
			this->ProgramDomain->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProgramDomain->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ProgramDomain->Location = System::Drawing::Point(457, 148);
			this->ProgramDomain->Name = L"ProgramDomain";
			this->ProgramDomain->Size = System::Drawing::Size(179, 39);
			this->ProgramDomain->TabIndex = 4;
			// 
			// NoTextBox
			// 
			this->NoTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->NoTextBox->Location = System::Drawing::Point(457, 199);
			this->NoTextBox->Name = L"NoTextBox";
			this->NoTextBox->Size = System::Drawing::Size(179, 39);
			this->NoTextBox->TabIndex = 6;
			// 
			// NoLab
			// 
			this->NoLab->AutoSize = true;
			this->NoLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NoLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->NoLab->Location = System::Drawing::Point(279, 202);
			this->NoLab->Name = L"NoLab";
			this->NoLab->Size = System::Drawing::Size(48, 32);
			this->NoLab->TabIndex = 5;
			this->NoLab->Text = L"No";
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
			this->EnterBtn->Click += gcnew System::EventHandler(this, &Create1Class::button1_Click);
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
			this->ExitBtn->Click += gcnew System::EventHandler(this, &Create1Class::ExitBtn_Click);
			// 
			// StartPanel
			// 
			this->StartPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->StartPanel->Controls->Add(this->Create1ClassLab);
			this->StartPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StartPanel->Location = System::Drawing::Point(0, 0);
			this->StartPanel->Name = L"StartPanel";
			this->StartPanel->Size = System::Drawing::Size(920, 64);
			this->StartPanel->TabIndex = 9;
			this->StartPanel->Visible = false;
			// 
			// Create1Class
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(920, 405);
			this->ControlBox = false;
			this->Controls->Add(this->StartPanel);
			this->Controls->Add(this->ExitBtn);
			this->Controls->Add(this->EnterBtn);
			this->Controls->Add(this->NoTextBox);
			this->Controls->Add(this->NoLab);
			this->Controls->Add(this->ProgramDomain);
			this->Controls->Add(this->ProgramLab);
			this->Controls->Add(this->SchoolYearTextBox);
			this->Controls->Add(this->SchoolYearLab);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Create1Class";
			this->Text = L"Create1Class";
			this->Load += gcnew System::EventHandler(this, &Create1Class::Create1Class_Load);
			this->StartPanel->ResumeLayout(false);
			this->StartPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Create1Class_Load(System::Object^ sender, System::EventArgs^ e) {
		this->SchoolYearTextBox->Text = msclr::interop::marshal_as<System::String^>(std::to_string(g_currentSchoolYear->begin) + '-' + std::to_string(g_currentSchoolYear->end));
		ProgramDomain->Items->Add("APCS");
		ProgramDomain->Items->Add("CLC");
		ProgramDomain->Items->Add("VP");
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->ProgramDomain->Text || !this->NoTextBox->Text || std::stoi(msclr::interop::marshal_as<std::string>(NoTextBox->Text)) <= 0)
		{
			MessageBox::Show("Invalid");
			ProgramDomain->Text = "";
			this->NoTextBox->Clear();
			return;
		}
		GROUP1::DLL<GROUP1::CLASS>* cur = L_Class.head;
		while (cur)
		{
			if (cur->data.convertToString() == std::to_string(g_currentSchoolYear->begin % 2000) + msclr::interop::marshal_as<std::string>(this->ProgramDomain->Text + this->NoTextBox->Text))
			{
				MessageBox::Show("This class has already existed!");
				return;
			}
			cur = cur->next;
		}
		GROUP1::DLL<GROUP1::CLASS>* newClass = new GROUP1::DLL<GROUP1::CLASS>;
		newClass->data.K = g_currentSchoolYear->begin % 2000;
		newClass->data.No = std::stoi(msclr::interop::marshal_as<std::string>(this->NoTextBox->Text));
		newClass->data.program = convertToProgram(msclr::interop::marshal_as<std::string>(this->ProgramDomain->Text));
		if (!L_Class.head)
		{
			L_Class.head = newClass;
			L_Class.tail = newClass;
		}
		else
		{
			newClass->prev = L_Class.tail;
			L_Class.tail = newClass;
			L_Class.tail = newClass;
		}
		MessageBox::Show("Successfully create a 1st-year class");
	}
	private: System::Void SchoolYearTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("You may haven't create a new school year yet, you can choose option \"Create a school year\", then come back.");
	}
};
}
