#pragma once

#include <string>
#include "../header.h"

struct STUDENT;

struct COURSE {
    std::string ID = "";
    std::string name = "";
    std::string teacher = "";
    ushort credit = 0, maxStudents = 50;
    WeekDay day = MON;
    Session session = S1; // S1--S4
    LIST<DLL, STUDENT*> students;

    void updateInfo (STUDENT &SV);                         // update info of this course
    bool addStudents(std::string filename);
    /// this function will upload the list of students enrolled in the course from a file (filename)

    void add1Student (LIST <SLL, STUDENT>&L, STUDENT & SV);
    /// add1Student: Add a student to the course, includes:
    ///     student: is student needs to be added 
    /// This function does not return anything
    void in(STUDENT ST);
    void remove1Student (STUDENT student);
    /// remove1Student: Remove a student from the course, includes:
    ///        student: is the student need to be removed from the course
    /// This function does not return anything
    /////////////////
    // scores are members of STUDENT
    bool importScore (std::string filename);    // file CSV _ task 20
    bool updateResult (LIST <SLL, STUDENT>& L);  // get data from keyboard
                                                // task 22
                                                // search for student in the list `students` using `ID`:   if found, update new score; otherwise, pop up "there is no student with ID " << ID << " in this course."
    bool exportStudents(std::string filename);
};