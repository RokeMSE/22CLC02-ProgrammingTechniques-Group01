#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {
protected:
    int ID;
    string username;
    string password;
public:
    virtual void viewProfile() = 0;
    virtual void changePassword() = 0;
    virtual void logout() = 0;
};

class AcademicStaffMember : public User {
private:
    vector<Class> classes;
    vector<StudentInfo> students;
    vector<Course> courses;
    Semester currentSemester;
public:
    void createSchoolYear(string year);
    void createClass(string name);
    void addStudent(StudentInfo student, string className);
    void importCSV(string filename, string className);
    void createSemester(int number, string year, string startDate, string endDate);
    void addCourse(Course course);
    void viewCourses();
    void updateCourse(int courseID, string name, string className, string teacherName, int credits, 
        int maxStudents, string dayOfWeek, string session);
    void addStudentToCourse(int studentID, int courseID);
    void removeStudentFromCourse(int studentID, int courseID);
    void deleteCourse(int courseID);
    void viewClasses();
    void viewStudentsInClass(string className);
    void viewStudentsInCourse(int courseID);
    void exportScoreboard(int courseID, string filename);
    void importScoreboard(int courseID, string filename);
    void viewScoreboardOfCourse(int courseID);
    void updateStudentResult(int studentID, int courseID, int totalMark, int finalMark, int midtermMark, int otherMark);
    void viewScoreboardOfClass(string className);
    virtual void viewProfile();
    virtual void changePassword();
    virtual void logout();
};

class StudentInfo : public User {
private:
    vector<Course> courses;
    Semester currentSemester;
public:
    void viewCourses();
    void viewScoreboard(int courseID);
    virtual void viewProfile();
}