#pragma once

#include "../header.h"

// syntax to implement a member function: void DATE::getDate (char* chr) {}
struct DATE {
    ushort day, month;
    uint year;

    /////////////////////////////////////////
    // member functions

    void getDate (string chr); // lấy một mảng kí tự chr có định dạng mm/dd/yyyy, theo đó gán giá trị cho các member day-mon-year của struct
    
    void display ();

    void display (std::ostream out);
    /////////////////////////////////////////
};