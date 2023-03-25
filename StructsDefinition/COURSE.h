#pragma once

#include <string>
#include "enum.h"
#include "USER.h"
#include "LIST.h"
#include "STUDENT.h"

struct COURSE {
    std::string ID = "";
    std::string name = "";
    std::string teacher = "";
    ushort credit, maxStudents = 50;
    WeekDay day;
    Session session; // S1--S4
    LIST<DLL, STUDENT> students;

    void add ();
    void remove ();
    void updateInfo ();

    void add1Student (STUDENT student);
    /// add1Student: Add a student to the course, includes:
    ///     student: is student needed to add 
    /// This function does not return anything

    void remove1Student(STUDENT student);
    /// remove1Student:  Remove a student from the course, includes:
    ///     student:  is student needed to remove from the course
    /// This function does not return anything
};