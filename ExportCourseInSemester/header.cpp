#include <../header.h>
#include <../ConvertEnumToString/convertToString.cpp>
#include <fstream>
#include <iostream>

void exportCourseInSemester(SEMESTER a)
{
    DLL<COURSE>* cur = a.course.head;
    //ID, name, teacher, credit, maxStudents, day, session, students(exportStudentsInCourse)
    string filename ="CSV/SemInSchoolYear/CourseInSemester/";
    ofstream out(filename + (cur->data).ID + ".csv");
    
    out << "ID,Name,Teacher,Credit,Max Students,Day,Session"; 
    while(cur)
    {
        out << (cur->data).ID << ',' << (cur->data).name << ',' << (cur->data).teacher << ',' << (cur->data).credit << ',' << (cur->data).maxStudents << ',' << (cur->data).day << ',' << (cur->data).session;
        exportStudentsInCourse(cur->data);
        out << ',' << (cur->data).ID + ".csv" << '\n';
        
        DLL<COURSE>* temp = cur; 
        cur = cur->next;
        delete temp;
    }
    delete cur;

    out.close();
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

