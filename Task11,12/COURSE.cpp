#include "LIST.cpp"
#include "StructsDefinition/COURSE.h"

///TASK11
void COURSE::add1Student (STUDENT student) 
{
    add_val<STUDENT>(students,student);
}

///TASK12
void COURSE::remove1Student(STUDENT student)
{
    remove_val<STUDENT>(students,student);
}