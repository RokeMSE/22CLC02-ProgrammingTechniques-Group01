#include "header.h"
#include "StructsImplementation\enum.cpp"
#include <fstream>

//No,studentID,firstname,lastname,fullname,socailID,user->username,user->password,gender,DoB->month/DoB->day/DoB->year,totalMark,finalMark,midtermMark,otherMark,Class
void exportStudents()
{
    if (!L_Student.head)
        return;
    DLL<STUDENT*>* cur = L_Student.head;
    string filepath = "CSV\\STUDENT.csv";
    ofstream ofs(filepath);
    ofs << "No,studentID,firstname,lastname,socialID,username,password,gender(0-male/1-female),DateofBirth(mm/dd/yyyy),Class\n";
    while (cur)
    {
        STUDENT* stu = cur -> data;
        ofs << stu -> No << ',' << stu -> studentID << ',' << stu -> firstname << ',' << stu -> lastname;
        ofs << ',' << stu -> socialID << ',' << stu -> user -> username << ',' << stu -> user -> password;
        ofs << ',' << stu -> gender << ',' << (stu -> DoB).month << '/' << (stu -> DoB).day << '/' << (stu -> DoB).year;
        ofs << ',' << (stu -> Class).convertToString();
        ofs << '\n';
        DLL<STUDENT*>* dump = cur;
        cur = cur -> next;
        delete stu;
        delete dump;
    }
    ofs.close();
    return;
}

void exportStaffs()
{
    if (!L_Staff.head)
        return;
    DLL<STAFF*>* cur = L_Staff.head;
    string filepath = "CSV\\STAFF.csv";
    ofstream ofs(filepath);
    ofs << "firstname,lastname,username,password\n";
    while (cur)
    {
        STAFF* staf = cur -> data;
        ofs << staf -> firstname << ',' << staf -> lastname << ',';
        ofs << (staf -> user) -> username << ',' << (staf -> user) -> password;
        ofs << '\n';
        DLL<STAFF*>* dump = cur;
        cur = cur -> next;
        delete staf;
        delete dump;
    }
    ofs.close();
    return;
}

void exportClasses()
{
    if (!L_Class.head)
        return;
    DLL<CLASS>* cur = L_Class.head;
    string filepath = "CSV\\CLASS.csv";
    ofstream ofs(filepath);
    ofs << "yearIn,K,Program,No\n";
    while (cur)
    {
        CLASS cla = cur -> data;
        ofs << cla.yearIn << ',' << cla.K << ',';
        ofs << convertFromProgram(cla.program) << ',' << cla.No;
        ofs << '\n';
        DLL<CLASS>* dump = cur;
        cur = cur -> next;
        delete dump;
    }
    ofs.close();
    return;
}