#pragma once

#define uint unsigned int
#define ushort unsigned short
#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>

using namespace System;
//using namespace std;
// Structs
namespace GROUP1 {
    // proto structs
    struct USER;
    struct STUDENT;
    struct STAFF;
    struct COURSE;
    struct CLASS;
    struct DATE;
    struct SCHOOLYEAR;
    struct SEMESTER;
    struct SCOREBOARD;
    /////////////////////////////////////////////////
   
    // enum
    enum Program { APCS, CLC, VP };
    enum WeekDay { MON, TUE, WED, THU, FRI, SAT, SUN };
    enum Session { S1, S2, S3, S4 };
    enum Type { Staff, Student };

    Program convertToProgram(std::string str);
    WeekDay convertToWeekday(std::string str);
    Session convertToSession(std::string str);
    GROUP1::Type convertToType(std::string str);

    std::string convertFromProgram(Program x);
    std::string convertFromWeekDay(WeekDay x);
    std::string convertFromSession(Session x);
    std::string convertFromType(GROUP1::Type x);
    /////////////////////////////////////////////////
    
    // LIST
    template <typename data_type>
    struct SLL {
        // declare a SLL:   SLL<data_type> *name;
        data_type data;
        SLL<data_type>* next = nullptr;
    };

    template <typename data_type>
    struct DLL {
        // declare a DLL:   DLL<data_type> *name;
        data_type data;
        DLL<data_type>* prev = nullptr, * next = nullptr;
    };

    template <template <typename> typename list_type, typename Data_Type>
    struct LIST {
        list_type<Data_Type>* head = nullptr, *tail = nullptr;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL, STUDENT>

    // member functions
    // those prototypes haven't been finished yet
        LIST() {
            head = NULL;
            tail = NULL;
        }
    };
    /////////////////////////////////////////////////

    // DATE
    struct DATE {
        ushort day = 0, month = 0;
        uint year = 0;
    };
    /////////////////////////////////////////////////

    // USER
    struct USER {
        std::string username = "";
        std::string password = "";
    };
    /////////////////////////////////////////////////
    
    // STAFF
    struct STAFF {
        std::string firstname = "";
        std::string lastname = "";
        const GROUP1::Type type = Staff;
        USER user;
    };
    /////////////////////////////////////////////////

    // SCOREBOARD
    struct SCOREBOARD {
        double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
        STUDENT* student = nullptr;
    };
    /////////////////////////////////////////////////

    // STUDENT
    struct STUDENT {
        uint No = 0, yearIn = 0;    // yearIn: the year in which that student admitted to school
        std::string studentID = "";
        std::string firstname = "";
        std::string lastname = "";
        std::string fullname = "";
        std::string socialID = "";
        const Type type = Student;
        USER user;

        bool gender = 0;        // 0 male & 1 female
        DATE DoB;
        CLASS* Class;

        LIST<DLL, COURSE*> courses;   // courses that 1 student enrolls in a semester
    };
    /////////////////////////////////////////////////
       
    // COURSE
    struct COURSE {
        std::string ID = "";
        std::string name = "";
        std::string teacher = "";
        ushort credit = 0, maxStudents = 50;
        WeekDay day = MON;
        Session session = S1; // S1--S4
        LIST<DLL, SCOREBOARD*> students;
        // list of `students enroll in this course`

        void add1Student(SCOREBOARD* student);
        /// add1Student: Add a student to the course, includes:
        ///     student: is student needs to be added 
        /// This function does not return anything

        void remove1Student(SCOREBOARD* student);
        /// remove1Student: Remove a student from the course, includes:
        ///        student: is the student need to be removed from the course
        /// This function does not return anything
        /////////////////
        // scores are members of STUDENT
    }; // end COURSE

    // SCHOOLYEAR and SEMESTER
    struct SEMESTER {
        int No = 0;
        DATE startdate, enddate;
        LIST<DLL, COURSE*> course;
    };

    struct SCHOOLYEAR {
        uint begin = 0, end = 0;
        SEMESTER* sem1 = nullptr, * sem2 = nullptr, * sem3 = nullptr;

        //member functions
        void create(); // create a school year
    };
    /////////////////////////////////////////////////
    
    // CLASS
    struct CLASS {
        uint yearIn;        // the year in which students admitted to school
        ushort K;           // may be the last 2 digits of yearIn
        Program program;    // APCS, CLC, VP
        ushort No;          // No of class
        LIST<GROUP1::DLL, STUDENT*> student;
        std::string convertToString();
    };
    /////////////////////////////////////////////////
}; // end namespace GROUP1

std::string DateToString(GROUP1::DATE date);
GROUP1::DATE getDate(std::string chr);

// Global variables
GROUP1::SCHOOLYEAR g_currentSchoolYear; // g stands for global
GROUP1::SEMESTER g_currentSemester;
// STUDENT* g_currentStudent;
// STAFF* g_currentStaff;
// Global lists
GROUP1::LIST<GROUP1::DLL, GROUP1::SCHOOLYEAR> L_SchoolYear;
GROUP1::LIST<GROUP1::DLL, GROUP1::STAFF*> L_Staff;
GROUP1::LIST<GROUP1::DLL, GROUP1::STUDENT*> L_Student;
GROUP1::LIST<GROUP1::DLL, GROUP1::CLASS> L_Class;
/////////////////////////////////////
// 
// Prototypes
    // import
        //bool importStudents();

        //bool importStaffs();

        //bool importClasses();

        //bool importStudentsInACourse(std::string filename, GROUP1::COURSE &c);
        //bool importCoursesInASemester(std::string filename, GROUP1::SEMESTER* sem);
        //bool importASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* newSem, ushort noSem);
        //bool importSchoolYears();
    /////////////////////////////////
    
    // export
        //void exportStudents();

        //void exportStaffs();

        //void exportClasses();

        //void exportStudentsInACourse(GROUP1::COURSE* c, uint startYear);
        //void exportCoursesInASemester(std::string filename, GROUP1::SEMESTER* sem, uint startYear);
        //void exportASemesterInASchoolYear(std::string filename, GROUP1::SEMESTER* sem, uint startYear);
        //void exportSchoolYears();
    /////////////////////////////////
/////////////////////////////////////
        // #include "import.cpp"
        // #include "export.cpp"
        // #include "StructsImplementation/enum.cpp"
        // #include "StructsImplementation/LIST.cpp"

        // #include "StructsImplementation/Stack.cpp"
        // #include "StructsImplementation/Queue.cpp"

        // #include "StructsImplementation/DATE.cpp"
        // #include "StructsImplementation/SCOREBOARD.cpp"
        // #include "StructsImplementation/COURSE.cpp"
        // #include "StructsImplementation/SCHOOLYEAR.cpp"
        // #include "StructsImplementation/CLASS.cpp"
        // #include "StructsImplementation/STUDENT.cpp"
        // #include "StructsImplementation/STAFF.cpp"
        // #include "StructsImplementation/USER.cpp"
// GUI
// #define WIN32_LEAN_AND_MEAN
// #include <Windows.h>
/////////////////////////////////////