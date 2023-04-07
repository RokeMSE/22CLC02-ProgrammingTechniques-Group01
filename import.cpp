#include <fstream>
#include <string>
#include "header.h"
using namespace std;

bool stringToBool(std::string str)//ham doi tu string -> bool
{
    if (str == "true" || str == "1")
        return true;
    else if (str == "false" || str == "0") 
        return false;
    else
        throw std::invalid_argument("Invalid input string");

}

bool importStudents() {
    ifstream ifs("CSV/Student.csv");
    if (!ifs.is_open())
        return 0;
    string str;
    getline(ifs, str);  // skip title line
    while (!ifs.eof()) {
        STUDENT* tmp = new STUDENT;
        tmp->user = new USER;

        getline(ifs, str, ','); // get username
        tmp -> user -> username = str;
        
        getline(ifs, str, ','); // password
        tmp->user->password = str;

        getline(ifs, str, ','); // get No
        tmp->No = stoi(str);

        getline(ifs, str, ',');
        tmp->studentID = str;

        getline(ifs, str, ',');
        tmp->firstname = str;

        getline(ifs, str, ',');
        tmp->lastname = str;

        getline(ifs, str, ',');
        tmp->gender = stringToBool(str);

        getline(ifs, str, ',');
        tmp->DoB = getDate(str);

        getline(ifs, str, ',');
        tmp->socialID = str;
    
        getline(ifs, str);
        tmp->Class = new CLASS;
        *(tmp->Class) = convertToClass(str);

        add_val<STUDENT*> (L_Student,tmp);
        // if (L_Student.head == nullptr)
        // {
        //     L_Student.head = L_Student.tail = new DLL<STUDENT*>;
        //     L_Student.head -> data = tmp;
        // }
        // else
        // {
        //     L_Student.tail->next = new DLL<STUDENT*>;
        //     L_Student.tail->next->prev = L_Student.tail;
        //     L_Student.tail = L_Student.tail->next;
        // }
        // L_Student.tail->data = tmp;
    }
    ifs.close();
    return 1;
}

bool importStaffs() {
    ifstream ifs("CSV/Staff.csv");
    if (ifs.is_open() == false)
        return false;
    string str;
    getline(ifs, str);
    while (!ifs.eof())
    {
        STAFF* tmp = new STAFF;
        tmp -> user = new USER;
        getline(ifs, str, ','); // get username
        tmp->user->username = str;

        getline(ifs, str, ','); // password
        tmp->user->password = str;

        getline(ifs, str, ',');
        tmp->firstname = str;

        getline(ifs, str);
        tmp->lastname = str;

        add_val<STAFF*>(L_Staff,tmp);
        // if (L_Staff.head == nullptr)
        // {
        //     L_Staff.head = L_Staff.tail = new DLL<STAFF*>;
        //     L_Staff.head -> data = tmp;
        // }
        // else
        // {
        //     L_Staff.tail->next = new DLL<STAFF*>;
        //     L_Staff.tail->next->prev = L_Staff.tail;
        //     L_Staff.tail = L_Staff.tail->next;
        // }
        // L_Staff.tail->data = tmp;
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
    getline(ifs, str);  // skip title line
    while (!ifs.eof())
    {
        CLASS* tmp = new CLASS;

        getline(ifs, str, ',');
        tmp->K = stoi(str);

        getline(ifs, str, ',');
        tmp->program = convertToProgram(str);

        getline(ifs, str,',');
        tmp->No = stoi(str);

        getline(ifs, str);
        tmp->yearIn = stoi(str);

        add_val<CLASS>(L_Class,*tmp);

        // if (L_Class.head == nullptr)
        // {
        //     L_Class.head = L_Class.tail = new DLL<CLASS>;
        //     L_Class.head->data = *tmp;
        // }
        // else
        // {
        //     L_Class.tail->next = new DLL<CLASS>;
        //     L_Class.tail->next->prev = L_Class.tail;
        //     L_Class.tail = L_Class.tail->next;
        // }
        // L_Class.tail->data = *tmp;
    }
    ifs.close();
    return true;
}


bool importStudentsInACourse(std::string filename, COURSE &c) {
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    
    string str;
    getline(ifs,str);   /// skip the title line;
    
    while (!ifs.eof())
    {
        getline(ifs,str, ',');   /// (str) will have format: "[StudentID], [ScoreBoard]"

        //////////////////////////////////////////////////////////////////
        getline(ifs,str);       //      get scoreboard
        //////////////////////////////////////////////////////////////////
        /// find this student by StudentID in L_Student;
        DLL<STUDENT*> *stu = L_Student.head;
        //DLL<SCOREBOARD*> *cur = c->students.head;
        while (stu != nullptr && stu->data->studentID != str)
            stu = stu->next;

        SCOREBOARD* s = new SCOREBOARD;
        
        s->student = stu->data;
        /// add this student with his/her scoreboard to the list of student in the course
        c.add1Student(s);
    }
    ifs.close();
    return true;
}

bool importCoursesInASemester(std::string filename, SEMESTER* &a)
{
    ifstream inp(filename);

    if(!inp.is_open())
        return false;
    string temp ;
    getline(inp, temp);     //skip title line

    while(!inp.eof())
    {
        COURSE* cur = new COURSE;
        getline(inp, cur->ID , ',');
        getline(inp, cur->name, ',');
        getline(inp, cur->teacher, ',');
        getline(inp, temp, ',');
        cur->credit = stoi(temp);
        getline(inp, temp, ',');
        cur->maxStudents = stoi(temp);
        getline(inp, temp, ',');
        cur->day = convertToWeekday(temp);
        getline(inp, temp, ',');
        cur->session = convertToSession(temp);
        getline(inp, temp);

        add_val<COURSE*>(a->course,cur);

        importStudentsInACourse(temp,*cur);

    }
    inp.close();
    return true;
}

bool importASemesterInASchoolYear(std::string filename, SEMESTER* &newSem, ushort noSem) {
    newSem = new SEMESTER;
    
    ifstream inp(filename);
    if (!inp.is_open())  return 0;

    string tmp;
    getline(inp, tmp);  // skip title line
    
    for (int i = 1; i < noSem; i++) // skip Semester
        getline(inp, tmp);

    getline(inp, tmp, ','); // skip No
    newSem->No = stoi(tmp);

    getline(inp, tmp, ','); // get startdate
    newSem->startdate = getDate(tmp);

    getline(inp, tmp, ','); // get enddate
    newSem->enddate = getDate(tmp);

    getline(inp, tmp); // get name of the file that contains all the courses in this semester
    inp.close();

    bool importCourseInSem = importCoursesInASemester (tmp, newSem);
    return 1;
}

bool importSchoolYears() {
    L_SchoolYear.head = L_SchoolYear.tail = nullptr;
    ifstream inp("CSV/SchoolYear.csv");
    if (!inp.is_open()) return 0;

    string temp;
    getline(inp, temp); // skip title line

    
    while ( !inp.eof() ) {
        // create new Node of L_SchoolYear
        SCHOOLYEAR newSchoolYear;
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
        // if ( temp == "0" ) 
            importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, newSchoolYear.sem1, 1);
        ////////////////

        // sem2
        getline(inp, temp, ',');    // sem2's condition
        // if ( temp == "0" ) 
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, newSchoolYear.sem2, 2);
        ////////////////

        // sem3
        getline(inp, temp);    // sem3's condition
        // if ( temp == "0" ) 
        importSemesterInSchoolYear = ::importASemesterInASchoolYear(filenameImportSemester, newSchoolYear.sem3, 3);
        ////////////////

        add_val<SCHOOLYEAR>(L_SchoolYear,newSchoolYear);
    }
    inp.close();
    return 1;
}