#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "enum.h"
#include "STUDENT.h"

struct CLASS {
    uint yearIn;        // the year in which students admitted to school
    ushort K;           // may be the last 2 digits of yearIn
    Program program;    // APCS, CLC, VP
    ushort No;
    LIST<STUDENT> student;
    // 22CLC2: K = 22, program = CLC, No = 2

    void import (std::string filename, LIST<STUDENT>* &ALLSTUDENTS);
                                // import students from a file to a class, INCLUDING give them username and password
                                // there is a doubly linked list

    void add ();                // create a class
    void add1stYearStudents (); // add 1st-year students to a particular 1st-year class
};