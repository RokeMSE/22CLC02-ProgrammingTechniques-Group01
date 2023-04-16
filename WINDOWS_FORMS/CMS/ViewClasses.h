#pragma once
#include<string>
#include "header.h"
//

//#include "MenuStaff.h"
namespace CMS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewClasses
	/// </summary>
	public ref class ViewClasses : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ViewClasses(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();

			this->sourceForm = form;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewClasses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ lbl_title;


	protected:

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 116);
			this->listView1->Margin = System::Windows::Forms::Padding(4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(966, 601);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewClasses::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Kh�a";
			this->columnHeader1->Width = 249;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Program";
			this->columnHeader2->Width = 254;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"No";
			this->columnHeader3->Width = 176;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"YearIn";
			this->columnHeader4->Width = 191;
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(822, 25);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(94, 35);
			this->btn_back->TabIndex = 1;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &ViewClasses::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->BackColor = System::Drawing::Color::Aquamarine;
			this->lbl_title->ForeColor = System::Drawing::Color::White;
			this->lbl_title->Location = System::Drawing::Point(355, 25);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(116, 25);
			this->lbl_title->TabIndex = 5;
			this->lbl_title->Text = L"List of Classes";
			this->lbl_title->Click += gcnew System::EventHandler(this, &ViewClasses::lbl_title_Click_1);
			// 
			// ViewClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(966, 717);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->listView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(513, 121);
			this->Margin = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->Name = L"ViewClasses";
			this->Text = L"ViewClasses";
			this->Load += gcnew System::EventHandler(this, &ViewClasses::ViewClasses_Load);
			this->ResumeLayout(false);

		}
		//public: void btnprint_Click(System::Object^ sender, System::EventArgs^ e);

#pragma endregion
	public: System::Void btnPrint_ClicK(System::Object^ sender, System::EventArgs^ e) {

		GROUP1::DLL<GROUP1::CLASS>* curClass = L_Class.head;
		ListViewItem^ item;
		while (curClass) {
			item = gcnew ListViewItem();
			item->Text = gcnew System::String(std::to_string(curClass->data.K).c_str());
			item->SubItems->Add(gcnew System::String(std::to_string(curClass->data.No).c_str()));
			item->SubItems->Add(gcnew System::String(convertFromProgram(curClass->data.program).c_str()));
			item->SubItems->Add(gcnew System::String(std::to_string(curClass->data.yearIn).c_str()));
			listView1->Items->Add(item);
			curClass = curClass->next;

		}
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewClasses_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();
		this->sourceForm->Show();
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lbl_title_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
