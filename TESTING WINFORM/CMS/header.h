#pragma once

#define uint unsigned int
#define ushort unsigned short
#include <msclr/marshal_cppstd.h>
#include <fstream>

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

    /////////////////////////////////////////////////
    
    // LIST

    template <typename data_type>
    public value struct SLL {
        // declare a SLL:   SLL<data_type> *name;
        data_type data;
        SLL<data_type>* next = nullptr;
    };

    template <typename data_type>
    public value struct DLL {
        // declare a DLL:   DLL<data_type> *name;
        data_type data;
        DLL<data_type>* prev = nullptr, * next = nullptr;
    };

    template <template <typename> typename list_type, typename Data_Type>
    public value struct LIST {
        list_type<Data_Type>* head, *tail;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL, STUDENT>

    // member functions
    // those prototypes haven't been finished yet
    };
    /////////////////////////////////////////////////

    // DATE
    public value struct DATE {
        ushort day, month;
        uint year;
    };
    /////////////////////////////////////////////////

    // USER
    public value struct USER {
        System::String^ username;
        System::String^ password;
    };
    /////////////////////////////////////////////////
    
    // STAFF
    public value struct STAFF {
        System::String^ firstname;
        System::String^ lastname;
        //const Type type = Type::Staff;
        USER* user;
    };
    /////////////////////////////////////////////////

    // SCOREBOARD
    public value struct SCOREBOARD {
        double totalMark, finalMark, midtermMark, otherMark;
        STUDENT* student;
    };
    /////////////////////////////////////////////////

    // STUDENT
    public value struct STUDENT {
        uint No, yearIn;    // yearIn: the year in which that student admitted to school
        System::String^ studentID;
        System::String^ firstname;
        System::String^ lastname;
        System::String^ fullname;
        System::String^ socialID;
        //const Type type = Student;
        USER* user;

        bool gender;       // 0 male & 1 female
        GROUP1::DATE* DoB;
        CLASS* Class;

        LIST<DLL, COURSE*> courses;   // courses that 1 student enrolls in a semester
    };
    /////////////////////////////////////////////////
       
    // COURSE
    public value struct COURSE {
        System::String^ ID;
        System::String^ name;
        System::String^ teacher;
        ushort credit, maxStudents;
        WeekDay day;
        Session session; // S1--S4
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
    public value struct SEMESTER {
        int No;
        GROUP1::DATE *startdate, *enddate;
        LIST<DLL, COURSE*> course;
    };

    public value struct SCHOOLYEAR {
        uint begin, end;
        SEMESTER* sem1, * sem2, * sem3;

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
        LIST<DLL, STUDENT*> student;
        System::String^ convertToString();
    };
    /////////////////////////////////////////////////
}; // end namespace GROUP1

System::String^ DateToString(GROUP1::DATE date);
GROUP1::DATE getDate(System::String^ chr);
GROUP1::Program convertToProgram(System::String^ str);
GROUP1::WeekDay convertToWeekday(System::String^ str);
GROUP1::Session convertToSession(System::String^ str);
GROUP1::Type convertToType(System::String^ str);

System::String^ convertFromProgram(GROUP1::Program x);
System::String^ convertFromWeekDay(GROUP1::WeekDay x);
System::String^ convertFromSession(GROUP1::Session x);
System::String^ convertFromType(GROUP1::Type x);

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
        bool importStudents();

        bool importStaffs();

        bool importClasses();

        bool importStudentsInACourse(System::String^ filename, GROUP1::COURSE &c);
        bool importCoursesInASemester(System::String^ filename, GROUP1::SEMESTER* sem);
        bool importASemesterInASchoolYear(System::String^ filename, GROUP1::SEMESTER* newSem, ushort noSem);
        bool importSchoolYears();
    /////////////////////////////////
    
    // export
        void exportStudents();

        void exportStaffs();

        void exportClasses();

        void exportStudentsInACourse(GROUP1::COURSE* c, uint startYear);
        void exportCoursesInASemester(System::String^ filename, GROUP1::SEMESTER* sem, uint startYear);
        void exportASemesterInASchoolYear(System::String^ filename, GROUP1::SEMESTER* sem, uint startYear);
        void exportSchoolYears();
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