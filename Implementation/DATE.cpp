#include "../header.h"
// #include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;
void DATE::display () {
    cout << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year;
}

void DATE::display (std::ostream out) {
    // out: append
    out << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year << endl;
}

void getDate (string chr) {
    
}
