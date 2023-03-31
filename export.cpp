#include "header.h"
#include <fstream>

//No,studentID,firstname,lastname,fullname,socailID,user->username,user->password,gender,DoB->month/DoB->day/DoB->year,totalMark,finalMark,midtermMark,otherMark,Class
void exportStudent(std::string filename, STUDENT* stu)
{
    ofstream ofs(filename);
    ofs << stu -> No << ',' << stu -> studentID << ',' << stu -> firstname << ',' << stu -> lastname;
    ofs << ',' << stu -> socialID << ',' << stu -> user -> username << ',' << stu -> user -> password;
    ofs << ',' << stu -> gender << ',' << (stu -> DoB).month << '/' << (stu -> DoB).day << '/' << (stu -> DoB).year;
    ofs << ',' << stu -> totalMark << ',' << stu -> finalMark << ',' << stu -> midtermMark << ',' << stu -> otherMark << ',';
    ofs << (stu -> Class).convertToString();
    ofs.close();
}

void exportStaff(std::string filename, STAFF* staf)
{
    ofstream ofs(filename);
    ofs << staf -> firstname << ',' << staf -> lastname << ',';
    ofs << (staf -> user) -> username << ',' << (staf -> user) -> password;
    ofs.close();
}

bool exportClass(std::string filename);