#pragma once
#ifndef _login
#define _login
#include "header.h"
#include "MenuStaff.h"
#include "MenuStudent.h"

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
	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::Button^ btn_signin;
	private: System::Windows::Forms::Button^ btn_exit;
	private: Point mouseDownLocation, formLocation;
	public:			System::Windows::Forms::TextBox^ txt_password;
	public:			System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::Panel^ pnl_login;
	private: System::Windows::Forms::Panel^ pnl_titleLogin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ chkbx_remember;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->btn_signin = (gcnew System::Windows::Forms::Button());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->pnl_login = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chkbx_remember = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnl_titleLogin = (gcnew System::Windows::Forms::Panel());
			this->pnl_login->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_titleLogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::Color::Transparent;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_username->Location = System::Drawing::Point(35, 159);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(108, 25);
			this->lbl_username->TabIndex = 0;
			this->lbl_username->Text = L"User name";
			// 
			// txt_username
			// 
			this->txt_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_username->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_username->Location = System::Drawing::Point(39, 189);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(320, 30);
			this->txt_username->TabIndex = 1;
			// 
			// btn_signin
			// 
			this->btn_signin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_signin->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_signin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_signin->Location = System::Drawing::Point(145, 349);
			this->btn_signin->Name = L"btn_signin";
			this->btn_signin->Size = System::Drawing::Size(121, 43);
			this->btn_signin->TabIndex = 2;
			this->btn_signin->Text = L"Sign in";
			this->btn_signin->UseVisualStyleBackColor = false;
			this->btn_signin->Click += gcnew System::EventHandler(this, &Login::btn_signin_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->btn_exit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_exit->Location = System::Drawing::Point(977, 4);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(54, 54);
			this->btn_exit->TabIndex = 5;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Login::btn_exit_Click);
			// 
			// txt_password
			// 
			this->txt_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_password->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_password->Location = System::Drawing::Point(39, 270);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '>';
			this->txt_password->Size = System::Drawing::Size(320, 30);
			this->txt_password->TabIndex = 4;
			this->txt_password->UseSystemPasswordChar = true;
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->BackColor = System::Drawing::Color::Transparent;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->Location = System::Drawing::Point(35, 240);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(99, 25);
			this->lbl_password->TabIndex = 3;
			this->lbl_password->Text = L"Password";
			// 
			// pnl_login
			// 
			this->pnl_login->BackColor = System::Drawing::Color::WhiteSmoke;
			this->pnl_login->Controls->Add(this->pictureBox1);
			this->pnl_login->Controls->Add(this->chkbx_remember);
			this->pnl_login->Controls->Add(this->label2);
			this->pnl_login->Controls->Add(this->btn_signin);
			this->pnl_login->Controls->Add(this->lbl_username);
			this->pnl_login->Controls->Add(this->lbl_password);
			this->pnl_login->Controls->Add(this->txt_password);
			this->pnl_login->Controls->Add(this->txt_username);
			this->pnl_login->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_login->Location = System::Drawing::Point(341, 122);
			this->pnl_login->Name = L"pnl_login";
			this->pnl_login->Size = System::Drawing::Size(403, 478);
			this->pnl_login->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(178, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(54, 54);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// chkbx_remember
			// 
			this->chkbx_remember->AutoSize = true;
			this->chkbx_remember->BackColor = System::Drawing::Color::Transparent;
			this->chkbx_remember->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbx_remember->Location = System::Drawing::Point(40, 305);
			this->chkbx_remember->Name = L"chkbx_remember";
			this->chkbx_remember->Size = System::Drawing::Size(128, 23);
			this->chkbx_remember->TabIndex = 6;
			this->chkbx_remember->Text = L"Remember me";
			this->chkbx_remember->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 52);
			this->label2->TabIndex = 5;
			this->label2->Text = L"LOGIN";
			// 
			// pnl_titleLogin
			// 
			this->pnl_titleLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_titleLogin->Controls->Add(this->btn_exit);
			this->pnl_titleLogin->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_titleLogin->Location = System::Drawing::Point(4, 4);
			this->pnl_titleLogin->Name = L"pnl_titleLogin";
			this->pnl_titleLogin->Padding = System::Windows::Forms::Padding(4);
			this->pnl_titleLogin->Size = System::Drawing::Size(1035, 62);
			this->pnl_titleLogin->TabIndex = 8;
			this->pnl_titleLogin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::pnl_titleLogin_MouseDown);
			this->pnl_titleLogin->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::pnl_titleLogin_MouseMove);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1043, 688);
			this->Controls->Add(this->pnl_titleLogin);
			this->Controls->Add(this->pnl_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Shown);
			this->Shown += gcnew System::EventHandler(this, &Login::Login_Shown);
			this->pnl_login->ResumeLayout(false);
			this->pnl_login->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_titleLogin->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Login_Shown(System::Object^ sender, System::EventArgs^ e) {
		Color cl;
		pnl_login->BackColor = cl.FromArgb(100, 244, 238, 224);
		pnl_titleLogin->BackColor = cl.FromArgb(50, 0, 0, 0);
		// rgb(244, 238, 224)
		if (latestCheckRememberLogin) {
			txt_password->Text = gcnew System::String(latestPassword.c_str());
			txt_username->Text = gcnew System::String(latestUsername.c_str());
		}
		this->chkbx_remember->Checked = latestCheckRememberLogin;
	}

		   void checkBoxRemember(GROUP1::USER input) {
			   if (this->chkbx_remember->Checked) {
				   latestUsername = input.username;
				   latestPassword = input.password;
				   latestCheckRememberLogin = true;
			   }
			   else {
				   latestUsername = latestPassword = "";
				   latestCheckRememberLogin = false;
			   }
		   }
	private: System::Void btn_signin_Click(System::Object^ sender, System::EventArgs^ e) {
		GROUP1::USER input;
		input.username = msclr::interop::marshal_as<std::string>(txt_username->Text);
		input.password = msclr::interop::marshal_as<std::string>(txt_password->Text);
		std::string str = input.username + " " + input.password;
		/*MessageBox::Show(msclr::interop::marshal_as<System::String^>(str));*/
		// inspect L_Staff first
		GROUP1::DLL<GROUP1::STAFF*>* curStaf = L_Staff.head;
		//MessageBox::Show(msclr::interop::marshal_as<System::String^>(cur->data->firstname));
		while (curStaf) {
			if (input.username == curStaf->data->user.username) {// cur->data->user.username
				if (input.password == curStaf->data->user.password) {//cur->data->user.password
					//MessageBox::Show("Successfully logged in!");
					g_currentStaff = curStaf->data;
					g_currentStudent = nullptr;
					MenuStaff^ form = gcnew CMS::MenuStaff(this);
					checkBoxRemember(input);
					if (latestCheckRememberLogin == 0)	this->txt_password->Text = L"";
					this->Hide();
					form->Show();
					return;
				}
				else {
					MessageBox::Show("Wrong password!");
					curStaf = nullptr;
					return;
				}
			}
			curStaf = curStaf->next;
		}

		GROUP1::DLL<GROUP1::STUDENT*>* curStu = L_Student.head;
		while (curStu) {
			if (input.username == curStu->data->user.username) {// cur->data->user.username
				if (input.password == curStu->data->user.password) {//cur->data->user.password
					//MessageBox::Show("Successfully logged in!");
					MenuStudent^ form = gcnew CMS::MenuStudent(this);//, curStu -> data);
					checkBoxRemember(input);
					if (latestCheckRememberLogin == 0)	this->txt_password->Text = L"";
					g_currentStaff = nullptr;
					g_currentStudent = curStu->data;
					this->Hide();
					form->Show();
					return;
				}
				else {
					MessageBox::Show("Wrong password!");
					this->txt_password->Text = L"";
					return;
				}
			}
			curStu = curStu->next;
		}
		// curStu is now nullptr
		MessageBox::Show("User [" + txt_username->Text + "] does not exist");
		this->txt_username->Text = L"";
		this->txt_password->Text = L"";
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteFiles();
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}

	private: System::Void pnl_titleLogin_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Record the mouse position when the panel is clicked
		mouseDownLocation = e->Location;
		// Record the form position
		formLocation = this->Location;
	}

	private: System::Void pnl_titleLogin_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Check if the left mouse button is pressed
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			// Calculate the new form position based on the mouse position
			int dx = e->Location.X - mouseDownLocation.X;
			int dy = e->Location.Y - mouseDownLocation.Y;
			int newX = formLocation.X + dx;
			int newY = formLocation.Y + dy;
			// Update the form position
			System::Drawing::Point newLocation(newX, newY);
			this->Location = newLocation;
		}
	}
};
}
#endif