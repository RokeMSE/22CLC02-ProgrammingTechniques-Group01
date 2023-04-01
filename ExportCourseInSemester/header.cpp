#include <../header.h>
#include <../ConvertEnumToString/convertToString.cpp>
#include <fstream>
#include <iostream>

void exportCourseInSemester(SCHOOLYEAR s, SEMESTER a)
{
    DLL<COURSE>* cur = a.course.head;
    string filename ="CSV/SemInSchoolYear/CourseInSemester/";
    ofstream out(filename + to_string(s.begin) + "_sem" + to_string(a.No) + ".csv");
    
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
    string* temp = new string;
    getline(inp, *temp);
    delete temp;
    while(!inp.eof())
    {
        getline(inp, (cur->data).ID , ',');
        getline(inp, (cur->data).name, ',');
        getline(inp, (cur->data).teacher, ',');
        string* temp = new string;
        getline(inp, *temp, ',');
        int* dummy = new int;
        *dummy = stoi(*temp);
        (cur->data).credit = *dummy;
        getline(inp, *temp, ',');
        *dummy = stoi(*temp);
        (cur->data).maxStudents = *dummy;
        getline(inp, WeekDaytoString((cur->data).day) , ',');
        getline(inp, SeesionToString((cur->data).session), ',');
        importStudentInCourse("CSV/SemInSchoolYear/CourseInSemester/" + (cur->data).ID + ".csv", cur->data);
        delete temp, dummy;
    }

    inp.close();
    return true;
}

