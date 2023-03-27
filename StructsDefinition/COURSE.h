#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "enum.h"
#include "USER.h"
#include "LIST.h"

struct COURSE {
    std::string ID = "";
    std::string name = "";
    std::string teacher = "";
    ushort credit = 0, maxStudents = 50;
    WeekDay day = MON;
    Session session = S1; // S1--S4
    LIST<DLL, STUDENT> students;

    void importInfo(STUDENT &SV){

    cout << "\n Enter your full name: "; cin.ignore();
    // cin >> strcpy(target, SV.fullname);
    getline(cin, SV.fullname);
    cout << endl;
    cout << "\n Enter your numerical order: ";
    cin >> SV.No;
    cout << endl;
    cout << "\n Enter your your ID: "; cin.ignore();
    // cin >> strcpy(target, SV.studentID);
    getline(cin, SV.studentID);
 /*   cout << endl;
    cout << "\n Enter your your total mark: ";
    cin >> SV.totalMark;
    cout << endl;
    cout << "\n Enter your your final mark: ";
    cin >> SV.finalMark;
    cout << endl;
    cout << "\n Enter your your midterm mark: ";
    cin >> SV.midtermMark;
    cout << endl;
    cout << "\n Enter your your orther mark: ";
    cin >> SV.otherMark;
    cout << endl;*/
   }                         // update info of this course
    void add1Student(LIST <SLL, STUDENT>&L, STUDENT & SV) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "/n Nhap sinh vien thu " << i + 1 << ":";
            importInfo(SV);


            L.createNode(SV);

        }
    }
    void in(STUDENT ST) {
        cout << endl;
        cout << "\n" << ST.No;
        // cout << endl;
        cout << "\t" << ST.studentID;
        // cout << endl;
        cout << "\t" << ST.fullname;
        // cout << endl;
        cout << "\t" << ST.totalMark;
        // cout << endl;
        cout << "\t" << ST.finalMark;
        // cout << endl;
        cout << "\t" << ST.midtermMark;
        // cout << endl;
        cout << "\t" << ST.otherMark;
        // cout << endl;
    }
   // void import(LIST <SLL, STUDENT>& L, STUDENT& SV) {
    void Export(LIST <SLL, STUDENT>& L) {
        cout << "\nNO\tStudent ID\tFull Name\tTotal Mark\tFinal Mark\tMidterm Mark\tOther Mark";
        SLL<STUDENT>* temp = L.head;

        while (temp != NULL) {
            in(temp->data);
            temp = temp->next;

        }

    }
      
    void remove1Student(STUDENT student);
    /// remove1Student: Remove a student from the course, includes:
    ///        student: is the student need to be removed from the course
    /// This function does not return anything
    /////////////////
    // scores are members of STUDENT
    bool importScore(std::string filename);    // file CSV _ task 20
    bool updateResult(std::string studentID);  // get data from keyboard
    // task 22
    // search for student in the list `students` using `ID`:   if found, update new score; otherwise, pop up "there is no student with ID " << ID << " in this course."
};