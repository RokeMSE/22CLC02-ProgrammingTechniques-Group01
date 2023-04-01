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

    #include "StructsDefinition/Stack.h"
    #include "StructsDefinition/Queue.h"

    #include "StructsDefinition/DATE.h"
    #include "StructsDefinition/COURSE.h"
    #include "StructsDefinition/SCHOOLYEAR.h"
    #include "StructsDefinition/CLASS.h"
    #include "StructsDefinition/STUDENT.h"
    #include "StructsDefinition/STAFF.h"
    #include "StructsDefinition/USER.h"
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

// GUI

/////////////////////////////////////

// Prototypes
    // import
        bool importStudents(std::string filename);

        bool importStaffs(std::string filename);

        bool importClasses(std::string filename);

        bool importStudentsInACourse(std::string filename);
        bool importCoursesInASemester(std::string filename);
        bool importASemesterInASchoolYear(std::string filename, SEMESTER* newSem, ushort noSem);
        bool importSchoolYears(std::string filename);
    /////////////////////////////////
    
    // export
        void exportStudents();

        void exportStaffs();

        void exportClasses();

        void exportStudentsInACourse();
        void exportCoursesInASemester(std::string filename, SEMESTER a);
        void exportASemesterInASchoolYear(std::string filename, SEMESTER* sem, ushort noSem, uint startYear);
        void exportSchoolYears();
    /////////////////////////////////

    // dealloc
        template<typename Data>
        void dealloc1(LIST<DLL, Data> &list);
        // hàm dealloc node

        template<typename Data>
        void dealloc2(LIST<DLL, Data> &list);
        // hàm dealloc node->data xong mới dealloc node
    /////////////////////////////////
/////////////////////////////////////

