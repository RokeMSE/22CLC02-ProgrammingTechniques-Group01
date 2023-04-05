#include "header.h"
#include <iostream>

using namespace std;

USER* currentUSER;
int main() {
    // Local var declarations
    bool notExit = 1;
    //////////////////////////////////////////////////////

    bool _importStudents = importStudents();
    bool _importStaffs = importStaffs();
    bool _importClasses = importClasses();
    // bool _importSchoolYears = importSchoolYears();

    //////////////////////////////////////////////////////
    //////////////////////////////////////////////////////
    STAFF* staff = nullptr;
    STUDENT* stu = nullptr;

    while ( notExit ) {
        // Logging in
        USER tmp;
        // do {
            string str;
            cout << "User name: ";
            getline(cin,tmp.username);
            cout << "Password: ";
            getline(cin , tmp.password);
            stu = authenticateUSER<STUDENT>(L_Student, &tmp);
            staff = authenticateUSER<STAFF>(L_Staff, &tmp);
        // } while (!currentUSER);
        /////////////////////////////////////
        // Main menu

        if (staff == nullptr && stu == nullptr)
            notExit = MenuResetPassword(L_Student, L_Staff);
        else
            if ( staff == nullptr )
                // this user is a student
                notExit = MenuStudent(stu);
            else
                // this user is staff
                notExit = MenuStaff(staff);
    }


    //////////////////////////////////////////////////////
    //////////////////////////////////////////////////////
    //cout << _importStudents;
    // DLL<STUDENT*>* curStudent = L_Student.head;
    // while ( curStudent ) {
    //     cout << curStudent->data->No << ' ' << curStudent->data->yearIn << ' ';
    //     cout << curStudent->data->studentID << ' ' << curStudent->data->socialID << ' ';
    //     cout << curStudent->data->firstname << ' ' << curStudent->data->lastname << ' ';
    //     cout << DateToString(curStudent->data->DoB);
    //     cout << endl;
    //     curStudent = curStudent -> next;
    // }

    // Export data to files including deallocation
    exportSchoolYears();
    exportStudents();
    exportStaffs();
    exportClasses();
    //////////////////////////////////////////////////////
    return 0;
}