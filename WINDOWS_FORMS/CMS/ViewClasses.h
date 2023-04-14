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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:

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
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(0, 0);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(773, 604);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ViewClasses::listBox1_SelectedIndexChanged);
			// 
			// ViewClasses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 604);
			this->Controls->Add(this->listBox1);
			this->Name = L"ViewClasses";
			this->Text = L"ViewClasses";
			this->Load += gcnew System::EventHandler(this, &ViewClasses::ViewClasses_Load);
			this->ResumeLayout(false);

		}
	//public: void btnprint_Click(System::Object^ sender, System::EventArgs^ e);

#pragma endregion
	public: System::Void btnPrint_ClicK(System::Object^ sender, System::EventArgs^ e) {
		
		GROUP1::DLL<GROUP1::CLASS>* curClass = L_Class.head;
		while (curClass) {
			// Hiển thị thông tin lên ListBox
			//listBox1->Items->Add(curClass->data.K + ", " + curClass->data.No + ", " + curClass->data.program->to_string() + "," + curClass->data.yearIn);
			//listBox1->Items->Add(curClass->data.program);
			listBox1->Items->Add(curClass->data.K + ", " + curClass->data.No + "," + gcnew System::String(convertFromProgram(curClass->data.program).c_str()) + ","+ curClass->data.yearIn);
			curClass = curClass->next;
			//convertToProgram
		}
	}
		  // int a = 0;
		   //string b;
		   //string a;
		  
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewClasses_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
