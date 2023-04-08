//#pragma once
//#include "Login.h"
//
//namespace CMS {
//
//	using namespace System;
//	using namespace System::ComponentModel;
//	using namespace System::Collections;
//	using namespace System::Windows::Forms;
//	using namespace System::Data;
//	using namespace System::Drawing;
//
//	/// <summary>
//	/// Summary for My22
//	/// </summary>
//	public ref class My22 : public System::Windows::Forms::Form
//	{
//	public:
//		My22(void)
//		{
//			InitializeComponent();
//			//
//			//TODO: Add the constructor code here
//			//
//		}
//
//	protected:
//		/// <summary>
//		/// Clean up any resources being used.
//		/// </summary>
//		~My22()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//	private: System::Windows::Forms::Label^ label1;
//	private: System::Windows::Forms::TextBox^ txt_studentID;
//	private: System::Windows::Forms::TextBox^ txt_otherMark;
//
//
//	protected:
//
//
//	private: System::Windows::Forms::Label^ label2;
//	private: System::Windows::Forms::TextBox^ txt_midtermMark;
//
//	private: System::Windows::Forms::Label^ label3;
//	private: System::Windows::Forms::TextBox^ txt_finalMark;
//
//	private: System::Windows::Forms::Label^ label4;
//	private: System::Windows::Forms::TextBox^ txt_totalMark;
//
//	private: System::Windows::Forms::Label^ label5;
//	private: System::Windows::Forms::TextBox^ rateOther;
//
//	private: System::Windows::Forms::Label^ label6;
//	private: System::Windows::Forms::TextBox^ rateMid;
//
//	private: System::Windows::Forms::Label^ label7;
//	private: System::Windows::Forms::TextBox^ rateFinal;
//
//	private: System::Windows::Forms::Label^ label8;
//	private: System::Windows::Forms::Button^ button1;
//	private: System::Windows::Forms::Button^ button2;
//	private: System::Windows::Forms::Label^ label9;
//	private: System::Windows::Forms::Label^ label10;
//	private: System::Windows::Forms::Label^ label11;
//	private: System::Windows::Forms::Label^ label12;
//	private: System::Windows::Forms::TextBox^ textBox1;
//	private: System::Windows::Forms::Label^ label13;
//
//	private:
//		/// <summary>
//		/// Required designer variable.
//		/// </summary>
//		System::ComponentModel::Container ^components;
//
//#pragma region Windows Form Designer generated code
//		/// <summary>
//		/// Required method for Designer support - do not modify
//		/// the contents of this method with the code editor.
//		/// </summary>
//		void InitializeComponent(void)
//		{
//			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(My22::typeid));
//			this->label1 = (gcnew System::Windows::Forms::Label());
//			this->txt_studentID = (gcnew System::Windows::Forms::TextBox());
//			this->txt_otherMark = (gcnew System::Windows::Forms::TextBox());
//			this->label2 = (gcnew System::Windows::Forms::Label());
//			this->txt_midtermMark = (gcnew System::Windows::Forms::TextBox());
//			this->label3 = (gcnew System::Windows::Forms::Label());
//			this->txt_finalMark = (gcnew System::Windows::Forms::TextBox());
//			this->label4 = (gcnew System::Windows::Forms::Label());
//			this->txt_totalMark = (gcnew System::Windows::Forms::TextBox());
//			this->label5 = (gcnew System::Windows::Forms::Label());
//			this->rateOther = (gcnew System::Windows::Forms::TextBox());
//			this->label6 = (gcnew System::Windows::Forms::Label());
//			this->rateMid = (gcnew System::Windows::Forms::TextBox());
//			this->label7 = (gcnew System::Windows::Forms::Label());
//			this->rateFinal = (gcnew System::Windows::Forms::TextBox());
//			this->label8 = (gcnew System::Windows::Forms::Label());
//			this->button1 = (gcnew System::Windows::Forms::Button());
//			this->button2 = (gcnew System::Windows::Forms::Button());
//			this->label9 = (gcnew System::Windows::Forms::Label());
//			this->label10 = (gcnew System::Windows::Forms::Label());
//			this->label11 = (gcnew System::Windows::Forms::Label());
//			this->label12 = (gcnew System::Windows::Forms::Label());
//			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
//			this->label13 = (gcnew System::Windows::Forms::Label());
//			this->SuspendLayout();
//			// 
//			// label1
//			// 
//			this->label1->AutoSize = true;
//			this->label1->Location = System::Drawing::Point(98, 149);
//			this->label1->Name = L"label1";
//			this->label1->Size = System::Drawing::Size(87, 20);
//			this->label1->TabIndex = 0;
//			this->label1->Text = L"Student ID";
//			// 
//			// txt_studentID
//			// 
//			this->txt_studentID->Location = System::Drawing::Point(215, 143);
//			this->txt_studentID->Name = L"txt_studentID";
//			this->txt_studentID->Size = System::Drawing::Size(327, 26);
//			this->txt_studentID->TabIndex = 1;
//			this->txt_studentID->Text = L"0.0";
//			this->txt_studentID->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// txt_otherMark
//			// 
//			this->txt_otherMark->Location = System::Drawing::Point(215, 198);
//			this->txt_otherMark->MaxLength = 10;
//			this->txt_otherMark->Name = L"txt_otherMark";
//			this->txt_otherMark->Size = System::Drawing::Size(327, 26);
//			this->txt_otherMark->TabIndex = 3;
//			this->txt_otherMark->Text = L"0.0";
//			this->txt_otherMark->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label2
//			// 
//			this->label2->AutoSize = true;
//			this->label2->Location = System::Drawing::Point(98, 204);
//			this->label2->Name = L"label2";
//			this->label2->Size = System::Drawing::Size(88, 20);
//			this->label2->TabIndex = 2;
//			this->label2->Text = L"Other Mark";
//			// 
//			// txt_midtermMark
//			// 
//			this->txt_midtermMark->Location = System::Drawing::Point(215, 242);
//			this->txt_midtermMark->MaxLength = 10;
//			this->txt_midtermMark->Name = L"txt_midtermMark";
//			this->txt_midtermMark->Size = System::Drawing::Size(327, 26);
//			this->txt_midtermMark->TabIndex = 5;
//			this->txt_midtermMark->Text = L"0.0";
//			this->txt_midtermMark->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label3
//			// 
//			this->label3->AutoSize = true;
//			this->label3->Location = System::Drawing::Point(98, 248);
//			this->label3->Name = L"label3";
//			this->label3->Size = System::Drawing::Size(110, 20);
//			this->label3->TabIndex = 4;
//			this->label3->Text = L"Mid-term Mark";
//			// 
//			// txt_finalMark
//			// 
//			this->txt_finalMark->Location = System::Drawing::Point(215, 286);
//			this->txt_finalMark->MaxLength = 10;
//			this->txt_finalMark->Name = L"txt_finalMark";
//			this->txt_finalMark->Size = System::Drawing::Size(327, 26);
//			this->txt_finalMark->TabIndex = 7;
//			this->txt_finalMark->Text = L"0.0";
//			this->txt_finalMark->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label4
//			// 
//			this->label4->AutoSize = true;
//			this->label4->Location = System::Drawing::Point(98, 292);
//			this->label4->Name = L"label4";
//			this->label4->Size = System::Drawing::Size(82, 20);
//			this->label4->TabIndex = 6;
//			this->label4->Text = L"Final Mark";
//			// 
//			// txt_totalMark
//			// 
//			this->txt_totalMark->Location = System::Drawing::Point(215, 377);
//			this->txt_totalMark->MaxLength = 10;
//			this->txt_totalMark->Name = L"txt_totalMark";
//			this->txt_totalMark->ReadOnly = true;
//			this->txt_totalMark->Size = System::Drawing::Size(327, 26);
//			this->txt_totalMark->TabIndex = 9;
//			this->txt_totalMark->Text = L"0.0";
//			this->txt_totalMark->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label5
//			// 
//			this->label5->AutoSize = true;
//			this->label5->Location = System::Drawing::Point(98, 383);
//			this->label5->Name = L"label5";
//			this->label5->Size = System::Drawing::Size(83, 20);
//			this->label5->TabIndex = 8;
//			this->label5->Text = L"Total Mark";
//			// 
//			// rateOther
//			// 
//			this->rateOther->Location = System::Drawing::Point(692, 198);
//			this->rateOther->MaxLength = 10;
//			this->rateOther->Name = L"rateOther";
//			this->rateOther->Size = System::Drawing::Size(55, 26);
//			this->rateOther->TabIndex = 11;
//			this->rateOther->Text = L"0.3";
//			this->rateOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label6
//			// 
//			this->label6->AutoSize = true;
//			this->label6->Location = System::Drawing::Point(642, 202);
//			this->label6->Name = L"label6";
//			this->label6->Size = System::Drawing::Size(48, 20);
//			this->label6->TabIndex = 10;
//			this->label6->Text = L"Rate:";
//			// 
//			// rateMid
//			// 
//			this->rateMid->Location = System::Drawing::Point(692, 242);
//			this->rateMid->MaxLength = 10;
//			this->rateMid->Name = L"rateMid";
//			this->rateMid->Size = System::Drawing::Size(55, 26);
//			this->rateMid->TabIndex = 13;
//			this->rateMid->Text = L"0.3";
//			this->rateMid->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label7
//			// 
//			this->label7->AutoSize = true;
//			this->label7->Location = System::Drawing::Point(642, 246);
//			this->label7->Name = L"label7";
//			this->label7->Size = System::Drawing::Size(48, 20);
//			this->label7->TabIndex = 12;
//			this->label7->Text = L"Rate:";
//			// 
//			// rateFinal
//			// 
//			this->rateFinal->Location = System::Drawing::Point(692, 284);
//			this->rateFinal->MaxLength = 10;
//			this->rateFinal->Name = L"rateFinal";
//			this->rateFinal->Size = System::Drawing::Size(55, 26);
//			this->rateFinal->TabIndex = 15;
//			this->rateFinal->Text = L"0.4";
//			this->rateFinal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label8
//			// 
//			this->label8->AutoSize = true;
//			this->label8->Location = System::Drawing::Point(642, 288);
//			this->label8->Name = L"label8";
//			this->label8->Size = System::Drawing::Size(48, 20);
//			this->label8->TabIndex = 14;
//			this->label8->Text = L"Rate:";
//			// 
//			// button1
//			// 
//			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->button1->Location = System::Drawing::Point(263, 422);
//			this->button1->Name = L"button1";
//			this->button1->Size = System::Drawing::Size(102, 33);
//			this->button1->TabIndex = 16;
//			this->button1->Text = L"Update";
//			this->button1->UseVisualStyleBackColor = true;
//			// 
//			// button2
//			// 
//			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
//				static_cast<System::Byte>(0)));
//			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
//			this->button2->Location = System::Drawing::Point(389, 422);
//			this->button2->Name = L"button2";
//			this->button2->Size = System::Drawing::Size(102, 33);
//			this->button2->TabIndex = 17;
//			this->button2->Text = L"Back";
//			this->button2->UseVisualStyleBackColor = true;
//			this->button2->Click += gcnew System::EventHandler(this, &My22::button2_Click);
//			// 
//			// label9
//			// 
//			this->label9->AutoSize = true;
//			this->label9->Location = System::Drawing::Point(748, 201);
//			this->label9->Name = L"label9";
//			this->label9->Size = System::Drawing::Size(39, 20);
//			this->label9->TabIndex = 18;
//			this->label9->Text = L"/ 1.0";
//			// 
//			// label10
//			// 
//			this->label10->AutoSize = true;
//			this->label10->Location = System::Drawing::Point(748, 245);
//			this->label10->Name = L"label10";
//			this->label10->Size = System::Drawing::Size(39, 20);
//			this->label10->TabIndex = 19;
//			this->label10->Text = L"/ 1.0";
//			// 
//			// label11
//			// 
//			this->label11->AutoSize = true;
//			this->label11->Location = System::Drawing::Point(748, 287);
//			this->label11->Name = L"label11";
//			this->label11->Size = System::Drawing::Size(39, 20);
//			this->label11->TabIndex = 20;
//			this->label11->Text = L"/ 1.0";
//			// 
//			// label12
//			// 
//			this->label12->AutoSize = true;
//			this->label12->Location = System::Drawing::Point(748, 379);
//			this->label12->Name = L"label12";
//			this->label12->Size = System::Drawing::Size(39, 20);
//			this->label12->TabIndex = 23;
//			this->label12->Text = L"/ 1.0";
//			// 
//			// textBox1
//			// 
//			this->textBox1->Location = System::Drawing::Point(692, 376);
//			this->textBox1->MaxLength = 10;
//			this->textBox1->Name = L"textBox1";
//			this->textBox1->Size = System::Drawing::Size(55, 26);
//			this->textBox1->TabIndex = 22;
//			this->textBox1->Text = L"1.0";
//			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
//			// 
//			// label13
//			// 
//			this->label13->AutoSize = true;
//			this->label13->Location = System::Drawing::Point(642, 380);
//			this->label13->Name = L"label13";
//			this->label13->Size = System::Drawing::Size(48, 20);
//			this->label13->TabIndex = 21;
//			this->label13->Text = L"Rate:";
//			// 
//			// My22
//			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(848, 508);
//			this->ControlBox = false;
//			this->Controls->Add(this->label12);
//			this->Controls->Add(this->textBox1);
//			this->Controls->Add(this->label13);
//			this->Controls->Add(this->label11);
//			this->Controls->Add(this->label10);
//			this->Controls->Add(this->label9);
//			this->Controls->Add(this->button2);
//			this->Controls->Add(this->button1);
//			this->Controls->Add(this->rateFinal);
//			this->Controls->Add(this->label8);
//			this->Controls->Add(this->rateMid);
//			this->Controls->Add(this->label7);
//			this->Controls->Add(this->rateOther);
//			this->Controls->Add(this->label6);
//			this->Controls->Add(this->txt_totalMark);
//			this->Controls->Add(this->label5);
//			this->Controls->Add(this->txt_finalMark);
//			this->Controls->Add(this->label4);
//			this->Controls->Add(this->txt_midtermMark);
//			this->Controls->Add(this->label3);
//			this->Controls->Add(this->txt_otherMark);
//			this->Controls->Add(this->label2);
//			this->Controls->Add(this->txt_studentID);
//			this->Controls->Add(this->label1);
//			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
//			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
//			this->MaximizeBox = false;
//			this->MinimizeBox = false;
//			this->Name = L"My22";
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//#pragma endregion
//	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
//		this->Close();
//		CMS::Login^ form = gcnew CMS::Login();
//		form->Show();
//	}
//};
//}
