#pragma once

#include "DATE.h"
#include "STUDENT.h"
#include "STAFF.h"

struct USER {
    // protected:
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

    USER* authenticateUSER ();
            // username must not be duplicated
            // return value:    USER*  :   return USER* that points to the corresponding user; if there is no matching user in the list, return nullptr 

    void get (STUDENT &s) {
        student = s.get();   
    }
    void get (STAFF &s) {
        staff = s.get();
    }
    void generateUSER (ifstream inp);
    void generateUSER ();
};

