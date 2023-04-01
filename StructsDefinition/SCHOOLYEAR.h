#pragma once

#include "../header.h"

struct SEMESTER {
    int No = 0;
    DATE startdate, enddate;
    LIST<DLL, COURSE*> course;

    // member functions
    bool add (); // choose school year
    void addCourse (); // add courses to list COURSE::course
};

struct SCHOOLYEAR {
    public:
        uint begin = 0, end = 0;    
        SEMESTER* sem1 = nullptr, *sem2 = nullptr, *sem3 = nullptr;

    //member functions
    void create (); // create a school year
};