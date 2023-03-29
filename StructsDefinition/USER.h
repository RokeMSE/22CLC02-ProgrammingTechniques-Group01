#pragma once

#include <string>
#include <iostream>
#include "../header.h"

struct USER {
    // protected:
    std::string username = "";
    std::string password = "";
    // if this user is a staff: student == nullptr
};

USER* authenticateUSER (LIST<DLL, USER> list, USER val);
    // username must not be duplicated
    // return value:    USER*  :   return USER* that points to the corresponding user; if there is no matching user in the list, return nullptr 


