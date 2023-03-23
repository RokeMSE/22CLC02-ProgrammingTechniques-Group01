 #include <Structs.h>
#include<iostream>
using namespace std;
int main() {
   LIST<SLL, STUDENT> student;
   //STUDENT student;
    int soluongSV = 0;
    int idCount = 0;
    int key;
    while (true) {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien.                               **\n";
        cout << "**  2. Cap nhat thong tin sinh vien boi ID.          **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch (key) {
        case 1:
            cout << "\n1. Them sinh vien.";
            idCount++;
            import(student);
            cout << "\nThem sinh vien thanh cong!";
            soluongSV++;
           // pressAnyKey();
            break;
        case 2:
            if (soluongSV > 0) {
                cout << "\n7. Hien thi danh sach sinh vien.";
                Export(student);
            }
            else {
                cout << "\nSanh sach sinh vien trong!";
            }
           // pressAnyKey();
            break;
        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nHay chon chuc nang trong hop menu.";
            //pressAnyKey();
            break;
        }
    }
}