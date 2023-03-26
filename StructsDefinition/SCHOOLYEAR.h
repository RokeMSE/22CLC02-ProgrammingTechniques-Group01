#pragma once

#include "DATE.h"
#include "COURSE.h"
#include "LIST.h"

struct SCHOOLYEAR {
    public:
        uint begin, end;
    
    private:
        SEMESTER* sem1 = nullptr, *sem2 = nullptr, *sem3 = nullptr;

    //member functions
    void create (); // create a school year
};

struct SEMESTER : public SCHOOLYEAR{
    int No;
    DATE startdate, enddate;
    LIST<DLL, COURSE> course;

    // member functions
    void add (SCHOOLYEAR year); // choose school year
    void addCourse (); // add courses to list COURSE::course
};

