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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ txt_yourclass;

	private: System::Windows::Forms::Label^ lbl_yourclass;
	private: System::Windows::Forms::Button^ btn_search;


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->txt_yourclass = (gcnew System::Windows::Forms::TextBox());
			this->lbl_yourclass = (gcnew System::Windows::Forms::Label());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(0, 150);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1126, 500);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewAListInAClasses::listBox1_SelectedIndexChanged);
			// 
			// txt_yourclass
			// 
			// 
			this-> txt_yourclass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_yourclass->Location = System::Drawing::Point(274, 36);
			this->txt_yourclass->Name = L"txt_yourclass";
			this->txt_yourclass->Size = System::Drawing::Size(187, 22);
			this->txt_yourclass->TabIndex = 1;
			//this->txt_yourclass->TextChanged += gcnew System::EventHandler(this, &ViewAListInAClasses::textBox1_TextChanged);
			// 
			// lbl_yourclass
			// 
			this->lbl_yourclass->AutoSize = true;
			this->lbl_yourclass->Location = System::Drawing::Point(271, 17);
			this->lbl_yourclass->Name = L"lbl_yourclass";
			this->lbl_yourclass->Size = System::Drawing::Size(102, 16);
			this->lbl_yourclass->TabIndex = 2;
			this->lbl_yourclass->Text = L"Enter your class";
			this->lbl_yourclass->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::label1_Click);
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this-> btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btn_search->Location = System::Drawing::Point(478, 35);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(75, 23);
			this->btn_search->TabIndex = 3;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->lbl_yourclass->Click += gcnew System::EventHandler(this, &ViewAListInAClasses::btn_Search_Click);
	
			//form->btnPrint_ClicK();
			// 
			// ViewAListInAClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1126, 650);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->lbl_yourclass);
			this->Controls->Add(this->txt_yourclass);
			this->Controls->Add(this->listBox1);
			this->Name = L"ViewAListInAClasses";
			this->Text = L"ViewAListInAClasses";
			this->Load += gcnew System::EventHandler(this, &ViewAListInAClasses::ViewAListInAClasses_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {
		//GROUP1::DLL<GROUP1::STUDENT*>*temp= new GROUP1::DLL < GROUP1::STUDENT*>;
		listBox1->Items->Clear();
		GROUP1::DLL<GROUP1::STUDENT*>* curStudent = L_Student.head;
		//System::String();
		// = msclr::interop::marshal_as<std::string>(txt_yourclass->Text);
		//this->txt_yourclass->Text = L"";
		System::String^ className = this->txt_yourclass->Text;
		while (curStudent) {
			if (curStudent->data->Class->convertToString() == msclr::interop::marshal_as<std::string >(className)) {

				// Hiển thị thông tin lên ListBox
				//listBox1->Items->Add(curClass->data.K + ", " + curClass->data.No + ", " + curClass->data.program->to_string() + "," + curClass->data.yearIn);
				//listBox1->Items->Add(curClass->data.program);

				listBox1->Items->Add(curStudent->data->No + ", " + gcnew System::String((curStudent->data->studentID).c_str()) + "," + gcnew System::String((curStudent->data->lastname).c_str()) + "," + gcnew System::String((curStudent->data->firstname).c_str()) + "," + curStudent->data->gender + ","
					+ gcnew System::String(DateToString(curStudent->data->DoB).c_str()) + "," + gcnew System::String((curStudent->data->socialID).c_str()) + "," + gcnew System::String((curStudent->data->Class->convertToString()).c_str()));
				//convertToProgram
				curStudent = curStudent->next;
				//}

			}
			else {
				curStudent = curStudent->next;
			}
		}
	}
		  //private:System::Void btn_Search_Click(System::Object^ sender, System::EventArgs^ e) {

			 // ViewAListInAClasses^ form = gcnew CMS::ViewAListInAClasses(this);

			 // btnPrint_ClicK(sender, e);
			 //// this->Hide();
			 //// form->btnPrint_ClicK(sender, e);
			 ////// MessageBox::Show("Successfully logged in!");
			 ////form->Show();
			 // //form->ShowDialog();
			 // 
		  //}
				
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ViewAListInAClasses_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
