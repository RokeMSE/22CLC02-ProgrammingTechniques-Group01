#pragma once
#include "Structs.h"

extern GROUP1::SCHOOLYEAR g_currentSchoolYear; // g stands for global
extern GROUP1::SEMESTER g_currentSemester;
// Global lists
extern GROUP1::LIST<GROUP1::DLL, GROUP1::SCHOOLYEAR> L_SchoolYear;
extern GROUP1::LIST<GROUP1::DLL, GROUP1::STAFF*> L_Staff;
extern GROUP1::LIST<GROUP1::DLL, GROUP1::STUDENT*> L_Student;
extern GROUP1::LIST<GROUP1::DLL, GROUP1::CLASS> L_Class;