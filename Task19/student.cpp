#include <../header.h>

bool STUDENT::Export(std::string filename)
{
    ofstream output("filename", ios_base::app);

    if(!output.is_open())
        return false;

    STUDENT* temp = this;
    int* n = new int;
    *n = 0;

    output << ++(*n) << "," << temp->studentID << "," << temp->firstname << "," << temp->lastname << "," << temp->gender << ",";
    output << (temp->DoB).day << "/" << (temp->DoB).month << "/" << (temp->DoB).year << ",";
    output << temp->socialID << "\n"; 
    temp->No = *n;

    delete n;

    return true;
}