#pragma once

#include <string>
#include <iostream>
#include "../header.h"

struct USER {
    std::string username = "";
    std::string password = "";
};

template <typename Data_Type>
Data_Type* authenticateUSER (LIST<DLL, Data_Type*> list, USER val);
    // username must not be duplicated
    // return value:    USER*  :   return USER* that points to the corresponding user; if there is no matching user in the list, return nullptr 


