#include "../header.h"
#include <fstream>

bool CLASS::import (std::string filename) {
// import students from a file to a class, INCLUDING give them username and password
// there is a doubly linked list

}

void CLASS::add (SCHOOLYEAR year) {

}

void CLASS::add1stYearStudent () {
// GUI
// write later
// when `add student` button is clicked, it triggers this this function
// // add 1 new student to student.tail->next

}

bool CLASS::add1stYearStudents (std::string filename) {
// from file
    ifstream inp (filename);
    if ( !inp.is_open() )    return 0;
    // your code here
    inp.close();
    return 1;
}