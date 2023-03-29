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