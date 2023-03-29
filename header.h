#pragma once

#define uint unsigned int
#define ushort unsigned short

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
// Global lists
LIST<DLL, SCHOOLYEAR> L_SchoolYear;
LIST<DLL, USER> L_USER;
LIST<DLL, STAFF*> L_Staff;
LIST<DLL, STUDENT*> L_Student;
/////////////////////////////////////

using namespace std;

// GUI

/////////////////////////////////////

// Prototypes

/////////////////////////////////////

