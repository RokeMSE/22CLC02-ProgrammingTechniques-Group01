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
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_username;
	protected:
	private: System::Windows::Forms::Button^ btn_signin;
	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ btn_exit;

	protected:






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->btn_signin = (gcnew System::Windows::Forms::Button());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_username
			// 
			this->txt_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->txt_username, L"txt_username");
			this->txt_username->Name = L"txt_username";
			// 
			// btn_signin
			// 
			resources->ApplyResources(this->btn_signin, L"btn_signin");
			this->btn_signin->Name = L"btn_signin";
			this->btn_signin->UseVisualStyleBackColor = true;
			this->btn_signin->Click += gcnew System::EventHandler(this, &Login::btn_signin_Click);
			// 
			// lbl_username
			// 
			resources->ApplyResources(this->lbl_username, L"lbl_username");
			this->lbl_username->BackColor = System::Drawing::Color::Transparent;
			this->lbl_username->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_username->Name = L"lbl_username";
			// 
			// lbl_password
			// 
			resources->ApplyResources(this->lbl_password, L"lbl_password");
			this->lbl_password->BackColor = System::Drawing::Color::Transparent;
			this->lbl_password->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_password->Name = L"lbl_password";
			// 
			// txt_password
			// 
			resources->ApplyResources(this->txt_password, L"txt_password");
			this->txt_password->Name = L"txt_password";
			this->txt_password->UseSystemPasswordChar = true;
			// 
			// btn_exit
			// 
			resources->ApplyResources(this->btn_exit, L"btn_exit");
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Login::btn_exit_Click);
			// 
			// Login
			// 
			this->AllowDrop = true;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->lbl_password);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->btn_signin);
			this->Controls->Add(this->txt_username);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_signin_Click(System::Object^ sender, System::EventArgs^ e) {
		GROUP1::USER input;
		input.username = msclr::interop::marshal_as<std::string>(txt_username->Text);
		input.password = msclr::interop::marshal_as<std::string>(txt_password->Text);
		std::string str = input.username + " " + input.password;
		MessageBox::Show(msclr::interop::marshal_as<System::String^>(str));
		// inspect L_Student first
		GROUP1::DLL<GROUP1::STUDENT*>* cur = L_Student.head;
		//MessageBox::Show(msclr::interop::marshal_as<System::String^>(cur->data->firstname));
		while (cur) {
			if (input.username == cur->data->user.username) {// cur->data->user.username
				if (input.password == cur->data->user.password) {//cur->data->user.password
					MessageBox::Show("Successfully logged in!");
					//this->Close();
					// call an another form
					MessageBox::Show("ANOTHER FORM");
					exportSchoolYears();
					exportStudents();
					exportClasses();
					exportStaffs();
					Application::Exit();
				}
				else {
					MessageBox::Show("Wrong password!");
					break;
				}
			}
			cur = cur->next;
		}
		if (!cur)	MessageBox::Show("Username [" + txt_username->Text + "] do not exist");
	}
		private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
			exportSchoolYears();
			exportStudents();
			exportClasses();
			exportStaffs();
			// then exit
			Application::Exit();
		}
	};
}