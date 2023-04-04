#include "header.h"

GROUP1::DATE getDate(System::String^ chr) {
    GROUP1::DATE date;
    // chr: mm/dd/yyyy
    // creat a list to choose: day (according to month, 1-31), month (1 to 12), year (1950 to current year)
    array<System::String^>^ parts = chr->Split('/');

    date.month = System::Int32::Parse(parts[0]);
    date.day = System::Int32::Parse(parts[1]);
    date.year = System::Int32::Parse(parts[2]);
    return date;
}

System::String^ DateToString(GROUP1::DATE date) {
    System::String^ res = "";
    if (date.month < 10) res += "0";
    res += System::Convert::ToString(date.month) + '/';

    if (date.day < 10) res += "0";
    res += System::Convert::ToString(date.day) + '/' + System::Convert::ToString(date.year);
    return res;
}

// CLASS

System::String^ GROUP1::CLASS::convertToString() {
    if (!this) ;
    return System::Convert::ToString(this->K) + convertFromProgram(this->program) + System::Convert::ToString(this->No);
}

// enum
GROUP1::Program convertToProgram(System::String^ str) {
    if (str == "APCS")      return GROUP1::APCS;
    else if (str == "CLC")  return GROUP1::CLC;
    else                    return GROUP1::VP;
}

GROUP1::Type convertToType(System::String^ str) {
    if (str == "Staff")  return GROUP1::Staff;
    else                 return GROUP1::Student;
}

GROUP1::WeekDay convertToWeekday(System::String^ str) {
    if (str == "MON")        return GROUP1::MON;
    else if (str == "TUE")   return GROUP1::TUE;
    else if (str == "WED")   return GROUP1::WED;
    else if (str == "THU")   return GROUP1::THU;
    else if (str == "FRI")   return GROUP1::FRI;
    else if (str == "SAT")   return GROUP1::SAT;
    else                     return GROUP1::SUN;
}

GROUP1::Session convertToSession(System::String^ str) {
    if (str == "S1")      return GROUP1::S1;
    else if (str == "S2") return GROUP1::S2;
    else if (str == "S3") return GROUP1::S3;
    else                  return GROUP1::S4;
}

System::String^ convertFromProgram(GROUP1::Program x)
{
    array<System::String^>^ strs;
    strs[0] = gcnew System::String("APCS");
    strs[1] = gcnew System::String("CLC");
    strs[2] = gcnew System::String("VP");
    return strs[x];
}

System::String^ convertFromWeekDay(GROUP1::WeekDay x)
{
    array<System::String^>^ str;
    str[0] = gcnew System::String("MON");
    str[1] = gcnew System::String("TUE");
    str[2] = gcnew System::String("WED");
    str[3] = gcnew System::String("THU");
    str[4] = gcnew System::String("FRI");
    str[5] = gcnew System::String("SAT");
    str[6] = gcnew System::String("SUN");
    return str[x];
}

System::String^ convertFromSession(GROUP1::Session x)
{
    array<System::String^>^ str;
    str[0] = gcnew System::String("S1");
    str[1] = gcnew System::String("S2");
    str[2] = gcnew System::String("S3");
    str[3] = gcnew System::String("S4");
    return str[x];
}

System::String^ convertFromType(GROUP1::Type x)
{
    array<System::String^>^ str;
    str[0] = gcnew System::String("Staff");
    str[1] = gcnew System::String("Student");
    return str[x];
}

