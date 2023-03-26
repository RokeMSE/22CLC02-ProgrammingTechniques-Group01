#pragma once

#include "enum.h"
#include "STUDENT.h"
#include "LIST.h"

struct COURSE {
    char* ID = nullptr, *name = nullptr, *teacher = nullptr;
    ushort credit, maxStudents = 50;
    WeekDay day;
    Session session; // S1--S4
    LIST<DLL, STUDENT> students;

    void add ();
    void remove ();
    void updateInfo ();
    void add1Student (STUDENT student);         // add `student` to the list `COURSE::students`
    bool importScore (std::string filename);    // file CSV _ task 20
    bool updateResult ();                       // get data from keyboard
                                                // task 22
                                                // search for student in the list `students` using `ID`:   if found, update new score; otherwise, pop up "there is no student with ID " << ID << " in this course."
};