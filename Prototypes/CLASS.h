#pragma once

#define uint unsigned int //move to enum.h?
#define ushort unsigned short
#include "StructsDefinition\enum.h"
#include "SCHOOLYEAR.h"
#include "StructsDefinition\STUDENT.h"
#include "StructsDefinition\LIST.h"

struct CLASS {
    uint yearIn;        // the year in which class is created
    ushort K;           // may be the last 2 digits of yearIn
    Program program;    // APCS, CLC, VP
    ushort No;          // No of class
    LIST<DLL, STUDENT> student;
    //LIST <DLL, STUDENT> student;
    // 22CLC2: K = 22, program = CLC, No = 2

    // member functions
    // these prototypes haven't been finished yet
    void import (std::string filename /*and something here*/);
                                // import students from a file to a class, INCLUDING give them username and password
                                // there is a doubly linked list

    void add(SCHOOLYEAR year);  // t2: create several classes through terminal  // update yearIn, K (maybe), program, No
    bool add1stYearStudents(); // t3: add 1st-year students to a particular 1st-year class
                                // just use when a new class is created
};