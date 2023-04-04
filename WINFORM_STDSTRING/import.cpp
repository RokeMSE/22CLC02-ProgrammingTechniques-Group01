#include <fstream>
#include <string>
#include "header.h"
using namespace std;
bool importStudents() {
    ifstream ifs("CSV/Student.csv");
    if (!ifs.is_open()) return 0;
    string str;
    std::getline(ifs, str);  // skip title line
    while (!ifs.eof()) {
        GROUP1::STUDENT* tmp = new GROUP1::STUDENT;
        std::getline(ifs, str, ','); // get username

        tmp->user.username = str;

        std::getline(ifs, str, ','); // get password
        tmp->user.password = str;

        std::getline(ifs, str, ','); // get No
        tmp->No = stoi(str);

        std::getline(ifs, str, ',');
        tmp->studentID = str;

        std::getline(ifs, str, ',');
        tmp->firstname = str;

        std::getline(ifs, str, ',');
        tmp->lastname = str;

        std::getline(ifs, str, ',');
        tmp->gender = ((str == "1") ? 1 : 0);

        std::getline(ifs, str, ',');
        tmp->DoB = getDate(str);

        std::getline(ifs, str, ',');
        tmp->socialID = str;

        std::getline(ifs, str);  // get class
        GROUP1::DLL<GROUP1::CLASS>* nodeCls = L_Class.head;
        while (nodeCls) {
            if (nodeCls->data.convertToString() == str) {
                tmp->Class = &(nodeCls->data);
                break;
            }
            nodeCls = nodeCls->next;
        }

        // if ( !nodeCls ) MessageBox::Show("Error");

        if (L_Student.head == nullptr)
        {
            L_Student.head = L_Student.tail = new GROUP1::DLL<GROUP1::STUDENT*>;
            L_Student.head->data = tmp;
        }
        else
        {
            L_Student.tail->next = new GROUP1::DLL<GROUP1::STUDENT*>;
            L_Student.tail->next->prev = L_Student.tail;
            L_Student.tail = L_Student.tail->next;
        }
        L_Student.tail->data = tmp;
        //L_Student.head -> next = L_Student.tail->next = nullptr;
    }
    ifs.close();
    return 1;
}

bool importStaffs() {
    ifstream ifs("CSV/Staff.csv");
    if (ifs.is_open() == false)
        return false;
    string str;
    std::getline(ifs, str);
    while (!ifs.eof()) {
        GROUP1::STAFF* tmp = new GROUP1::STAFF;
        std::getline(ifs, tmp->user.username, ','); // get username

        std::getline(ifs, tmp->user.password, ','); // get password

        std::getline(ifs, tmp->firstname, ',');

        std::getline(ifs, tmp->lastname);

        if (L_Staff.head == nullptr)
        {
            L_Staff.head = L_Staff.tail = new GROUP1::DLL<GROUP1::STAFF*>;
            L_Staff.head->data = tmp;
        }
        else
        {
            L_Staff.tail->next = new GROUP1::DLL<GROUP1::STAFF*>;
            L_Staff.tail->next->prev = L_Staff.tail;
            L_Staff.tail = L_Staff.tail->next;
        }
        L_Staff.tail->data = tmp;
    }
    ifs.close();
    return true;
}

bool importClasses()
{
    ifstream ifs("CSV/Class.csv");
    if (ifs.is_open() == false)
        return false;
    string str;
    std::getline(ifs, str);
    while (!ifs.eof())
    {
        GROUP1::CLASS* tmp = new GROUP1::CLASS;
        std::getline(ifs, str, ',');
        tmp->yearIn = stoi(str);

        std::getline(ifs, str, ',');
        tmp->K = stoi(str);

        std::getline(ifs, str, ',');
        tmp->program = GROUP1::convertToProgram(str);

        std::getline(ifs, str);
        tmp->No = stoi(str);

        if (L_Class.head == nullptr)
        {
            L_Class.head = L_Class.tail = new GROUP1::DLL<GROUP1::CLASS>;
            L_Class.head->data = *tmp;
        }
        else
        {
            L_Class.tail->next = new GROUP1::DLL<GROUP1::CLASS>;
            L_Class.tail->next->prev = L_Class.tail;
            L_Class.tail = L_Class.tail->next;
        }
        L_Class.tail->data = *tmp;
    }
    ifs.close();
    return true;
}


bool importStudentsInACourse(std::string filename, GROUP1::COURSE* c) {
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;

    string str;
    std::getline(ifs, str);   /// skip the title line;

    while (!ifs.eof())
    {
        std::getline(ifs, str);   /// (str) will have format: "[StudentID]"

        /// find this student by StudentID in L_Student;
        GROUP1::DLL<GROUP1::STUDENT*>* stu = L_Student.head;
        //DLL<SCOREBOARD*> *cur = c->students.head;
        while (stu != nullptr && stu->data->studentID != str)
            stu = stu->next;

        GROUP1::SCOREBOARD* s = new GROUP1::SCOREBOARD;

        s->student = stu->data;
        /// add this student with his/her scoreboard to the list of student in the course
        c->add1Student(s);
    }
    ifs.close();
    return true;
}

//bool importCourseInSemester(std::string filename, GROUP1::SEMESTER& a)
//{
//    ifstream inp(filename);
//
//    if (!inp.is_open())
//        return false;
//
//    GROUP1::DLL<GROUP1::COURSE*>* cur;
//    a.course.head = a.course.tail = cur;
//    string* temp = new string;
//    std::getline(inp, *temp);
//    delete temp;
//    while (!inp.eof())
//    {
//        cur = new GROUP1::DLL<GROUP1::COURSE*>;
//        std::getline(inp, (cur->data)->ID, ',');
//        std::getline(inp, (*cur->data).name, ',');
//        std::getline(inp, (*cur->data).teacher, ',');
//        string* temp = new string;
//        std::getline(inp, *temp, ',');
//        (*cur->data).credit = stoi(*temp);
//        std::getline(inp, *temp, ',');
//        (*cur->data).maxStudents = stoi(*temp);
//        std::getline(inp, *temp, ',');
//        (*cur->data).day = convertToWeekday(*temp);
//        std::getline(inp, *temp, ',');
//        (*cur->data).session = convertToSession(*temp);
//        importStudentsInACourse("CSV/SemInSchoolYear/CourseInSemester/" + (*cur->data).ID + ".csv", *cur->data);
//        delete temp;
//        cur->next = new DLL<COURSE*>;
//        cur->next->prev = cur;
//
//        cur = cur->next;
//    }
//    inp.close();
//    return true;
//}

//bool importASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* newSem, ushort noSem) {
//    newSem = new GROUP1::SEMESTER;
//
//    ifstream inp(filename);
//    if (!inp.is_open())  return 0;
//
//    string tmp;
//    std::getline(inp, tmp);  // skip title line
//
//    for (int i = 1; i < noSem; i++) // skip Semester
//        std::getline(inp, tmp);
//
//    std::getline(inp, tmp, ','); // skip No
//
//    std::getline(inp, tmp, ','); // get startdate
//    newSem->startdate = getDate(tmp);
//
//    std::getline(inp, tmp, ','); // get enddate
//    newSem->enddate = getDate(tmp);
//
//    std::getline(inp, tmp); // get name of the file that contains all the courses in this semester
//    inp.close();
//
//    bool importCourseInSem = importCoursesInASemester(tmp, newSem);
//    return 1;
//}

bool importSchoolYears() {
    L_SchoolYear.head = L_SchoolYear.tail = nullptr;
    ifstream inp("CSV/SchoolYear");
    if (!inp.is_open()) return 0;

    string temp;
    std::getline(inp, temp); // skip title line

    GROUP1::SCHOOLYEAR newSchoolYear;
    while (!inp.eof()) {
        // create new Node of L_SchoolYear
        if (L_SchoolYear.head == nullptr)   L_SchoolYear.head = L_SchoolYear.tail = new GROUP1::DLL<GROUP1::SCHOOLYEAR>;
        else {
            L_SchoolYear.tail->next = new GROUP1::DLL<GROUP1::SCHOOLYEAR>;
            L_SchoolYear.tail->next->prev = L_SchoolYear.tail->next;
            L_SchoolYear.tail = L_SchoolYear.tail->next;
        }
        L_SchoolYear.tail->data = newSchoolYear;
        L_SchoolYear.tail->next = nullptr;
        ////////////////

        // year begin
        std::getline(inp, temp, ',');
        newSchoolYear.begin = stoi(temp);
        ////////////////

        // year end
        std::getline(inp, temp, ',');
        newSchoolYear.end = stoi(temp);
        ////////////////

        // get name of file that contains all semesters' info
        string filenameImportSemester;
        std::getline(inp, filenameImportSemester, ',');
        ////////////////

        bool importSemesterInSchoolYear;

        // sem1
        std::getline(inp, temp, ',');    // sem1's condition
        if (temp != "1") continue;// if sem1 is null => all the following sems are null
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem1, 1);
        ////////////////

        // sem2
        std::getline(inp, temp, ',');    // sem2's condition
        if (temp != "1") continue;
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem2, 2);
        ////////////////

        // sem3
        std::getline(inp, temp, ',');    // sem3's condition
        if (temp != "1") continue;
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, L_SchoolYear.tail->data.sem3, 3);
        ////////////////
    }
    inp.close();
    return 1;
}