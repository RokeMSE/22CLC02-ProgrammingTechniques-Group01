#include "../header.h"
#include <string>

Program convertToProgram ( std::string str ) {
    if ( str == "APCS")         return APCS;
    else if ( str == "CLC" )    return CLC;
    else                        return VP;
}

Type convertToType ( std::string str ) {
    if ( str == "Staff" )   return Staff;
    else                    return Student;
}

WeekDay convertToWeekday ( std::string str ) {
    if ( str == "MON" )        return MON;
    else if ( str == "TUE" )   return TUE;
    else if ( str == "WED" )   return WED;
    else if ( str == "THU" )   return THU;
    else if ( str == "FRI" )   return FRI;
    else if ( str == "SAT" )   return SAT;
    else                       return SUN;
}

Session convertToSession ( std::string str ) {
    if ( str == "S1" )      return S1;
    else if ( str == "S2" ) return S2;
    else if ( str == "S3" ) return S3;
    else                    return S4;
}

string convertFromProgram(Program x)
{
    string str[3] = {"APCS", "CLC", "VP"};
    return str[x];
}

string convertFromWeekDay(WeekDay x)
{
    string str[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    return str[x];
}

string convertFromSession(Session x)
{
    string str[4] = {"S1", "S2", "S3", "S4"};
    return str[x];
}

string convertFromType(Type x)
{
    string str[2] = {"STAFF", "STUDENT"};
    return str[x];
}