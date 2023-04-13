#pragma once

#include "../header.h"
#include <string>

/////////////////////////////////////////
DATE getDate (std::string chr); // lấy một chuỗi kí tự chr có định dạng mm/dd/yyyy, theo đó gán giá trị cho các member day-mon-year của struct
std::string DateToString (DATE date); // lấy một date rồi trả về string có định dạng mm/dd/yyyy
bool isLeapYear (uint year);
uint getNumOfDateInMonth (ushort month, uint year);