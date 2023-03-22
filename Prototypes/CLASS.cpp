#include "CLASS.h"
#include <fstream>
#include <string>

void CLASS::add(SCHOOLYEAR year)
{
    // uint n = 0;
    // std::cout << "Enter number of classes you want to create: ";
    // std::cin >> n;
    // std::cout << "Enter information of each class (Program No):\n\t";
    // while (n--)
    // {
    //     std::cin >>  
    // }
    (*this).yearIn = year.begin;
    //(*this).K = year.begin % 2000;
    std::cout << "Enter information of the class:\n";
    std::cout << "\tEnter Program (0 - APCS, 1 - CLC, 2 - VP): ";
    uint i;
    std::cin >> i;
    (*this).program = Program(i);
    std::cout << "\tEnter No: ";
    std::cin >> (*this).No;
}

void CLASS::add1stYearStudents()
{
    std::cout << "You want to enter data(0) or import from file(1)? ";
    bool i = 0;
    std::cin >> i;
    if (i)
    {
        string filepath;
        ifstream inp(filepath, ios::in);
        //Code
        inp.close();
        return;
    }
    //Code
}