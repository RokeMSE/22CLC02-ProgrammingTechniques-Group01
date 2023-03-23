#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "USER.h"

struct STAFF : public USER {
    // USER* login;
    char* firstname = nullptr, *lastname = nullptr;

    // member functions
    STAFF* get () {
        return this;
    }
    void add ();
    void import() {
        ofstream taofile("fileNew.csv");      // ofs  là t?o file ???
        for (int i = 1; i <= n; i++)
        {
            taofile << a[i] << " ";
        }
        taofile.close(); // dóng file
        input.close();
    }
    void ReadFileFromTeacher() {
        int* a = new int[n];
        ifstream input("fileNew.csv");
        if (!input.is_open())
        {
            cout << "Khong the mo file.\n";
            return 0;
        }
        else {
            for (int i = 1; i <= n; i++)
            {
                input >> a[i];
            }
        }
    }
};
