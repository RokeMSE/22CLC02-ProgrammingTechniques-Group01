#include "header.h"
#include <iostream>
#include <Windows.h>
using namespace std;

USER* currentUSER;
int main() {
    // Local var declarations
    bool notExit = 1;
    //////////////////////////////////////////////////////
    // import();
    //////////////////////////////////////////////////////
    //////////////////////////////////////////////////////
    while ( notExit ) {
        system("cls");
        // Logging in
        USER tmp;
        do {
            cout << "User name: ";
            cin >> tmp.username;
            cout << "Password: ";
            cin >> tmp.password;
            currentUSER = authenticateUSER(L_USER, tmp); // notify if password is not correct
        } while (!currentUSER);
        /////////////////////////////////////

        // Main menu
        if ( currentUSER->staff == nullptr )
            // this user is a student
            notExit = MenuStudent();
        else
            // this user is staff
            notExit = MenuStaff();
        /////////////////////////////////////
    }
    //////////////////////////////////////////////////////
    //////////////////////////////////////////////////////
    // Export();
    // Deallocation
    //
    //////////////////////////////////////////////////////
    return 0;
}