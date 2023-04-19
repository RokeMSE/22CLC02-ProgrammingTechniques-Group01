#pragma once

#include "header.h"

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
	/// Summary for Create1NewSem
	/// </summary>
	public ref class Create1NewSem : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		Create1NewSem(System::Windows::Forms::Form^ form)
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
		~Create1NewSem()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::TextBox^ EndDateTextBox;


	private: System::Windows::Forms::TextBox^ StartDateTextBox;

	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::DomainUpDown^ ChooseSem;





	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_semester;
	private: System::Windows::Forms::Label^ lblStartDate;
	private: System::Windows::Forms::Label^ label23;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Create1NewSem::typeid));
			this->EndDateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StartDateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->ChooseSem = (gcnew System::Windows::Forms::DomainUpDown());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_semester = (gcnew System::Windows::Forms::Label());
			this->lblStartDate = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->pnl_title->SuspendLayout();
			this->SuspendLayout();
			// 
			// EndDateTextBox
			// 
			this->EndDateTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->EndDateTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->EndDateTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EndDateTextBox->Location = System::Drawing::Point(313, 340);
			this->EndDateTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->EndDateTextBox->Name = L"EndDateTextBox";
			this->EndDateTextBox->Size = System::Drawing::Size(283, 33);
			this->EndDateTextBox->TabIndex = 6;
			this->EndDateTextBox->Text = L"dd/mm/yyyy";
			this->EndDateTextBox->TextChanged += gcnew System::EventHandler(this, &Create1NewSem::EndDateTextBox_TextChanged);
			// 
			// StartDateTextBox
			// 
			this->StartDateTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->StartDateTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->StartDateTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->StartDateTextBox->Location = System::Drawing::Point(313, 240);
			this->StartDateTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->StartDateTextBox->Name = L"StartDateTextBox";
			this->StartDateTextBox->Size = System::Drawing::Size(283, 33);
			this->StartDateTextBox->TabIndex = 7;
			this->StartDateTextBox->Text = L"dd/mm/yyyy";
			this->StartDateTextBox->TextChanged += gcnew System::EventHandler(this, &Create1NewSem::StartDateTextBox_TextChanged);
			// 
			// createButton
			// 
			this->createButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->createButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->createButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->createButton->Location = System::Drawing::Point(759, 258);
			this->createButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(196, 61);
			this->createButton->TabIndex = 8;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = false;
			this->createButton->Click += gcnew System::EventHandler(this, &Create1NewSem::createButton_Click);
			// 
			// ChooseSem
			// 
			this->ChooseSem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ChooseSem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ChooseSem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ChooseSem->Location = System::Drawing::Point(313, 141);
			this->ChooseSem->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChooseSem->Name = L"ChooseSem";
			this->ChooseSem->Size = System::Drawing::Size(205, 35);
			this->ChooseSem->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel2->Controls->Add(this->account);
			this->panel2->Controls->Add(this->btn_back);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel2->Size = System::Drawing::Size(68, 611);
			this->panel2->TabIndex = 97;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 541);
			this->account->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(60, 65);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 58;
			this->account->TabStop = false;
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_back->Location = System::Drawing::Point(4, 5);
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(60, 65);
			this->btn_back->TabIndex = 57;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &Create1NewSem::btn_back_Click);
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label1);
			this->pnl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->pnl_title->Location = System::Drawing::Point(70, 0);
			this->pnl_title->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(968, 75);
			this->pnl_title->TabIndex = 98;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(281, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 37);
			this->label1->TabIndex = 58;
			this->label1->Text = L"CREATE NEW SEMESTER";
			// 
			// lbl_semester
			// 
			this->lbl_semester->AutoSize = true;
			this->lbl_semester->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_semester->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_semester->Location = System::Drawing::Point(152, 141);
			this->lbl_semester->Name = L"lbl_semester";
			this->lbl_semester->Size = System::Drawing::Size(106, 27);
			this->lbl_semester->TabIndex = 99;
			this->lbl_semester->Text = L"Semester";
			// 
			// lblStartDate
			// 
			this->lblStartDate->AutoSize = true;
			this->lblStartDate->BackColor = System::Drawing::Color::Transparent;
			this->lblStartDate->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->lblStartDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lblStartDate->Location = System::Drawing::Point(152, 240);
			this->lblStartDate->Name = L"lblStartDate";
			this->lblStartDate->Size = System::Drawing::Size(114, 27);
			this->lblStartDate->TabIndex = 100;
			this->lblStartDate->Text = L"Start Date";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label23->Location = System::Drawing::Point(152, 346);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(103, 27);
			this->label23->TabIndex = 101;
			this->label23->Text = L"End Date";
			// 
			// Create1NewSem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1043, 611);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->lblStartDate);
			this->Controls->Add(this->lbl_semester);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->ChooseSem);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->StartDateTextBox);
			this->Controls->Add(this->EndDateTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Create1NewSem";
			this->Text = L"Create1NewSem";
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		GROUP1::SEMESTER* tempSem;

		(*tempSem).startdate = getDate(msclr::interop::marshal_as<std::string>(StartDateTextBox->Text));
		(*tempSem).enddate = getDate(msclr::interop::marshal_as<std::string>(EndDateTextBox->Text));
		if (ChooseSem->SelectedItem->ToString() == "1")
			(*g_currentSchoolYear).sem1 = tempSem;
		else if (ChooseSem->SelectedItem->ToString() == "2")
			(*g_currentSchoolYear).sem2 = tempSem;
		else if (ChooseSem->SelectedItem->ToString() == "3")
			(*g_currentSchoolYear).sem3 = tempSem;

		g_currentSemester = tempSem;
		DLL<STUDENT*>* stu = L_Student.head;
		while (stu)
		{
			DLL<COURSE*>* cur = stu->data->courses.head;
			DLL<COURSE*>* temp = stu->data->courses.head;
			DLL<COURSE*>* dummy;//node to be deleted
			while (temp)
			{
				cur = temp;
				if (!cur->next)
					delete cur;
				while (cur->next->next)
					cur = cur->next;
				dummy = cur->next;
				cur->next = cur->next->next;
				delete dummy;
			}
			stu = stu->next;
		}

		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void StartDateTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (StartDateTextBox->Text == "dd/mm/yyyy")
			StartDateTextBox->Text == "";
	}
	private: System::Void GoBackButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void EndDateTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (EndDateTextBox->Text == "dd/mm/yyyy")
			EndDateTextBox->Text == "";
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	};
}
