#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "USER.h"
#include "CLASS.h"
#include "LIST.h"
#include "COURSE.h"
#include <string>
struct STUDENT : public USER {
    uint No, yearIn;    // yearIn: the year in which that student admitted to school
    char* studentID = nullptr, *firstname = nullptr, *lastname = nullptr, *socialID = nullptr,*fullname = nullptr;
                        

    bool gender;        // 0 male & 1 female
    DATE DoB;
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    CLASS Class;

    LIST<DLL, COURSE> courses;   // courses that 1 student enrolls in a semester
    // member functions
    STUDENT* get () {
        return this;
    }
    void importInfo(ST& SV);
    void import(ST& SV);// at the beginning, list of students is loaded into the system
    void Export (ST SV);         // export all student to a file to store
    void importScore (std::string filename);
    void updateResult ();
};
typedef STUDENT ST;

void ST::importInfo(ST& SV) {
    cout << "\n Enter your full name: " << strcpy(50, fullname);
    cout << endl;
    cout << "\n Enter your numerical order: " << No;
    cout << endl;
    cout << "\n Enter your your ID: " << strcpy(20, studentID);
    cout << endl;
    cout << "\n Enter your your total mark: " << totalMark;
    cout << endl;
    cout << "\n Enter your your final mark: " << finalMark;
    cout << endl;
    cout << "\n Enter your your midterm mark: " << midtermMark;
    cout << endl;
    cout << "\n Enter your your orther mark: " << otherMark;
    cout << endl;
}
void ST::import(ST &SV) {
    SV = new STUDENT[maxStudents];
    for (int i = 0; i < maxStudents; i++) {
        cout << "/n Nhap sinh vien thu "<< i <<":";
        importInfo(SV);
    }
}
//void ST::Export(ST &SV) {
//    cout << "\n Enter your fullname: " << strcpy_s(50, SV.fullname);
//    cout << endl;
//    cout << "\n Enter your numerical order: " << SV.No;
//    cout << endl;
//    cout << "\n Enter your your ID: " << strcpy_s(20, SV.studentID);
//    cout << endl;
//    cout << "\n Enter your your total mark: " << SV.totalMark;
//    cout << endl;
//    cout << "\n Enter your your final mark: " << SV.finalMark;
//    cout << endl;
//    cout << "\n Enter your your midterm mark: " << SV.midtermMark;
//    cout << endl;
//    cout << "\n Enter your your orther mark: " << SV.otherMark;
//    cout << endl;
//}
void ST::Export(ST SV) {
    cout << "\n\NO\tStudent ID\tStudent Full Name\tTotal Mark\tFinal Mark\tMidterm Mark\tOther Mark";
    for (int i = 0; i < maxStudents; i++) {
        // in sinh vien thu i ra man hinh
        cout << "\n"<< i+1;
        cout<< "\t" << SV.No;
        cout << "\t" << SV.studentID;
        cout << "\t" << SV.fullname;
        cout << "\t" << SV.totalMark;
        cout << "\t" << SV.finalMark;
        cout << "\t" << SV.midtermMark;
        cout << "\t" << SV.otherMark;
       

    }
}