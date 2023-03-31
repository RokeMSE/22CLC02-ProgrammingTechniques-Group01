#include "../header.h"

bool MenuStaff(STAFF* staff) {
        while ( 1 ) {
                cout << "1. Create a school year (2020-2021, for example) " << endl;
                cout << "2. Create  several  classes  for  1st-year  students.  For  example:  class  20APCS1,  class  20APCS2, class 20CLC1…, class 20CLC11, class 20VP…" << endl;
                cout << "3. Add new 1st year students to 1st-year classes." << endl;
                cout << "4. For  quick  input,  he/she  can  import  a  CSV  file  containing  all  students  in  a  specific  class  to the  system,  instead  of  adding  one  by  one:  No,  Student  ID,  First  name,  Last  name,  Gender, Date of Birth, and Social ID" << endl;
                cout << "5. He/she  does  not  need  to  add  2nd-year,  3rd-year,  or  4th-year  students,  because  these students had been added in the previous years. " << endl;
                
                cout << "6. View your scoreboard" << endl;
                cout << "7. View list of student in a course" << endl;
                cout << "8. View of classes" << endl;
                cout << "9. View list of student in a class" << endl;
                cout << "10. View list of student in a class" << endl;
                
                cout << "11. Add a student to the course" << endl;
                cout << "12. Remove a student from the course" << endl;
                cout << "13. Delete a course" << endl;
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