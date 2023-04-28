#pragma once
#include "Structs.h"
#ifndef GLOBAL_VARIABLE_H
#define GLOBAL_VARIABLE_H

__declspec(selectany) GROUP1::SCHOOLYEAR* g_currentSchoolYear = nullptr;
__declspec(selectany) GROUP1::SEMESTER* g_currentSemester = nullptr;
__declspec(selectany) GROUP1::STUDENT* g_currentStudent = nullptr;
__declspec(selectany) GROUP1::STAFF* g_currentStaff = nullptr;

__declspec(selectany) std::string latestUsername = "", latestPassword = "";
__declspec(selectany) bool latestCheckRememberLogin = false;
// Global lists
__declspec(selectany) GROUP1::LIST<GROUP1::DLL, GROUP1::SCHOOLYEAR*> L_SchoolYear;
__declspec(selectany) GROUP1::LIST<GROUP1::DLL, GROUP1::STAFF*> L_Staff;
__declspec(selectany) GROUP1::LIST<GROUP1::DLL, GROUP1::STUDENT*> L_Student;
__declspec(selectany) GROUP1::LIST<GROUP1::DLL, GROUP1::CLASS> L_Class;

#endif