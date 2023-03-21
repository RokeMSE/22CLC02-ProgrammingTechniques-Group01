#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "USER.h"
#include "CLASS.h"

struct STUDENT : public USER {
    uint No, yearIn;    // yearIn: the year in which that student admitted to school
    char* studentID = nullptr, *firstname = nullptr, *lastname = nullptr, *socialID = nullptr;
                        

    bool gender;        // 0 male & 1 female
    DATE DoB;
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    CLASS Class;

    // member functions
    STUDENT* get () {
        return this;
    }
    void import (std::string filename);         // at the beginning, list of students is loaded into the system
    void export (std::string filename);         // export all student to a file to store
    void importScore (std::string filename);
    void updateResult ();
};