#pragma once
#include "Structs.h"
#include <string>

std::string DateToString(GROUP1::DATE date);
GROUP1::DATE getDate(std::string chr);

// enum functions
GROUP1::Program convertToProgram(std::string str);
GROUP1::WeekDay convertToWeekday(std::string str);
GROUP1::Session convertToSession(std::string str);
GROUP1::Type convertToType(std::string str);

std::string convertFromProgram(GROUP1::Program x);
std::string convertFromWeekDay(GROUP1::WeekDay x);
std::string convertFromSession(GROUP1::Session x);
std::string convertFromType(GROUP1::Type x);

template <typename Data_Type>
void add_val(GROUP1::LIST<GROUP1::DLL, Data_Type>& list, Data_Type val);