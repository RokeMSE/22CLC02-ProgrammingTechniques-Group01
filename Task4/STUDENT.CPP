#include <../header.h>
#include ""
#include <fstream>

bool importStudent(std::string filename, STUDENT* &student)
{
    ifstream inp("filename");

    if(!inp.is_open())
        return false;

    while(!inp.eof())
    {
        getline(inp, student->No, ',');
        getline(inp, student->studentID, ',');
        getline(inp, student->firstname, ',');
        getline(inp, student->lastname, ',');
        getline(inp, student->gender, ',');
        getline(inp, student->Dob, ',');
    }
    
}