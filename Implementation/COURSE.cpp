#include "../header.h"
#include <iostream>
#include <string>
#include <fstream>
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
void COURSE::importInfo(STUDENT& SV) {

    cout << "\n Enter your full name: "; cin.ignore();
    getline(cin, SV.fullname);
    cout << endl;
    cout << "\n Enter your numerical order: ";
    cin >> SV.No;
    cout << endl;
    cout << "\n Enter your your ID: "; cin.ignore();
    getline(cin, SV.studentID);
}

bool COURSE::addStudents (LIST <SLL, STUDENT>& L, STUDENT& SV){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "/n Nhap sinh vien thu " << i + 1 << ":";
        importInfo(SV);
        L.createNode(SV);

    }
}
void COURSE::in(STUDENT ST) {
    cout << endl;
    cout << "\n" << ST.No;
    // cout << endl;
    cout << "\t" << ST.studentID;
    // cout << endl;
    cout << "\t" << ST.fullname;
    // cout << endl;
    cout << "\t" << ST.totalMark;
    // cout << endl;
    cout << "\t" << ST.finalMark;
    // cout << endl;
    cout << "\t" << ST.midtermMark;
    // cout << endl;
    cout << "\t" << ST.otherMark;
    // cout << endl;
}
void COURSE::Export(LIST <SLL, STUDENT>& L) {
    cout << "\nNO\tStudent ID\tFull Name\tTotal Mark\tFinal Mark\tMidterm Mark\tOther Mark";
    SLL<STUDENT>* temp = L.head;

    while (temp != NULL) {
        in(temp->data);
        temp = temp->next;

    }

}

void COURSE::add1Student (STUDENT student) {
    add_val<STUDENT> (students, student);
}

void COURSE::remove1Student(STUDENT student) {
    remove_val<STUDENT> (students, student);
}

void COURSE::importScore () {
    // file CSV _ task 20
    // quy ước định dạng file CSV theo nhu cầu rồi comment vô đây nhen, miễn là đủ các cột của đề yêu cầu, có thể thêm cột nếu muốn
    // điểm của sinh viên nằm trong struct STUDENT luôn, nên trước tiên search ID tương ứng trước rồi mới cập nhật điểm
    ofstream taofile("filenew.csv");      
    SLL<STUDENT>* temp = L.head;
    taofile << "NO,Student ID,Full Name,Total Mark,Final Mark,Midterm Mark,Other Mark";
    taofile << "\n";
    while (temp != nullptr) {

        taofile << temp->data.No << "," << temp->data.studentID << "," << temp->data.fullname << "\n";
        temp = temp->next;

    }
    taofile.close(); // d�ng file
    //input.close();
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

bool COURSE::exportStudents(std::string filename)
{
    ofstream output(filename);

    if(!output.is_open())
        return false;

    DLL<STUDENT*>* temp = (this->students).head;

    while(temp)
    {
        output << temp->data->No << "," << temp->data->studentID << "," << temp->data->firstname << "," << temp->data->lastname << "," << temp->data->gender << ",";
        output << (temp->data->DoB).day << "/" << (temp->data->DoB).month << "/" << (temp->data->DoB).year << ",";
        output << temp->data->socialID << "\n"; 
        temp = temp->next;
    }
    //No studentID firstname lastname  gender (day/month/year)oB socialID
    return true;
}
void COURSE::updateResultByID(LIST <SLL, STUDENT> L) {
    SLL<STUDENT>* temp = L.head;
    STUDENT S;
    cout << "Enter your student ID you want to update: ";
    cin.ignore();
    getline(cin, S.studentID);
    while (temp != nullptr) {

        if (S.studentID == temp->data.studentID) {
            cout << "\n Enter your your total mark: ";
            cin >> S.totalMark;
            temp->data.totalMark = S.totalMark;
            cout << endl;
            cout << "\n Enter your your final mark: ";
            cin >> S.finalMark;
            temp->data.finalMark = S.finalMark;
            cout << endl;
            cout << "\n Enter your your midterm mark: ";
            cin >> S.midtermMark;
            temp->data.midtermMark = S.midtermMark;
            cout << endl;
            cout << "\n Enter your your orther mark: ";
            cin >> S.otherMark;
            temp->data.otherMark = S.otherMark;
            cout << endl;
        }
        temp = temp->next;
    }
}
void UpdateST(LIST <SLL, STUDENT>& L, LIST <SLL, STUDENT>& L1) {
    SLL<STUDENT>* temp = L.head;
    SLL<STUDENT>* temp1 = L1.head;
    while (temp != nullptr) {
        temp1->data = temp->data;
        /* L.in(temp->data);
         L1.in(temp1->data);*/
        temp = temp->next;
        temp1 = temp1->next;
    }
}
void ReadFileFromTeacher(LIST <SLL, STUDENT>& L) {
    ifstream input("fileNew.csv");
    if (!input.is_open())
    {
        cout << "Khong the mo file.\n";
        return;
    }
    else {
        int numSV;
        char* l;
        l = new char[10000];
        cout << "Nhap so luong sinh vien: ";
        cin >> numSV;
        cout << endl;
        input.ignore(256, '\n');
        while (input) {

            string s;

            for (int i = 0; i < numSV; i++) {
                if (i >= numSV) {
                    return;
                }
                else {

                    STUDENT S;
                    
                    getline(input, s, '\n');

                    strcpy(l, s.c_str());
                    cout << l;
                    cout << endl;
                    S.No = stoi(strtok(l, ","));//stoi convert string to integer
                    cout << S.No; cout << endl;
                    S.studentID = strtok(NULL, ",");//strtok splits the string str into an array of tokens separated by delim
                    cout << S.studentID; cout << endl;
                    S.fullname = strtok(NULL, ",");
                    cout << S.fullname; cout << endl;
                    S.totalMark = stoi(strtok(NULL, ","));
                    cout << S.totalMark; cout << endl;
                    S.finalMark = stoi(strtok(NULL, ","));
                    cout << S.finalMark; cout << endl;
                    S.midtermMark = stoi(strtok(NULL, ","));
                    cout << S.midtermMark; cout << endl;
                    S.otherMark = stoi(strtok(NULL, ","));
                    cout << S.otherMark; cout << endl;
                    L.createNode(S);
                }
            }
            break;
        }
        input.close();
    }
}
