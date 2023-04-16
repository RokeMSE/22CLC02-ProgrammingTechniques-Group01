#pragma once
#include<string>
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_yourclass
			// 
			this->txt_yourclass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_yourclass->Location = System::Drawing::Point(57, 123);
			this->txt_yourclass->Name = L"txt_yourclass";
			this->txt_yourclass->Size = System::Drawing::Size(187, 27);
			this->txt_yourclass->TabIndex = 1;
			// 
			// lbl_yourclass
			// 
			this->lbl_yourclass->AutoSize = true;
			this->lbl_yourclass->Location = System::Drawing::Point(54, 104);
			this->lbl_yourclass->Name = L"lbl_yourclass";
			this->lbl_yourclass->Size = System::Drawing::Size(127, 19);
			this->lbl_yourclass->TabIndex = 2;
			this->lbl_yourclass->Text = L"Enter your class";
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btn_search->Location = System::Drawing::Point(261, 122);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(75, 23);
			this->btn_search->TabIndex = 3;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_Search_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 194);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1193, 517);
			this->listView1->TabIndex = 4;
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(491, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"List Student of Class";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(860, 37);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(75, 33);
			this->btn_back->TabIndex = 6;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_back_Click);
			// 
			// ViewAListInAClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1193, 711);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->lbl_yourclass);
			this->Controls->Add(this->txt_yourclass);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewAListInAClasses";
			this->Text = L"ViewAListInAClasses";
			this->Load += gcnew System::EventHandler(this, &ViewAListInAClasses::ViewAListInAClasses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		ListViewItem^ item;
		GROUP1::DLL<GROUP1::STUDENT*>* curStudent = L_Student.head;
		System::String^ className = this->txt_yourclass->Text;
		while (curStudent) {
			if (curStudent->data->Class->convertToString() == msclr::interop::marshal_as<std::string >(className)) {
				item = gcnew ListViewItem();
				item->Text = gcnew System::String(std::to_string(curStudent->data->No).c_str());
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


	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewAListInAClasses_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
