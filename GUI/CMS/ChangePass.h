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
	/// Summary for ChangePass
	/// </summary>
	public ref class ChangePass : public System::Windows::Forms::Form
	{
	public:
		ChangePass(void)
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
		~ChangePass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ChangePassLab;
	private: System::Windows::Forms::Label^ CurrentPassLab;
	private: System::Windows::Forms::TextBox^ CurrentPassTextBox;
	private: System::Windows::Forms::TextBox^ NewPassTextBox;
	private: System::Windows::Forms::Label^ NewPassLab;
	private: System::Windows::Forms::Button^ EnterBtn;
	private: System::Windows::Forms::Button^ ExitBtn;
	private: System::Windows::Forms::Panel^ WorkPanel;
	private: System::Windows::Forms::Panel^ StartPanel;
	private: System::Windows::Forms::Label^ ShowHide;
	private: System::Windows::Forms::Label^ ShowHide2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangePass::typeid));
			this->ChangePassLab = (gcnew System::Windows::Forms::Label());
			this->CurrentPassLab = (gcnew System::Windows::Forms::Label());
			this->CurrentPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewPassLab = (gcnew System::Windows::Forms::Label());
			this->EnterBtn = (gcnew System::Windows::Forms::Button());
			this->ExitBtn = (gcnew System::Windows::Forms::Button());
			this->WorkPanel = (gcnew System::Windows::Forms::Panel());
			this->ShowHide2 = (gcnew System::Windows::Forms::Label());
			this->ShowHide = (gcnew System::Windows::Forms::Label());
			this->StartPanel = (gcnew System::Windows::Forms::Panel());
			this->WorkPanel->SuspendLayout();
			this->StartPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// ChangePassLab
			// 
			this->ChangePassLab->AutoSize = true;
			this->ChangePassLab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ChangePassLab->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ChangePassLab->Font = (gcnew System::Drawing::Font(L"Tahoma", 15, System::Drawing::FontStyle::Bold));
			this->ChangePassLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ChangePassLab->Location = System::Drawing::Point(75, 11);
			this->ChangePassLab->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ChangePassLab->Name = L"ChangePassLab";
			this->ChangePassLab->Size = System::Drawing::Size(236, 30);
			this->ChangePassLab->TabIndex = 0;
			this->ChangePassLab->Text = L"Change password";
			// 
			// CurrentPassLab
			// 
			this->CurrentPassLab->AutoSize = true;
			this->CurrentPassLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CurrentPassLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->CurrentPassLab->Location = System::Drawing::Point(148, 82);
			this->CurrentPassLab->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->CurrentPassLab->Name = L"CurrentPassLab";
			this->CurrentPassLab->Size = System::Drawing::Size(178, 28);
			this->CurrentPassLab->TabIndex = 1;
			this->CurrentPassLab->Text = L"Current password";
			// 
			// CurrentPassTextBox
			// 
			this->CurrentPassTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CurrentPassTextBox->Location = System::Drawing::Point(345, 79);
			this->CurrentPassTextBox->Margin = System::Windows::Forms::Padding(2);
			this->CurrentPassTextBox->Name = L"CurrentPassTextBox";
			this->CurrentPassTextBox->Size = System::Drawing::Size(198, 34);
			this->CurrentPassTextBox->TabIndex = 2;
			this->CurrentPassTextBox->UseSystemPasswordChar = true;
			// 
			// NewPassTextBox
			// 
			this->NewPassTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewPassTextBox->Location = System::Drawing::Point(345, 121);
			this->NewPassTextBox->Margin = System::Windows::Forms::Padding(2);
			this->NewPassTextBox->Name = L"NewPassTextBox";
			this->NewPassTextBox->Size = System::Drawing::Size(198, 34);
			this->NewPassTextBox->TabIndex = 4;
			this->NewPassTextBox->UseSystemPasswordChar = true;
			// 
			// NewPassLab
			// 
			this->NewPassLab->AutoSize = true;
			this->NewPassLab->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewPassLab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->NewPassLab->Location = System::Drawing::Point(148, 121);
			this->NewPassLab->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NewPassLab->Name = L"NewPassLab";
			this->NewPassLab->Size = System::Drawing::Size(150, 28);
			this->NewPassLab->TabIndex = 3;
			this->NewPassLab->Text = L"New password";
			// 
			// EnterBtn
			// 
			this->EnterBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->EnterBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EnterBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->EnterBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->EnterBtn->Location = System::Drawing::Point(483, 206);
			this->EnterBtn->Margin = System::Windows::Forms::Padding(2);
			this->EnterBtn->Name = L"EnterBtn";
			this->EnterBtn->Padding = System::Windows::Forms::Padding(3);
			this->EnterBtn->Size = System::Drawing::Size(81, 41);
			this->EnterBtn->TabIndex = 5;
			this->EnterBtn->Text = L"Enter";
			this->EnterBtn->UseVisualStyleBackColor = false;
			this->EnterBtn->Click += gcnew System::EventHandler(this, &ChangePass::EnterBtn_Click);
			// 
			// ExitBtn
			// 
			this->ExitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->ExitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->ExitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ExitBtn->Location = System::Drawing::Point(569, 206);
			this->ExitBtn->Margin = System::Windows::Forms::Padding(2);
			this->ExitBtn->Name = L"ExitBtn";
			this->ExitBtn->Size = System::Drawing::Size(81, 41);
			this->ExitBtn->TabIndex = 6;
			this->ExitBtn->Text = L"Exit";
			this->ExitBtn->UseVisualStyleBackColor = false;
			this->ExitBtn->Click += gcnew System::EventHandler(this, &ChangePass::ExitBtn_Click);
			// 
			// WorkPanel
			// 
			this->WorkPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->WorkPanel->Controls->Add(this->ShowHide2);
			this->WorkPanel->Controls->Add(this->ShowHide);
			this->WorkPanel->Controls->Add(this->ExitBtn);
			this->WorkPanel->Controls->Add(this->CurrentPassLab);
			this->WorkPanel->Controls->Add(this->EnterBtn);
			this->WorkPanel->Controls->Add(this->CurrentPassTextBox);
			this->WorkPanel->Controls->Add(this->NewPassLab);
			this->WorkPanel->Controls->Add(this->NewPassTextBox);
			this->WorkPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->WorkPanel->Location = System::Drawing::Point(0, 59);
			this->WorkPanel->Margin = System::Windows::Forms::Padding(2);
			this->WorkPanel->Name = L"WorkPanel";
			this->WorkPanel->Padding = System::Windows::Forms::Padding(3);
			this->WorkPanel->Size = System::Drawing::Size(767, 279);
			this->WorkPanel->TabIndex = 7;
			// 
			// ShowHide2
			// 
			this->ShowHide2->AutoSize = true;
			this->ShowHide2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowHide2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ShowHide2->Location = System::Drawing::Point(548, 134);
			this->ShowHide2->Name = L"ShowHide2";
			this->ShowHide2->Size = System::Drawing::Size(46, 17);
			this->ShowHide2->TabIndex = 8;
			this->ShowHide2->Text = L"Show";
			this->ShowHide2->Click += gcnew System::EventHandler(this, &ChangePass::ShowHide2_Click);
			// 
			// ShowHide
			// 
			this->ShowHide->AutoSize = true;
			this->ShowHide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ShowHide->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ShowHide->Location = System::Drawing::Point(548, 96);
			this->ShowHide->Name = L"ShowHide";
			this->ShowHide->Size = System::Drawing::Size(46, 17);
			this->ShowHide->TabIndex = 7;
			this->ShowHide->Text = L"Show";
			this->ShowHide->Click += gcnew System::EventHandler(this, &ChangePass::ShowHide_Click);
			// 
			// StartPanel
			// 
			this->StartPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->StartPanel->Controls->Add(this->ChangePassLab);
			this->StartPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->StartPanel->Location = System::Drawing::Point(0, 0);
			this->StartPanel->Margin = System::Windows::Forms::Padding(2);
			this->StartPanel->Name = L"StartPanel";
			this->StartPanel->Padding = System::Windows::Forms::Padding(3);
			this->StartPanel->Size = System::Drawing::Size(767, 59);
			this->StartPanel->TabIndex = 8;
			this->StartPanel->Visible = false;
			// 
			// ChangePass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->ClientSize = System::Drawing::Size(767, 338);
			this->ControlBox = false;
			this->Controls->Add(this->WorkPanel);
			this->Controls->Add(this->StartPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ChangePass";
			this->Text = L"ChangePass";
			this->WorkPanel->ResumeLayout(false);
			this->WorkPanel->PerformLayout();
			this->StartPanel->ResumeLayout(false);
			this->StartPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EnterBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CurrentPassTextBox->Text == "")
			MessageBox::Show("Invalid!");
		else
		{
			GROUP1::USER* user;
			if (g_currentStaff)
				user = &(g_currentStaff->user);
			else
				user = &(g_currentStudent->user);
			if (msclr::interop::marshal_as<std::string>(CurrentPassTextBox->Text) != user->password)
			{
				MessageBox::Show("Wrong password! Please enter the correct current password.", "Notification", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
				this->CurrentPassTextBox->Clear();
				this->NewPassTextBox->Clear();
				return;
			}
			user->password = msclr::interop::marshal_as<std::string>(NewPassTextBox->Text);
			//MessageBox::Show(msclr::interop::marshal_as<String^>(std::to_string(g_currentSchoolYear->begin)));
			//g_currentSemester = nullptr;
			MessageBox::Show("Successfully change your password!");
			if (latestCheckRememberLogin)
				latestPassword = user->password;
			else
				latestUsername = latestPassword = "";
		}
	}
	private: System::Void ExitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteFiles();
		if (latestCheckRememberLogin) {
			latestUsername = g_currentStaff->user.username;
			latestPassword = g_currentStaff->user.password;
		}
		else {
			latestUsername = latestPassword = "";
		}
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
	private: System::Void ShowHide_Click(System::Object^ sender, System::EventArgs^ e) {
		this->CurrentPassTextBox->UseSystemPasswordChar = !this->CurrentPassTextBox->UseSystemPasswordChar;
		if (this->ShowHide->Text == L"Show")
			this->ShowHide->Text = L"Hide";
		else
			this->ShowHide->Text = L"Show";
	}
	private: System::Void ShowHide2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->NewPassTextBox->UseSystemPasswordChar = !this->NewPassTextBox->UseSystemPasswordChar;
		if (this->ShowHide2->Text == L"Show")
			this->ShowHide2->Text = L"Hide";
		else
			this->ShowHide2->Text = L"Show";
	}
};
}
