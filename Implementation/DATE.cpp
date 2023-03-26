#include "../header.h"
#include <fstream>
void DATE::display () {
    cout << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year;
}

void display (std::istream out) {
    // out: append
    out << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year << endl;
}

void getDate (string &chr) {
    
}
//syntax to implement a member function: void DATE::getDate (char* chr) {}
struct DATE {
    ushort day, month;
    uint year;

    /////////////////////////////////////////
    // member functions

    ; // lấy một mảng kí tự chr có định dạng mm/dd/yyyy, theo đó gán giá trị cho các member day-mon-year của struct
    
    void display ();
    void display (std::istream out);
    /////////////////////////////////////////
};
