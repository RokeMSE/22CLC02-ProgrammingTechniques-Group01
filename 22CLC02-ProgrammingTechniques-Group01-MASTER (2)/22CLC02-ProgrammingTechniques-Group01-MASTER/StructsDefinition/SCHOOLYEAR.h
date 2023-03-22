#pragma once
#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "COURSE.h"
#include "LIST.h"

struct SCHOOLYEAR {
    public:
        uint begin, end;
    
    private:
        SEMESTER* sem1 = nullptr, *sem2 = nullptr, *sem3 = nullptr;

    //member functions
    void add (); // create a school year
};

struct SEMESTER : public SCHOOLYEAR{
    int No;
    DATE startdate, enddate;
    LIST<DLL, COURSE> course;

    // member functions
    void add (); // choose school year
};