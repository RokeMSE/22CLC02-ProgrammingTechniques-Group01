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
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Form^ sourceForm;
	private: System::Windows::Forms::Button^ BackBtn;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Label^ YearInLab;
	private: System::Windows::Forms::TextBox^ YearInTextBox;
	private: System::Windows::Forms::Label^ StuIDLab;
	private: System::Windows::Forms::TextBox^ StuIDTextBox;
	private: System::Windows::Forms::Label^ FullnameLab;
	private: System::Windows::Forms::TextBox^ FullnameTextBox;
	private: System::Windows::Forms::Label^ SocialIDLab;
	private: System::Windows::Forms::TextBox^ SocialIDTextBox;
	private: System::Windows::Forms::Label^ GenderLab;
	private: System::Windows::Forms::TextBox^ GenderTextBox;
	private: System::Windows::Forms::Label^ DoBLab;
	private: System::Windows::Forms::TextBox^ DoBTextBox;
	private: System::Windows::Forms::Label^ ClassLab;
	private: System::Windows::Forms::TextBox^ ClassTextBox;
	private: System::Windows::Forms::Panel^ ProfilePanel;
































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->YearInLab = (gcnew System::Windows::Forms::Label());
			this->YearInTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StuIDLab = (gcnew System::Windows::Forms::Label());
			this->StuIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FullnameLab = (gcnew System::Windows::Forms::Label());
			this->FullnameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SocialIDLab = (gcnew System::Windows::Forms::Label());
			this->SocialIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GenderLab = (gcnew System::Windows::Forms::Label());
			this->GenderTextBox = (gcnew System::Windows::Forms::TextBox());
			this->DoBLab = (gcnew System::Windows::Forms::Label());
			this->DoBTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ClassLab = (gcnew System::Windows::Forms::Label());
			this->ClassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfilePanel = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->ProfilePanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// BackBtn
			// 
			this->BackBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->BackBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->BackBtn->Location = System::Drawing::Point(3, 3);
			this->BackBtn->Margin = System::Windows::Forms::Padding(2);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Padding = System::Windows::Forms::Padding(3);
			this->BackBtn->Size = System::Drawing::Size(51, 50);
			this->BackBtn->TabIndex = 0;
			this->BackBtn->Text = L"<";
			this->BackBtn->UseVisualStyleBackColor = false;
			this->BackBtn->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel1->Controls->Add(this->BackBtn);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(3);
			this->panel1->Size = System::Drawing::Size(57, 408);
			this->panel1->TabIndex = 1;
			this->panel1->Visible = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->panel2->Controls->Add(this->lbl_title);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->panel2->Location = System::Drawing::Point(60, 3);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(684, 87);
			this->panel2->TabIndex = 2;
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 30, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->lbl_title->Location = System::Drawing::Point(295, 26);
			this->lbl_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(195, 59);
			this->lbl_title->TabIndex = 93;
			this->lbl_title->Text = L"Profile";
			// 
			// YearInLab
			// 
			this->YearInLab->AutoSize = true;
			this->YearInLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YearInLab->ForeColor = System::Drawing::Color::Black;
			this->YearInLab->Location = System::Drawing::Point(43, 26);
			this->YearInLab->Name = L"YearInLab";
			this->YearInLab->Size = System::Drawing::Size(147, 25);
			this->YearInLab->TabIndex = 11;
			this->YearInLab->Text = L"Enrollment year";
			// 
			// YearInTextBox
			// 
			this->YearInTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->YearInTextBox->Location = System::Drawing::Point(199, 26);
			this->YearInTextBox->Name = L"YearInTextBox";
			this->YearInTextBox->ReadOnly = true;
			this->YearInTextBox->Size = System::Drawing::Size(456, 26);
			this->YearInTextBox->TabIndex = 12;
			// 
			// StuIDLab
			// 
			this->StuIDLab->AutoSize = true;
			this->StuIDLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StuIDLab->Location = System::Drawing::Point(43, 66);
			this->StuIDLab->Name = L"StuIDLab";
			this->StuIDLab->Size = System::Drawing::Size(103, 25);
			this->StuIDLab->TabIndex = 13;
			this->StuIDLab->Text = L"Student ID";
			// 
			// StuIDTextBox
			// 
			this->StuIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->StuIDTextBox->Location = System::Drawing::Point(199, 66);
			this->StuIDTextBox->Name = L"StuIDTextBox";
			this->StuIDTextBox->ReadOnly = true;
			this->StuIDTextBox->Size = System::Drawing::Size(456, 26);
			this->StuIDTextBox->TabIndex = 14;
			// 
			// FullnameLab
			// 
			this->FullnameLab->AutoSize = true;
			this->FullnameLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FullnameLab->Location = System::Drawing::Point(43, 109);
			this->FullnameLab->Name = L"FullnameLab";
			this->FullnameLab->Size = System::Drawing::Size(89, 25);
			this->FullnameLab->TabIndex = 15;
			this->FullnameLab->Text = L"Fullname";
			// 
			// FullnameTextBox
			// 
			this->FullnameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->FullnameTextBox->Location = System::Drawing::Point(199, 109);
			this->FullnameTextBox->Name = L"FullnameTextBox";
			this->FullnameTextBox->ReadOnly = true;
			this->FullnameTextBox->Size = System::Drawing::Size(456, 26);
			this->FullnameTextBox->TabIndex = 16;
			// 
			// SocialIDLab
			// 
			this->SocialIDLab->AutoSize = true;
			this->SocialIDLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SocialIDLab->Location = System::Drawing::Point(43, 150);
			this->SocialIDLab->Name = L"SocialIDLab";
			this->SocialIDLab->Size = System::Drawing::Size(86, 25);
			this->SocialIDLab->TabIndex = 17;
			this->SocialIDLab->Text = L"Social ID";
			// 
			// SocialIDTextBox
			// 
			this->SocialIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->SocialIDTextBox->Location = System::Drawing::Point(199, 150);
			this->SocialIDTextBox->Name = L"SocialIDTextBox";
			this->SocialIDTextBox->ReadOnly = true;
			this->SocialIDTextBox->Size = System::Drawing::Size(456, 26);
			this->SocialIDTextBox->TabIndex = 18;
			// 
			// GenderLab
			// 
			this->GenderLab->AutoSize = true;
			this->GenderLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GenderLab->Location = System::Drawing::Point(43, 195);
			this->GenderLab->Name = L"GenderLab";
			this->GenderLab->Size = System::Drawing::Size(74, 25);
			this->GenderLab->TabIndex = 19;
			this->GenderLab->Text = L"Gender";
			// 
			// GenderTextBox
			// 
			this->GenderTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->GenderTextBox->Location = System::Drawing::Point(199, 195);
			this->GenderTextBox->Name = L"GenderTextBox";
			this->GenderTextBox->ReadOnly = true;
			this->GenderTextBox->Size = System::Drawing::Size(456, 26);
			this->GenderTextBox->TabIndex = 20;
			// 
			// DoBLab
			// 
			this->DoBLab->AutoSize = true;
			this->DoBLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoBLab->Location = System::Drawing::Point(43, 237);
			this->DoBLab->Name = L"DoBLab";
			this->DoBLab->Size = System::Drawing::Size(123, 25);
			this->DoBLab->TabIndex = 21;
			this->DoBLab->Text = L"Date of Birth";
			// 
			// DoBTextBox
			// 
			this->DoBTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->DoBTextBox->Location = System::Drawing::Point(199, 237);
			this->DoBTextBox->Name = L"DoBTextBox";
			this->DoBTextBox->ReadOnly = true;
			this->DoBTextBox->Size = System::Drawing::Size(456, 26);
			this->DoBTextBox->TabIndex = 22;
			// 
			// ClassLab
			// 
			this->ClassLab->AutoSize = true;
			this->ClassLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClassLab->Location = System::Drawing::Point(43, 281);
			this->ClassLab->Name = L"ClassLab";
			this->ClassLab->Size = System::Drawing::Size(54, 25);
			this->ClassLab->TabIndex = 23;
			this->ClassLab->Text = L"Class";
			// 
			// ClassTextBox
			// 
			this->ClassTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->ClassTextBox->Location = System::Drawing::Point(199, 281);
			this->ClassTextBox->Name = L"ClassTextBox";
			this->ClassTextBox->ReadOnly = true;
			this->ClassTextBox->Size = System::Drawing::Size(456, 26);
			this->ClassTextBox->TabIndex = 24;
			// 
			// ProfilePanel
			// 
			this->ProfilePanel->Controls->Add(this->ClassTextBox);
			this->ProfilePanel->Controls->Add(this->ClassLab);
			this->ProfilePanel->Controls->Add(this->DoBTextBox);
			this->ProfilePanel->Controls->Add(this->DoBLab);
			this->ProfilePanel->Controls->Add(this->GenderTextBox);
			this->ProfilePanel->Controls->Add(this->GenderLab);
			this->ProfilePanel->Controls->Add(this->SocialIDTextBox);
			this->ProfilePanel->Controls->Add(this->SocialIDLab);
			this->ProfilePanel->Controls->Add(this->FullnameTextBox);
			this->ProfilePanel->Controls->Add(this->FullnameLab);
			this->ProfilePanel->Controls->Add(this->StuIDTextBox);
			this->ProfilePanel->Controls->Add(this->StuIDLab);
			this->ProfilePanel->Controls->Add(this->YearInTextBox);
			this->ProfilePanel->Controls->Add(this->YearInLab);
			this->ProfilePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->ProfilePanel->Location = System::Drawing::Point(60, 90);
			this->ProfilePanel->Name = L"ProfilePanel";
			this->ProfilePanel->Size = System::Drawing::Size(684, 321);
			this->ProfilePanel->TabIndex = 94;
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(747, 414);
			this->Controls->Add(this->ProfilePanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Profile";
			this->Padding = System::Windows::Forms::Padding(3);
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ProfilePanel->ResumeLayout(false);
			this->ProfilePanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
		if (!g_currentStaff)
		{
			//this->label1->Text = L"Student";
			this->YearInTextBox->Text = msclr::interop::marshal_as<String^>(std::to_string(g_currentStudent->yearIn));
			this->StuIDTextBox->Text = msclr::interop::marshal_as<String^>(g_currentStudent->studentID);
			this->FullnameTextBox->Text = msclr::interop::marshal_as<String^>(g_currentStudent->firstname + " " + g_currentStudent->lastname);
			this->SocialIDTextBox->Text = msclr::interop::marshal_as<String^>(g_currentStudent->socialID);
			if (g_currentStudent->gender)
				this->GenderTextBox->Text = L"Female";
			else
				this->GenderTextBox->Text = L"Male";
			this->DoBTextBox->Text = msclr::interop::marshal_as<String^>(DateToString(g_currentStudent->DoB));
			this->ClassTextBox->Text = msclr::interop::marshal_as<String^>(g_currentStudent->Class->convertToString());
		}
		else
		{
			//this->label1->Text = L"Staff";
			//this->label1->Location = System::Drawing::Point(50, 150);
			this->YearInLab->Visible = false;
			this->YearInTextBox->Visible = false;
			this->StuIDLab->Visible = false;
			this->StuIDTextBox->Visible = false;
			this->FullnameTextBox->Text = msclr::interop::marshal_as<String^>(g_currentStaff->firstname + " " + g_currentStaff->lastname);
			this->SocialIDLab->Visible = false;
			this->SocialIDTextBox->Visible = false;
			this->GenderLab->Visible = false;
			this->GenderTextBox->Visible = false;
			this->DoBLab->Visible = false;
			this->DoBTextBox->Visible = false;
			this->ClassLab->Visible = false;
			this->ClassTextBox->Visible = false;
			this->FullnameLab->Location = System::Drawing::Point(43, 26);
			this->FullnameTextBox->Location = System::Drawing::Point(138, 26);
		}
	}
	};
}
