#include <iostream>
#include <cstring>
#include <fstream>

#include "../StructsDefinition/Structs.h"

using namespace std;

void COURSE::updateInfo () {
    /*
        [About GUI of this task]
        For each data member of COURSE, there would be a place that user can type in the data
        In the situation of this function, this `place` would contain the value of its corresponding data member by default.
            If user wants to update this information, he/she can delete or/and type in
    */
    char* tmp = new char[100];

    // get COURSE::ID
    cin.get (tmp, 100);
    cin.ignore ();
    ID = new char [strlen(tmp) + 1]; // +1 for NULL
    strcpy (ID, tmp);

    // get COURSE::name
    cin.get (tmp, 100);
    cin.ignore ();
    name = new char [strlen(tmp) + 1]; // +1 for NULL
    strcpy (name, tmp);

    // get COURSE::teacher
    cin.get (tmp, 100);
    cin.ignore ();
    teacher = new char [strlen(tmp) + 1]; // +1 for NULL
    strcpy (teacher, tmp);

    // get COURSE::credit and COURSE::maxStudents
    cin >> credit >> maxStudents;

    // get COURSE::WeekDay
    cin.get (tmp, 100);
    day = convertToWeekday (tmp);

    // get COURSE::session
    cin.get (tmp, 100);
    day = convertToSession (tmp);
    
    delete[] tmp;
}