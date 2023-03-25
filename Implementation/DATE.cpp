#pragma once

#include <iomanip>
#include <iostream>
#include <fstream>

using namespace std;

// syntax to implement a member function: void DATE::getDate (char* chr) {}
struct DATE {
    ushort day, month;
    uint year;

    /////////////////////////////////////////
    // member functions

    void getDate (char* &chr); // lấy một mảng kí tự chr có định dạng mm/dd/yyyy, theo đó gán giá trị cho các member day-mon-year của struct
    
    void display () {
        cout << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year;
    }

    void display (ofstream out) {
        out << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year;
    }
    /////////////////////////////////////////
};