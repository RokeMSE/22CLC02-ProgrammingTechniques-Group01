#pragma once
#include "Structs.h"


extern bool importStudents();

extern bool importStaffs();

extern bool importClasses();

extern bool importStudentsInACourse(std::string filename, GROUP1::COURSE* &c);
extern bool importCoursesInASemester(std::string filename, GROUP1::SEMESTER* &a, uint startYear);
extern bool importASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* &newSem, uint startYear);
extern bool importSchoolYears();