#pragma once

#include "../header.h"

bool MenuStaff(STAFF* staff) {
        while ( 1 ) {
                cout << "1. Create a school year (2020-2021, for example) " << endl;
                cout << "2. Create  several  classes  for  1st-year  students.  For  example:  class  20APCS1,  class  20APCS2, class 20CLC1…, class 20CLC11,..." << endl;
                cout << "3. Add new 1st year students to 1st-year classes one by one" << endl;
                cout << "4. Add new 1st year students to 1st-year classes by importing  a  CSV  file  containing  all  students  in  a  specific  class" << endl;
                cout << "5. Create a semester" << endl;
                cout << "6. Add courses to semester one by one" << endl;
                cout << "7. Add courses to semester by importing a  CSV  file  containing  all  courses  in  a  specific  class" << endl;

                cout << "7. View a list of classes" << endl;
                cout << "8. View a list of students in a class" << endl;
                cout << "9. View a list of courses" << endl;
                cout << "10. View list of students in a course" << endl;
                
                cout << "11. Add a student to the course" << endl;
                cout << "12. Remove a student from the course" << endl;
                cout << "13. Delete a course" << endl;
                cout << "0. Log out" << endl;
                cout << "-1. Exit" << endl;
                cout << "=>Your choice: ";
                int choice;
                cin >> choice;
                cin.ignore();
                cout << endl;
                switch (choice)
                {
                case -1:
                        return 0;
                case 0:
                        return 1;
                case 1:
                        {
                                SCHOOLYEAR newSchoolyear;
                                newSchoolyear.create();         /////// commit to master function create
                                g_currentSchoolYear = newSchoolyear;

                                add_val<SCHOOLYEAR>(L_SchoolYear,newSchoolyear);
                                break;
                        }
                case 2:
                        {
                                CLASS newClass;
                                newClass.add(g_currentSchoolYear);      /////// commit to masster function add

                                add_val<CLASS>(L_Class,newClass);
                                break;
                        }
                case 3:
                        {
                                L_Class.tail->data.add1stYearStudent();
                                break;
                        }
                case 4:
                        {
                                cout << "Format of CSV file will be: No,StudentID,Firstname,Lastname,Gender,Date of Birth,Social ID" << endl;
                                string filename;
                                cout << "Input the path of file which contains a list of students need to add to the class: ";
                                getline(cin,filename);
                                L_Class.tail->data.add1stYearStudents(filename);
                                break;
                        }
                case 5:
                        {
                                SEMESTER newSem;
                                newSem.add();
                                break;
                        }
                case 6:
                        {
                                g_currentSemester.addCourse();
                                break;
                        }
                case 7:
                        {
                                cout << "Format of CSV file will be: ID,name,teacher name,number of credits,the maximum number of students in the course(default 50),day of the week,the session that the course will be performed (MON / TUE / WED / THU / FRI / SAT, S1 (07:30), S2 (09:30), S3(13:30) and S4 (15:30))" << endl;
                                string filename;
                                cout << "Input the path of file which contains a list of courses need to add to the semester: ";
                                getline(cin, filename);
                                g_currentSemester.addCourses(filename);
                                break;
                        }
                case 8:
                        {
                                
                                break;
                        }
                case 9:
                        {
                                
                                break;
                        }
                case 10:
                        {
                                
                                break;
                        }
                case 11:
                        {
                                
                                break;
                        }
                case 12:
                        {
                                
                                break;
                        }
                case 13:
                        {
                                break;
                        }
                default:
                        {
                                cout << "Please enter a valid letter!" << endl;
                                break;
                        }
                }
        }
        return 1;
}