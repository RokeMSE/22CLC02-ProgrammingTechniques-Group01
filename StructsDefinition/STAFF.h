#pragma once

#include <string>
#include "../header.h"

struct USER;
struct STAFF {
    // USER* login;
    std::string firstname = "";
    std::string lastname = "";
    const Type type = Staff;
    USER* user;
    // member functions
    STAFF* get ();
};

bool MenuStaff(STAFF* staff); // return 0 if user chooses exit.