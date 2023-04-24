#pragma once
#include<string>
#include <map>
#include "header.h"
#include "msclr/marshal_cppstd.h"
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
	/// Summary for ViewAListInAClasses
	/// </summary>
	public ref class ViewAListInAClasses : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewAListInAClasses(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->sourceForm = form;
			//this->btn_search->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_Search_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewAListInAClasses()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ lbl_yourclass;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ lbl_title;












	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DomainUpDown^ chooseClass;
	private: System::Windows::Forms::Button^ searchButton;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewAListInAClasses::typeid));
			this->lbl_yourclass = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chooseClass = (gcnew System::Windows::Forms::DomainUpDown());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_yourclass
			// 
			this->lbl_yourclass->AutoSize = true;
			this->lbl_yourclass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->lbl_yourclass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_yourclass->Location = System::Drawing::Point(90, 85);
			this->lbl_yourclass->Name = L"lbl_yourclass";
			this->lbl_yourclass->Size = System::Drawing::Size(129, 21);
			this->lbl_yourclass->TabIndex = 2;
			this->lbl_yourclass->Text = L"Enter your class";
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(54, 187);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1139, 524);
			this->listView1->TabIndex = 76;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->lbl_title->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(440, 19);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(477, 60);
			this->lbl_title->TabIndex = 5;
			this->lbl_title->Text = L"List Student of Class";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel1->Controls->Add(this->account);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(4);
			this->panel1->Size = System::Drawing::Size(60, 711);
			this->panel1->TabIndex = 132;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 655);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(52, 52);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 102;
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
			this->button1->Padding = System::Windows::Forms::Padding(4);
			this->button1->Size = System::Drawing::Size(52, 52);
			this->button1->TabIndex = 57;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_back_Click);
			// 
			// chooseClass
			// 
			this->chooseClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->chooseClass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->chooseClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->chooseClass->Location = System::Drawing::Point(94, 127);
			this->chooseClass->Name = L"chooseClass";
			this->chooseClass->Size = System::Drawing::Size(158, 33);
			this->chooseClass->TabIndex = 133;
			this->chooseClass->Text = L"Choose Class";
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->searchButton->Location = System::Drawing::Point(334, 127);
			this->searchButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(92, 31);
			this->searchButton->TabIndex = 134;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::searchButton_Click);
			// 
			// ViewAListInAClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1193, 711);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->chooseClass);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->lbl_yourclass);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewAListInAClasses";
			this->Text = L"ViewAListInAClasses";
			this->Load += gcnew System::EventHandler(this, &ViewAListInAClasses::ViewAListInAClasses_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		//	ListViewItem^ item;
		//	GROUP1::DLL<GROUP1::STUDENT*>* curStudent = L_Student.head;
		//	//System::String^ className = this->txt_yourclass->Text;
		//	GROUP1::DLL<GROUP1::CLASS>* cur = L_Class.head;
		//	bool found = false;
		//	for (int i = 0; i < checkedListBox->Items->Count; i++) {
		//		if (msclr::interop::marshal_as<std::string >(className) == msclr::interop::marshal_as<std::string>(checkedListBox->Items[i]->ToString())) {
		//			found = true;
		//			break;
		//		}
		//	}
		//	if (!found) {
		//		MessageBox::Show("Class does not exit!", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//		return;
		//	}

		//	while (curStudent) {
		//		if (curStudent->data->Class->convertToString() == msclr::interop::marshal_as<std::string >(className)) {
		//			item = gcnew ListViewItem();
		//			item->SubItems->Add(gcnew System::String((curStudent->data->studentID).c_str()));
		//			item->SubItems->Add(gcnew System::String((curStudent->data->firstname).c_str()));
		//			item->SubItems->Add(gcnew System::String(std::to_string(curStudent->data->gender).c_str()));
		//			item->SubItems->Add(gcnew System::String(DateToString(curStudent->data->DoB).c_str()));
		//			item->SubItems->Add(gcnew System::String((curStudent->data->socialID).c_str()));
		//			listView1->Items->Add(item);
		//		}
		//			curStudent = curStudent->next;
		//	}
		//}
	private: System::Void ViewAListInAClasses_Load(System::Object^ sender, System::EventArgs^ e) {
		if (!L_Class.head) {
			MessageBox::Show("There is no class the system");
			this->Close();
			this->sourceForm->Show();
			return;
		}
		DLL<CLASS>* Class = L_Class.head;
		while (Class)
		{
			this->chooseClass->Items->Add(msclr::interop::marshal_as<System::String^>(Class->data.convertToString()));
			Class = Class->next;
		}
		this->listView1->Columns->Add("No");
		this->listView1->Columns->Add("Student ID");
		this->listView1->Columns->Add("First name");
		this->listView1->Columns->Add("Last name");
		this->listView1->Columns->Add("Gender");
		this->listView1->Columns->Add("Date of birth");
		this->listView1->Columns->Add("Social ID");
		this->listView1->Columns[0]->Width = 80;
		this->listView1->Columns[1]->Width = 120;
		this->listView1->Columns[2]->Width = 150;
		this->listView1->Columns[3]->Width = 120;
		this->listView1->Columns[4]->Width = 80;
		this->listView1->Columns[5]->Width = 120;
		this->listView1->Columns[6]->Width = 120;
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		listView1->Clear();
		this->listView1->Columns->Add("No");
		this->listView1->Columns->Add("Student ID");
		this->listView1->Columns->Add("First name");
		this->listView1->Columns->Add("Last name");
		this->listView1->Columns->Add("Gender");
		this->listView1->Columns->Add("Date of birth");
		this->listView1->Columns->Add("Social ID");
		this->listView1->Columns[0]->Width = 80;
		this->listView1->Columns[1]->Width = 120;
		this->listView1->Columns[2]->Width = 150;
		this->listView1->Columns[3]->Width = 120;
		this->listView1->Columns[4]->Width = 80;
		this->listView1->Columns[5]->Width = 120;
		this->listView1->Columns[6]->Width = 120;
		ListViewItem^ item;
		DLL<CLASS>* Class = L_Class.head;
		System::String^ selectedClassName = chooseClass->Text;

		while (Class)
		{
			if (Class->data.convertToString() == msclr::interop::marshal_as<std::string>(selectedClassName))
				break;
			Class = Class->next;
		}
		int* count = new int;
		*count = 1;
		DLL<STUDENT*>* curStudent = Class->data.student.head;

		while (curStudent && curStudent->data->Class->convertToString() == msclr::interop::marshal_as<std::string>(selectedClassName)) {
			item = gcnew ListViewItem();
			ListViewItem^ item = listView1->Items->Add(msclr::interop::marshal_as<String^>(to_string(*count)));
			item->SubItems->Add(gcnew System::String((curStudent->data->studentID).c_str()));
			item->SubItems->Add(gcnew System::String((curStudent->data->firstname).c_str()));
			item->SubItems->Add(gcnew System::String((curStudent->data->lastname).c_str()));
			item->SubItems->Add(gcnew System::String(std::to_string(curStudent->data->gender).c_str()));
			item->SubItems->Add(gcnew System::String(DateToString(curStudent->data->DoB).c_str()));
			item->SubItems->Add(gcnew System::String((curStudent->data->socialID).c_str()));
			(*count)++;
			curStudent = curStudent->next;
		}
		*count = 0;
		delete count;
	}
};
}
