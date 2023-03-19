#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "STUDENT.h"
#include "STAFF.h"

struct USER {
    char* username = nullptr, *password = nullptr;
    STUDENT* student = nullptr;
    STAFF* staff = nullptr;
    // if this user is a staff: student == nullptr

    // member functions
    // USER () {
    //     username = password = nullptr;
    //     student = nullptr;
    //     staff = nullptr;
    // }

    pair<bool, USER*> authenticateUSER ();
            // username must not be duplicated
            // return value: bool   :   return 1 if user is allowed to log in; otherwise, return 0
            //               USER*  :   return USER* that points to the corresponding user

    void generateUSER (ifstream inp);
    void generateUSER ();
};

