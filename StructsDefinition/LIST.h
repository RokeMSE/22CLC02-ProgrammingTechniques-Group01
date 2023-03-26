#pragma once

#define uint unsigned int
#define ushort unsigned short

/////////////////////////////////////////////////
template <typename data_type> 
struct SLL {
    // declare a SLL:   SLL<data_type> *name;
    data_type data;
    SLL<data_type>* next = nullptr;
};
// // // _____________________________________________

/////////////////////////////////////////////////
template <typename data_type> 
struct DLL {
    // declare a DLL:   DLL<data_type> *name;
    data_type data;
    DLL<data_type>* prev = nullptr, *next = nullptr;
};
// // // _____________________________________________

/////////////////////////////////////////////////
template <template <typename> typename list_type, typename Data_Type>
struct LIST {
    list_type<Data_Type> *head, *tail;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL, STUDENT>

    // member functions
    // those prototypes haven't been finished yet
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
    void remove (list_type<Data_Type>* node);
};
// // // _____________________________________________
