#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "USER.h"

struct DL_USER {
    USER data;
    DL_USER*  prev = nullptr, *next = nullptr, *tail = nullptr;
    // DL_USER () {
    //     prev = next = tail = nullptr;
    // }
    ~DL_USER () {}
};

struct DL_STUDENT {
    STUDENT data;
    DL_STUDENT* prev, *next, *tail;
    // DL_STUDENT () {
    //     prev = next = tail = nullptr;
    // }
    ~DL_STUDENT () {}
};

struct DL_STAFF {
    STAFF data;
    DL_STAFF* prev, *next, *tail;
    // DL_STAFF () {
    //     prev = next = tail = nullptr;
    // }
    ~DL_STAFF () {}
};