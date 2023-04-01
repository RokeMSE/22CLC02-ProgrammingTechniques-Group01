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

void exportCoursesInASemester(std::string filename, SEMESTER a) {

}

void exportASemesterInASchoolYear(std::string filename, SEMESTER* sem, ushort noSem, uint startYear) {
    // open the file that has been created
    ofstream out(filename, std::ofstream::app); // append
    string file = "CSV/SemInSchoolYear/" + to_string(startYear) + "_sem" + to_string(noSem) + ".csv";
    out << sem->No << ',' << DateToString(sem->startdate) << ',' << DateToString(sem->enddate) << endl;
    out.close();
}

void exportSchoolYears() {
    ofstream out("CSV/SchoolYear.csv");
    DLL<SCHOOLYEAR>* cur = L_SchoolYear.head;
    if ( !cur ) {
        out.close();
        return;
    } // will not do anything if there is no school year => no semester => no course

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