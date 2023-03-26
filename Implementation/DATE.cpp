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

bool isLeapYear (uint year) {
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

uint getNumOfDateInMonth (ushort month, uint year) {
    uint res = 30;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            res = 31;
            break;
        case 2:
            if (isLeapYear(year))   res = 29;
            else    res = 28;
    }
    return res;
}

DATE getDate (string chr) {
    DATE date;
    // chr: mm/dd/yyyy
    // creat a list to choose: day (according to month, 1-31), month (1 to 12), year (1950 to current year)
    
}
