#pragma once
#define uint unsigned int
#define ushort unsigned short
#include "StructsDefinition\DATE.h"
#include "StructsDefinition\COURSE.h"
#include "StructsDefinition\LIST.h"

struct SCHOOLYEAR {
    public:
        uint begin, end;
    
    private:
        SEMESTER* sem1 = nullptr, *sem2 = nullptr, *sem3 = nullptr;

    //member functions
    SCHOOLYEAR(uint t); 
    void create(); // create a school year, change value of *this: x.create() -> update x.begin & x.end
};

struct SEMESTER : public SCHOOLYEAR{
    int No;
    DATE startdate, enddate;
    LIST<DLL, COURSE> course;

    // member functions
    void add (); // choose school year
};