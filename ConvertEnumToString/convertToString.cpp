#include <../header.h>

string ProgramToString(Program a)
{
    if(a == 0)
        return "APCS";
    else if(a == 1)
        return "CLC";
    else if(a == 2)
        return "VP";
    else
        return "UNKNOWN";
}

string WeekDaytoString(WeekDay a)
{
    if(a == 0)
        return "MON";
    else if(a == 1)
        return "TUE";
    else if(a == 2)
        return "WED";
    else if(a == 3)
        return "THU";
    else if(a == 4)
        return "FRI";
    else if(a == 5)
        return "SAT";
    else if(a == 6)
        return "SUN";
    else
        return "UNKNOWN";
}

string SeesionToString(Session a)
{
    if(a == 0)
        return "S1";
    else if(a == 1)
        return "S2";
    else if(a == 2)
        return "S3";
    else if(a == 3)
        return "S4";
    else 
        return "UNKNOWN";
}

string TypeToString(Type a)
{
    if(a == 0)
        return "Staff";
    else if(a == 1)
        return "Student";
    else
        return "UNKNOWN";
}