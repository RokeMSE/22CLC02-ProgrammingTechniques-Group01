#pragma once

#include "../header.h"

struct STUDENT;

struct SCOREBOARD {
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    STUDENT* student;
};

SCOREBOARD getScore(STUDENT* student, COURSE* course);

