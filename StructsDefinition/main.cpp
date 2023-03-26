 #include <Structs.h>
#include<iostream>
using namespace std;
int main() {
    LIST<STUDENT> ST;
    LIST<STUDENT> list;
    STUDENT student;
    //STUDENT student;
    int soluongSV = 0;
    int idCount = 0;
    int key;
    do {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien.                               **\n";
        cout << "**  2. Xuat         **\n";
        cout << "**  3. Export to teacher **\n";
        cout << "**  4. Read file from teacher **\n";
        cout << "**  5. Update list student         **\n";
        cout << "**  6. out.          **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch (key) {
        case 1:
            cout << "\n1. Them sinh vien.";
            idCount++;
            ST.import(ST, student);
            cout << "\nThem sinh vien thanh cong!";
            soluongSV++;
            //pressAnyKey();
            break;
        case 2:
            if (soluongSV > 0) {
                cout << "\nHien thi danh sach sinh vien.";

                ST.Export(ST);
            }
            else {
                cout << "\nSanh sach sinh vien trong!";
            }
            // pressAnyKey();
            break;
        case 3:

            EXportToTeacher();

            // pressAnyKey();
            break;
        case 4:

            ReadFileFromTeacher(list);
            list.Export(list);

            // pressAnyKey();
            break;
        case 5:

            UpdateST(list, ST);
            //ST.Export(ST);
            // pressAnyKey();
            break;
        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nHay chon chuc nang trong hop menu.";
            //pressAnyKey();
            break;
        }
    } while (key != 6);
}