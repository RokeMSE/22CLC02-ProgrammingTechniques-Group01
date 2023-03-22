#include <iostream>

#include "../StructsDefinition/Structs.h"

using namespace std;

WeekDay convertToWeekday ( char* str) {
    if ( strcmp ( str, "MON" ) == 0 )        return MON;
    else if ( strcmp ( str, "TUE" ) == 0 )   return TUE;
    else if ( strcmp ( str, "WED" ) == 0 )   return WED;
    else if ( strcmp ( str, "THU" ) == 0 )   return THU;
    else if ( strcmp ( str, "FRI" ) == 0 )   return FRI;
    else if ( strcmp ( str, "SAT" ) == 0 )   return SAT;
    else                                return SUN;
}

Session convertToSession ( char* str) {
    if ( strcmp ( str, "S1" ) == 0 )        return S1;
    else if ( strcmp ( str, "S2" ) == 0 )   return S2;
    else if ( strcmp ( str, "S3" ) == 0 )   return S3;
    else                                    return S4;
}