#pragma once
#include "Structs.h"
extern void exportStudents();

extern void exportStaffs();

extern void exportClasses();

extern void exportStudentsInACourse(std::string filename, GROUP1::COURSE* c);
extern void exportCoursesInASemester(std::string filename, GROUP1::SEMESTER* sem, uint startYear);
extern void exportASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* sem, uint startYear);
extern void exportSchoolYears();