#include "header.h"
using namespace std;
using namespace GROUP1;

GROUP1::DATE getDate(string chr) {
    GROUP1::DATE date;
    // chr: mm/dd/yyyy
    // creat a list to choose: day (according to month, 1-31), month (1 to 12), year (1950 to current year)
    date.month = stoi(chr.substr(0, 2));
    date.day = stoi(chr.substr(3, 2));
    date.year = stoi(chr.substr(6, 4));
    return date;
}

std::string DateToString(GROUP1::DATE date) {
    string res = "";
    if (date.month < 10) res += "0";
    res += to_string(date.month) + '/';

    if (date.day < 10) res += "0";
    res += to_string(date.day) + '/' + to_string(date.year);
    return res;
}

// CLASS

std::string CLASS::convertToString() {
    if (!this) return "";
    return to_string(this->K) + convertFromProgram(this->program) + to_string(this->No);
}

// enum
Program convertToProgram(std::string str) {
    if (str == "APCS")         return APCS;
    else if (str == "CLC")    return CLC;
    else                        return VP;
}

GROUP1::Type convertToType(std::string str) {
    if (str == "Staff")   return Staff;
    else                    return Student;
}

WeekDay convertToWeekday(std::string str) {
    if (str == "MON")        return MON;
    else if (str == "TUE")   return TUE;
    else if (str == "WED")   return WED;
    else if (str == "THU")   return THU;
    else if (str == "FRI")   return FRI;
    else if (str == "SAT")   return SAT;
    else                       return SUN;
}

Session convertToSession(std::string str) {
    if (str == "S1")      return S1;
    else if (str == "S2") return S2;
    else if (str == "S3") return S3;
    else                    return S4;
}

string convertFromProgram(Program x)
{
    string str[3] = { "APCS", "CLC", "VP" };
    return str[x];
}

string convertFromWeekDay(WeekDay x)
{
    string str[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
    return str[x];
}

string convertFromSession(Session x)
{
    string str[4] = { "S1", "S2", "S3", "S4" };
    return str[x];
}

string convertFromType(GROUP1::Type x)
{
    string str[2] = { "STAFF", "STUDENT" };
    return str[x];
}

