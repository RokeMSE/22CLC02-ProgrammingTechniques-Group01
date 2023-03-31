#include <../header.h>
#include <../ConvertEnumToString/convertToString.cpp>
#include <fstream>
#include <iostream>

bool exportCourseInSemester(std::string filename, SEMESTER a)
{
    //ID, name, teacher, credit, maxStudents, day, session, students(exportStudentsInCourse)
    ofstream out(filename);
    
    DLL<COURSE>* cur = a.course.head;
    while(cur)
    {
        out << (cur->data).ID << ',' << (cur->data).name << ',' << (cur->data).teacher << ',' << (cur->data).credit << ',' << (cur->data).maxStudents << ',' << (cur->data).day << ',' << (cur->data).session;
        exportStudentInCourse((cur->data).ID + ".csv");
        out << ',' << (cur->data).ID + ".csv" << '\n';
        cur = cur->next;
    }
    out << '.';

    out.close();
    return true;
}

bool importCourseInSemester(std::string filename, SEMESTER &a)
{
    ifstream inp(filename);

    if(!inp.is_open())
        return false;

    DLL<COURSE>* cur = a.course.head;
    while(!inp.eof())
    {
        getline(inp, (cur->data).ID , ',');
        getline(inp, (cur->data).name, ',');
        getline(inp, (cur->data).teacher, ',');
        inp >> (cur->data).credit;
        inp >> (cur->data).maxStudents;
        getline(inp, WeekDaytoString((cur->data).day) , ',');
        getline(inp, SeesionToString((cur->data).session), ',');
        importStudentInCourse((cur->data).ID + ".csv");
    }

    inp.close();
    return true;
}

