#pragma once
#include "header.h"
//
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
	private: System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::Button^ btn_signin;
	private: System::Windows::Forms::Button^ btn_exit;
	private: Point mouseDownLocation, formLocation;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ txt_password;

	private: System::Windows::Forms::Label^ lbl_password;
	private: System::Windows::Forms::Panel^ pnl_login;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnl_titleLogin;
	private: System::Windows::Forms::Label^ label2;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnl_titleLogin = (gcnew System::Windows::Forms::Panel());
			this->pnl_login->SuspendLayout();
			this->pnl_titleLogin->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::Color::Transparent;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_username->Location = System::Drawing::Point(35, 133);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(95, 22);
			this->lbl_username->TabIndex = 0;
			this->lbl_username->Text = L"User name";
			// 
			// txt_username
			// 
			this->txt_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_username->Location = System::Drawing::Point(39, 159);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(320, 26);
			this->txt_username->TabIndex = 1;
			// 
			// btn_signin
			// 
			this->btn_signin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_signin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_signin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btn_signin->Location = System::Drawing::Point(140, 288);
			this->btn_signin->Name = L"btn_signin";
			this->btn_signin->Size = System::Drawing::Size(121, 43);
			this->btn_signin->TabIndex = 2;
			this->btn_signin->Text = L"Sign in";
			this->btn_signin->UseVisualStyleBackColor = false;
			this->btn_signin->Click += gcnew System::EventHandler(this, &Login::btn_signin_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_exit->Location = System::Drawing::Point(995, 6);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(38, 38);
			this->btn_exit->TabIndex = 5;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Login::btn_exit_Click);
			// 
			// txt_password
			// 
			this->txt_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_password->Location = System::Drawing::Point(39, 240);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '>';
			this->txt_password->Size = System::Drawing::Size(320, 26);
			this->txt_password->TabIndex = 4;
			this->txt_password->UseSystemPasswordChar = true;
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->BackColor = System::Drawing::Color::Transparent;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->Location = System::Drawing::Point(35, 214);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(89, 22);
			this->lbl_password->TabIndex = 3;
			this->lbl_password->Text = L"Password";
			// 
			// pnl_login
			// 
			this->pnl_login->Controls->Add(this->label2);
			this->pnl_login->Controls->Add(this->btn_signin);
			this->pnl_login->Controls->Add(this->lbl_username);
			this->pnl_login->Controls->Add(this->lbl_password);
			this->pnl_login->Controls->Add(this->txt_password);
			this->pnl_login->Controls->Add(this->txt_username);
			this->pnl_login->Location = System::Drawing::Point(341, 122);
			this->pnl_login->Name = L"pnl_login";
			this->pnl_login->Size = System::Drawing::Size(403, 478);
			this->pnl_login->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(155, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 36);
			this->label2->TabIndex = 5;
			this->label2->Text = L"LOGIN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(2, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 31);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Course Management System";
			// 
			// pnl_titleLogin
			// 
			this->pnl_titleLogin->BackColor = System::Drawing::SystemColors::Control;
			this->pnl_titleLogin->Controls->Add(this->label1);
			this->pnl_titleLogin->Controls->Add(this->btn_exit);
			this->pnl_titleLogin->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_titleLogin->Location = System::Drawing::Point(3, 3);
			this->pnl_titleLogin->Name = L"pnl_titleLogin";
			this->pnl_titleLogin->Padding = System::Windows::Forms::Padding(3);
			this->pnl_titleLogin->Size = System::Drawing::Size(1037, 48);
			this->pnl_titleLogin->TabIndex = 8;
			this->pnl_titleLogin->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::pnl_titleLogin_MouseDown);
			this->pnl_titleLogin->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Login::pnl_titleLogin_MouseMove);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1043, 688);
			this->Controls->Add(this->pnl_titleLogin);
			this->Controls->Add(this->pnl_login);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->Padding = System::Windows::Forms::Padding(3);
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->pnl_login->ResumeLayout(false);
			this->pnl_login->PerformLayout();
			this->pnl_titleLogin->ResumeLayout(false);
			this->pnl_titleLogin->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
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
					MessageBox::Show("Successfully logged in!");
					g_currentStaff = curStaf->data;
					g_currentStudent = nullptr;
					MenuStaff^ form = gcnew CMS::MenuStaff(this);//, curStaf -> data);
					this->txt_username->Text = L"";
					this->txt_password->Text = L"";
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
		if (curStaf)	return;
		GROUP1::DLL<GROUP1::STUDENT*>* curStu = L_Student.head;
		//MessageBox::Show(msclr::interop::marshal_as<System::String^>(cur->data->firstname));
		while (curStu) {
			if (input.username == curStu->data->user.username) {// cur->data->user.username
				if (input.password == curStu->data->user.password) {//cur->data->user.password
					//MessageBox::Show("Successfully logged in!");
					MenuStudent^ form = gcnew CMS::MenuStudent(this);//, curStu -> data);
					g_currentStaff = nullptr;
					g_currentStudent = curStu->data;
					this->Hide();
					this->txt_username->Text = L"";
					this->txt_password->Text = L"";
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
		if (!curStu)
			MessageBox::Show("Username [" + txt_username->Text + "] do not exist");
		this->txt_username->Text = L"";
		this->txt_password->Text = L"";
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}

	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		Color cl;
		pnl_login->BackColor = cl.FromArgb(100, 244, 238, 224);
		pnl_titleLogin->BackColor = cl.FromArgb(50, 0, 0, 0);
		// rgb(244, 238, 224)
		// https://colorhunt.co/palette/3936464f45576d5d6ef4eee0
		txt_password->Text = L"";
		txt_username->Text = L"";
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
