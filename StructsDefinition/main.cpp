#pragma once

#include "../header.h"
#define uint unsigned int
#define ushort unsigned short

#include <iomanip>
#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;


void EXportToTeacher(LIST <SLL, STUDENT>& L) {
    ofstream taofile("filenew.csv");      // ofs  l� t?o file ???
    SLL<STUDENT>* temp = L.head;
    taofile << "NO,Student ID,Full Name,Total Mark,Final Mark,Midterm Mark,Other Mark";
    taofile << "\n";
    while (temp != nullptr) {

        taofile << temp->data.No << "," << temp->data.studentID << "," << temp->data.fullname << "\n";
        temp = temp->next;

    }
    taofile.close(); 
}
void ReadFileFromTeacher(LIST <SLL, STUDENT>& L) {
    //SLL<STUDENT>* temp = L.head;
    ifstream input("fileNew.csv");
    if (!input.is_open())
    {
        cout << "Khong the mo file.\n";
        return;
    }
    else {
        int numSV;
        char* l;
        l = new char[10000];

        cout << "Nhap so luong sinh vien: ";
        cin >> numSV;

        cout << endl;
        input.ignore(256, '\n');
        while (input) {

            string s;

            for (int i = 0; i < numSV; i++) {
                if (i >= numSV) {
                    return;
                }
                else {

                    STUDENT S;
                    ;
                    getline(input, s, '\n');

                    strcpy(l, s.c_str());
                    cout << l;
                    cout << endl;
                    S.No = stoi(strtok(l, ","));//stoi convert string to integer
                    cout << S.No; cout << endl;
                    S.studentID = strtok(NULL, ",");//strtok splits the string str into an array of tokens separated by delim
                    cout << S.studentID; cout << endl;
                    S.fullname = strtok(NULL, ",");
                    cout << S.fullname; cout << endl;
                    S.totalMark = stoi(strtok(NULL, ","));
                    cout << S.totalMark; cout << endl;
                    S.finalMark = stoi(strtok(NULL, ","));
                    cout << S.finalMark; cout << endl;
                    S.midtermMark = stoi(strtok(NULL, ","));
                    cout << S.midtermMark; cout << endl;
                    S.otherMark = stoi(strtok(NULL, ","));
                    cout << S.otherMark; cout << endl;
                    L.createNode(S);

                }

            }
            break;
        }

        //L.Export(L);
        input.close();

    }
}

void UpdateST(LIST <SLL, STUDENT>& L, LIST <SLL, STUDENT>& L1) {
    SLL<STUDENT>* temp = L.head;
    SLL<STUDENT>* temp1 = L1.head;
    while (temp != nullptr) {
        temp1->data = temp->data;
        /* L.in(temp->data);
         L1.in(temp1->data);*/
        temp = temp->next;
        temp1 = temp1->next;
    }
}

int main() {
    LIST <SLL, STUDENT> ST;
    LIST <SLL, STUDENT> list;
    STUDENT student;
    COURSE C1;
    //LIST <SLL, COURSE> C1;   //STUDENT student;
    int soluongSV = 0;
    int idCount = 0;
    int key;
    do {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien vao khoa hoc.                               **\n";
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
            C1.add1Student(ST, student);
            cout << "\nThem sinh vien thanh cong!";
            soluongSV++;
            //pressAnyKey();
            break;
        case 2:
            if (soluongSV > 0) {
                cout << "\nHien thi danh sach sinh vien.";

                C1.Export(ST);
            }
            else {
                cout << "\nSanh sach sinh vien trong!";
            }
            // pressAnyKey();
            break;
        case 3:

            EXportToTeacher(ST);

            // pressAnyKey();
            break;
        case 4:

            ReadFileFromTeacher(list);
            //list.Export(list);

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