#include "header.h"
#include <iostream>
#include <Windows.h>
using namespace std;

USER* currentUSER;
int main() {
    // Local var declarations
    bool notExit = 1;
    //////////////////////////////////////////////////////

    // import();

    //////////////////////////////////////////////////////
    //////////////////////////////////////////////////////
    STAFF* staff = nullptr;
    STUDENT* stu = nullptr;
    while ( notExit ) {
        system("cls");
        // Logging in
        USER tmp;
        do {
            cout << "User name: ";
            cin >> tmp.username;
            cout << "Password: ";
            cin >> tmp.password;
            stu = authenticateUSER<STUDENT>(L_Student, tmp);
            staff = authenticateUSER<STAFF>(L_Staff, tmp);
        } while (!currentUSER);
        /////////////////////////////////////
        // Main menu
        if ( staff == nullptr )
            // this user is a student
            notExit = MenuStudent(stu);
        else
            // this user is staff
            notExit = MenuStaff(staff);
        /////////////////////////////////////
    }
    //////////////////////////////////////////////////////
    //////////////////////////////////////////////////////

    // Export();

    // Deallocation
    // dealloc: del node list COURSE::students => del node courses in semester => semesters => del nodes in L_SchoolYear
    // dealloc L_Staff: node->data ==> node
    // dealloc L_Student: node->data ==> node
    // list L_Class: del node
    //////////////////////////////////////////////////////
    return 0;
}