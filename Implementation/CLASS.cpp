#include "../header.h"
#include <fstream>

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
    DLL<STUDENT>* a, *tmp = nullptr;
    bool flag = 0;
    do
    {
        a = new DLL<STUDENT>;
        std::cout << "Enter No. of the student: ";
        std::cin >> (a -> data).No;
        std::cout << "Enter Student ID of the student: ";
        std::cin >> (a -> data).studentID;
        std::cout << "Enter firstname of the student: ";
        std::cin >> (a -> data).firstname;
        std::cout << "Enter lastname of the student: ";
        std::cin >> (a -> data).lastname;
        std::cout << "Enter gender of the student (0 - male/ 1 - female): ";
        std::cin >> (a -> data).gender;
        string s;
        std::cout << "Enter Date of Birth of the student (dd/mm/yyyy): ";
        std::cin >> s;
        //(a -> data).DoB = getDate(s);
        std::cout << "Enter social ID of the student: ";
        std::cin >> (a -> data).socialID;
        if (!(this -> student).head)
            (this -> student).head = a;
        a -> prev = tmp;
        tmp = a;
        a = a -> next;
        std::cout << "If you wanna continue, enter 1. Otherwise, enter 0.";
        std::cin >> flag;
    } while (flag);
    (this -> student).tail = a;
    a = nullptr;
    return;
}

bool CLASS::add1stYearStudents (std::string filename) {
// from file
    ifstream inp (filename);
    if ( !inp.is_open() )    return 0;
    // your code here
    DLL<STUDENT>* tmp = nullptr, *a;
    while (!inp.eof())
    {
        string s;
        std::getline(inp, s, ',');
        a = new DLL<STUDENT>;
        (a -> data).No = std::stoi(s, nullptr);
        std::getline(inp, (a -> data).studentID, ',');
        std::getline(inp, (a -> data).firstname, ',');
        std::getline(inp, (a -> data).lastname, ',');
        std::getline(inp, s, ',');
        if (s == "0")
            (a -> data).gender = 0; //male
        else
            (a -> data).gender = 1; //female
        std::getline(inp, s, ',');
        //((a -> data).DoB) = getDate(s);
        std::getline(inp, (a -> data).socialID, ',');
        if (!(this -> student).head)
            (this -> student).head = a;
        a -> prev = tmp;
        tmp = a;
        a = a -> next;
    }
    (this -> student).tail = a -> prev;
    a = nullptr;
    inp.close();
    return 1;
}