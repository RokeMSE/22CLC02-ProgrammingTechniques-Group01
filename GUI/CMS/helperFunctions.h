#pragma once
#include "Structs.h"
#include <string>

extern std::string trim_whitespace(const std::string& str);
extern std::string DateToString(GROUP1::DATE date);
extern GROUP1::DATE getDate(std::string chr);
extern std::string DayToString(GROUP1::WeekDay day);
extern GROUP1::CLASS* convertToClass(std::string str);
extern uint countStudentsInACourse(GROUP1::COURSE* course);

// enum functions
extern GROUP1::Program convertToProgram(std::string str);
extern GROUP1::WeekDay convertToWeekday(std::string str);
extern GROUP1::Session convertToSession(std::string str);
extern GROUP1::Type convertToType(std::string str);

extern std::string convertFromProgram(GROUP1::Program x);
extern std::string convertFromWeekDay(GROUP1::WeekDay x);
extern std::string convertFromSession(GROUP1::Session x);
extern std::string convertFromType(GROUP1::Type x);

template <typename Data_Type>
extern void add_val(GROUP1::LIST<GROUP1::DLL, Data_Type>& list, Data_Type val);

// delete files before exporting
extern void deleteFiles();