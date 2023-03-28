#pragma once

#include <string>
#include "../header.h"

struct STAFF {
    // USER* login;
    std::string firstname = "";
    std::string lastname = "";
    const Type type = Staff;
    void EmportToTeacher();
    void ReadFileFromTeacher(LIST <SLL, STUDENT>& L);
    // member functions
    STAFF* get ();
};
