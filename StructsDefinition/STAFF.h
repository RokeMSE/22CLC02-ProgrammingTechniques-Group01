#pragma once

#include <string>
#include "../header.h"

struct STAFF : public USER {
    // USER* login;
    std::string firstname = "";
    std::string lastname = "";
    const Type type = Staff;
    
    // member functions
    STAFF* get ();
};
