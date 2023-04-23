#pragma once
#include "header.h"
#include <string>
#include <cctype>
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
	/// Summary for UpdateCourseInfo
	/// </summary>
	public ref class UpdateCourseInfo : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		UpdateCourseInfo(System::Windows::Forms::Form^ form)
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
		~UpdateCourseInfo()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Label^ credit;
	private: System::Windows::Forms::Label^ teacher;



	private: System::Windows::Forms::Label^ day;

	private: System::Windows::Forms::Label^ maxStudents;

	private: System::Windows::Forms::Label^ session;

	private: System::Windows::Forms::TextBox^ nameTextBox;
	private: System::Windows::Forms::TextBox^ CreditTextBox;



	private: System::Windows::Forms::TextBox^ MaxStudentsTextBox;




	private: System::Windows::Forms::TextBox^ teacherTextBox;
	private: System::Windows::Forms::Button^ UpdateButton;


	private: System::Windows::Forms::DomainUpDown^ listID;
	private: System::Windows::Forms::DomainUpDown^ dayDomainUpDown;
	private: System::Windows::Forms::DomainUpDown^ ChooseSession;

	private: System::Windows::Forms::Label^ bfNamelbl;

	private: System::Windows::Forms::TextBox^ bfNameTextBox;
	private: System::Windows::Forms::Label^ bfTeacherlbl;
	private: System::Windows::Forms::TextBox^ bfTeacherTextBox;



	private: System::Windows::Forms::Label^ bfDaylbl;
	private: System::Windows::Forms::Label^ bfMaxStulbl;
	private: System::Windows::Forms::Label^ bfCreditlbl;
	private: System::Windows::Forms::Label^ bfSessionlbl;

	private: System::Windows::Forms::TextBox^ bfMaxStuTextBox;
	private: System::Windows::Forms::TextBox^ bfCreditTextBox;
	private: System::Windows::Forms::Button^ btn_search;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ bfDayTextBox;
	private: System::Windows::Forms::TextBox^ bfSessionTextBox;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ account;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Panel^ pnl_title;
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateCourseInfo::typeid));
			this->Name = (gcnew System::Windows::Forms::Label());
			this->credit = (gcnew System::Windows::Forms::Label());
			this->teacher = (gcnew System::Windows::Forms::Label());
			this->day = (gcnew System::Windows::Forms::Label());
			this->maxStudents = (gcnew System::Windows::Forms::Label());
			this->session = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CreditTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MaxStudentsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->teacherTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->listID = (gcnew System::Windows::Forms::DomainUpDown());
			this->dayDomainUpDown = (gcnew System::Windows::Forms::DomainUpDown());
			this->ChooseSession = (gcnew System::Windows::Forms::DomainUpDown());
			this->bfNamelbl = (gcnew System::Windows::Forms::Label());
			this->bfNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bfTeacherlbl = (gcnew System::Windows::Forms::Label());
			this->bfTeacherTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bfDaylbl = (gcnew System::Windows::Forms::Label());
			this->bfMaxStulbl = (gcnew System::Windows::Forms::Label());
			this->bfCreditlbl = (gcnew System::Windows::Forms::Label());
			this->bfSessionlbl = (gcnew System::Windows::Forms::Label());
			this->bfMaxStuTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bfCreditTextBox = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bfDayTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bfSessionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->account = (gcnew System::Windows::Forms::PictureBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->pnl_title = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->BeginInit();
			this->pnl_title->SuspendLayout();
			this->SuspendLayout();
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->Name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->Name->Location = System::Drawing::Point(568, 208);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(73, 27);
			this->Name->TabIndex = 1;
			this->Name->Text = L"Name";
			// 
			// credit
			// 
			this->credit->AutoSize = true;
			this->credit->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->credit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->credit->Location = System::Drawing::Point(568, 442);
			this->credit->Name = L"credit";
			this->credit->Size = System::Drawing::Size(72, 27);
			this->credit->TabIndex = 2;
			this->credit->Text = L"Credit";
			// 
			// teacher
			// 
			this->teacher->AutoSize = true;
			this->teacher->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->teacher->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->teacher->Location = System::Drawing::Point(566, 269);
			this->teacher->Name = L"teacher";
			this->teacher->Size = System::Drawing::Size(92, 27);
			this->teacher->TabIndex = 3;
			this->teacher->Text = L"Teacher";
			// 
			// day
			// 
			this->day->AutoSize = true;
			this->day->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->day->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->day->Location = System::Drawing::Point(568, 325);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(51, 27);
			this->day->TabIndex = 4;
			this->day->Text = L"Day";
			// 
			// maxStudents
			// 
			this->maxStudents->AutoSize = true;
			this->maxStudents->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->maxStudents->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->maxStudents->Location = System::Drawing::Point(568, 384);
			this->maxStudents->Name = L"maxStudents";
			this->maxStudents->Size = System::Drawing::Size(152, 27);
			this->maxStudents->TabIndex = 5;
			this->maxStudents->Text = L"Max Students";
			// 
			// session
			// 
			this->session->AutoSize = true;
			this->session->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->session->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->session->Location = System::Drawing::Point(568, 499);
			this->session->Name = L"session";
			this->session->Size = System::Drawing::Size(88, 27);
			this->session->TabIndex = 6;
			this->session->Text = L"Session";
			// 
			// nameTextBox
			// 
			this->nameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->nameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->nameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->nameTextBox->Location = System::Drawing::Point(736, 210);
			this->nameTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(235, 33);
			this->nameTextBox->TabIndex = 7;
			// 
			// CreditTextBox
			// 
			this->CreditTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->CreditTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->CreditTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CreditTextBox->Location = System::Drawing::Point(736, 441);
			this->CreditTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->CreditTextBox->Name = L"CreditTextBox";
			this->CreditTextBox->Size = System::Drawing::Size(235, 33);
			this->CreditTextBox->TabIndex = 9;
			// 
			// MaxStudentsTextBox
			// 
			this->MaxStudentsTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->MaxStudentsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->MaxStudentsTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->MaxStudentsTextBox->Location = System::Drawing::Point(736, 382);
			this->MaxStudentsTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaxStudentsTextBox->Name = L"MaxStudentsTextBox";
			this->MaxStudentsTextBox->Size = System::Drawing::Size(235, 33);
			this->MaxStudentsTextBox->TabIndex = 10;
			// 
			// teacherTextBox
			// 
			this->teacherTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->teacherTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->teacherTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->teacherTextBox->Location = System::Drawing::Point(736, 268);
			this->teacherTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->teacherTextBox->Name = L"teacherTextBox";
			this->teacherTextBox->Size = System::Drawing::Size(235, 33);
			this->teacherTextBox->TabIndex = 12;
			// 
			// UpdateButton
			// 
			this->UpdateButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->UpdateButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->UpdateButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->UpdateButton->Location = System::Drawing::Point(804, 568);
			this->UpdateButton->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(189, 68);
			this->UpdateButton->TabIndex = 13;
			this->UpdateButton->Text = L"Update";
			this->UpdateButton->UseVisualStyleBackColor = false;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &UpdateCourseInfo::UpdateButton_Click);
			// 
			// listID
			// 
			this->listID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->listID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->listID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listID->Location = System::Drawing::Point(449, 140);
			this->listID->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listID->Name = L"listID";
			this->listID->Size = System::Drawing::Size(155, 35);
			this->listID->TabIndex = 14;
			this->listID->Text = L"ID";
			// 
			// dayDomainUpDown
			// 
			this->dayDomainUpDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->dayDomainUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->dayDomainUpDown->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dayDomainUpDown->Location = System::Drawing::Point(737, 325);
			this->dayDomainUpDown->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->dayDomainUpDown->Name = L"dayDomainUpDown";
			this->dayDomainUpDown->Size = System::Drawing::Size(189, 33);
			this->dayDomainUpDown->TabIndex = 16;
			this->dayDomainUpDown->Text = L"Choose Day";
			// 
			// ChooseSession
			// 
			this->ChooseSession->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->ChooseSession->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ChooseSession->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->ChooseSession->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ChooseSession->Location = System::Drawing::Point(737, 500);
			this->ChooseSession->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ChooseSession->Name = L"ChooseSession";
			this->ChooseSession->Size = System::Drawing::Size(207, 33);
			this->ChooseSession->TabIndex = 17;
			this->ChooseSession->Text = L"Choose Session";
			// 
			// bfNamelbl
			// 
			this->bfNamelbl->AutoSize = true;
			this->bfNamelbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfNamelbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->bfNamelbl->Location = System::Drawing::Point(88, 211);
			this->bfNamelbl->Name = L"bfNamelbl";
			this->bfNamelbl->Size = System::Drawing::Size(73, 27);
			this->bfNamelbl->TabIndex = 59;
			this->bfNamelbl->Text = L"Name";
			// 
			// bfNameTextBox
			// 
			this->bfNameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bfNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfNameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bfNameTextBox->Location = System::Drawing::Point(255, 210);
			this->bfNameTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bfNameTextBox->Name = L"bfNameTextBox";
			this->bfNameTextBox->Size = System::Drawing::Size(235, 33);
			this->bfNameTextBox->TabIndex = 60;
			// 
			// bfTeacherlbl
			// 
			this->bfTeacherlbl->AutoSize = true;
			this->bfTeacherlbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfTeacherlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->bfTeacherlbl->Location = System::Drawing::Point(88, 269);
			this->bfTeacherlbl->Name = L"bfTeacherlbl";
			this->bfTeacherlbl->Size = System::Drawing::Size(92, 27);
			this->bfTeacherlbl->TabIndex = 61;
			this->bfTeacherlbl->Text = L"Teacher";
			// 
			// bfTeacherTextBox
			// 
			this->bfTeacherTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bfTeacherTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfTeacherTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bfTeacherTextBox->Location = System::Drawing::Point(255, 272);
			this->bfTeacherTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bfTeacherTextBox->Name = L"bfTeacherTextBox";
			this->bfTeacherTextBox->Size = System::Drawing::Size(235, 33);
			this->bfTeacherTextBox->TabIndex = 62;
			// 
			// bfDaylbl
			// 
			this->bfDaylbl->AutoSize = true;
			this->bfDaylbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfDaylbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->bfDaylbl->Location = System::Drawing::Point(88, 325);
			this->bfDaylbl->Name = L"bfDaylbl";
			this->bfDaylbl->Size = System::Drawing::Size(51, 27);
			this->bfDaylbl->TabIndex = 63;
			this->bfDaylbl->Text = L"Day";
			// 
			// bfMaxStulbl
			// 
			this->bfMaxStulbl->AutoSize = true;
			this->bfMaxStulbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfMaxStulbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->bfMaxStulbl->Location = System::Drawing::Point(88, 384);
			this->bfMaxStulbl->Name = L"bfMaxStulbl";
			this->bfMaxStulbl->Size = System::Drawing::Size(152, 27);
			this->bfMaxStulbl->TabIndex = 64;
			this->bfMaxStulbl->Text = L"Max Students";
			// 
			// bfCreditlbl
			// 
			this->bfCreditlbl->AutoSize = true;
			this->bfCreditlbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfCreditlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->bfCreditlbl->Location = System::Drawing::Point(88, 442);
			this->bfCreditlbl->Name = L"bfCreditlbl";
			this->bfCreditlbl->Size = System::Drawing::Size(72, 27);
			this->bfCreditlbl->TabIndex = 65;
			this->bfCreditlbl->Text = L"Credit";
			// 
			// bfSessionlbl
			// 
			this->bfSessionlbl->AutoSize = true;
			this->bfSessionlbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfSessionlbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->bfSessionlbl->Location = System::Drawing::Point(90, 502);
			this->bfSessionlbl->Name = L"bfSessionlbl";
			this->bfSessionlbl->Size = System::Drawing::Size(88, 27);
			this->bfSessionlbl->TabIndex = 66;
			this->bfSessionlbl->Text = L"Session";
			// 
			// bfMaxStuTextBox
			// 
			this->bfMaxStuTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bfMaxStuTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfMaxStuTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bfMaxStuTextBox->Location = System::Drawing::Point(255, 386);
			this->bfMaxStuTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bfMaxStuTextBox->Name = L"bfMaxStuTextBox";
			this->bfMaxStuTextBox->Size = System::Drawing::Size(235, 33);
			this->bfMaxStuTextBox->TabIndex = 68;
			// 
			// bfCreditTextBox
			// 
			this->bfCreditTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bfCreditTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfCreditTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bfCreditTextBox->Location = System::Drawing::Point(255, 441);
			this->bfCreditTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bfCreditTextBox->Name = L"bfCreditTextBox";
			this->bfCreditTextBox->Size = System::Drawing::Size(235, 33);
			this->bfCreditTextBox->TabIndex = 69;
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			this->btn_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(432, 568);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(189, 68);
			this->btn_search->TabIndex = 71;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &UpdateCourseInfo::btn_search_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label5->Location = System::Drawing::Point(216, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 27);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Before";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->label6->Location = System::Drawing::Point(786, 140);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 27);
			this->label6->TabIndex = 73;
			this->label6->Text = L"After";
			// 
			// bfDayTextBox
			// 
			this->bfDayTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bfDayTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfDayTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bfDayTextBox->Location = System::Drawing::Point(255, 329);
			this->bfDayTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bfDayTextBox->Name = L"bfDayTextBox";
			this->bfDayTextBox->Size = System::Drawing::Size(235, 33);
			this->bfDayTextBox->TabIndex = 74;
			// 
			// bfSessionTextBox
			// 
			this->bfSessionTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(181)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->bfSessionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			this->bfSessionTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bfSessionTextBox->Location = System::Drawing::Point(255, 505);
			this->bfSessionTextBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bfSessionTextBox->Name = L"bfSessionTextBox";
			this->bfSessionTextBox->Size = System::Drawing::Size(235, 33);
			this->bfSessionTextBox->TabIndex = 75;
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
			this->panel2->Size = System::Drawing::Size(68, 660);
			this->panel2->TabIndex = 98;
			// 
			// account
			// 
			this->account->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->account->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"account.Image")));
			this->account->Location = System::Drawing::Point(4, 590);
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
			this->btn_back->Click += gcnew System::EventHandler(this, &UpdateCourseInfo::btn_back_Click);
			// 
			// pnl_title
			// 
			this->pnl_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->pnl_title->Controls->Add(this->label1);
			this->pnl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8));
			this->pnl_title->Location = System::Drawing::Point(66, 5);
			this->pnl_title->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pnl_title->Name = L"pnl_title";
			this->pnl_title->Size = System::Drawing::Size(975, 75);
			this->pnl_title->TabIndex = 99;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(252, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(483, 37);
			this->label1->TabIndex = 58;
			this->label1->Text = L"UPDATE COURSE INFORMATION";
			// 
			// UpdateCourseInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1055, 660);
			this->Controls->Add(this->pnl_title);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->bfSessionTextBox);
			this->Controls->Add(this->bfDayTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->bfCreditTextBox);
			this->Controls->Add(this->bfMaxStuTextBox);
			this->Controls->Add(this->bfSessionlbl);
			this->Controls->Add(this->bfCreditlbl);
			this->Controls->Add(this->bfMaxStulbl);
			this->Controls->Add(this->bfDaylbl);
			this->Controls->Add(this->bfTeacherTextBox);
			this->Controls->Add(this->bfTeacherlbl);
			this->Controls->Add(this->bfNameTextBox);
			this->Controls->Add(this->bfNamelbl);
			this->Controls->Add(this->ChooseSession);
			this->Controls->Add(this->dayDomainUpDown);
			this->Controls->Add(this->listID);
			this->Controls->Add(this->UpdateButton);
			this->Controls->Add(this->teacherTextBox);
			this->Controls->Add(this->MaxStudentsTextBox);
			this->Controls->Add(this->CreditTextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->session);
			this->Controls->Add(this->maxStudents);
			this->Controls->Add(this->day);
			this->Controls->Add(this->teacher);
			this->Controls->Add(this->credit);
			this->Controls->Add(this->Name);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			//this->Name;
			this->Text = L"UpdateCourseInfo";
			this->Load += gcnew System::EventHandler(this, &UpdateCourseInfo::UpdateCourseInfo_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->account))->EndInit();
			this->pnl_title->ResumeLayout(false);
			this->pnl_title->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateCourseInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		if (g_currentSchoolYear == nullptr)
		{
			MessageBox::Show("Create school year first!!");
			this->Close();
			this->sourceForm->Show();
			return;
		}
		else if (g_currentSemester == nullptr)
		{
			MessageBox::Show("Create semester first!!");
			this->Close();
			this->sourceForm->Show();
			return;
		}
		else if (g_currentSemester->course.head == nullptr)
		{
			MessageBox::Show("There is no course in this semester!!");
			this->Close();
			this->sourceForm->Show();
			return;
		}
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		while (cur)
		{
			this->listID->Items->Add(msclr::interop::marshal_as<String^>(cur->data->ID));
			cur = cur->next;
		}
		this->dayDomainUpDown->Items->Add("MON");
		this->dayDomainUpDown->Items->Add("TUE");
		this->dayDomainUpDown->Items->Add("WED");
		this->dayDomainUpDown->Items->Add("FRI");
		this->dayDomainUpDown->Items->Add("THUR");
		this->dayDomainUpDown->Items->Add("SAT");
		this->dayDomainUpDown->Items->Add("SUN");
		this->ChooseSession->Items->Add("S1");
		this->ChooseSession->Items->Add("S2");
		this->ChooseSession->Items->Add("S3");
		this->ChooseSession->Items->Add("S4");
		bfCreditTextBox->ReadOnly = true;
		bfDayTextBox->ReadOnly = true;
		bfMaxStuTextBox->ReadOnly = true;
		bfNameTextBox->ReadOnly = true;
		bfSessionTextBox->ReadOnly = true;
		bfTeacherTextBox->ReadOnly = true;
	}
	private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		bool* valid = new bool;
		*valid = true;
		string dum = msclr::interop::marshal_as<string>(nameTextBox->Text);
		for (int i = 0; i < dum.length(); i++)
		{
			if (isdigit(dum[i]))
			{
				*valid = false;
				break;
			}
		}
		if (*valid = false)
		{
			MessageBox::Show("Invalid Name");
			return;
		}
		if (nameTextBox->Text == "")
		{
			MessageBox::Show("Input Name");
			return;
		}
		*valid = true;
		dum = msclr::interop::marshal_as<string>(teacherTextBox->Text);
		for (int i = 0; i < dum.length(); i++)
		{
			if (isdigit(dum[i]))
			{
				*valid = false;
				break;
			}
		}
		if (*valid == false)
		{
			MessageBox::Show("Invalid teacher");
			return;
		}
		if (teacherTextBox->Text == "")
		{
			MessageBox::Show("Input Teacher");
			return;
		}
		*valid = true;
		if (MaxStudentsTextBox->Text == "")
		{
			MessageBox::Show("Input Max Students");
			return;
		}
		if (CreditTextBox->Text == "")
		{
			MessageBox::Show("Input Credit");
			return;
		}
		dum = msclr::interop::marshal_as<string>(MaxStudentsTextBox->Text);
		for (int i = 0; i < dum.length(); i++)
		{
			if (!isdigit(dum[i]))
			{
				*valid = false;
				break;
			}
		}
		if (*valid == false)
		{
			MessageBox::Show("Invalid Max Students");
			return;
		}
		*valid = true;
		dum = msclr::interop::marshal_as<string>(CreditTextBox->Text);
		for (int i = 0; i < dum.length(); i++)
		{
			if (!isdigit(dum[i]))
			{
				*valid = false;
				break;
			}
		}
		if (*valid == false)
		{
			MessageBox::Show("Invalid Credit");
			return;
		}
		delete valid;
		if (dayDomainUpDown->SelectedIndex == -1)
		{
			MessageBox::Show("Input day");
			return;
		}
		if (ChooseSession->SelectedIndex == -1)
		{
			MessageBox::Show("Input session");
			return;
		}
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		while (cur)
		{
			msclr::interop::marshal_context context;
			string dummy = context.marshal_as<string>(listID->SelectedItem->ToString());
			if (cur->data->ID == dummy)
			{
				cur->data->name = msclr::interop::marshal_as<string>(nameTextBox->Text);
				cur->data->teacher = msclr::interop::marshal_as<string>(teacherTextBox->Text);
				dummy = context.marshal_as<string>(dayDomainUpDown->SelectedItem->ToString());
				cur->data->day = convertToWeekday(dummy);
				cur->data->maxStudents = stoi(msclr::interop::marshal_as<string>(MaxStudentsTextBox->Text));
				cur->data->credit = stoi(msclr::interop::marshal_as<string>(CreditTextBox->Text));
				dummy = context.marshal_as<string>(ChooseSession->SelectedItem->ToString());
				cur->data->session = convertToSession(dummy);
			}
			cur = cur->next;
		}
		MessageBox::Show("Update Successfully");
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		this->sourceForm->Show();
	}
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		DLL<COURSE*>* cur = g_currentSemester->course.head;
		while (cur)
		{
			msclr::interop::marshal_context context;
			string dummy = context.marshal_as<string>(listID->SelectedItem->ToString());
			if (cur->data->ID == dummy)
			{
				bfNameTextBox->Text = msclr::interop::marshal_as<System::String^>(cur->data->name);
				bfTeacherTextBox->Text = msclr::interop::marshal_as<System::String^>(cur->data->teacher);
				bfDayTextBox->Text = msclr::interop::marshal_as<System::String^>(convertFromWeekDay(cur->data->day));
				bfMaxStuTextBox->Text = msclr::interop::marshal_as<System::String^>(to_string(cur->data->maxStudents));
				bfCreditTextBox->Text = msclr::interop::marshal_as<System::String^>(to_string(cur->data->credit));
				bfSessionTextBox->Text = msclr::interop::marshal_as<System::String^>(convertFromSession(cur->data->session));
			}
			cur = cur->next;
		}
		UpdateButton->Enabled = true;
	}
	};
}
