#pragma once

#define uint unsigned int
#define ushort unsigned short
#include <string>
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
        bool importStudent(std::string filename);

        bool importStaff(std::string filename);

        bool importClass(std::string filename); // Dat

        bool importStudentInCourse(std::string filename);
        bool importCourseInSemester(std::string filename);
        bool importSemesterInSchoolYear(std::string filename);
        bool importSchoolYear(std::string filename);
    /////////////////////////////////

    // export
        bool exportStudent(std::string filename);

        bool exportStaff(std::string filename);

        bool exportClass(std::string filename); // Luong

        bool exportStudentInCourse(std::string filename);
        bool exportCourseInSemester(std::string filename);
        bool exportSemesterInSchoolYear(std::string filename);
        bool exportSchoolYear(std::string filename);
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

