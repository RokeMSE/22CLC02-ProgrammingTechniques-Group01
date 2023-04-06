#pragma once
#include <string>
#define uint unsigned int
#define ushort unsigned short
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
        list_type<Data_Type>* head = nullptr, * tail = nullptr;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL, STUDENT>
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

        // when user forgot their password, they will need to enter a code that they had been given before to verify and create a new password
        // char verification[6]; // 5 digits + 1 NULL character

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
    };

    // SCHOOLYEAR and SEMESTER
    struct SEMESTER {
        int No = 0;
        DATE startdate, enddate;
        LIST<DLL, COURSE*> course;
    };

    struct SCHOOLYEAR {
        uint begin = 0, end = 0;
        SEMESTER* sem1 = nullptr, *sem2 = nullptr, *sem3 = nullptr;
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