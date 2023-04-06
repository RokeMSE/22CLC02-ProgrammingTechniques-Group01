#include <fstream>
#include <string>
#include <msclr/marshal_cppstd.h>

#include "import.h"
#include "Structs.h"
#include "helperFunctions.h"
#include "GlobalVariables.h"
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
        struct STUDENT* tmp = new STUDENT;
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


bool importStudentsInACourse(std::string filename, COURSE* &c) {
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
        DLL<STUDENT*>* stu = L_Student.head;
        //DLL<SCOREBOARD*> *cur = c->students.head;
        while (stu != nullptr && stu->data->studentID != str)
            stu = stu->next;
        if (stu) {
            SCOREBOARD* s = new SCOREBOARD;

            s->student = stu->data;
            /// add this student with his/her scoreboard to the list of student in the course
            c->add1Student(s);
        } else {
            MessageBox::Show(msclr::interop::marshal_as<System::String^>("Cannot find student [" + stu->data->studentID + "] in the list of students"));
            return 0;
        }
    }
    ifs.close();
    return true;
}

bool importCoursesInASemester(std::string filename, SEMESTER* &a, uint startYear) {
    ifstream inp(filename);

    if (!inp.is_open())
        return false;
    string temp;
    std::getline(inp, temp);
    while (!inp.eof()) {
        std::getline(inp, temp, ',');
        if (inp.eof())  break;
        if (!a->course.head)
            a->course.head = a->course.tail = new DLL<COURSE*>;
        else {
            a->course.tail->next = new DLL<COURSE*>;
            a->course.tail->next->prev = a->course.tail;
            a->course.tail = a->course.tail->next;
        }
        a->course.tail->data->ID = temp;
        std::getline(inp, (a->course.tail->data)->name, ',');
        std::getline(inp, (a->course.tail->data)->teacher, ',');

        std::getline(inp, temp, ',');
        a->course.tail->data->credit = stoi(temp);
        std::getline(inp, temp, ',');
        a->course.tail->data->maxStudents = stoi(temp);
        std::getline(inp, temp, ',');
        a->course.tail->data->day = convertToWeekday(temp);
        std::getline(inp, temp);
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

bool importASemesterInASchoolYear(std::string filename, SEMESTER* &newSem, uint startYear) {
    newSem = new SEMESTER;

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
    L_SchoolYear.head = L_SchoolYear.tail = nullptr;
    ifstream inp("CSV/SchoolYear.csv");
    if (!inp.is_open()) return 0;

    string temp;
    std::getline(inp, temp); // skip title line

    while (!inp.eof()) {
        // year begin
        std::getline(inp, temp, ',');
        if (inp.eof())  break;
        SCHOOLYEAR* newSchoolyear = new SCHOOLYEAR;
        newSchoolyear->begin = stoi(temp);
        ////////////////

        // year end
        std::getline(inp, temp, ',');
        newSchoolyear->end = stoi(temp);
        ////////////////

        // get name of file that contains all semesters' 
        std::getline(inp, temp, ',');
        ////////////////

        bool importSemesterInSchoolYear;

        // sem1
        std::getline(inp, temp, ',');    // sem1's condition
        if (stoi(temp) == 0)    goto _createNode;// if sem1 is null => all the following sems are null
        importSemesterInSchoolYear = importASemesterInASchoolYear(temp, newSchoolyear->sem1, newSchoolyear->begin);
        if (!importSemesterInSchoolYear) {
            delete newSchoolyear;
            return 0;
        }
        ////////////////

        // sem2
        std::getline(inp, temp, ',');   // sem2's condition
        if (stoi(temp) == 0) goto _createNode;
        importSemesterInSchoolYear = importASemesterInASchoolYear(temp, newSchoolyear->sem2, newSchoolyear->begin);
        if (!importSemesterInSchoolYear) {
            delete newSchoolyear;
            return 0;
        }
        ////////////////

        // sem3
        std::getline(inp, temp);        // sem3's condition
        if (stoi(temp) == 0) goto _createNode;
        importSemesterInSchoolYear = importASemesterInASchoolYear(temp, newSchoolyear->sem3, newSchoolyear->begin);
        if (!importSemesterInSchoolYear) {
            delete newSchoolyear;
            return 0;
        }
        ////////////////
    
        // create a new Node of L_SchoolYear
        _createNode: {
            if (L_SchoolYear.head == nullptr)
            {
                L_SchoolYear.head = L_SchoolYear.tail = new DLL<SCHOOLYEAR*>;
            }
            else {
                L_SchoolYear.tail->next = new DLL<SCHOOLYEAR*>;
                L_SchoolYear.tail->next->prev = L_SchoolYear.tail;
                L_SchoolYear.tail = L_SchoolYear.tail->next;
            }
            L_SchoolYear.tail->data = newSchoolyear;
        }
        ////////////////
    }
    inp.close();
    return 1;
}