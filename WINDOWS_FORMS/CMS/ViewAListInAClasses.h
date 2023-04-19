#pragma once
#include<string>
#include <map>
#include "header.h"
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
			this->btn_search->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_Search_Click);
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

	private: System::Windows::Forms::TextBox^ txt_yourclass;

	private: System::Windows::Forms::Label^ lbl_yourclass;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ lbl_title;



	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::Button^ btn_toggle;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox;
	private: System::Windows::Forms::Panel^ panel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewAListInAClasses::typeid));
			this->txt_yourclass = (gcnew System::Windows::Forms::TextBox());
			this->lbl_yourclass = (gcnew System::Windows::Forms::Label());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_toggle = (gcnew System::Windows::Forms::Button());
			this->checkedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_yourclass
			// 
			this->txt_yourclass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_yourclass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->txt_yourclass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_yourclass->Location = System::Drawing::Point(94, 110);
			this->txt_yourclass->MaxLength = 20;
			this->txt_yourclass->Name = L"txt_yourclass";
			this->txt_yourclass->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txt_yourclass->Size = System::Drawing::Size(218, 33);
			this->txt_yourclass->TabIndex = 1;
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
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_search->Location = System::Drawing::Point(386, 110);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(86, 33);
			this->btn_search->TabIndex = 75;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_Search_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
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
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewAListInAClasses::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No";
			this->columnHeader1->Width = 103;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Student ID";
			this->columnHeader2->Width = 138;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"FirstName";
			this->columnHeader3->Width = 314;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"LastName";
			this->columnHeader4->Width = 136;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Gender";
			this->columnHeader5->Width = 117;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Date of Birth";
			this->columnHeader6->Width = 197;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Social ID";
			this->columnHeader7->Width = 181;
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
			this->lbl_title->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::lbl_title_Click);
			// 
			// btn_toggle
			// 
			this->btn_toggle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_toggle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_toggle->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_toggle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_toggle->Location = System::Drawing::Point(924, 85);
			this->btn_toggle->Margin = System::Windows::Forms::Padding(4);
			this->btn_toggle->Name = L"btn_toggle";
			this->btn_toggle->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_toggle->Size = System::Drawing::Size(223, 52);
			this->btn_toggle->TabIndex = 77;
			this->btn_toggle->Text = L"List of classes ↓↓";
			this->btn_toggle->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_toggle->UseVisualStyleBackColor = false;
			this->btn_toggle->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_toggle_Click);
			// 
			// checkedListBox
			// 
			this->checkedListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->checkedListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkedListBox->FormattingEnabled = true;
			this->checkedListBox->Location = System::Drawing::Point(924, 134);
			this->checkedListBox->Margin = System::Windows::Forms::Padding(4);
			this->checkedListBox->Name = L"checkedListBox";
			this->checkedListBox->Size = System::Drawing::Size(223, 180);
			this->checkedListBox->TabIndex = 78;
			this->checkedListBox->ThreeDCheckBoxes = true;
			this->checkedListBox->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &ViewAListInAClasses::checkedListBox_ItemCheck);
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
			// ViewAListInAClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1193, 711);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->checkedListBox);
			this->Controls->Add(this->btn_toggle);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->lbl_yourclass);
			this->Controls->Add(this->txt_yourclass);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
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

	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ item;
		GROUP1::DLL<GROUP1::STUDENT*>* curStudent = L_Student.head;
		System::String^ className = this->txt_yourclass->Text;
		GROUP1::DLL<GROUP1::CLASS>* cur = L_Class.head;
		bool found = false;
		for (int i = 0; i < checkedListBox->Items->Count; i++) {
			if (msclr::interop::marshal_as<std::string >(className) == msclr::interop::marshal_as<std::string>(checkedListBox->Items[i]->ToString())) {
				found = true;
				break;
			}
		}
		if (!found) {
			MessageBox::Show("Class does not exit!", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		while (curStudent) {
			if (curStudent->data->Class->convertToString() == msclr::interop::marshal_as<std::string >(className)) {
				item = gcnew ListViewItem();
				item->SubItems->Add(gcnew System::String((curStudent->data->studentID).c_str()));
				item->SubItems->Add(gcnew System::String((curStudent->data->firstname).c_str()));
				item->SubItems->Add(gcnew System::String(std::to_string(curStudent->data->gender).c_str()));
				item->SubItems->Add(gcnew System::String(DateToString(curStudent->data->DoB).c_str()));
				item->SubItems->Add(gcnew System::String((curStudent->data->socialID).c_str()));
				listView1->Items->Add(item);
				curStudent = curStudent->next;

			}
			else {
				curStudent = curStudent->next;
			}
		}
	}


	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewAListInAClasses_Load(System::Object^ sender, System::EventArgs^ e) {
		GROUP1::DLL<GROUP1::CLASS>* cur = L_Class.head;
		while (cur) {

			checkedListBox->Items->Add(gcnew System::String(cur->data.convertToString().c_str()));
			cur = cur->next;
		}
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void checkedListBox_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		listView1->Items->Clear();
		ListViewItem^ item;
		GROUP1::DLL<GROUP1::STUDENT*>* curStudent = L_Student.head;
		System::String^ selectedClassName = checkedListBox->Items[e->Index]->ToString();
		for (int i = 0; i < checkedListBox->Items->Count; i++)
			if (i != e->Index)	checkedListBox->SetItemChecked(i, false);
		while (curStudent) {
			if (curStudent->data->Class->convertToString() == msclr::interop::marshal_as<std::string>(selectedClassName)) {
				item = gcnew ListViewItem();
				item->SubItems->Add(gcnew System::String((curStudent->data->studentID).c_str()));
				item->SubItems->Add(gcnew System::String((curStudent->data->firstname).c_str()));
				item->SubItems->Add(gcnew System::String((curStudent->data->lastname).c_str()));
				item->SubItems->Add(gcnew System::String(std::to_string(curStudent->data->gender).c_str()));
				item->SubItems->Add(gcnew System::String(DateToString(curStudent->data->DoB).c_str()));
				item->SubItems->Add(gcnew System::String((curStudent->data->socialID).c_str()));
				listView1->Items->Add(item);
				curStudent = curStudent->next;

			}
			else {
				curStudent = curStudent->next;
			}


		}
	}



	private: System::Void btn_toggle_Click(System::Object^ sender, System::EventArgs^ e) {
		checkedListBox->Visible = !checkedListBox->Visible;
		if (checkedListBox->Visible) btn_toggle->Text = L"List of classes ↓↓";
		else btn_toggle->Text = L"List of classes \u2192";
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
