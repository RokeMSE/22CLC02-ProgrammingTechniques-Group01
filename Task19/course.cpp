#include <../header.h>

bool COURSE::exportStudents(std::string filename)
{
    ofstream output(filename);

    if(!output.is_open())
        return false;

    STUDENT* temp = this->students;

    while(temp)
    {
        output << temp->No << "," << temp->studentID << "," << temp->firstname << "," << temp->lastname << "," << temp->gender << ",";
        output << (temp->DoB).day << "/" << (temp->DoB).month << "/" << (temp->DoB).year << ",";
        output << temp->socialID << "\n"; 
    }
    //No studentID firstname lastname  gender (day/month/year)oB socialID
    return true;
}