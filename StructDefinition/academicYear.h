#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"

struct SEMESTER {
    int No;
    DATE startdate, enddate;
};

struct AcademicYear {
    uint begin, end;
    SEMESTER* sem1 = nullptr, *sem2 = nullptr, *sem3 = nullptr;
};


