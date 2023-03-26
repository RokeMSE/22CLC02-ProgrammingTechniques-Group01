#include "../header.h"
#include <string>
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