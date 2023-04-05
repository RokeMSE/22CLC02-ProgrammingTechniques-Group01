#include <fstream>

#include "export.h"
#include "Structs.h"
#include "helperFunctions.h"
#include "GlobalVariables.h"

using namespace std;
using namespace GROUP1;

void exportStudents() {
    string filepath = "CSV\\Student.csv";
    ofstream ofs(filepath);
    ofs << "username,password,No,studentID,firstname,lastname,gender(0-male/1-female),DateofBirth(mm/dd/yyyy),socialID,CLASS";
    if (!L_Student.head) return;
    ofs << '\n';
    GROUP1::DLL<GROUP1::STUDENT*>* cur = L_Student.head;
    GROUP1::DLL<GROUP1::STUDENT*>* dum; // the node to be deleted
    while (cur) {
        // current student == cur->data;
        ofs << ((cur->data)->user).username << ',' << ((cur->data)->user).password << ',';
        ofs << cur->data->No << ',' << cur->data->studentID << ',' << cur->data->firstname << ',' << cur->data->lastname << ',';
        ofs << cur->data -> gender << ',';
        ofs << DateToString(cur->data->DoB) << ',';
        ofs << cur->data -> socialID << ',';
        ofs << cur -> data -> Class -> convertToString();
        if (cur -> next) ofs << '\n'; // avoid creating an empty line at the end of the file

        dum = cur;
        cur = cur->next;
        delete (dum->data)->Class;
        delete dum->data;
        delete dum;
    }
    ofs.close();
}

void exportStaffs() {
    string filepath = "CSV\\Staff.csv";
    ofstream ofs(filepath);
    ofs << "username,password,firstname,lastname";
    if (!L_Staff.head)  return;
    ofs << endl;
    GROUP1::DLL<GROUP1::STAFF*>* cur = L_Staff.head;
    GROUP1::DLL<GROUP1::STAFF*>* dum; // the node to be deleted
    while (cur)
    {
        // current staff == cur -> data;
        ofs << (cur -> data -> user).username << ',' << (cur -> data -> user).password << ',';
        ofs << cur -> data -> firstname << ',' << cur -> data -> lastname;
        if (cur -> next) ofs << '\n'; // avoid creating an empty line at the end of the file

        dum = cur;
        cur = cur -> next;
        
        delete dum -> data;
        delete dum;
    }
    ofs.close();
}

void exportClasses() {
    string filepath = "CSV\\Class.csv";
    ofstream ofs(filepath);
    ofs << "K,Program,No,yearIn";
    if (!L_Class.head) return;
    ofs << endl;
    GROUP1::DLL<GROUP1::CLASS>* cur = L_Class.head;
    GROUP1::DLL<GROUP1::CLASS>* dum; // the node to be deleted
    while (cur) {
        GROUP1::CLASS cla = cur->data;
        ofs << cla.K << ',';
        ofs << convertFromProgram(cla.program) << ',' << cla.No << ',' << cla.yearIn;
        if (cur -> next) ofs << '\n'; // avoid creating an empty line at the end of the file
        dum = cur;
        cur = cur -> next;
        delete dum;
    }
    ofs.close();
}

void exportStudentsInACourse(string filename, COURSE* c) {
    GROUP1::DLL<GROUP1::SCOREBOARD*> *cur = c->students.head;
    ofstream ofs(filename);

    ofs << "StudentID,othermark,midtermMark,finalMark,totalMark"; // this is title line
    if (cur)    ofs << endl;
    
    GROUP1::DLL<GROUP1::SCOREBOARD*>* tmp; // the node to be deleted
    while (cur)
    {
        ofs << cur->data->student->studentID <<',' << cur->data->otherMark << ',' << cur->data->midtermMark << ',' << cur->data->finalMark << ',' << cur->data->totalMark;
        if (cur -> next) ofs << '\n'; // avoid creating an empty line at the end of the file
        tmp = cur;
        cur = cur -> next;
        delete tmp->data;   // delete node->data [SCOREBOARD*] first
        delete tmp;         // delete a node of the COURSE::students list [DLL<SCOREBOARD*>*]
    }
    ofs.close();
}

void exportCoursesInASemester(std::string filename, GROUP1::SEMESTER* sem, uint startYear) {
    GROUP1::DLL<GROUP1::COURSE*>* cur = sem->course.head;
    ofstream out(filename);
    
    GROUP1::DLL<GROUP1::COURSE*>* temp; // the node to be deleted
    out << "ID,Name,Teacher,Credit,Max Students,Day,Session, file containing students in the course"; 
    if (cur)    out << endl;
    while(cur)
    {
        string file = "CSV/SemInSchoolYear/CourseInASemester/StudentsInCourse/" + to_string(startYear) + "_sem" + to_string(sem->No) + "_course" + cur->data->ID + ".csv";
        out << cur->data->ID << ',' << cur->data->name << ',' << cur->data->teacher << ',' << cur->data->credit << ',' << cur->data->maxStudents << ',' << convertFromWeekDay(cur->data->day) << ',' << convertFromSession(cur->data->session);
        out << ',' << file;
        if (cur -> next) out << '\n'; // avoid creating an empty line at the end of the file

        exportStudentsInACourse(file, cur->data);
        
        temp = cur; 
        cur = cur->next;
        delete temp->data;  // delete [COURSE*]
        delete temp;        // delete [DLL<COURSE*>*]
    }
    out.close();
}

void exportASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* sem, uint startYear) {
    ofstream out(filename, std::ofstream::app); // append
    if (sem->No == 1) out << "No,startdate,enddate,file containing all courses of semester"; // title line when exporting sem1 of the schoolyear
    if ( !sem ) return;
    
    out << endl; // avoid creating an empty line at the end of the file
    string file = "CSV/SemInSchoolYear/CourseInASemester/" + to_string(startYear) + "_sem" + to_string(sem->No) + ".csv";
    out << sem->No << ',' << DateToString(sem->startdate) << ',' << DateToString(sem->enddate) << ',' << file;
    out.close();
    exportCoursesInASemester(file, sem, startYear);
}

void exportSchoolYears() {
    GROUP1::DLL<GROUP1::SCHOOLYEAR>* cur = L_SchoolYear.head;
    // since then, list.tail != nullptr
    ofstream out("CSV/SchoolYear.csv");
    out << "beginning year,end year,file containing semesters,sem1,sem2,sem3";    // title line
    if (cur)    out << endl;
    string file;
    GROUP1::DLL<GROUP1::SCHOOLYEAR>* dummy; // the node to be deleted
    while ( cur ) {
        // we need to loop until we have exported all school year => loop 'til cur == nullptr
        out << cur->data.begin << ',';
        out << cur->data.end << ',';

        file = "CSV/SemInSchoolYear/" + to_string(cur->data.begin) + "_" + to_string(cur->data.end) + ".csv";
        out << file << ',';

        out << ((cur->data.sem1)? 1:0) << ',';
        out << ((cur->data.sem2)? 1:0) << ',';
        out << ((cur->data.sem3) ? 1 : 0);
        if (cur->next)    out << endl; // avoid creating an empty line at the end of the file

        // create an empty file
        ofstream out(file);
        out.close();

        exportASemesterInASchoolYear(file, cur->data.sem1, 1);
        exportASemesterInASchoolYear(file, cur->data.sem2, 2);
        exportASemesterInASchoolYear(file, cur->data.sem3, 3);

        delete cur->data.sem1;
        delete cur->data.sem2;
        delete cur->data.sem3;

        dummy = cur;
        cur = cur->next;
        delete dummy; // delete a node of school year
    }
    out.close();
}