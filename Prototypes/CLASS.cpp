#include "CLASS.h"
#include "StructsDefinition\DATE.h"
#include "SCHOOLYEAR.h"
#include <fstream>
#include <string>
#include <cstring>

void CLASS::add(SCHOOLYEAR &year)
{
    // uint n = 0;
    // std::cout << "Enter number of classes you want to create: ";
    // std::cin >> n;
    // std::cout << "Enter information of each class (Program No):\n\t";
    // while (n--)
    // {
    //     std::cin >>  
    // }
    this -> yearIn = year.begin;
    //(*this).K = year.begin % 2000;
    std::cout << "Enter information of the class:\n";
    std::cout << "\tEnter Program (0 - APCS, 1 - CLC, 2 - VP): ";
    uint i;
    std::cin >> i;
    this -> program = Program(i);
    std::cout << "\tEnter No: ";
    std::cin >> this -> No;
    DLL<CLASS>* a = new DLL<CLASS>;
    a -> data = *this;
    a -> prev = (year.classes).tail;
    a -> next = nullptr;
    (year.classes).tail -> next = a;
    (year.classes).tail = a;
}

bool CLASS::add1stYearStudents()
{
    std::cout << "You want to enter data(0) or import from file(1)? ";
    bool i = 0;
    std::cin >> i;
    if (i)
    {
        string filepath;
        std::cout << "Enter the absolute path to your file: ";
        std::cin >> filepath;
        ifstream inp(filepath, ios::in);
        if (!inp.is_open())
            return 0;
        DLL<STUDENT>* tmp = nullptr, *a;
        while (!inp.eof())
        {
            string s;
            std::getline(inp, s, ',');
            a = new DLL<STUDENT>;
            (a -> data).No = std::stoi(s, nullptr);
            std::getline(inp, s, ',');
            (a -> data).studentID = new char[s.length() + 1];
            strcpy((a -> data).studentID, s.c_str());
            std::getline(inp, s, ',');
            (a -> data).firstname = new char[s.length() + 1];
            strcpy((a -> data).firstname, s.c_str());
            std::getline(inp, s, ',');
            (a -> data).lastname = new char[s.length() + 1];
            strcpy((a -> data).lastname, s.c_str());
            std::getline(inp, s, ',');
            if (s == "0")
                (a -> data).gender = 0; //male
            else
                (a -> data).gender = 1; //female
            std::getline(inp, s, ',');
            char* dob = new char[s.length() + 1];
            strcpy(dob, s.c_str());
            ((a -> data).DoB).getDate(dob);
            std::getline(inp, s, ',');
            (a -> data).socialID = new char[s.length() + 1];
            strcpy((a -> data).socialID, s.c_str());
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
        char* ch = new char[11];
        std::cout << "Enter Date of Birth of the student (dd/mm/yyyy): ";
        std::cin >> ch;
        (a -> data).DoB.getDate(ch);
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
    return 1;
}