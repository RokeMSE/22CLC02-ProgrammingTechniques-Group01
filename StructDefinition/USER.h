#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"

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
    // return value: bool   :   return 1 if user is allowed to log in; otherwise, return 0
    //               USER*  :   return USER* that points to the corresponding user


    void generateUSER (ifstream inp);
    void generateUSER ();

    void get (STUDENT &thisStudent) {
        student = thisStudent.get();
    }
    void get (STAFF &thisStaff) {
        staff = thisStaff.get();
        student = nullptr;
    }
};

struct STAFF : public USER {
    // USER* login;
    char* firstname = nullptr, *lastname = nullptr;

    // member functions
    STAFF* get () {
        return this;
    }
};

struct STUDENT : public USER {
    int No;
    char* studentID = nullptr, *firstname = nullptr, *lastname = nullptr, *socialID = nullptr;
    bool gender; // 0 male & 1 female
    DATE DoB;

    // member functions
    STUDENT* get() {
        return this;
    }
};