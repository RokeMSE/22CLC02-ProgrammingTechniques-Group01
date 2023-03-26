#include <StructsDefinition/STUDENT.h>
#include <fstream>

bool STUDENT::import(std::string filename)
{
    ifstream inp("filename");

    if(!inp.is_open())
        return false;

    
}