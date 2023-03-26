#pragma once


#define uint unsigned int
#define ushort unsigned short

#include <iomanip>
#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#pragma warning(disable : 4996)
using namespace std;
template <typename data_type>
struct SLL {
    // declare a SLL:   SLL<data_type> *name;
    data_type data;
    SLL<data_type>* next = nullptr;
     //CreateNode(data_type data);
};

struct STUDENT {
    //: public USER {
    uint No, yearIn;    // yearIn: the year in which that student admitted to school
    //char* studentID = nullptr, * firstname = nullptr, * lastname = nullptr, * socialID = nullptr, * fullname = nullptr;
    string studentID, firstname, lastname, socialID, fullname;
    bool gender;        // 0 male & 1 female
    // DATE DoB;
    double totalMark = 0, finalMark = 0, midtermMark = 0, otherMark = 0;
    //CLASS Class;

    //LIST<DLL, COURSE> courses;   // courses that 1 student enrolls in a semester
    // member functions
    STUDENT* get() {
        return this;
    }
    //void importInfo(ST& SV);
    ////void import((LIST <ST>& L, ST& SV);// at the beginning, list of students is loaded into the system
    //void Export( ST SV);  // export all student to a file to store

    //void importScore(std::string filename);
    //void updateResult();
};
typedef STUDENT ST;
//// // // _____________________________________________
//
///////////////////////////////////////////////////
//template <typename data_type>
//struct DLL {
//    // declare a DLL:   DLL<data_type> *name;
//    data_type data;
//    DLL<data_type>* prev = nullptr, * next = nullptr;
//};
// // // _____________________________________________

/////////////////////////////////////////////////
//template <template <typename> typename list_type, typename Data_Type>
template <typename data_type>
struct LIST {
    SLL<data_type>* head, * tail;
    LIST() {
        head = NULL;
        tail = NULL;

    }

    void createNode(data_type data)
    {
        SLL<data_type>* temp = new SLL<data_type>();
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    void importInfo(data_type& SV) {
        //char *target;
        //target = new char[50];
        //SV.studentID = new char[50];
       // SV.fullname = new char[50];
       // fullname = new char[50];
        cout << "\n Enter your full name: "; cin.ignore();
       // cin >> strcpy(target, SV.fullname);
        getline(cin, SV.fullname);
        cout << endl;
        cout << "\n Enter your numerical order: ";
        cin >> SV.No;
        cout << endl;
        cout << "\n Enter your your ID: "; cin.ignore();
       // cin >> strcpy(target, SV.studentID);
        getline(cin, SV.studentID);
        cout << endl;
        cout << "\n Enter your your total mark: ";
        cin >> SV.totalMark;
        cout << endl;
        cout << "\n Enter your your final mark: ";
        cin >> SV.finalMark;
        cout << endl;
        cout << "\n Enter your your midterm mark: ";
        cin >> SV.midtermMark;
        cout << endl;
        cout << "\n Enter your your orther mark: ";
        cin >> SV.otherMark;
        cout << endl;
    }
   
    void import(LIST <data_type>& L, data_type&SV) {
  
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "/n Nhap sinh vien thu " << i+1 << ":";
            importInfo(SV);
         
     
            createNode(SV);

        }
    }
    void in(STUDENT ST) {
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
    void Export(LIST <data_type>& L) {
        cout << "\nNO\tStudent ID\tFull Name\tTotal Mark\tFinal Mark\tMidterm Mark\tOther Mark";
        SLL<data_type>*temp = head;
       
        while (temp != NULL) {
            in(temp->data);
            temp = temp->next;
           
        }
        
    }
};
//    // list_type:   SLL or DLL
//    // data_type:   data type of member `data` in DLL or SLL
//    // example, to declare a DLL list of students: LIST<DLL, STUDENT>
//
//// member functions
//// those prototypes haven't been finished yet
//    void insert(list_type<Data_Type>* node);
//    void remove(list_type<Data_Type>* node);
//};
//struct USER {
//    // protected:
//    char* username = nullptr, * password = nullptr;
//    STUDENT* student = nullptr;
//    STAFF* staff = nullptr;
//    // if this user is a staff: student == nullptr
//
//    // member functions
//    // USER () {
//    //     username = password = nullptr;
//    //     student = nullptr;
//    //     staff = nullptr;
//    // }
//
//    USER* authenticateUSER();
//    // username must not be duplicated
//    // return value:    USER*  :   return USER* that points to the corresponding user; if there is no matching user in the list, return nullptr 
//
//    void get(STUDENT& s) {
//        student = s.get();
//    }
//    void get(STAFF& s) {
//        staff = s.get();
//    }
//    void generateUSER(ifstream inp);
//    void generateUSER();
//};

//struct CLASS {
//    uint yearIn;        // the year in which students admitted to school
//    ushort K;           // may be the last 2 digits of yearIn
//    Program program;    // APCS, CLC, VP
//    ushort No;          // No of class
//    LIST<DLL, STUDENT> student;
//    //LIST <DLL, STUDENT> student;
//    // 22CLC2: K = 22, program = CLC, No = 2
//
//    // member functions
//    // these prototypes haven't been finished yet
//    void import(std::string filename /*and something here*/);
//    // import students from a file to a class, INCLUDING give them username and password
//    // there is a doubly linked list
//
//    void add();                // create a class
//    void add1stYearStudents(); // add 1st-year students to a particular 1st-year class
//    // just use when a new class is created
//};

//struct COURSE {
//    char* ID = nullptr, * name = nullptr, * teacher = nullptr;
//    ushort credit, maxStudents = 50;
//   // WeekDay day;
//    //Session session; // S1--S4
//   // LIST<DLL, STUDENT> students;
//
//    void add();
//    //import(COURSE*& SV);
//    void remove();
//    void updateInfo();
//    void add1Student();
//};
//struct DATE {
//    ushort day, month;
//    uint year;
//
//    /////////////////////////////////////////
//    // member functions
//
//    void getDate(char*& chr); // lấy một mảng kí tự chr có định dạng mm/dd/yyyy, theo đó gán giá trị cho các member day-mon-year của struct
//
//    void display() {
//        cout << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year;
//    }
//
//    void display(ofstream out) {
//        out << setw(2) << setfill('0') << month << '/' << setw(2) << setfill('0') << day << '/' << year;
//    }
//    /////////////////////////////////////////
//};

//enum Program { APCS, CLC, VP };
//enum WeekDay { MON, TUE, WED, THU, FRI, SAT, SUN };
//enum Session { S1, S2, S3, S4 };



////template <typename T>
//struct Queue {
//    SLL<T>* head, * tail;
//
//    // member functions
//    void dequeue();
//    void enqueue();
//};
//struct SCHOOLYEAR {
//public:
//    uint begin, end;
//
//private:
//    SEMESTER* sem1 = nullptr, * sem2 = nullptr, * sem3 = nullptr;
//
//    //member functions
//    void add(); // create a school year
//};
//
//struct SEMESTER : public SCHOOLYEAR {
//    int No;
//    DATE startdate, enddate;
//    LIST<DLL, COURSE> course;
//
//    // member functions
//    void add(); // choose school year
//};
//
//template <typename T>
//struct Stack {
//    SLL<T>* stack;
//
//    // member functions
//    void push();
//    void pop();
//
//};

struct STAFF {
    //: public USER {
    // USER* login;
    char* firstname = nullptr, * lastname = nullptr;

    // member functions
    STAFF* get() {
        return this;
    }
    void add();
    void EmportToTeacher();
    void ReadFileFromTeacher(LIST <STUDENT>& L);


};


void EXportToTeacher() {
    ofstream taofile("filenew.csv");      // ofs  l� t?o file ???
    

        taofile << "NO,Student ID,Full Name,Total Mark,Final Mark,Midterm Mark,Other Mark";
      
    taofile.close(); // d�ng file
    //input.close();
}
void ReadFileFromTeacher(LIST <STUDENT>& L) {
    //SLL<STUDENT>* temp = L.head;
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
                else{

                    STUDENT S;
                    ;
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
        
        //L.Export(L);
        input.close();

    }
}

 void UpdateST( LIST <STUDENT>& L,LIST <STUDENT> &L1){
     SLL<STUDENT>* temp = L.head;
     SLL<STUDENT>* temp1 = L1.head;
     while (temp != nullptr){
         temp1->data = temp->data;
        /* L.in(temp->data);
         L1.in(temp1->data);*/
         temp=temp->next;
         temp1 = temp1->next;
 }
 }

int main() {
    LIST<STUDENT> ST;
    LIST<STUDENT> list;
    STUDENT student;
    //STUDENT student;
    int soluongSV = 0;
    int idCount = 0;
    int key;
    do {
        cout << "CHUONG TRINH QUAN LY SINH VIEN C/C++\n";
        cout << "*************************MENU**************************\n";
        cout << "**  1. Them sinh vien.                               **\n";
        cout << "**  2. Xuat         **\n";
        cout << "**  3. Export to teacher **\n";
        cout << "**  4. Read file from teacher **\n";
        cout << "**  5. Update list student         **\n";
        cout << "**  6. out.          **\n";
        cout << "*******************************************************\n";
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch (key) {
        case 1:
            cout << "\n1. Them sinh vien.";
            idCount++;
            ST.import(ST, student);
            cout << "\nThem sinh vien thanh cong!";
            soluongSV++;
            //pressAnyKey();
            break;
        case 2:
            if (soluongSV > 0) {
                cout << "\nHien thi danh sach sinh vien.";

                ST.Export(ST);
            }
            else {
                cout << "\nSanh sach sinh vien trong!";
            }
            // pressAnyKey();
            break;
        case 3:
            
                EXportToTeacher();
          
            // pressAnyKey();
            break;
        case 4:

            ReadFileFromTeacher(list);
            list.Export(list);

            // pressAnyKey();
            break;
        case 5:

            UpdateST(list,ST);
            //ST.Export(ST);
            // pressAnyKey();
            break;
        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nHay chon chuc nang trong hop menu.";
            //pressAnyKey();
            break;
        }
    } while (key != 6);
}