#pragma once
#include <string>
enum Program { APCS, CLC, VP };
enum WeekDay { MON, TUE, WED, THU, FRI, SAT, SUN };
enum Session { S1, S2, S3, S4 };
enum Type { Staff, Student };

Program convertToProgram ( std::string str );
WeekDay convertToWeekday ( std::string str );
Session convertToSession ( std::string str );
Type convertToType ( std::string str );