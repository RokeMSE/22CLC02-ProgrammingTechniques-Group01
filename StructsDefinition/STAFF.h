#pragma once

#define uint unsigned int
#define ushort unsigned short
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
    void EmportToTeacher();
    void ReadFileFromTeacher(LIST <SLL, STUDENT>& L);
};
