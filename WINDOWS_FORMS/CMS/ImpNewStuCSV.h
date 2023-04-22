#pragma once
#include "header.h"
#include <fstream>
#include <string>
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
	/// Summary for ImpNewStuCSV
	/// </summary>
	public ref class ImpNewStuCSV : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ImpNewStuCSV(System::Windows::Forms::Form^ form)
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
		~ImpNewStuCSV()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ StartPanel;
	private: System::Windows::Forms::Label^ ImpNewStuCSVLab;
	private: System::Windows::Forms::TextBox^ SchoolyearTextBox;
	protected:







	private: System::Windows::Forms::Label^ SchoolyearLab;
	private: System::Windows::Forms::Label^ ClassLab;

	private: System::Windows::Forms::Label^ PathLab;
	private: System::Windows::Forms::TextBox^ PathTextBox;
	private: System::Windows::Forms::Button^ BrowseBtn;

	private: System::Windows::Forms::Button^ EnterBtn;
	private: System::Windows::Forms::ComboBox^ ClassComboBox;

	private: System::Windows::Forms::Panel^ WorkPanel;























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ImpNewStuCSV::typeid));
			this->StartPanel = (gcnew System::Windows::Forms::Panel());
			this->ImpNewStuCSVLab = (gcnew System::Windows::Forms::Label());
			this->SchoolyearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SchoolyearLab = (gcnew System::Windows::Forms::Label());
			this->ClassLab = (gcnew System::Windows::Forms::Label());
			this->PathLab = (gcnew System::Windows::Forms::Label());
			this->PathTextBox = (gcnew System::Windows::Forms::TextBox());
			this->BrowseBtn = (gcnew System::Windows::Forms::Button());
			this->EnterBtn = (gcnew System::Windows::Forms::Button());
			this->ClassComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->WorkPanel = (gcnew System::Windows::Forms::Panel());
			this->StartPanel->SuspendLayout();
			this->WorkPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// StartPanel
			// 
			this->StartPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->StartPanel->Controls->Add(this->ImpNewStuCSVLab);
			this->StartPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StartPanel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->StartPanel->Location = System::Drawing::Point(0, 0);
			this->StartPanel->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->StartPanel->Name = L"StartPanel";
			this->StartPanel->Size = System::Drawing::Size(838, 120);
			this->StartPanel->TabIndex = 96;
			this->StartPanel->Visible = false;
			// 
			// ImpNewStuCSVLab
			// 
			this->ImpNewStuCSVLab->AutoSize = true;
			this->ImpNewStuCSVLab->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->ImpNewStuCSVLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ImpNewStuCSVLab->Location = System::Drawing::Point(63, 47);
			this->ImpNewStuCSVLab->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->ImpNewStuCSVLab->Name = L"ImpNewStuCSVLab";
			this->ImpNewStuCSVLab->Size = System::Drawing::Size(677, 37);
			this->ImpNewStuCSVLab->TabIndex = 58;
			this->ImpNewStuCSVLab->Text = L"Import a CSV file containing students of a class";
			this->ImpNewStuCSVLab->Click += gcnew System::EventHandler(this, &ImpNewStuCSV::ImpNewStuCSVLab_Click);
			// 
			// SchoolyearTextBox
			// 
			this->SchoolyearTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->SchoolyearTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SchoolyearTextBox->Cursor = System::Windows::Forms::Cursors::No;
			this->SchoolyearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->SchoolyearTextBox->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->SchoolyearTextBox->Location = System::Drawing::Point(192, 52);
			this->SchoolyearTextBox->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->SchoolyearTextBox->Name = L"SchoolyearTextBox";
			this->SchoolyearTextBox->ReadOnly = true;
			this->SchoolyearTextBox->Size = System::Drawing::Size(314, 39);
			this->SchoolyearTextBox->TabIndex = 98;
			this->SchoolyearTextBox->TextChanged += gcnew System::EventHandler(this, &ImpNewStuCSV::SchoolyearTextBox_TextChanged);
			// 
			// SchoolyearLab
			// 
			this->SchoolyearLab->AutoSize = true;
			this->SchoolyearLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SchoolyearLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->SchoolyearLab->Location = System::Drawing::Point(44, 53);
			this->SchoolyearLab->Margin = System::Windows::Forms::Padding(3);
			this->SchoolyearLab->Name = L"SchoolyearLab";
			this->SchoolyearLab->Padding = System::Windows::Forms::Padding(3);
			this->SchoolyearLab->Size = System::Drawing::Size(152, 38);
			this->SchoolyearLab->TabIndex = 99;
			this->SchoolyearLab->Text = L"School year";
			// 
			// ClassLab
			// 
			this->ClassLab->AutoSize = true;
			this->ClassLab->BackColor = System::Drawing::Color::Transparent;
			this->ClassLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClassLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ClassLab->Location = System::Drawing::Point(44, 110);
			this->ClassLab->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->ClassLab->Name = L"ClassLab";
			this->ClassLab->Size = System::Drawing::Size(71, 32);
			this->ClassLab->TabIndex = 104;
			this->ClassLab->Text = L"Class";
			// 
			// PathLab
			// 
			this->PathLab->AutoSize = true;
			this->PathLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PathLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->PathLab->Location = System::Drawing::Point(44, 165);
			this->PathLab->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->PathLab->Name = L"PathLab";
			this->PathLab->Size = System::Drawing::Size(189, 32);
			this->PathLab->TabIndex = 110;
			this->PathLab->Text = L"Path of CSV file";
			// 
			// PathTextBox
			// 
			this->PathTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->PathTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PathTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->PathTextBox->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->PathTextBox->Location = System::Drawing::Point(192, 163);
			this->PathTextBox->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->PathTextBox->Name = L"PathTextBox";
			this->PathTextBox->Size = System::Drawing::Size(441, 34);
			this->PathTextBox->TabIndex = 113;
			// 
			// BrowseBtn
			// 
			this->BrowseBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BrowseBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BrowseBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->BrowseBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->BrowseBtn->Location = System::Drawing::Point(572, 208);
			this->BrowseBtn->Margin = System::Windows::Forms::Padding(5, 3, 5, 3);
			this->BrowseBtn->Name = L"BrowseBtn";
			this->BrowseBtn->Size = System::Drawing::Size(100, 34);
			this->BrowseBtn->TabIndex = 114;
			this->BrowseBtn->Text = L"Browse";
			this->BrowseBtn->UseVisualStyleBackColor = false;
			this->BrowseBtn->Click += gcnew System::EventHandler(this, &ImpNewStuCSV::BrowseBtn_Click);
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
			this->EnterBtn->Location = System::Drawing::Point(221, 262);
			this->EnterBtn->Name = L"EnterBtn";
			this->EnterBtn->Size = System::Drawing::Size(203, 41);
			this->EnterBtn->TabIndex = 115;
			this->EnterBtn->Text = L"Enter";
			this->EnterBtn->UseVisualStyleBackColor = false;
			this->EnterBtn->Click += gcnew System::EventHandler(this, &ImpNewStuCSV::EnterBtn_Click);
			// 
			// ClassComboBox
			// 
			this->ClassComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClassComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->ClassComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClassComboBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->ClassComboBox->ForeColor = System::Drawing::Color::FloralWhite;
			this->ClassComboBox->IntegralHeight = false;
			this->ClassComboBox->Location = System::Drawing::Point(192, 110);
			this->ClassComboBox->Name = L"ClassComboBox";
			this->ClassComboBox->Size = System::Drawing::Size(314, 36);
			this->ClassComboBox->TabIndex = 117;
			// 
			// WorkPanel
			// 
			this->WorkPanel->AutoSize = true;
			this->WorkPanel->Controls->Add(this->ClassComboBox);
			this->WorkPanel->Controls->Add(this->EnterBtn);
			this->WorkPanel->Controls->Add(this->BrowseBtn);
			this->WorkPanel->Controls->Add(this->PathTextBox);
			this->WorkPanel->Controls->Add(this->PathLab);
			this->WorkPanel->Controls->Add(this->ClassLab);
			this->WorkPanel->Controls->Add(this->SchoolyearLab);
			this->WorkPanel->Controls->Add(this->SchoolyearTextBox);
			this->WorkPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->WorkPanel->Location = System::Drawing::Point(0, 120);
			this->WorkPanel->Name = L"WorkPanel";
			this->WorkPanel->Size = System::Drawing::Size(838, 306);
			this->WorkPanel->TabIndex = 118;
			// 
			// ImpNewStuCSV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(838, 500);
			this->ControlBox = false;
			this->Controls->Add(this->WorkPanel);
			this->Controls->Add(this->StartPanel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"ImpNewStuCSV";
			this->Text = L"ImpNewStuCSV";
			this->Load += gcnew System::EventHandler(this, &ImpNewStuCSV::ImpNewStuCSV_Load);
			this->StartPanel->ResumeLayout(false);
			this->StartPanel->PerformLayout();
			this->WorkPanel->ResumeLayout(false);
			this->WorkPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ImpNewStuCSV_Load(System::Object^ sender, System::EventArgs^ e) {
		SchoolyearTextBox->Text = (g_currentSchoolYear->begin) + "_" + (g_currentSchoolYear->end);
		SchoolyearTextBox->ReadOnly = true;
		DLL<CLASS>* cur = L_Class.head;
		while (cur)
		{
			this->ClassComboBox->Items->Add(msclr::interop::marshal_as<String^>(cur->data.convertToString()));
			cur = cur->next;
		}
	}
	private: System::Void EnterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->ClassComboBox->Text == "" || this->PathTextBox->Text == "")
		{
			MessageBox::Show("Invalid!", "Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
			return;
		}
		DLL<CLASS>* cur = L_Class.head;
		while (cur)
		{
			if (cur->data.convertToString() == msclr::interop::marshal_as<string>(ClassComboBox->Text))
				break;
			cur = cur->next;
		}
		if (!cur)
		{
			MessageBox::Show("Invalid Class!");
			return;
		}
		// from file csv: username, password, studentID, firstname, lastname, gender, (DoB: hasn't been set up yet), socialID
		ifstream inp(msclr::interop::marshal_as<string>(PathTextBox->Text));
		if (!inp.is_open())
		{
			MessageBox::Show("File does not exist!");
			return;
		}
		// your code here
		DLL<STUDENT*>* tmp = nullptr, *stu;
		USER user;
		string skip1stLine;
		getline(inp, skip1stLine);
		while (!inp.eof()) {
			// log in info
			getline(inp, user.username, ',');
			getline(inp, user.password, ',');
			////////////////////////
			string s;
			//std::getline(inp, s, ',');
			//stu->data->No = std::stoi(s, nullptr);
			std::getline(inp, s, ',');
			DLL<STUDENT*>* findStu = L_Student.head;
			while (findStu)
			{
				if (findStu->data->studentID == s)
				{
					std::getline(inp, s, '\n');
					break;
				}
				findStu = findStu->next;
			}
			if (!findStu)
			{
				stu = new DLL<STUDENT*>;
				stu->data = new STUDENT;
				stu->data->user = user;
				stu->data->studentID = s;
				std::getline(inp, stu->data->firstname, ',');
				std::getline(inp, stu->data->lastname, ',');
				std::getline(inp, s, ',');
				stu->data->gender = stoi(s); // 0 ~ male ; 1 ~ female
				std::getline(inp, s, ',');
				stu->data->DoB = getDate(s);
				std::getline(inp, stu->data->socialID);
				if (!L_Student.head)
					L_Student.head = stu;
				stu->prev = tmp;
				tmp->next = stu;
				tmp = stu;
				cur->data.student.tail = L_Student.tail = stu;
				if (!cur->data.student.head)
					cur->data.student.head = stu;
				stu = stu->next;
			}
		}
		inp.close();
		/*if (cur->data.student.head)
		{
			System::Windows::Forms::DialogResult res = MessageBox::Show("This class already has students' data. Are you sure you want to change it?", "Notification", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
			if (res == System::Windows::Forms::DialogResult::No)
				return;
		}*/

	}
	private: System::Void BrowseBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "C:\\";
		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->Title = "Select a File";
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filename = openFileDialog1->FileName;
			PathTextBox->Text = filename;
		}
	}
	private: System::Void btn_import_Click(System::Object^ sender, System::EventArgs^ e) {
		string filename = msclr::interop::marshal_as<std::string>(PathTextBox->Text);
		
		MessageBox::Show("Import Successfully!", "Notification", MessageBoxButtons::OK);
	}
	/*private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}*/
	private: System::Void ClassTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
private: System::Void ImpNewStuCSVLab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void SchoolyearTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}