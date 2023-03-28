#pragma once

#include "../header.h"
#include <string>
// syntax to implement a member function: void DATE::getDate (char* chr) {}
struct DATE {
    ushort day = 0, month = 0;
    uint year = 0;

    /////////////////////////////////////////
    // member functions
    
    void display ();

    void display (std::ostream out);
    /////////////////////////////////////////
};

DATE getDate (std::string chr); // lấy một mảng kí tự chr có định dạng mm/dd/yyyy, theo đó gán giá trị cho các member day-mon-year của struct
bool isLeapYear (uint year);
uint getNumOfDateInMonth (ushort month, uint year);