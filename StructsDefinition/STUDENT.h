#pragma once

#include <string>
#include "../header.h"

struct COURSE;
struct USER;

struct STUDENT {
    uint No = 0, yearIn = 0;    // yearIn: the year in which that student admitted to school
    std::string studentID = "";
    std::string firstname = "";
    std::string lastname = "";
    std::string fullname = "";
    std::string socialID = "";
    const Type type = Student;
    USER user;

    bool gender = 0;        // 0 male & 1 female
    DATE DoB;
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    CLASS Class;

    LIST<DLL, COURSE*> courses;   // courses that 1 student enrolls in a semester
    // member functions
    STUDENT* get ();
};

bool MenuStudent(STUDENT* current); // return 0 if user chooses exit.