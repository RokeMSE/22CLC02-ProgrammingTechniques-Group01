#include <fstream>
#include "header.h"
using namespace std;

void exportStudents() {

}

void exportStaffs() {

}

void exportClasses() {

}

void exportStudentsInACourse() {

}

void exportCoursesInASemester() {

}

void exportASemesterInASchoolYear(std::string filename, SEMESTER* sem) {
    ofstream out(filename); // append
    out.close();
}

void exportSchoolYears() {
    ofstream out("CSV/SchoolYear.csv");
    DLL<SCHOOLYEAR>* cur = L_SchoolYear.head;
    if ( !cur ) return; // will not do anything if there is no school year => no semester => no course

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
        exportASemesterInASchoolYear(file, cur->data.sem1);
        exportASemesterInASchoolYear(file, cur->data.sem2);
        exportASemesterInASchoolYear(file, cur->data.sem3);
        cur = cur->next;
    }
    out.close();
}