#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "enum.h"

struct COURSE {
    char* ID = nullptr, *name = nullptr, *teacher = nullptr;
    ushort credit, maxStudents = 50;
    WeekDay day;
    ushort shift; // 1-2-3-4
};