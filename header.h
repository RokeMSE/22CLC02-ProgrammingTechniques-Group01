#pragma once

#define uint unsigned int
#define ushort unsigned short
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
// Structs 
    #include "StructsDefinition/enum.h"
    #include "StructsDefinition/LIST.h"

    #include "StructsDefinition/USER.h"
    #include "StructsDefinition/DATE.h"
    #include "StructsDefinition/SCOREBOARD.h"
    #include "StructsDefinition/COURSE.h"
    #include "StructsDefinition/SCHOOLYEAR.h"
    #include "StructsDefinition/CLASS.h"
    #include "StructsDefinition/STUDENT.h"
    #include "StructsDefinition/STAFF.h"
    
/////////////////////////////////////

// Global variables
SCHOOLYEAR g_currentSchoolYear; // g stands for global
SEMESTER g_currentSemester;
// STUDENT* g_currentStudent;
// STAFF* g_currentStaff;
// Global lists
LIST<DLL, SCHOOLYEAR> L_SchoolYear;
LIST<DLL, STAFF*> L_Staff;
LIST<DLL, STUDENT*> L_Student;
LIST<DLL, CLASS> L_Class;
/////////////////////////////////////

// Prototypes
    // import
        bool importStudents();

        bool importStaffs();

        bool importClasses();

        bool importStudentsInACourse(std::string filename, COURSE &c);
        bool importCoursesInASemester(std::string filename, SEMESTER* &sem);
        bool importASemesterInASchoolYear(std::string filename, SEMESTER* newSem, ushort noSem);
        bool importSchoolYears();
    /////////////////////////////////
    
    // export
        void exportStudents();

        void exportStaffs();

        void exportClasses();

        void exportStudentsInACourse(COURSE* c, uint startYear);
        void exportCoursesInASemester(std::string filename, SEMESTER* sem, uint startYear);
        void exportASemesterInASchoolYear(std::string filename, SEMESTER* sem, uint startYear);
        void exportSchoolYears();
    /////////////////////////////////
/////////////////////////////////////
        #include "import.cpp"
        #include "export.cpp"
        #include "StructsImplementation/enum.cpp"
        #include "StructsImplementation/LIST.cpp"

        #include "StructsImplementation/Stack.cpp"
        #include "StructsImplementation/Queue.cpp"

        #include "StructsImplementation/DATE.cpp"
        #include "StructsImplementation/SCOREBOARD.cpp"
        #include "StructsImplementation/COURSE.cpp"
        #include "StructsImplementation/SCHOOLYEAR.cpp"
        #include "StructsImplementation/CLASS.cpp"
        #include "StructsImplementation/STUDENT.cpp"
        #include "StructsImplementation/STAFF.cpp"
        #include "StructsImplementation/USER.cpp"
// GUI
// #define WIN32_LEAN_AND_MEAN
// #include <Windows.h>
/////////////////////////////////////