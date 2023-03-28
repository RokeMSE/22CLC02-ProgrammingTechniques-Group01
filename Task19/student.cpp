#include <../header.h>

bool exportStudent(std::string filename, STUDENT* student)
{
    ofstream output(filename);

    if(!output.is_open())
        return false;

    STUDENT* temp = student;

    while(temp)
    {
        output << temp->No << "," << temp->studentID << "," << temp->firstname << "," << temp->lastname << "," << temp->gender << ",";
        output << (temp->DoB).day << "/" << (temp->DoB).month << "/" << (temp->DoB).year << ",";
        output << temp->socialID << "\n"; 
    }

    return true;
}