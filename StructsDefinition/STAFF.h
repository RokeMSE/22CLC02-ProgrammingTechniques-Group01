#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "USER.h"

struct STAFF : public USER {
    // USER* login;
    char* firstname = nullptr, *lastname = nullptr;

    // member functions
    STAFF* get () {
        return this;
    }
    void add ();
};
