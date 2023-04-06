#pragma once
#include "Structs.h"

bool importStudents();

bool importStaffs();

bool importClasses();

bool importStudentsInACourse(std::string filename, GROUP1::COURSE* &c);
bool importCoursesInASemester(std::string filename, GROUP1::SEMESTER* &a, uint startYear);
bool importASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* &newSem, uint startYear);
bool importSchoolYears();