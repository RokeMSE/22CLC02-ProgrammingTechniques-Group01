#pragma once

#include "../header.h"

struct CLASS {
    uint yearIn = 0;        // the year in which students admitted to school
    ushort K = 0;           // may be the last 2 digits of yearIn
    Program program = CLC;    // APCS, CLC, VP
    ushort No = 0;          // No of class
    LIST<DLL, STUDENT> student;
    //LIST <DLL, STUDENT> student;
    // 22CLC2: K = 22, program = CLC, No = 2

    // member functions
    // these prototypes haven't been finished yet
    bool import (std::string filename /*and something here*/);
                                // import students from a file to a class, INCLUDING give them username and password
                                // there is a doubly linked list

    void add (SCHOOLYEAR year); // create a class


    // add 1st-year students to a particular 1st-year class
    // just use when a new class is created
    void add1stYearStudent (); // using key board
    bool add1stYearStudents (std::string filename); // import from file
                                
};