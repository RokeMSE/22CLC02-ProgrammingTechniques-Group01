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
	/// Summary for CreateSchoolYear
	/// </summary>
	public ref class CreateSchoolYear : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		CreateSchoolYear(System::Windows::Forms::Form^ form)
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
		~CreateSchoolYear()
		{
			if (components != nullptr)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ CreateSchoolYearLab;
	private: System::Windows::Forms::Label^ BeginYearLab;
	private: System::Windows::Forms::TextBox^ BeginYearTextBox;
	private: System::Windows::Forms::TextBox^ EndYearTextBox;
	private: System::Windows::Forms::Label^ EndYearLab;
	private: System::Windows::Forms::Button^ EnterBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Panel^ WorkPanel;
	private: System::Windows::Forms::Panel^ StartPanel;
	private: System::Windows::Forms::Button^ BackBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateSchoolYear::typeid));
			this->CreateSchoolYearLab = (gcnew System::Windows::Forms::Label());
			this->BeginYearLab = (gcnew System::Windows::Forms::Label());
			this->BeginYearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EndYearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EndYearLab = (gcnew System::Windows::Forms::Label());
			this->EnterBtn = (gcnew System::Windows::Forms::Button());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->WorkPanel = (gcnew System::Windows::Forms::Panel());
			this->StartPanel = (gcnew System::Windows::Forms::Panel());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->WorkPanel->SuspendLayout();
			this->StartPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// CreateSchoolYearLab
			// 
			this->CreateSchoolYearLab->AutoSize = true;
			this->CreateSchoolYearLab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->CreateSchoolYearLab->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CreateSchoolYearLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15, System::Drawing::FontStyle::Bold));
			this->CreateSchoolYearLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->CreateSchoolYearLab->Location = System::Drawing::Point(90, 13);
			this->CreateSchoolYearLab->Name = L"CreateSchoolYearLab";
			this->CreateSchoolYearLab->Size = System::Drawing::Size(386, 36);
			this->CreateSchoolYearLab->TabIndex = 0;
			this->CreateSchoolYearLab->Text = L"CREATE A SCHOOL YEAR";
			// 
			// BeginYearLab
			// 
			this->BeginYearLab->AutoSize = true;
			this->BeginYearLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BeginYearLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->BeginYearLab->Location = System::Drawing::Point(216, 101);
			this->BeginYearLab->Name = L"BeginYearLab";
			this->BeginYearLab->Size = System::Drawing::Size(136, 32);
			this->BeginYearLab->TabIndex = 1;
			this->BeginYearLab->Text = L"Begin year";
			// 
			// BeginYearTextBox
			// 
			this->BeginYearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BeginYearTextBox->Location = System::Drawing::Point(373, 101);
			this->BeginYearTextBox->Name = L"BeginYearTextBox";
			this->BeginYearTextBox->Size = System::Drawing::Size(152, 39);
			this->BeginYearTextBox->TabIndex = 2;
			this->BeginYearTextBox->TextChanged += gcnew System::EventHandler(this, &CreateSchoolYear::BeginYearTextBox_TextChanged);
			// 
			// EndYearTextBox
			// 
			this->EndYearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndYearTextBox->Location = System::Drawing::Point(373, 148);
			this->EndYearTextBox->Name = L"EndYearTextBox";
			this->EndYearTextBox->ReadOnly = true;
			this->EndYearTextBox->Size = System::Drawing::Size(152, 39);
			this->EndYearTextBox->TabIndex = 4;
			// 
			// EndYearLab
			// 
			this->EndYearLab->AutoSize = true;
			this->EndYearLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EndYearLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->EndYearLab->Location = System::Drawing::Point(216, 148);
			this->EndYearLab->Name = L"EndYearLab";
			this->EndYearLab->Size = System::Drawing::Size(114, 32);
			this->EndYearLab->TabIndex = 3;
			this->EndYearLab->Text = L"End year";
			// 
			// EnterBtn
			// 
			this->EnterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->EnterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EnterBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->EnterBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->EnterBtn->Location = System::Drawing::Point(580, 247);
			this->EnterBtn->Name = L"EnterBtn";
			this->EnterBtn->Padding = System::Windows::Forms::Padding(4);
			this->EnterBtn->Size = System::Drawing::Size(97, 49);
			this->EnterBtn->TabIndex = 5;
			this->EnterBtn->Text = L"Enter";
			this->EnterBtn->UseVisualStyleBackColor = false;
			this->EnterBtn->Click += gcnew System::EventHandler(this, &CreateSchoolYear::EnterBtn_Click);
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->ExitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitBtn->Location = System::Drawing::Point(683, 247);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(97, 49);
			this->ExitBtn->TabIndex = 6;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &CreateSchoolYear::ExitBtn_Click);
			// 
			// WorkPanel
			// 
			this->WorkPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->WorkPanel->Controls->Add(this->ExitBtn);
			this->WorkPanel->Controls->Add(this->BeginYearLab);
			this->WorkPanel->Controls->Add(this->EnterBtn);
			this->WorkPanel->Controls->Add(this->BeginYearTextBox);
			this->WorkPanel->Controls->Add(this->EndYearLab);
			this->WorkPanel->Controls->Add(this->EndYearTextBox);
			this->WorkPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WorkPanel->Location = System::Drawing::Point(0, 71);
			this->WorkPanel->Name = L"WorkPanel";
			this->WorkPanel->Padding = System::Windows::Forms::Padding(4);
			this->WorkPanel->Size = System::Drawing::Size(920, 334);
			this->WorkPanel->TabIndex = 7;
			// 
			// StartPanel
			// 
			this->StartPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->StartPanel->Controls->Add(this->CreateSchoolYearLab);
			this->StartPanel->Controls->Add(this->BackBtn);
			this->StartPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StartPanel->Location = System::Drawing::Point(0, 0);
			this->StartPanel->Name = L"StartPanel";
			this->StartPanel->Padding = System::Windows::Forms::Padding(4);
			this->StartPanel->Size = System::Drawing::Size(920, 71);
			this->StartPanel->TabIndex = 8;
			this->StartPanel->Visible = false;
			// 
			// BackBtn
			// 
			this->BackBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->BackBtn->FlatAppearance->BorderSize = 0;
			this->BackBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(8)));
			this->BackBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->BackBtn->Location = System::Drawing::Point(524, 12);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(37, 37);
			this->BackBtn->TabIndex = 0;
			this->BackBtn->Text = L"<";
			this->BackBtn->UseVisualStyleBackColor = false;
			this->BackBtn->Click += gcnew System::EventHandler(this, &CreateSchoolYear::BackBtn_Click);
			// 
			// CreateSchoolYear
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(920, 405);
			this->ControlBox = false;
			this->Controls->Add(this->WorkPanel);
			this->Controls->Add(this->StartPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CreateSchoolYear";
			this->Text = L"CreateSchoolYear";
			this->WorkPanel->ResumeLayout(false);
			this->WorkPanel->PerformLayout();
			this->StartPanel->ResumeLayout(false);
			this->StartPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BeginYearTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->BeginYearTextBox->Text == "")
			return;
		EndYearTextBox->Text = msclr::interop::marshal_as<System::String^>(std::to_string(std::stoi(msclr::interop::marshal_as<std::string>(BeginYearTextBox->Text)) + 1));
	}
	private: System::Void EnterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->BeginYearTextBox->Text == "")
			MessageBox::Show("Invalid!");
		else
		{
			if (std::stoi(msclr::interop::marshal_as<std::string>(BeginYearTextBox->Text)) <= 0)
			{
				MessageBox::Show("Invalid year!");
				this->BeginYearTextBox->Clear();
				return;
			}
			GROUP1::DLL<GROUP1::SCHOOLYEAR*>* cur = L_SchoolYear.head;
			while (cur)
			{
				if (cur->data->begin == std::stoi(msclr::interop::marshal_as<std::string>(BeginYearTextBox->Text)))
				{
					MessageBox::Show("This school year has already existed");
					this->BeginYearTextBox->Clear();
					this->EndYearTextBox->Clear();
					return;
				}
				cur = cur->next;
			}
			GROUP1::DLL<GROUP1::SCHOOLYEAR*>* schoolyear = new GROUP1::DLL<GROUP1::SCHOOLYEAR*>;
			schoolyear->data = new GROUP1::SCHOOLYEAR;
			schoolyear->data->begin = std::stoi(msclr::interop::marshal_as<std::string>(BeginYearTextBox->Text));
			schoolyear->data->end = schoolyear->data->begin + 1;
			if (L_SchoolYear.head == nullptr)
			{
				L_SchoolYear.head = schoolyear;
				L_SchoolYear.tail = schoolyear;
			}
			else
			{
				L_SchoolYear.tail->next = schoolyear;
				schoolyear->prev = L_SchoolYear.tail;
				schoolyear->next = nullptr;
				L_SchoolYear.tail = schoolyear;
				GROUP1::DLL<GROUP1::STUDENT*>* stu = L_Student.head;
				while (stu)
				{
					GROUP1::DLL<GROUP1::COURSE*>* courseOfStu = stu->data->courses.head;
					while (courseOfStu)
					{
						GROUP1::DLL<GROUP1::COURSE*>* dummy = courseOfStu;
						courseOfStu = courseOfStu->next;
						delete dummy;
					}
					/*stu->data->courses.head = nullptr;
					stu->data->courses.tail = nullptr;*/
					stu = stu->next;
				}
			}
			g_currentSchoolYear = L_SchoolYear.tail->data;
			//MessageBox::Show(msclr::interop::marshal_as<String^>(std::to_string(g_currentSchoolYear->begin)));
			//g_currentSemester = nullptr;
			MessageBox::Show("Successfully create a new school year!");
		}
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	};
}
