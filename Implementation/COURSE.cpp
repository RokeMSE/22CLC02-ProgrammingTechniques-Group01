#include "StructsDefinition/COURSE.h"
#include "LIST.cpp"

void COURSE::updateInfo () {

}

void COURSE::add1Student (STUDENT student) 
{
    add_val(students,student);
}

void COURSE::remove1Student(STUDENT student)
{
    remove_val(students,student);
}