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
	/// Summary for MenuStudent1
	/// </summary>
	public ref class MenuStudent : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		MenuStudent(System::Windows::Forms::Form^ form)
		{
			InitializeComponent();
			this->sourceForm = form;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MenuStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(376, 58);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View my courses";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuStudent::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(45, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(376, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(45, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(376, 58);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(45, 269);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(376, 58);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(45, 335);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(376, 58);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(45, 399);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(376, 58);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(478, 399);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(376, 58);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(478, 141);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(376, 58);
			this->button8->TabIndex = 7;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(478, 269);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(376, 58);
			this->button9->TabIndex = 8;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(478, 77);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(376, 58);
			this->button10->TabIndex = 9;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(478, 335);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(376, 58);
			this->button11->TabIndex = 10;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(478, 205);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(376, 58);
			this->button12->TabIndex = 11;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(45, 141);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(376, 58);
			this->button13->TabIndex = 12;
			this->button13->Text = L"View classes";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(369, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 39);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Choose 1";
			// 
			// MenuStudent1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 590);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MenuStudent";
			this->Text = L"MenuStudent";
			this->Load += gcnew System::EventHandler(this, &MenuStudent::MenuStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MenuStudent_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}