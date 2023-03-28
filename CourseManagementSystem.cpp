#include <iostream>
#include "header.h"

using namespace std;

int main() {
    // Local var declarations
    LIST<DLL, SCHOOLYEAR> L_SchoolYear;
    LIST<DLL, STAFF> L_Staff;
    LIST<DLL, STUDENT> L_Student;
    /////////////////////////////////////









    LIST<DLL,STUDENT*> test;
    STUDENT* stu = new STUDENT;
    stu->gender = 1;
    test.head = test.tail = new DLL<STUDENT*>;
    test.head->next = test.head->prev = nullptr;
    test.head->data = stu;
    cout << test.head->data->gender;
    delete stu;
    delete test.head;

















    // Logging in

    /////////////////////////////////////

    // Main menu
    
    /////////////////////////////////////

    // Deallocation

    /////////////////////////////////////
    return 0;
}