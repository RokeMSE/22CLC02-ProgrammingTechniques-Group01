#pragma once

#include "../header.h"

struct STUDENT;
struct COURSE;

struct SCOREBOARD {
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    STUDENT* student = nullptr;
};

SCOREBOARD getScore(STUDENT* student, COURSE* course);

