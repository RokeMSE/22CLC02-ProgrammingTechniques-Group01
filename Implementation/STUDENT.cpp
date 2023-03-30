#include "../header.h"

STUDENT* STUDENT::get () {
        return this;
}

bool MenuStudent(STUDENT* current) {
        while ( 1 ) {
                cout << "1. View a list of his/ her courses" << endl;
                cout << "2. View a list of classes. " << endl;
                cout << "3. View a list of students in a class" << endl;
                cout << "4. View a list of courses" << endl;
                cout << "5. View a list of students in a course" << endl;
                cout << "6. Export a list of students in a course to a CSV file" << endl;
                cout << "7. Import the scoreboard of a course" << endl;
                cout << "8. View the scoreboard of a course" << endl;
                cout << "9. Update a student's result. " << endl;
                cout << "10. View  the  scoreboard  of  a  class" << endl;
                cout << "11. View his/her scoreboard. " << endl;
                cout << "0. Log out" << endl;
                cout << "-1. Exit" << endl;
                cout << "Your choice: ";
                int choice;
                cin >> choice;
                switch (choice)
                {
                case -1:
                        return 0;
                case 0:
                        return 1;
                case 1:
                        {
                                
                                break;
                        }
                case 2:
                        {
                                
                                break;
                        }
                case 3:
                        {
                                
                                break;
                        }
                case 4:
                        {
                                
                                break;
                        }
                case 5:
                        {
                                
                                break;
                        }
                default:
                        cout << "Please enter a valid letter!" << endl;
                        break;
                }
        }
        return 1;
}

/*
cout << "1. Change password" << endl;
                cout << "2. Forgot password" << endl;
                cout << "3. Update your personal information" << endl;
                cout << "4. Register for the course" << endl;
                cout << "5. View your schedule" << endl;
                cout << "6. View your scoreboard" << endl;
                cout << "7. View list of student in a course" << endl;
                cout << "8. View of classes" << endl;
                cout << "9. View list of student in a class" << endl;
*/