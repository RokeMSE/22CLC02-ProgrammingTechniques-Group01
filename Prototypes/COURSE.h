#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "enum.h"
#include "USER.h"
#include "LIST.h"

struct COURSE
{
    char *ID = nullptr, *name = nullptr, *teacher = nullptr;
    ushort credit, maxStudents = 50;
    WeekDay day;
    Session session; // S1--S4
    LIST<DLL, STUDENT> students;

    void add();
    void remove();
    void updateInfo();
    void add1Student(STUDENT student);     
    /// add1Student: Add a student to the course, includes:
    ///     student: is student needed to add 
    /// This function does not return anything
};