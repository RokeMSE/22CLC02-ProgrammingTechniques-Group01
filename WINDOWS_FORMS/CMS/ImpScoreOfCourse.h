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
	/// Summary for ImpScoreOfCourse
	/// </summary>
	public ref class ImpScoreOfCourse : public System::Windows::Forms::Form
	{
	public:
		System::Windows::Forms::Form^ sourceForm;
		ImpScoreOfCourse(System::Windows::Forms::Form^ form)
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
		~ImpScoreOfCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Label^ lbl_title;
	private: System::Windows::Forms::Label^ lbl_input;
	private: System::Windows::Forms::TextBox^ txt_pathfile;
	private: System::Windows::Forms::Button^ btn_import;






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
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->lbl_title = (gcnew System::Windows::Forms::Label());
			this->lbl_input = (gcnew System::Windows::Forms::Label());
			this->txt_pathfile = (gcnew System::Windows::Forms::TextBox());
			this->btn_import = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_back
			// 
			this->btn_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_back->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16, System::Drawing::FontStyle::Bold));
			this->btn_back->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_back->Location = System::Drawing::Point(577, 323);
			this->btn_back->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(147, 59);
			this->btn_back->TabIndex = 57;
			this->btn_back->Text = L"Back";
			this->btn_back->UseVisualStyleBackColor = false;
			this->btn_back->Click += gcnew System::EventHandler(this, &ImpScoreOfCourse::btn_back_Click);
			// 
			// lbl_title
			// 
			this->lbl_title->AutoSize = true;
			this->lbl_title->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl_title->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 22, System::Drawing::FontStyle::Bold));
			this->lbl_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_title->Location = System::Drawing::Point(281, 22);
			this->lbl_title->Name = L"lbl_title";
			this->lbl_title->Size = System::Drawing::Size(488, 52);
			this->lbl_title->TabIndex = 58;
			this->lbl_title->Text = L"Import Score of a Course";
			// 
			// lbl_input
			// 
			this->lbl_input->AutoSize = true;
			this->lbl_input->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14));
			this->lbl_input->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_input->Location = System::Drawing::Point(12, 164);
			this->lbl_input->Name = L"lbl_input";
			this->lbl_input->Size = System::Drawing::Size(263, 31);
			this->lbl_input->TabIndex = 59;
			this->lbl_input->Text = L"Input the path of file: ";
			// 
			// txt_pathfile
			// 
			this->txt_pathfile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->txt_pathfile->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12));
			this->txt_pathfile->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->txt_pathfile->Location = System::Drawing::Point(303, 164);
			this->txt_pathfile->Name = L"txt_pathfile";
			this->txt_pathfile->Size = System::Drawing::Size(717, 33);
			this->txt_pathfile->TabIndex = 61;
			this->txt_pathfile->TextChanged += gcnew System::EventHandler(this, &ImpScoreOfCourse::textBox1_TextChanged);
			// 
			// btn_import
			// 
			this->btn_import->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_import->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16, System::Drawing::FontStyle::Bold));
			this->btn_import->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(110)));
			this->btn_import->Location = System::Drawing::Point(328, 323);
			this->btn_import->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_import->Name = L"btn_import";
			this->btn_import->Size = System::Drawing::Size(147, 59);
			this->btn_import->TabIndex = 62;
			this->btn_import->Text = L"Import";
			this->btn_import->UseVisualStyleBackColor = false;
			this->btn_import->Click += gcnew System::EventHandler(this, &ImpScoreOfCourse::btn_import_Click);
			// 
			// ImpScoreOfCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->ClientSize = System::Drawing::Size(1032, 563);
			this->Controls->Add(this->lbl_title);
			this->Controls->Add(this->btn_import);
			this->Controls->Add(this->txt_pathfile);
			this->Controls->Add(this->lbl_input);
			this->Controls->Add(this->btn_back);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ImpScoreOfCourse";
			this->Text = L"ImpScoreOfCourse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->sourceForm->Show();
	}
	private: System::Void btn_import_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Import Successfully!", "Notification", MessageBoxButtons::OK);
	}
	};
}
