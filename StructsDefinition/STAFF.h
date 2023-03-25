#pragma once

#include <string>
#include "DATE.h"
#include "USER.h"

struct STAFF : public USER {
    // USER* login;
    std::string firstname = "";
    std::string lastname = "";

    // member functions
    STAFF* get () {
        return this;
    }
    void add ();
};
