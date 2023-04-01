#include <fstream>
#include "header.h"
using namespace std;


bool importStudents(std::string filename) {
    ifstream ifs("CSV/Student.csv");
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    string str;
    int count = 0;
    while (getline(ifs, str)) {
        count++;
    }
    DLL<STUDENT*>* cur = L_Class.head;
    getline(ifs, str);
    while (!ifs.eof())
    {
        for (int i = 0; i < count; i++) {

            getline(ifs, str, ','); // get username
            cur->data->user->username = str;
            getline(ifs, str, ','); // password
            cur->data->user->password = str;
            getline(ifs, str, ','); // get No
            cur->data->No = stoi(str);
            getline(ifs, str, ',');
            cur->data->studentID = str;
            getline(ifs, str, ',');
            cur->data->firstname = str;
            getline(ifs, str, ',');
            cur->data->lastname = str;
            getline(ifs, str, ',');
            cur->data->gender = str;
            getline(ifs, str, ',');
            cur->data->DoB = getDate(str);
            getline(ifs, str, ',');
            cur->data->socialID = str;
            getline(ifs, str, ',');
            cur->data->otherMark = stod(str);
            getline(ifs, str, ',');
            cur->data->midtermMark = stod(str);
            getline(ifs, str, ',');
            cur->data->finalMark = stod(str);
            getline(ifs, str, ',');
            cur->data->totalMark = (str);
            getline(ifs, str, ',');
            cur->data->Class = convertToClass(str);
            cur = cur->next;
        }
    }
}

bool importStaffs(std::string filename) {

}

bool importClasses(std::string filename) {

}

bool importStudentsInACourse(std::string filename) {

}

bool importCoursesInASemester(std::string filename) {

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

    bool importCourseInSem = importCoursesInASemester(tmp);
    return 1;
}

bool importSchoolYears(std::string filename) {
    L_SchoolYear.head = L_SchoolYear.tail = nullptr;
    ifstream inp(filename);
    if (!inp.is_open()) return 0;

    string temp;
    getline(inp, temp); // skip title line

    SCHOOLYEAR newSchoolYear;
    while (!inp.eof()) {
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
        if (temp != "1") continue;// if sem1 is null => all the following sems are null
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem1, 1);
        ////////////////

        // sem2
        getline(inp, temp, ',');    // sem2's condition
        if (temp != "1") continue;
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem2, 2);
        ////////////////

        // sem3
        getline(inp, temp, ',');    // sem3's condition
        if (temp != "1") continue;
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem3, 3);
        ////////////////
    }
    inp.close();
    return 1;
}