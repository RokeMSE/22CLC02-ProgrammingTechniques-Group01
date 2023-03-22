#include "SCHOOLYEAR.h"
#include <iostream>

SCHOOLYEAR::SCHOOLYEAR(uint t)
{
    begin = t;
    end = t + 1;
}

void SCHOOLYEAR::create()
{
    std::cout << "Enter begin year: ";
    uint yearBegin;
    std::cin >> yearBegin;
    (*this).begin = yearBegin;
    (*this).end = yearBegin + 1;
}