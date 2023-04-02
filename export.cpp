#include <fstream>
#include "header.h"
using namespace std;

void exportStudents() {
    if (!L_Student.head)    return;
    DLL<STUDENT*>* cur = L_Student.head;
    string filepath = "CSV\\STUDENT.csv";
    ofstream ofs(filepath);
    ofs << "No,studentID,firstname,lastname,socialID,username,password,gender(0-male/1-female),DateofBirth(mm/dd/yyyy)";
    while (cur)
    {
        // current student == cur->data;
        ofs << cur->data -> No << ',' << cur->data -> studentID << ',' << cur->data -> firstname << ',' << cur->data -> lastname;
        ofs << ',' << cur->data -> socialID << ',' << cur->data -> user -> username << ',' << cur->data -> user -> password;
        ofs << ',' << cur->data -> gender << ',';
        ofs << DateToString(cur->data->DoB) << ',';
        ofs << cur->data -> Class->convertToString();
        ofs << '\n';
        DLL<STUDENT*>* dump = cur;
        cur = cur -> next;
        delete cur->data;
        delete dump;
    }
    ofs.close();
    return;
}

void exportStaffs() {
    if (!L_Staff.head)  return;
    DLL<STAFF*>* cur = L_Staff.head;
    string filepath = "CSV\\STAFF.csv";
    ofstream ofs(filepath);
    ofs << "username,password,firstname,lastname\n";
    while (cur)
    {
        STAFF* staff = cur -> data;
        ofs << (staff -> user) -> username << ',' << (staff -> user) -> password << ',';
        ofs << staff -> firstname << ',' << staff -> lastname;
        ofs << '\n';
        DLL<STAFF*>* dump = cur;
        cur = cur -> next;
        delete staff;
        delete dump;
    }
    ofs.close();
    return;
}

void exportClasses() {
    if (!L_Class.head)  return;
    DLL<CLASS>* cur = L_Class.head;
    string filepath = "CSV\\CLASS.csv";
    ofstream ofs(filepath);
    ofs << "yearIn,K,Program,No\n";
    while (cur)
    {
        CLASS cla = cur -> data;
        ofs << cla.yearIn << ',' << cla.K << ',';
        ofs << convertFromProgram(cla.program) << ',' << cla.No;
        ofs << '\n';
        DLL<CLASS>* dump = cur;
        cur = cur -> next;
        delete dump;
    }
    ofs.close();
    return;
}

void exportStudentsInACourse(COURSE* c, uint startYear) {
    DLL<SCOREBOARD*> *cur = c->students.head;
    if ( !cur ) return;
        // will not do anything if there is no student in the list of students in the course;

    ofstream ofs("CSV/SemInSchoolYear/CourseInSemester/StudentsInCourse/" + c->ID + ".csv");

    ofs << "StudentID,othermark,midtermMark,finalMark,totalMark" << endl;         // this is title line
    
    while (cur != nullptr)
    {
        ofs << cur->data->student->studentID <<',' << cur->data->otherMark << ',' << cur->data->midtermMark << ',' << cur->data->finalMark << ',' << cur->data->totalMark << endl;
        DLL<SCOREBOARD*> *tmp = cur;
        cur = cur -> next;
        delete tmp;     // delete a node of the COURSE::students list
    }
    ofs.close();
}

void exportCoursesInASemester(std::string filename, SEMESTER* sem, uint startYear) {
    DLL<COURSE*>* cur = sem->course.head;
    string filename ="CSV/SemInSchoolYear/CourseInSemester/";
    ofstream out(filename + to_string(startYear) + "_sem" + to_string(sem->No) + ".csv");
    
    DLL<COURSE*>* temp; // node to be deleted
    out << "ID,Name,Teacher,Credit,Max Students,Day,Session"; 
    while(cur)
    {
        out << cur->data->ID << ',' << cur->data->name << ',' << cur->data->teacher << ',' << cur->data->credit << ',' << cur->data->maxStudents << ',' << cur->data->day << ',' << cur->data->session;
        out << ',' << cur->data->ID + ".csv" << '\n';
        
        exportStudentsInACourse(cur->data, startYear);
        
        temp = cur; 
        cur = cur->next;
        delete temp;
    }

    out.close();
}

void exportASemesterInASchoolYear(std::string filename, SEMESTER* sem, uint startYear) {
    if ( !sem ) return;

    // open the file that has been created
    ofstream out(filename, std::ofstream::app); // append
    string file = "CSV/SemInSchoolYear/" + to_string(startYear) + "_sem" + to_string(sem->No) + ".csv";
    out << sem->No << ',' << DateToString(sem->startdate) << ',' << DateToString(sem->enddate) << endl;
    out.close();
    exportCoursesInASemester(file, sem, startYear);
}

void exportSchoolYears() {
    DLL<SCHOOLYEAR>* cur = L_SchoolYear.head;
    if ( !cur ) return; // will not do anything if there is no school year => no semester => no course

    // since then, list.tail != nullptr
    ofstream out("CSV/SchoolYear.csv");
    out << "yearbegin,yearend,semester file,sem1,sem2,sem3" << endl;    // title line

    string file;
    while ( cur != L_SchoolYear.tail->next ) {
        out << cur->data.begin << ',';
        out << cur->data.end << ',';

        file = "CSV/SemInSchoolYear/" + to_string(cur->data.begin) + "_" + to_string(cur->data.end) + ".csv";
        out << file << ',';

        out << ((cur->data.sem1)? 1:0) << ',';
        out << ((cur->data.sem2)? 1:0) << ',';
        out << ((cur->data.sem3)? 1:0) << endl;

        // create an empty file
        ofstream out(file); // append
        out.close();

        exportASemesterInASchoolYear(file, cur->data.sem1, 1);
        exportASemesterInASchoolYear(file, cur->data.sem2, 2);
        exportASemesterInASchoolYear(file, cur->data.sem3, 3);
        cur = cur->next;
    }
    out.close();
}