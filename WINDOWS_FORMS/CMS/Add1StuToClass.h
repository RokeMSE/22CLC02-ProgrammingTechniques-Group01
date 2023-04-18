#pragma once
#include "header.h"
#include "Login.h"
using namespace GROUP1;

namespace CMS {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Add1StuToClass
	/// </summary>
	public ref class Add1StuToClass : public System::Windows::Forms::Form
	{
	public:
		Add1StuToClass(System::Windows::Forms::Form^ sourceform, System::Windows::Forms::Form^ loginform)
		{
			this->sourceForm = sourceform;
			this->loginForm = loginform;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Add1StuToClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Form^ sourceForm;
		System::Windows::Forms::Form^ loginForm;
		Point mouseDownLocation, formLocation;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox;

	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Button^ btn_toggle;
	private: System::Windows::Forms::TextBox^ txt_schoolyear;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_yearIn;
	private: System::Windows::Forms::TextBox^ txt_firstname;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_socialID;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_StudentID;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::CheckBox^ chkbox_male;
	private: System::Windows::Forms::CheckBox^ chkbox_female;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::TextBox^ txt_lastname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_fullname;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Panel^ pnl_account;
	private: System::Windows::Forms::Button^ btn_exit;



	private: System::Windows::Forms::Button^ btn_logout;
	private: System::Windows::Forms::Button^ btn_aboutUs;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label7;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add1StuToClass::typeid));
			this->checkedListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_toggle = (gcnew System::Windows::Forms::Button());
			this->txt_schoolyear = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_yearIn = (gcnew System::Windows::Forms::TextBox());
			this->txt_firstname = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_socialID = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_StudentID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->chkbox_male = (gcnew System::Windows::Forms::CheckBox());
			this->chkbox_female = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->txt_lastname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_fullname = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->pnl_account = (gcnew System::Windows::Forms::Panel());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_aboutUs = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->pnl_account->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pnl_title->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkedListBox
			// 
			this->checkedListBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->checkedListBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkedListBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkedListBox->FormattingEnabled = true;
			this->checkedListBox->Location = System::Drawing::Point(860, 195);
			this->checkedListBox->Margin = System::Windows::Forms::Padding(4);
			this->checkedListBox->Name = L"checkedListBox";
			this->checkedListBox->Size = System::Drawing::Size(213, 210);
			this->checkedListBox->TabIndex = 8;
			this->checkedListBox->ThreeDCheckBoxes = true;
			this->checkedListBox->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &Add1StuToClass::checkedListBox_ItemCheck);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_title->Location = System::Drawing::Point(280, 15);
			this->lbl_title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(515, 31);
			this->lbl_title->TabIndex = 4;
			this->lbl_title->Text = L"ADD A FRESHMAN TO A 1ST YEAR CLASS";
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->btn_back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_back->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btn_back->Location = System::Drawing::Point(4, 4);
			this->btn_back->Margin = System::Windows::Forms::Padding(4);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(54, 54);
			this->btn_back->TabIndex = 0;
			this->btn_back->Text = L"<";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &Add1StuToClass::btn_back_Click);
			// 
			// btn_toggle
			// 
			this->btn_toggle->BackColor = System::Drawing::Color::Linen;
			this->btn_toggle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_toggle->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btn_toggle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_toggle->Location = System::Drawing::Point(849, 147);
			this->btn_toggle->Margin = System::Windows::Forms::Padding(4);
			this->btn_toggle->Name = L"btn_toggle";
			this->btn_toggle->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_toggle->Size = System::Drawing::Size(223, 46);
			this->btn_toggle->TabIndex = 7;
			this->btn_toggle->Text = L"List of classes ↓↓";
			this->btn_toggle->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_toggle->UseVisualStyleBackColor = false;
			this->btn_toggle->Click += gcnew System::EventHandler(this, &Add1StuToClass::btn_toggle_Click);
			// 
			// txt_schoolyear
			// 
			this->txt_schoolyear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_schoolyear->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_schoolyear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_schoolyear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_schoolyear->Location = System::Drawing::Point(233, 109);
			this->txt_schoolyear->Margin = System::Windows::Forms::Padding(4);
			this->txt_schoolyear->Name = L"txt_schoolyear";
			this->txt_schoolyear->ReadOnly = true;
			this->txt_schoolyear->Size = System::Drawing::Size(193, 33);
			this->txt_schoolyear->TabIndex = 45;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label1->Location = System::Drawing::Point(100, 112);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 27);
			this->label1->TabIndex = 46;
			this->label1->Text = L"School Year";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label11->Location = System::Drawing::Point(447, 217);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(171, 27);
			this->label11->TabIndex = 120;
			this->label11->Text = L"Enrollment year";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label12->Location = System::Drawing::Point(87, 389);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(142, 27);
			this->label12->TabIndex = 118;
			this->label12->Text = L"Date of Birth";
			// 
			// txt_yearIn
			// 
			this->txt_yearIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_yearIn->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->txt_yearIn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_yearIn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txt_yearIn->Location = System::Drawing::Point(621, 214);
			this->txt_yearIn->Margin = System::Windows::Forms::Padding(4);
			this->txt_yearIn->Name = L"txt_yearIn";
			this->txt_yearIn->ReadOnly = true;
			this->txt_yearIn->Size = System::Drawing::Size(179, 33);
			this->txt_yearIn->TabIndex = 121;
			// 
			// txt_firstname
			// 
			this->txt_firstname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_firstname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_firstname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_firstname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_firstname->Location = System::Drawing::Point(233, 267);
			this->txt_firstname->Margin = System::Windows::Forms::Padding(4);
			this->txt_firstname->MaxLength = 60;
			this->txt_firstname->Name = L"txt_firstname";
			this->txt_firstname->Size = System::Drawing::Size(339, 33);
			this->txt_firstname->TabIndex = 5;
			this->txt_firstname->TextChanged += gcnew System::EventHandler(this, &Add1StuToClass::txt_name_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label10->Location = System::Drawing::Point(446, 163);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 27);
			this->label10->TabIndex = 116;
			this->label10->Text = L"Gender";
			// 
			// txt_socialID
			// 
			this->txt_socialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_socialID->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_socialID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_socialID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_socialID->Location = System::Drawing::Point(233, 214);
			this->txt_socialID->Margin = System::Windows::Forms::Padding(4);
			this->txt_socialID->MaxLength = 20;
			this->txt_socialID->Name = L"txt_socialID";
			this->txt_socialID->Size = System::Drawing::Size(193, 33);
			this->txt_socialID->TabIndex = 4;
			this->txt_socialID->TextChanged += gcnew System::EventHandler(this, &Add1StuToClass::txt_TextChanged);
			this->txt_socialID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1StuToClass::txt_intOnly_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label8->Location = System::Drawing::Point(130, 217);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 27);
			this->label8->TabIndex = 114;
			this->label8->Text = L"Social ID";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label6->Location = System::Drawing::Point(113, 270);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 27);
			this->label6->TabIndex = 110;
			this->label6->Text = L"First name";
			// 
			// txt_StudentID
			// 
			this->txt_StudentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_StudentID->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_StudentID->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_StudentID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_StudentID->Location = System::Drawing::Point(233, 160);
			this->txt_StudentID->Margin = System::Windows::Forms::Padding(4);
			this->txt_StudentID->MaxLength = 10;
			this->txt_StudentID->Name = L"txt_StudentID";
			this->txt_StudentID->Size = System::Drawing::Size(193, 33);
			this->txt_StudentID->TabIndex = 1;
			this->txt_StudentID->TextChanged += gcnew System::EventHandler(this, &Add1StuToClass::txt_TextChanged);
			this->txt_StudentID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add1StuToClass::txt_intOnly_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label3->Location = System::Drawing::Point(110, 163);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 27);
			this->label3->TabIndex = 108;
			this->label3->Text = L"Student ID";
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_add->Location = System::Drawing::Point(452, 430);
			this->btn_add->Margin = System::Windows::Forms::Padding(4);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(139, 49);
			this->btn_add->TabIndex = 9;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &Add1StuToClass::btn_add_Click);
			// 
			// chkbox_male
			// 
			this->chkbox_male->AutoSize = true;
			this->chkbox_male->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_male->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_male->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_male->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->chkbox_male->Location = System::Drawing::Point(538, 163);
			this->chkbox_male->Name = L"chkbox_male";
			this->chkbox_male->Size = System::Drawing::Size(89, 31);
			this->chkbox_male->TabIndex = 2;
			this->chkbox_male->Text = L"Male";
			this->chkbox_male->UseVisualStyleBackColor = false;
			this->chkbox_male->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToClass::chkbox_male_CheckedChanged);
			// 
			// chkbox_female
			// 
			this->chkbox_female->AutoSize = true;
			this->chkbox_female->BackColor = System::Drawing::Color::Transparent;
			this->chkbox_female->Cursor = System::Windows::Forms::Cursors::Hand;
			this->chkbox_female->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkbox_female->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->chkbox_female->Location = System::Drawing::Point(634, 163);
			this->chkbox_female->Name = L"chkbox_female";
			this->chkbox_female->Size = System::Drawing::Size(111, 31);
			this->chkbox_female->TabIndex = 3;
			this->chkbox_female->Text = L"Female";
			this->chkbox_female->UseVisualStyleBackColor = false;
			this->chkbox_female->CheckedChanged += gcnew System::EventHandler(this, &Add1StuToClass::chkbox_female_CheckedChanged);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->dateTimePicker->CalendarMonthBackground = System::Drawing::Color::WhiteSmoke;
			this->dateTimePicker->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker->Location = System::Drawing::Point(233, 386);
			this->dateTimePicker->MaxDate = System::DateTime(2023, 4, 16, 0, 0, 0, 0);
			this->dateTimePicker->MinDate = System::DateTime(1930, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 33);
			this->dateTimePicker->TabIndex = 6;
			this->dateTimePicker->Value = System::DateTime(2023, 4, 16, 0, 0, 0, 0);
			// 
			// txt_lastname
			// 
			this->txt_lastname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_lastname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_lastname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_lastname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_lastname->Location = System::Drawing::Point(701, 267);
			this->txt_lastname->Margin = System::Windows::Forms::Padding(4);
			this->txt_lastname->MaxLength = 60;
			this->txt_lastname->Name = L"txt_lastname";
			this->txt_lastname->Size = System::Drawing::Size(99, 33);
			this->txt_lastname->TabIndex = 122;
			this->txt_lastname->TextChanged += gcnew System::EventHandler(this, &Add1StuToClass::txt_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label2->Location = System::Drawing::Point(582, 270);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 27);
			this->label2->TabIndex = 123;
			this->label2->Text = L"Last name";
			// 
			// txt_fullname
			// 
			this->txt_fullname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->txt_fullname->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_fullname->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fullname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->txt_fullname->Location = System::Drawing::Point(232, 336);
			this->txt_fullname->Margin = System::Windows::Forms::Padding(4);
			this->txt_fullname->MaxLength = 60;
			this->txt_fullname->Name = L"txt_fullname";
			this->txt_fullname->ReadOnly = true;
			this->txt_fullname->Size = System::Drawing::Size(568, 33);
			this->txt_fullname->TabIndex = 124;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label4->Location = System::Drawing::Point(119, 339);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 27);
			this->label4->TabIndex = 125;
			this->label4->Text = L"Full name";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->panel2->Controls->Add(this->account);
			this->panel2->Controls->Add(this->btn_back);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Padding = System::Windows::Forms::Padding(4);
			this->panel2->Size = System::Drawing::Size(62, 595);
			this->panel2->TabIndex = 127;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 537);
			this->account->Name = L"account";
			this->account->Size = System::Drawing::Size(54, 54);
			this->account->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->account->TabIndex = 128;
			this->account->TabStop = false;
			this->account->Click += gcnew System::EventHandler(this, &Add1StuToClass::account_Click);
			// 
			// pnl_account
			// 
			this->pnl_account->Controls->Add(this->btn_exit);
			this->pnl_account->Controls->Add(this->btn_logout);
			this->pnl_account->Controls->Add(this->btn_aboutUs);
			this->pnl_account->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnl_account->Location = System::Drawing::Point(72, 462);
			this->pnl_account->Name = L"pnl_account";
			this->pnl_account->Padding = System::Windows::Forms::Padding(3);
			this->pnl_account->Size = System::Drawing::Size(172, 137);
			this->pnl_account->TabIndex = 128;
			this->pnl_account->Visible = false;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Location = System::Drawing::Point(0, 90);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(172, 45);
			this->btn_exit->TabIndex = 2;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Add1StuToClass::btn_exit_Click);
			// 
			// btn_logout
			// 
			this->btn_logout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_logout->Location = System::Drawing::Point(0, 45);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(172, 45);
			this->btn_logout->TabIndex = 1;
			this->btn_logout->Text = L"Log out";
			this->btn_logout->UseVisualStyleBackColor = false;
			this->btn_logout->Click += gcnew System::EventHandler(this, &Add1StuToClass::btn_logout_Click);
			// 
			// btn_aboutUs
			// 
			this->btn_aboutUs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->btn_aboutUs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_aboutUs->Location = System::Drawing::Point(0, 0);
			this->btn_aboutUs->Name = L"btn_aboutUs";
			this->btn_aboutUs->Size = System::Drawing::Size(172, 45);
			this->btn_aboutUs->TabIndex = 0;
			this->btn_aboutUs->Text = L"About us";
			this->btn_aboutUs->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(892, 432);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 129;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkGreen;
			this->label5->Location = System::Drawing::Point(234, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(542, 20);
			this->label5->TabIndex = 130;
			this->label5->Text = L"If student\'s name contains only 1 word, please put it in the [Last name] textbox!"
				L"";
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label7);
			this->pnl_title->Location = System::Drawing::Point(66, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(1040, 60);
			this->pnl_title->TabIndex = 131;
			this->pnl_title->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1StuToClass::pnl_title_MouseDown);
			this->pnl_title->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Add1StuToClass::pnl_title_MouseMove);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(291, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(465, 31);
			this->label7->TabIndex = 132;
			this->label7->Text = L"ADD A NEW STUDENT TO THE CLASS";
			// 
			// Add1StuToClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1110, 603);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pnl_account);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txt_fullname);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_lastname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->chkbox_female);
			this->Controls->Add(this->chkbox_male);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txt_yearIn);
			this->Controls->Add(this->txt_firstname);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txt_socialID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_StudentID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_schoolyear);
			this->Controls->Add(this->btn_toggle);
			this->Controls->Add(this->checkedListBox);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Add1StuToClass";
			this->Padding = System::Windows::Forms::Padding(4);
			this->Text = L"Add1StuToClass";
			this->Load += gcnew System::EventHandler(this, &Add1StuToClass::Add1StuToClass_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->pnl_account->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Add1StuToClass_Load(System::Object^ sender, System::EventArgs^ e) {
		// load list of 1st classes, which are the classes added in this year
		DLL<CLASS>* cur = L_Class.head;
		while (cur) {
			if (cur->data.yearIn == g_currentSchoolYear->begin)
				checkedListBox->Items->Add(gcnew System::String(cur->data.convertToString().c_str()));
			cur = cur->next;
		}
		///////////////////////////////////////////////////////////////

		// school year
		std::string schoolyear = std::to_string(g_currentSchoolYear->begin) + " - " + std::to_string(g_currentSchoolYear->end);
		txt_schoolyear->Text = gcnew System::String(schoolyear.c_str());
		///////////////////////////////////////////////////////////////

		// default mode
		checkedListBox->Visible = false;
		btn_toggle->Text = L"List of classes \u2192";
		txt_yearIn->Text = gcnew System::String(std::to_string(g_currentSchoolYear->begin).c_str());
		chkbox_male->Checked = true;
		chkbox_female->Checked = false;
		txt_yearIn->Text = gcnew System::String(std::to_string(g_currentSchoolYear->begin).c_str());
		try {
			checkedListBox->SetItemChecked(0, true);
		}
		catch (ArgumentOutOfRangeException^ exception) {
			MessageBox::Show("Please create a new class for this school year first");
			this->Close();
			sourceForm->Show();
			return;
		}

		///////////////////////////////////////////////////////////////

		// reset form
		btn_add->Enabled = false;
		btn_add->Cursor = System::Windows::Forms::Cursors::No;
		txt_StudentID->Text = L"";
		txt_socialID->Text = L"";
		txt_firstname->Text = L"";
		txt_lastname->Text = L"";
		txt_fullname->Text = L"";
		///////////////////////////////////////////////////////////////
	}

	private: System::Void checkedListBox_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {
		// Uncheck all other items except for the one that was just checked
		for (int i = 0; i < checkedListBox->Items->Count; i++)
			if (i != e->Index)	checkedListBox->SetItemChecked(i, false);
	}

	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}

	private: System::Void btn_toggle_Click(System::Object^ sender, System::EventArgs^ e) {
		checkedListBox->Visible = !checkedListBox->Visible;
		if (checkedListBox->Visible) btn_toggle->Text = L"List of classes ↓↓";
		else btn_toggle->Text = L"List of classes \u2192";
	}

	private: System::Void txt_intOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// integers only
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))	e->Handled = true;
	}

	private: System::Void chkbox_male_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_male->Checked)	chkbox_female->Checked = false;
		else chkbox_female->Checked = true;
	}

	private: System::Void chkbox_female_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (chkbox_female->Checked)	chkbox_male->Checked = false;
		else chkbox_male->Checked = true;
	}

	private: System::Void txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txt_StudentID->Text) || String::IsNullOrWhiteSpace(txt_socialID->Text) || String::IsNullOrWhiteSpace(txt_lastname->Text))
			btn_add->Enabled = false;
		// do not need to check if last name has been filled yet (in case student's name have only 1 word)
		else {
			btn_add->Enabled = true;
			btn_add->Cursor = System::Windows::Forms::Cursors::Hand;
		}
	}

	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		int i;
		for (i = 0; i < checkedListBox->Items->Count; i++)
			if (checkedListBox->GetItemChecked(i))
				break;

		if (i == checkedListBox->Items->Count) {
			MessageBox::Show("Please choose a class in the list of classes.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		std::string inputID = msclr::interop::marshal_as<std::string>(txt_StudentID->Text);
		std::string inputClass = msclr::interop::marshal_as<std::string>(checkedListBox->Items[i]->ToString());
		DLL<STUDENT*>* newNodeStu = L_Student.head, * stuInCurClass = nullptr;
		// stuInCurClass is used for keeping the very last student in this class in case this class has students
		while (newNodeStu) {
			if (newNodeStu->data->Class->convertToString() == inputClass) {
				stuInCurClass = newNodeStu;
				if (newNodeStu->data->studentID == inputID) {
					MessageBox::Show("This student has already been included in this class", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);
					return;
				}
			}
			else if (newNodeStu->data->studentID == inputID) {
				MessageBox::Show("This student has already been included in another class", "Occurrence", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
			newNodeStu = newNodeStu->next;
		}

		newNodeStu = new DLL<STUDENT*>;
		newNodeStu->data = new STUDENT;
		newNodeStu->data->Class = convertToClass(msclr::interop::marshal_as<std::string>(checkedListBox->Items[i]->ToString()));
		if (chkbox_female->Checked) newNodeStu->data->gender = 0;
		else newNodeStu->data->gender = 1;

		newNodeStu->data->studentID = inputID;
		newNodeStu->data->socialID = msclr::interop::marshal_as<std::string>(txt_socialID->Text);

		newNodeStu->data->firstname = msclr::interop::marshal_as<std::string>(txt_firstname->Text);
		newNodeStu->data->lastname = msclr::interop::marshal_as<std::string>(txt_lastname->Text);

		newNodeStu->data->DoB.day = dateTimePicker->Value.Day;
		newNodeStu->data->DoB.month = dateTimePicker->Value.Month;
		newNodeStu->data->DoB.year = dateTimePicker->Value.Year;

		// set username and password to default value:
		newNodeStu->data->user.username = inputID;
		// password = lastname + last_3_digits_of_socialID + "@KHTN"
		std::string last3DigitsOfSocialID = "";
		if (newNodeStu->data->socialID.length() == 1) last3DigitsOfSocialID = "00" + newNodeStu->data->socialID;
		else if (newNodeStu->data->socialID.length() == 2) last3DigitsOfSocialID = "01" + newNodeStu->data->socialID;
		else for (int i = newNodeStu->data->socialID.length() - 1; i >= newNodeStu->data->socialID.length() - 3; i--)
			last3DigitsOfSocialID = newNodeStu->data->socialID[i] + last3DigitsOfSocialID;

		std::string name = newNodeStu->data->lastname;

		name[0] = name[0] - 'A' + 'a';
		newNodeStu->data->user.password = newNodeStu->data->lastname + last3DigitsOfSocialID + "@KHTN";

		if (L_Student.head == nullptr) {
			// check whether any stu of this class has been included in the list L_Student
			L_Student.head = newNodeStu;
			L_Student.tail = L_Student.head;
		}
		else {
			// if stuInCurClass != nullptr, stuInCurClass is pointing to the last student of the class in the list
			// else, this class has no student
			if (stuInCurClass) {
				newNodeStu->prev = stuInCurClass;
				newNodeStu->next = stuInCurClass->next;
				stuInCurClass->next = newNodeStu;
				if (newNodeStu->next)	newNodeStu->next->prev = newNodeStu;
			}
			else {
				L_Student.tail->next = newNodeStu;
				L_Student.tail = L_Student.tail->next;
			}
		}
		System::String^ message = "Account is autogenerated:\n\tUser name: " + gcnew System::String(inputID.c_str()) + "\nPassword: " + gcnew System::String(newNodeStu->data->user.password.c_str());
		MessageBox::Show(message);
	}

	private: System::Void txt_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(txt_firstname->Text))
			txt_firstname->Text = L"";
		if (String::IsNullOrWhiteSpace(txt_lastname->Text))
			txt_lastname->Text = L"";
		txt_fullname->Text = txt_firstname->Text + L" " + txt_lastname->Text;
	}

		   /////////////////////////////////////////////////////////////////////////////////////
		   // Menu account
	private: System::Void account_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_account->Visible = !pnl_account->Visible;
	}
	private: System::Void btn_aboutUs_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); // just hide not close
		AboutUs^ form = gcnew CMS::AboutUs(this);
		form->Show();
	}
	private: System::Void btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
		g_currentStudent = nullptr;
		g_currentStaff = nullptr;
		this->Close();
		this->loginForm->Show();
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		exportSchoolYears();
		exportStudents();
		exportClasses();
		exportStaffs();
		// then exit
		Application::Exit();
	}
		   /////////////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////
				  // Panel
	private: System::Void pnl_title_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Record the mouse position when the panel is clicked
		mouseDownLocation = e->Location;
		// Record the form position
		formLocation = this->Location;
	}

	private: System::Void pnl_title_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
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
		   /////////////////////////////////////////////////////////////////////////////////////
		   /////////////////////////////////////////////////////////////////////////////////////
	};
}