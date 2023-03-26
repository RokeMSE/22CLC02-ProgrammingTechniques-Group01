#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "DATE.h"
#include "USER.h"

struct STAFF : public USER {
    // USER* login;
    char* firstname = nullptr, *lastname = nullptr;

    // member functions
    STAFF* get () {
        return this;
    }
    void add ();
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
};
