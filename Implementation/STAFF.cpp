#pragma once

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
