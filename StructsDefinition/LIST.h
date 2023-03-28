#pragma once

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
    list_type<Data_Type> *head=nullptr, *tail=nullptr;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL, STUDENT>

    // member functions
    // those prototypes haven't been finished yet
    LIST() {
        head = NULL;
        tail = NULL;

    }

    void createNode(Data_Type data)
    {
        SLL<Data_Type>* temp = new SLL<Data_Type>();
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    void importInfo(SLL<Data_Type>& SV) {
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

    void import(LIST <SLL,Data_Type>& L, SLL<Data_Type>& SV) {

        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "/n Nhap sinh vien thu " << i + 1 << ":";
            importInfo(SV);


            createNode(SV);

        }
    }
};
// // // _____________________________________________

template <typename Data_Type>
void add_val(LIST<DLL,Data_Type> &list, Data_Type val);
    /// This function is: add 1 val in to the list:
    ///     (val): the val need to add
    ///     (list): the list that (val) is added to
    /// This function doesn't return anything.

template <typename Data_Type>
void remove_val(LIST<DLL,Data_Type> &list, Data_Type val);
    /// This function is: remove 1 val from the list:
    ///     (val): the val need to remove
    ///     (list): the list that (val) is removed
    /// This function doesn't return anything.