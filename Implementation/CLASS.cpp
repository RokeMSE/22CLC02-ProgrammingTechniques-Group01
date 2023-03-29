#include "../header.h"
#include <fstream>

using namespace std;
bool CLASS::import (std::string filename) {
// import students from a file to a class, INCLUDING give them username and password
// there is a doubly linked list

}

void CLASS::add (SCHOOLYEAR year) {
    this -> yearIn = year.begin;
    //(*this).K = year.begin % 2000;
    std::cout << "Enter information of the class:\n";
    std::cout << "\tEnter Program (0 - APCS, 1 - CLC, 2 - VP): ";
    uint i;
    std::cin >> i;
    this -> program = Program(i);
    std::cout << "\tEnter No: ";
    std::cin >> this -> No;
    // DLL<CLASS*>* a = new DLL<CLASS*>;
    // a -> data = this;
    // a -> prev = (year.classes).tail;
    // a -> next = nullptr;
    // (year.classes).tail -> next = a;
    // (year.classes).tail = a;
}

void CLASS::add1stYearStudent () {
// GUI
// write later
// when `add student` button is clicked, it triggers this this function
// // add 1 new student to student.tail->next
    DLL<USER>* user, *beforeUser = nullptr;
    DLL<STUDENT*>* stu, *beforeStu = nullptr;
    bool flag = 0;
    do
    {
        stu = new DLL<STUDENT*>;
        user = new DLL<USER>;
        std::cout << "Enter No. of the student: ";
        std::cin >> (*stu -> data).No;
        std::cout << "Enter Student ID of the student: ";
        std::cin >> (*stu -> data).studentID;
        std::cout << "Enter firstname of the student: ";
        std::cin >> (*stu -> data).firstname;
        std::cout << "Enter lastname of the student: ";
        std::cin >> (*stu -> data).lastname;
        std::cout << "Enter gender of the student (0 - male/ 1 - female): ";
        std::cin >> (*stu -> data).gender;
        string s;
        std::cout << "Enter Date of Birth of the student (dd/mm/yyyy): ";
        std::cin >> s;
        //(stu -> data).DoB = getDate(s);
        std::cout << "Enter social ID of the student: ";
        std::cin >> (*stu -> data).socialID;
        
        // Generate USER
        cout << "Generate username for logging in: ";
        cin >> user->data.username;
        cout << "Generate password for logging in: ";
        cin >> user->data.password;
        user->data.student = (stu->data);
        user->data.staff = nullptr;
        if ( ! ::L_USER.head )
            ::L_USER.head = user;
        user->prev = beforeUser;
        beforeUser = user;
        user = user->next;
        //////////////////////////////

        if (!(this -> student).head)
            (this -> student).head = stu;
        if ( ! ::L_Student.head )
            ::L_Student.head = stu;
        stu -> prev = beforeStu;
        beforeStu = stu;
        stu = stu -> next; // !!!
        std::cout << "If you wanna continue, enter 1. Otherwise, enter 0.";
        std::cin >> flag;
        
    } while (flag);
    (this -> student).tail = ::L_Student.tail = stu;
    ::L_USER.head = user;
    // stu = nullptr; 
    return;
}

bool CLASS::add1stYearStudents (std::string filename) {
// from file csv: username, password, No, studentID, firstname, lastname, gender, (DoB: hasn't been set up yet), socialID
    ifstream inp (filename);
    if ( !inp.is_open() )    return 0;
    // your code here
    DLL<STUDENT*>* tmp = nullptr, *a;
    DLL<USER>* user, *beforeUser = nullptr;
    string skip1stLine;
    
    while (!inp.eof()) {
        // log in info
        getline(inp, user->data.username, ',');
        getline(inp, user->data.password, ',');
        user->data.student = a->data;
        user->data.staff = nullptr;
        if ( ! ::L_USER.head )
            ::L_USER.head = user;
        user->prev = beforeUser;
        beforeUser = user;
        user = user->next;
        ////////////////////////
        string s;
        std::getline(inp, s, ',');
        a = new DLL<STUDENT*>;
        a -> data->No = std::stoi(s, nullptr);
        std::getline(inp, a -> data->studentID, ',');
        std::getline(inp, a -> data->firstname, ',');
        std::getline(inp, a -> data->lastname, ',');
        std::getline(inp, s, ',');
        a->data->gender = stoi(s); // 0 ~ male ; 1 ~ female
        std::getline(inp, s, ',');
        a -> data->DoB = getDate(s);
        std::getline(inp, a -> data->socialID, ',');
        if (!(this -> student).head)
            (this -> student).head = a;
        a -> prev = tmp;
        tmp = a;
        a = a -> next;
    }
    (this -> student).tail = ::L_Student.tail = a;
    ::L_USER.head = user;
    // a = nullptr;
    inp.close();
    return 1;
}