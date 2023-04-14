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
	/// Summary for viewClass
	/// </summary>
	public ref class viewClass : public System::Windows::Forms::Form
	{
	public:
		viewClass(void)
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
		~viewClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 160);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(695, 379);
			this->dataGridView1->TabIndex = 0;
			// 
			// viewClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 539);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"viewClass";
			this->Text = L"viewClass";
			this->Load += gcnew System::EventHandler(this, &viewClass::viewClass_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void viewClass_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	//}
	//};




//HWND hListBox;
//
//// Hàm xử lý sự kiện tạo cửa sổ
//LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
//{
//	switch (msg)
//	{
//	case WM_CREATE:
//	{
//		// Tạo ListBox để hiển thị danh sách lớp học
//		hListBox = CreateWindow("LISTBOX", "", WS_VISIBLE | WS_CHILD | LBS_STANDARD, 20, 20, 300, 300, hwnd, NULL, NULL, NULL);
//
//		// Lấy danh sách các lớp học từ danh sách liên kết đôi l_class
//		DLL<CLASS*>* p = L_class.head;
//		while (p != NULL)
//		{
//			// Thêm tên lớp vào ListBox
//			SendMessage(hListBox, LB_ADDSTRING, 0, (LPARAM)p->class_name);
//
//			// Tiếp tục duyệt danh sách liên kết đôi
//			p = p->next;
//		}
//
//		break;
//	}
//	case WM_DESTROY:
//		// Thoát khỏi chương trình khi đóng cửa sổ
//		PostQuitMessage(0);
//		break;
//	default:
//		return DefWindowProc(hwnd, msg, wParam, lParam);
//	}
//	return 0;
//}
//
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
//{
//	// Đăng ký lớp cửa sổ
//	WNDCLASS wc = { 0 };
//	wc.lpfnWndProc = WndProc;
//	wc.hInstance = hInstance;
//	wc.hbrBackground = (HBRUSH)(COLOR_BACKGROUND);
//	wc.lpszClassName = "MyWindowClass";
//	RegisterClass(&wc);
//
//	// Tạo cửa sổ mới
//	HWND hwnd = CreateWindowEx(0, "MyWindowClass", "Danh sách các lớp học", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 400, 400, NULL, NULL, hInstance, NULL);
//
//	// Hiển thị cửa sổ và cập nhật nội dung
//	ShowWindow(hwnd, nCmdShow);
//	UpdateWindow(hwnd);
//
//	// Khởi chạy vòng lặp xử lý thông điệp
//	MSG msg = { 0 };
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//
//	return msg.wParam;
//}