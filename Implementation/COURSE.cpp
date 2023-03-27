#include "../header.h"
#include <iostream>
#include <string>
using namespace std;
void COURSE::updateInfo () {
    // this function will be called when the button "UPDATE" is cliked
    getline(cin, ID);
    getline(cin, name);
    getline(cin, teacher);

    string tmp;
    getline(cin, tmp); // get `credit`
    credit = stoi(tmp);

    getline(cin, tmp); // get `maxStudents`
    maxStudents = stoi(tmp);

    getline(cin, tmp); // get `day`
    day = convertToWeekday(tmp);

    getline(cin, tmp); // get `session`
    session = convertToSession(tmp);
}

bool COURSE::addStudents (std::string filename){

}

void COURSE::add1Student (STUDENT student) {
    add_val<STUDENT> (students, student);
}

void COURSE::remove1Student(STUDENT student) {
    remove_val<STUDENT> (students, student);
}

bool COURSE::importScore (std::string filename) {
    // file CSV _ task 20
    // quy ước định dạng file CSV theo nhu cầu rồi comment vô đây nhen, miễn là đủ các cột của đề yêu cầu, có thể thêm cột nếu muốn
    // điểm của sinh viên nằm trong struct STUDENT luôn, nên trước tiên search ID tương ứng trước rồi mới cập nhật điểm
    
}

bool COURSE::updateResult (std::string studentID) {
    /// @param studentID : ID of the student whose result needs upadating
    // get data from keyboard
    // task 22
    // search for student in the list `students` using `ID`:
        // if found, update new score; otherwise, pop up "there is no student with ID " << ID << " in this course."
    DLL<STUDENT>* cur = students.head;
    while ( cur ) {
        if ( cur->data.studentID == studentID ) {
            // update

            /////////
            return 1;
        }
        cur = cur->next;
    }
    return 0;
}