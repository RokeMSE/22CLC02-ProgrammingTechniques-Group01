#pragma once

#include "../header.h"
using namespace std;
#include <iostream>
#include <string>

void SCHOOLYEAR::create() {
    std::cout << "Enter begin year: ";
    uint yearBegin;
    std::cin >> yearBegin;
    (*this).begin = yearBegin;
    (*this).end = yearBegin + 1;

    g_currentSchoolYear = *this;
}

bool SEMESTER::add () {
    // add a new semester to the schoolyear `year` if there is one available
    // `year` is set to `g_currentSchoolYear`by default
    SCHOOLYEAR year = g_currentSchoolYear;

    if ( year.sem1 && year.sem2 && year.sem3 )  return 0; // no available semester

    // then display the GUI for user to input semester's information
    SEMESTER* sem = nullptr;
    ushort no;
    if ( year.sem1 == nullptr ) {
        year.sem1 = new SEMESTER;
        sem = year.sem1;
        sem->No = 1;
    } else if ( year.sem2 == nullptr ) {
        year.sem2 = new SEMESTER;
        sem = year.sem2;
        sem->No = 2;
    } else {
        year.sem3 = new SEMESTER;
        sem = year.sem3;
        sem->No = 3;
    }

    string date;
    // get startdate
    getline (cin, date);
    sem->startdate = getDate(date);

    // get enddate
    getline (cin, date);
    sem->enddate = getDate(date);

    course.head = course.tail = nullptr;

    // then set `g_currentSemester` to the semester that has just been created
    g_currentSemester = *sem;
    return 1;  
}

void SEMESTER::addCourse () {

    int choice=1;
    while (choice)
    {
        COURSE* tmp = new COURSE;
        cout << "Enter ID of course: ";
        getline(cin,tmp->ID);
        cout << "Enter name of course: ";
        getline(cin,tmp->name);
        cout << "Enter name of teacher: ";
        getline(cin,tmp->teacher);
        cout << "Enter number of credit: ";
        cin >> tmp->credit;
        // cout << "Enter the maximum number of students in the course (default 50): ";
        // cin >> tmp->maxStudents;
        cin.ignore();
        string str;
        cout << "Enter day of the week that the course will be performed: ";
        getline(cin,str);
        tmp->day = convertToWeekday(str);
        cout << "Enter the session that the course will be performed: ";
        getline(cin, str);
        tmp->session = convertToSession(str);

        add_val<COURSE*>(course,tmp);

        cout << "Add course successfully!" << endl;
        cout << "If you wanna continue, enter 1. Otherwise, enter 0." << endl;
        cout << "=> Your choice: ";
        cin >> choice;
        cin.ignore();
    }
}

bool SEMESTER::addCourses(string filename){
    ////ID, name, teacher name, number of credits, the maximum number of students in the course (default 50), day of the week, and the session that the course will be performed (MON / TUE / WED / THU / FRI / SAT, S1 (07:30), S2 (09:30), S3(13:30) and S4 (15:30)))
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
    {
        ifs.close();
        return false;
    }

    string str;
    getline(cin,str);   // skip title line;
    while (!ifs.eof())
    {
        COURSE* tmp = new COURSE;

        getline(cin, tmp->ID, ',');
        getline(cin, tmp->name, ',');
        getline(cin, tmp->teacher, ',');
        getline(cin, str, ',');
        tmp->credit = stoi(str);
        getline(cin, str, ',');
        tmp->maxStudents = stoi(str);
        getline(cin,str, ',');
        tmp->day = convertToWeekday(str);
        getline(cin,str, ',');
        tmp->session = convertToSession(str);

        add_val(course,tmp);
    }

    ifs.close();
    return true;
}

/*
To achieve this in a WinForm application using C++, you can use the concept of multi-threading. The idea is to run the function in a separate thread and continuously check for the cancel button click in the main UI thread. If the cancel button is clicked, you can signal the function thread to stop executing by using a shared variable or event.
Here are the steps you can follow:
1. Create a function that performs the task you want to execute.
2. Create a global or shared variable to indicate whether the function should stop executing or not. You can set this variable to false initially and set it to true when the cancel button is clicked.
3. Create a separate thread and start executing the function in that thread.
4. In the main UI thread, continuously check for the cancel button click. You can use the Click event of the cancel button to set the shared variable to true.
5. Within the function, continuously check the shared variable to see if it has been set to true. If it has, stop executing the function and return from the thread.
################# implementation
#include <Windows.h>
#include <process.h>

// Global variable to indicate whether the function should stop executing or not
bool g_bCancel = false;

// The function that performs the task you want to execute
void MyFunction()
{
    // Do some work here
    while (!g_bCancel)
    {
        // Do some more work here
    }
}

// The thread function that executes MyFunction
unsigned __stdcall ThreadFunc(void*)
{
    MyFunction();
    return 0;
}

// The function to start executing the task in a separate thread
void StartTask()
{
    // Reset the cancel flag
    g_bCancel = false;

    // Create a new thread and start executing ThreadFunc
    HANDLE hThread = (HANDLE)_beginthreadex(NULL, 0, &ThreadFunc, NULL, 0, NULL);

    // Wait for the thread to finish executing
    WaitForSingleObject(hThread, INFINITE);

    // Close the thread handle
    CloseHandle(hThread);
}

// The event handler for the cancel button click
void btnCancel_Click(Object^ sender, EventArgs^ e)
{
    // Set the cancel flag
    g_bCancel = true;
}

// The main function that initializes the UI and starts the task
int main(array<System::String^>^ args)
{
    // Create the UI components
    Button^ btnCancel = gcnew Button();
    btnCancel->Text = "Cancel";
    btnCancel->Click += gcnew EventHandler(&btnCancel_Click);

    // Add the UI components to the form
    Form^ form = gcnew Form();
    form->Controls->Add(btnCancel);

    // Start executing the task in a separate thread
    StartTask();

    // Show the form
    Application::Run(form);

    return 0;
}

*/