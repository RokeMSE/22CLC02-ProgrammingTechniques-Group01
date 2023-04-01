#include <fstream>
#include "header.h"
using namespace std;

void exportStudents() {

}

void exportStaffs() {

}

void exportClasses() {

}

void exportStudentsInACourse(COURSE* c, uint startYear) {
    DLL<SCOREBOARD*> *cur = c->students.head;
    if ( !cur ) return;
        // will not do anything if there is no student in the list of students in the course;

    ofstream ofs("CSV/SemInSchoolYear/CourseInSemester/StudentsInCourse/" + c->ID + ".csv");

    ofs << "StudentID" << endl;         // this is title line
    
    while (cur != nullptr)
    {
        ofs << cur->data->student->studentID << endl;    // export StudentID to the file
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

        exportASemesterInASchoolYear(file, cur->data.sem1, 1, cur->data.begin);
        exportASemesterInASchoolYear(file, cur->data.sem2, 2, cur->data.begin);
        exportASemesterInASchoolYear(file, cur->data.sem3, 3, cur->data.begin);
        cur = cur->next;
    }
    out.close();
}