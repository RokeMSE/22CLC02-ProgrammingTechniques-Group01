#pragma once

#include "../header.h"
#include <fstream>

using namespace std;

void CLASS::add (SCHOOLYEAR year) {
    this -> yearIn = year.begin;
    //(*this).K = year.begin % 2000;
    std::cout << "Enter information of the class:\n";
    std::cout << "\tEnter Program (0 - APCS, 1 - CLC, 2 - VP): ";
    uint i;
    std::cin >> i;
    this -> program = Program(i);
    std::cout << "\tEnter No: ";
    std::cin >> this->No;
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
    USER user;
    DLL<STUDENT*>* stu, *beforeStu = nullptr;
    bool flag = 0;
    do
    {
        stu = new DLL<STUDENT*>;
        std::cout << "Enter No. of the student: ";
        std::cin >> stu -> data->No;
        std::cout << "Enter Student ID of the student: ";
        std::cin >> stu -> data->studentID;
        std::cout << "Enter firstname of the student: ";
        std::cin >> stu -> data->firstname;
        std::cout << "Enter lastname of the student: ";
        std::cin >> stu -> data->lastname;
        std::cout << "Enter gender of the student (0 - male/ 1 - female): ";
        std::cin >> stu -> data->gender;
        string s;
        std::cout << "Enter Date of Birth of the student (dd/mm/yyyy): ";
        std::cin >> s;
        //(stu -> data).DoB = getDate(s);
        std::cout << "Enter social ID of the student: ";
        std::cin >> stu -> data->socialID;
        
        // Generate USER
        cout << "Generate username for logging in: ";
        cin >> user.username;
        cout << "Generate password for logging in: ";
        cin >> user.password;
        stu->data->user = &user;
        //////////////////////////////

        if (!(this -> student).head)
            (this -> student).head = stu;
        if ( ! ::L_Student.head )
            ::L_Student.head = stu;
        stu -> prev = beforeStu;
        beforeStu = stu;
        stu = stu -> next;
        std::cout << "If you wanna continue, enter 1. Otherwise, enter 0.";
        std::cin >> flag;
    } while (flag);
    (this -> student).tail = ::L_Student.tail = stu;
    stu = nullptr; 
    return;
}

bool CLASS::add1stYearStudents (std::string filename) {
// from file csv: username, password, No, studentID, firstname, lastname, gender, (DoB: hasn't been set up yet), socialID
    ifstream inp (filename);
    if ( !inp.is_open() )    return 0;
    // your code here
    DLL<STUDENT*>* tmp = nullptr, *stu;
    USER user;
    string skip1stLine;
    getline(inp, skip1stLine);
    while (!inp.eof()) {
        // log in info
        getline(inp, user.username, ',');
        getline(inp, user.password, ',');
        stu->data->user = &user;
        ////////////////////////
        string s;
        std::getline(inp, s, ',');
        stu = new DLL<STUDENT*>;
        stu -> data->No = std::stoi(s, nullptr);
        std::getline(inp, stu -> data->studentID, ',');
        std::getline(inp, stu -> data->firstname, ',');
        std::getline(inp, stu -> data->lastname, ',');
        std::getline(inp, s, ',');
        stu->data->gender = stoi(s); // 0 ~ male ; 1 ~ female
        std::getline(inp, s, ',');
        stu -> data->DoB = getDate(s);
        std::getline(inp, stu -> data->socialID, ',');
        if (!(this -> student).head)
            (this -> student).head = stu;
        stu -> prev = tmp;
        tmp = stu;
        stu = stu -> next;
    }
    (this -> student).tail = ::L_Student.tail = stu;
    stu = nullptr;
    inp.close();
    return 1;
}

CLASS convertToClass(std::string str) {
    CLASS res;

    int i = 0;
    while (str[i] <= '9' && str[i] >= '0')  i++;
    res.K = stoi(str.substr(0, i));

    if ( str[2] == 'C' ) {
        res.program = CLC;
        // `No` starts from str[5]
        res.No = stoi(str.substr(i + 3, str.length() - i - 3));
    } else if ( str[2] == 'V' ) {
        res.program = VP;
        // `No` starts from str[4]
        res.No = stoi(str.substr(i + 2, str.length() - i - 2));
    } else {
        res.program = APCS;
        res.No = stoi(str.substr(i + 4, str.length() - i - 4));
    }
    return res;
}
std::string CLASS::convertToString() {
    if (!this) return "";
    return to_string(this -> K) + convertFromProgram(this -> program) + to_string(this -> No);
}