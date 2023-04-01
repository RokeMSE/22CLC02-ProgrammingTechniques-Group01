#include <fstream>
#include "header.h"
using namespace std;

bool importStudents(std::string filename) {

}

bool importStaffs(std::string filename) {

}

bool importClasses(std::string filename) {

}

bool importStudentsInACourse(std::string filename, COURSE* c) {
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    
    string str;
    getline(ifs,str);   /// skip the title line;
    
    while (!ifs.eof())
    {
        getline(ifs,str);   /// (str) will have format: "[StudentID]"

        /// find this student by StudentID in L_Student;
        DLL<STUDENT*> *cur = L_Student.head;
        while (cur != nullptr && cur->data->studentID != str)
            cur = cur->next;

        /// add this student into the list of student in the course
        c->add1Student(cur->data);
    }
    ifs.close();
    return true;
}

bool importCoursesInASemester(std::string filename, SEMESTER* sem) {
    ifstream inp(filename);

    if(!inp.is_open())
        return false;

    DLL<COURSE*>* cur = sem->course.head;
    string* temp = new string;
    getline(inp, *temp);
    delete temp;
    while(!inp.eof())
    {
        getline(inp, cur->data->ID , ',');
        getline(inp, cur->data->name, ',');
        getline(inp, cur->data->teacher, ',');
        inp >> cur->data->credit;
        inp >> cur->data->maxStudents;
        getline(inp, convertFromWeekDay(cur->data->day) , ',');
        getline(inp, convertFromSession(cur->data->session), ',');
        importStudentsInACourse("CSV/SemInSchoolYear/CourseInSemester/" + cur->data->ID + ".csv", cur->data);
    }

    inp.close();
    return true;
}

bool importASemesterInASchoolYear(std::string filename, SEMESTER* newSem, ushort noSem) {
    newSem = new SEMESTER;
    
    ifstream inp(filename);
    if (!inp.is_open())  return 0;

    string tmp;
    getline(inp, tmp);  // skip title line
    
    for (int i = 1; i < noSem; i++) // skip Semester
        getline(inp, tmp);

    getline(inp, tmp, ','); // skip No

    getline(inp, tmp, ','); // get startdate
    newSem->startdate = getDate(tmp);

    getline(inp, tmp, ','); // get enddate
    newSem->enddate = getDate(tmp);

    getline(inp, tmp, ','); // get name of the file that contains all the courses in this semester
    inp.close();

    bool importCourseInSem = importCoursesInASemester (tmp, newSem);
    return 1;
}

bool importSchoolYears(std::string filename) {
    L_SchoolYear.head = L_SchoolYear.tail = nullptr;
    ifstream inp(filename);
    if (!inp.is_open()) return 0;

    string temp;
    getline(inp, temp); // skip title line

    SCHOOLYEAR newSchoolYear;
    while ( !inp.eof() ) {
        // create new Node of L_SchoolYear
        if (L_SchoolYear.head == nullptr)   L_SchoolYear.head = L_SchoolYear.tail = new DLL<SCHOOLYEAR>;
        else {
            L_SchoolYear.tail->next = new DLL<SCHOOLYEAR>;
            L_SchoolYear.tail->next->prev = L_SchoolYear.tail->next;
            L_SchoolYear.tail = L_SchoolYear.tail->next;
        }
        L_SchoolYear.tail->data = newSchoolYear;
        L_SchoolYear.tail->next = nullptr;
        ////////////////

        // year begin
        getline(inp, temp, ',');
        newSchoolYear.begin = stoi(temp);
        ////////////////

        // year end
        getline(inp, temp, ',');
        newSchoolYear.end = stoi(temp);
        ////////////////

        // get name of file that contains all semesters' info
        string filenameImportSemester;
        getline(inp, filenameImportSemester, ',');
        ////////////////

        bool importSemesterInSchoolYear;

        // sem1
        getline(inp, temp, ',');    // sem1's condition
        if ( temp != "1" ) continue;// if sem1 is null => all the following sems are null
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem1, 1);
        ////////////////

        // sem2
        getline(inp, temp, ',');    // sem2's condition
        if ( temp != "1" ) continue;
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem2, 2);
        ////////////////

        // sem3
        getline(inp, temp, ',');    // sem3's condition
        if ( temp != "1" ) continue;
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem3, 3);
        ////////////////
    }
    inp.close();
    return 1;
}