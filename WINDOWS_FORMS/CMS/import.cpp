#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

#include "GlobalVariables.h"
#include "import.h"
#include "Structs.h"
#include "helperFunctions.h"

//using namespace System;
//using namespace System::ComponentModel;
//using namespace System::Collections;
using namespace System::Windows::Forms;
//using namespace System::Data;
//using namespace System::Drawing;

using namespace std;
using namespace GROUP1;

bool importStudents() {
    ifstream ifs("CSV/Student.csv");
    if (!ifs.is_open()) return 0;
    string str;
    std::getline(ifs, str);  // skip title line
    while (!ifs.eof()) {
        STUDENT* tmp = new STUDENT;
        std::getline(ifs, str, ','); // get username

        tmp->user.username = str;

        std::getline(ifs, str, ','); // get password
        tmp->user.password = str;

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
        DLL<CLASS>* nodeCls = L_Class.head;
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
            L_Student.head = L_Student.tail = new DLL<STUDENT*>;
            L_Student.head->data = tmp;
        }
        else
        {
            L_Student.tail->next = new DLL<STUDENT*>;
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
    ifstream ifs("CSV\\Staff.csv");
    if (ifs.is_open() == false)
        return false;
    string str;
    std::getline(ifs, str);
    while (!ifs.eof()) {
        STAFF* tmp = new STAFF;
        std::getline(ifs, tmp->user.username, ',');
        std::getline(ifs, tmp->user.password, ',');
        std::getline(ifs, tmp->firstname, ',');
        std::getline(ifs, tmp->lastname);

        if (L_Staff.head == nullptr)
        {
            L_Staff.head = L_Staff.tail = new DLL<STAFF*>;
            L_Staff.head->data = tmp;
        }
        else
        {
            L_Staff.tail->next = new DLL<STAFF*>;
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
        CLASS* tmp = new CLASS;

        std::getline(ifs, str, ',');
        tmp->K = stoi(str);

        std::getline(ifs, str, ',');
        tmp->program = convertToProgram(str);

        std::getline(ifs, str, ',');
        tmp->No = stoi(str);

        std::getline(ifs, str);
        tmp->yearIn = stoi(str);

        if (L_Class.head == nullptr)
        {
            L_Class.head = L_Class.tail = new DLL<CLASS>;
            L_Class.head->data = *tmp;
        }
        else
        {
            L_Class.tail->next = new DLL<CLASS>;
            L_Class.tail->next->prev = L_Class.tail;
            L_Class.tail = L_Class.tail->next;
        }
        L_Class.tail->data = *tmp;
    }
    ifs.close();
    return true;
}


bool importStudentsInACourse(std::string filename, COURSE*& c) {
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    string str;
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(4)));
    std::getline(ifs, str);   /// skip the title line;

    DLL<STUDENT*>* oriStu;
    while (!ifs.eof())
    {
        std::getline(ifs, str, ',');   /// (str) will have format: "[StudentID]"

        /// find this student by StudentID in L_Student;
        DLL<STUDENT*>* stu = L_Student.head;
        oriStu = stu;
        //DLL<SCOREBOARD*> *cur = c->students.head;
        while (stu != nullptr && stu->data->studentID != str)
            stu = stu->next;
        if (stu) {
            SCOREBOARD* s = new SCOREBOARD;
            std::getline(ifs, str, ',');
            s->otherMark = stod(str);
            std::getline(ifs, str, ',');
            s->midtermMark = stod(str);
            std::getline(ifs, str, ',');
            s->finalMark = stod(str);
            std::getline(ifs, str);
            s->totalMark = stod(str);
            s->student = stu->data;
            /// add this student with his/her scoreboard to the list of student in the course
            c->add1Student(s);

            DLL<COURSE*>* tmp = new DLL<COURSE*>;
            tmp->data = c;
            if (s->student->courses.head == nullptr) {
                s->student->courses.head = s->student->courses.tail = tmp;
            }
            else {
                tmp->prev = s->student->courses.tail;
                s->student->courses.tail = tmp;
            }
        }
        else {
            MessageBox::Show(msclr::interop::marshal_as<System::String^>("Cannot find student [" + oriStu->data->studentID + "] in the list of students"));
            return 0;
        }
    }
    ifs.close();
    return true;
}

bool importCoursesInASemester(std::string filename, SEMESTER*& a, uint startYear) {
    ifstream inp(filename);

    if (!inp.is_open())
        return false;
    string temp;
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(3)));
    std::getline(inp, temp);
    while (!inp.eof()) {
        if (!a->course.head)
            a->course.head = a->course.tail = new DLL<COURSE*>;
        else {
            a->course.tail->next = new DLL<COURSE*>;
            a->course.tail->next->prev = a->course.tail;
            a->course.tail = a->course.tail->next;
        }
        a->course.tail->data = new COURSE;
        std::getline(inp, temp, ',');
        a->course.tail->data->ID = temp;
        std::getline(inp, temp, ',');
        (a->course.tail->data)->name = temp;

        std::getline(inp, temp, ',');
        (a->course.tail->data)->teacher = temp;


        std::getline(inp, temp, ',');
        a->course.tail->data->credit = stoi(temp);

        std::getline(inp, temp, ',');

        a->course.tail->data->maxStudents = stoi(temp);

        std::getline(inp, temp, ',');
        a->course.tail->data->day = convertToWeekday(temp);

        std::getline(inp, temp, ',');
        a->course.tail->data->session = convertToSession(temp);

        std::getline(inp, temp); // get file name
        bool imp = importStudentsInACourse(temp, a->course.tail->data);
        if (!imp) {
            DLL<COURSE*>* dummy = a->course.tail;
            a->course.tail = a->course.tail->prev;
            delete dummy;
            if (a->course.tail) a->course.tail->next = nullptr;
            return 0;
        }
    }
    inp.close();
    return true;
}

bool importASemesterInASchoolYear(std::string filename, SEMESTER*& newSem, uint startYear) {
    ifstream inp(filename);
    if (!inp.is_open()) return 0;
    string tmp;
    std::getline(inp, tmp);  // skip title line

    for (int i = 1; i < newSem->No; i++) // skip the previous semester(s)
        std::getline(inp, tmp);

    std::getline(inp, tmp, ','); // get No of semester
    newSem->No = std::stoi(tmp);

    std::getline(inp, tmp, ','); // get startdate
    newSem->startdate = getDate(tmp);

    std::getline(inp, tmp, ','); // get enddate
    newSem->enddate = getDate(tmp);

    std::getline(inp, tmp); // get name of the file that contains all the courses in this semester
    inp.close();

    bool importCourseInSem = importCoursesInASemester(tmp, newSem, startYear);
    if (!importCourseInSem) {
        delete newSem;
        newSem = nullptr;
        return 0;
    }
    return 1;
}

bool importSchoolYears() {
    ifstream inp("CSV/SchoolYear.csv");
    if (!inp.is_open()) return 0;

    string temp;
    std::getline(inp, temp); // skip title line

    while (!inp.eof()) {
        SCHOOLYEAR* newSchoolyear = new SCHOOLYEAR;
        // year begin
        std::getline(inp, temp, ',');
        newSchoolyear->begin = stoi(temp);
        ////////////////

        // year end
        std::getline(inp, temp, ',');
        newSchoolyear->end = stoi(temp);
        ////////////////

        // get name of file that contains all semesters' 
        string file;
        std::getline(inp, file, ',');
        ////////////////

        bool importSemesterInSchoolYear;
        //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(1)));
        // sem1
        std::getline(inp, temp, ',');    // sem1's condition
        if (stoi(temp) == 0) {
            std::getline(inp, temp);
            goto _createNode;
        } // if sem1 is null => all the following sems are
        newSchoolyear->sem1 = new SEMESTER;
        newSchoolyear->sem1->No = 1;
        importSemesterInSchoolYear = importASemesterInASchoolYear(file, newSchoolyear->sem1, newSchoolyear->begin);
        if (!importSemesterInSchoolYear) {
            delete newSchoolyear;
            return 0;
        }
        ////////////////

        // sem2
        std::getline(inp, temp, ',');   // sem2's condition
        if (stoi(temp) == 0) {
            std::getline(inp, temp);
            goto _createNode;
        }
        newSchoolyear->sem2 = new SEMESTER;
        newSchoolyear->sem2->No = 2;
        importSemesterInSchoolYear = importASemesterInASchoolYear(file, newSchoolyear->sem2, newSchoolyear->begin);
        if (!importSemesterInSchoolYear) {
            delete newSchoolyear;
            return 0;
        }
        ////////////////

        // sem3
        std::getline(inp, temp);        // sem3's condition
        if (stoi(temp) == 0) {
            std::getline(inp, temp);
            goto _createNode;
        }
        newSchoolyear->sem3 = new SEMESTER;
        newSchoolyear->sem3->No = 3;
        importSemesterInSchoolYear = importASemesterInASchoolYear(file, newSchoolyear->sem3, newSchoolyear->begin);
        if (!importSemesterInSchoolYear) {
            delete newSchoolyear;
            return 0;
        }
        ////////////////

        // create a new Node of L_SchoolYear
    _createNode: {
        if (L_SchoolYear.head == nullptr) L_SchoolYear.head = L_SchoolYear.tail = new DLL<SCHOOLYEAR*>;
        else {
            L_SchoolYear.tail->next = new DLL<SCHOOLYEAR*>;
            L_SchoolYear.tail->next->prev = L_SchoolYear.tail;
            L_SchoolYear.tail = L_SchoolYear.tail->next;
        }
        L_SchoolYear.tail->data = newSchoolyear;
        }
    ////////////////
    }
    g_currentSchoolYear = L_SchoolYear.tail->data;
    if (!g_currentSchoolYear->sem1) g_currentSemester = nullptr;
    else if (!g_currentSchoolYear->sem2) g_currentSemester = g_currentSchoolYear->sem1;
    else if (!g_currentSchoolYear->sem3) g_currentSemester = g_currentSchoolYear->sem2;
    else g_currentSemester = g_currentSchoolYear->sem3;
    inp.close();

    ifstream inp2("CSV/DATA.csv");
    getline(inp2, temp); // skip title line
    if (!inp2.eof()) {
        getline(inp2, temp, ',');
        latestCheckRememberLogin = ((temp == "1") ? true : false);
        getline(inp2, latestUsername, ',');
        getline(inp2, latestPassword);
        inp2.close();
    }
    return 1;
}