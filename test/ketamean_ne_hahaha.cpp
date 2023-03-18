#include <iostream>
#include <fstream>

#define uint unsigned int
#define ushort unsigned short
using namespace std;

struct SL_char { // "SL" stands for singly linked (list)
    char data;
    SL_char* next, *tail;
    void input(ifstream inp);
};

struct USER {
    SL_char *username, *password;
    // member == 0: staff
    // member == 1: student
};

void SL_char::input(ifstream inp) {
    tail->next = new SL_char;
    tail = tail->next;
    inp >> tail->data;
    tail->next = nullptr;
}

struct DATE {
    ushort day, month;
    uint year;
};

struct COURSE {
    SL_char* ID, name, teacher;
    ushort credit, maxStudents = 50;
    
};

struct SEMESTER {
    int No;
    DATE startdate, enddate;

};

struct STAFF {
    USER login;
    SL_char* firstname;
    SL_char* lastname;
    const bool member = 0; // mark that this is staff
};

struct STUDENT {
    USER login;
    int No;
    SL_char *studentID, *firstname, *lastname, *socialID;
    bool gender; // 0 male & 1 female
    DATE DoB;
    const bool member = 1; // in order to mark that this is student
};

struct Tree {
    // using binary search tree
    STUDENT data;
    Tree* left;
    Tree* right;
};

int main () {
    cout << sizeof(bool);
    return 0;
}