#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "USER.h"
#include "CLASS.h"
#include "LIST.h"
#include "COURSE.h"
#include <string>
struct STUDENT : public USER {
    uint No, yearIn;    // yearIn: the year in which that student admitted to school
    std::string studentID = "";
    std::string firstname = "";
    std::string lastname = "";
    std::string fullname = "";
    std::string socialID = "";

    bool gender = 0;        // 0 male & 1 female
    DATE DoB;
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    CLASS Class;

    LIST<DLL, COURSE> courses;   // courses that 1 student enrolls in a semester
    // member functions
    STUDENT* get () {
        return this;
    }
   
};