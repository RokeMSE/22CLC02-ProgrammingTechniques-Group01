#include "../header.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void COURSE::updateInfo() {
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

bool COURSE::addStudents (std::string filename) {
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    string str;
    getline(ifs,str);       /// next the first line

    //  The format of file csv: No,Student ID,First Name,Last Name,Gender,Date Of Birth,Social ID
    while (!ifs.eof())
    {

        getline(ifs,str,',');       //No
        getline(ifs,str,',');       //Student ID

        // find this student by studentID in the global list of students
        DLL<STUDENT*> *cur = L_Student.head;
        while (cur != nullptr && cur->data->studentID != str)
            cur = cur -> next;

        if (cur == nullptr)
        {
            cout << "Can not find student: " << str << endl;
            return false;
        }
        else
            add1Student(cur->data);       // Add students to the list of students in the course
        getline(ifs,str);       // next line
    }
    ifs.close();
    return true;
}

void COURSE::add1Student (STUDENT* student) {
    add_val<SCOREBOARD*> (students, student);
}

void COURSE::remove1Student(STUDENT* student) {
    remove_val<STUDENT*> (students, student);
}

void COURSE::exportFile () {
    // file CSV _ task 20
    // quy ước định dạng file CSV theo nhu cầu rồi comment vô đây nhen, miễn là đủ các cột của đề yêu cầu, có thể thêm cột nếu muốn
    // điểm của sinh viên nằm trong struct STUDENT luôn, nên trước tiên search ID tương ứng trước rồi mới cập nhật điểm
    ofstream taofile("filenew.csv");
    DLL<SCOREBOARD*>* temp = students.head;
    taofile << "NO,Student ID,Full Name,Total Mark,Final Mark,Midterm Mark,Other Mark";
    taofile << "\n";
    while (temp != nullptr) {
        taofile << temp->data->student->No << "," << temp->data->student->studentID << "," << temp->data->student->fullname << "\n";
        temp = temp->next;
    }
    taofile.close();
}

// bool COURSE::updateResult (STUDENT student) {

//     /// @param studentID : ID of the student whose result needs upadating
//     // get data from keyboard
//     // task 22
//     // search for student in the list `students` using `ID`:
//         // if found, update new score; otherwise, pop up "there is no student with ID " << ID << " in this course."
//     DLL<STUDENT*>* cur = students.head;
//     while ( cur->data ) {
//         if ( cur->data->studentID == student.studentID ) {
//             // update

//             /////////
//             return 1;
//         }
//         cur = cur->next;
//     }
//     return 0;
// }

bool COURSE::exportStudents(std::string filename)
{
    ofstream output(filename);

    if(!output.is_open())
        return false;

    DLL<SCOREBOARD*>* temp = students.head;

    while(temp) 
    {
        output << temp->data->student->No << "," << temp->data->student->studentID << "," << temp->data->firstname << "," << temp->data->lastname << "," << temp->data->gender << ",";
        output << (temp->data->DoB).day << "/" << (temp->data->DoB).month << "/" << (temp->data->DoB).year << ",";
        output << temp->data->socialID << "\n"; 
        temp = temp->next;
    }
    output.close();
    //No studentID firstname lastname  gender (day/month/year)oB socialID
    return true;
}

void COURSE::updateResultByID () {
    DLL<STUDENT*>* temp = students.head;
    STUDENT S;
    cout << "Enter your student ID you want to update: ";
    getline(cin, S.studentID);
    while (temp != nullptr) {
        if (S.studentID == temp->data->studentID) {
            cout << "\n Enter your your total mark: ";
            cin >> S.totalMark;
            temp->data->totalMark = S.totalMark;
            cout << endl;
            cout << "\n Enter your your final mark: ";
            cin >> S.finalMark;
            temp->data->finalMark = S.finalMark;
            cout << endl;
            cout << "\n Enter your your midterm mark: ";
            cin >> S.midtermMark;
            temp->data->midtermMark = S.midtermMark;
            cout << endl;
            cout << "\n Enter your your orther mark: ";
            cin >> S.otherMark;
            temp->data->otherMark = S.otherMark;
            cout << endl;
        }
        temp = temp->next;
    }
    cin.ignore();
}

// void COURSE::UpdateST(LIST <DLL, STUDENT>& L, LIST <SLL, STUDENT>& L1) {
//     DLL<STUDENT*>* temp = L.head;
//     SLL<STUDENT>* temp1 = L1.head;
//     while (temp != nullptr) {
//         temp1->data = temp->data;
//         temp = temp->next;
//         temp1 = temp1->next;
//     }
// }

bool COURSE::importScore() {
    ifstream input("fileNew.csv");
    if (!input.is_open())
    {
        return false;
    }
    else {
        DLL<STUDENT*>* temp = students.head;
        char* l;
        l = new char[10000];
        cout << endl;
        input.ignore(256, '\n');
        while (input) {
            string s;
            for (int i = 0; i < 50; i++) {
                
                    STUDENT S;
                    getline(input, s, '\n');
                    strcpy(l, s.c_str());
                    cout << l;
                    cout << endl;
                    S.No = stoi(strtok(l, ",")); //stoi convert string to integer
                    //cout << S.No; cout << endl;
                    S.studentID = strtok(NULL, ","); //strtok splits the string str into an array of tokens separated by delim
                    //cout << S.studentID; cout << endl;
                    S.fullname = strtok(NULL, ",");
                    //cout << S.fullname; cout << endl;
                    S.totalMark = stoi(strtok(NULL, ","));
                    //cout << S.totalMark; cout << endl;
                    S.finalMark = stoi(strtok(NULL, ","));
                    //cout << S.finalMark; cout << endl;
                    S.midtermMark = stoi(strtok(NULL, ","));
                    //cout << S.midtermMark; cout << endl;
                    S.otherMark = stoi(strtok(NULL, ","));
                    //cout << S.otherMark; cout << endl;
                    //L.createNode(S);
                    while (temp != nullptr) {
                                        if (S.studentID == temp->data->studentID) {
                                            temp->data->finalMark = S.finalMark;
                                            temp->data->totalMark = S.totalMark;
                                            temp->data->midtermMark = S.midtermMark;
                                            temp->data->otherMark = S.otherMark;
                                        }
                                        temp = temp->next;
                                    }
                
                }
                break;
            }
            
        }
        input.close();
        return true;
}

