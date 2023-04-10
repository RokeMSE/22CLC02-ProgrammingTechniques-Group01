#include "helperFunctions.h"

using namespace std;
using namespace GROUP1;

extern DATE getDate(string chr) {
    DATE date;
    // chr: mm/dd/yyyy
    // creat a list to choose: day (according to month, 1-31), month (1 to 12), year (1950 to current year)
    date.month = stoi(chr.substr(0, 2));
    date.day = stoi(chr.substr(3, 2));
    date.year = stoi(chr.substr(6, 4));
    return date;
}

extern string DateToString(DATE date) {
    string res = "";
    if (date.month < 10) res += "0";
    res += to_string(date.month) + '/';

    if (date.day < 10) res += "0";
    res += to_string(date.day) + '/' + to_string(date.year);
    return res;
}

// CLASS

string CLASS::convertToString() {
    if (!this) return "";
    return to_string(this->K) + convertFromProgram(this->program) + to_string(this->No);
}

// COURSE

void COURSE::add1Student(SCOREBOARD* student) {
    add_val<SCOREBOARD*>(students, student);
}

// enum
extern Program convertToProgram(string str) {
    if (str == "APCS")          return APCS;
    else if (str == "CLC")      return CLC;
    else                        return VP;
}

extern Type convertToType(string str) {
    if (str == "Staff")   return Staff;
    else                    return Student;
}

extern WeekDay convertToWeekday(string str) {
    if (str == "MON")        return MON;
    else if (str == "TUE")   return TUE;
    else if (str == "WED")   return WED;
    else if (str == "THU")   return THU;
    else if (str == "FRI")   return FRI;
    else if (str == "SAT")   return SAT;
    else                     return SUN;

}

extern Session convertToSession(string str) {
    if (str == "S1")      return S1;
    else if (str == "S2") return S2;
    else if (str == "S3") return S3;
    else                    return S4;
}

extern string convertFromProgram(Program x)
{
    string str[3] = { "APCS", "CLC", "VP" };
    return str[x];
}

extern string convertFromWeekDay(WeekDay x)
{
    string str[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    return str[x];
}

extern string convertFromSession(Session x)
{
    string str[4] = { "S1", "S2", "S3", "S4" };
    return str[x];
}

extern string convertFromType(Type x)
{
    string str[2] = { "STAFF", "STUDENT" };
    return str[x];
}

template <typename Data_Type>
extern void add_val(LIST<DLL, Data_Type>& list, Data_Type val) {
    /// Allocate a node*(tmp) with data_type same as the data_type of (val) to add to the (list)
    DLL<Data_Type>* tmp = new DLL<Data_Type>;
    tmp->data = val;
    tmp->next = nullptr;
    tmp->prev = list.tail;

    /// Update the (list), 2 cases: the list is empty or not
    if (list.head == nullptr) {
        list.head = tmp;
        list.tail = tmp;
    }
    else {
        list.tail->next = tmp;
        list.tail = list.tail->next;
    }
}