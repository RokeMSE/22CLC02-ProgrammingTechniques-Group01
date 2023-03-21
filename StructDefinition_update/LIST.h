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
/////////////////////////////////////////////////
// _____________________________________________

/////////////////////////////////////////////////
template <typename data_type> 
struct DLL {
    // declare a DLL:   DLL<data_type> *name;
    data_type data;
    DLL<data_type>* prev = nullptr, *next = nullptr;
};
// /////////////////////////////////////////////////
// // // _____________________________________________

// // /////////////////////////////////////////////////
template <template <typename> class list_type, typename Data_Type>
struct LIST {
    //using Data_Type = typename list_type<data_type>::data_type;
    list_type <Data_Type> *head, *tail;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL<STUDENT>>


    // member functions
    // those prototypes haven't been finished yet
    void insert (list_type<Data_Type>* node);
    void remove (list_type<Data_Type>* node);
};

//LUONG
// template <typename list_type>
// struct LIST {
//     //using typename data_type;
//     //list_type<typename list_type::data_type> *head, *tail;
//     //template <typename data_type> 
//     list_type* head, *tail;
//     //list_type::list_type<data_type>* head;
//     //list_type <data_type>* head, *tail;
//     //list_type <type>* head, *tail; 
//         // list_type:   SLL or DLL
//         // data_type:   data type of member `data` in DLL or SLL
//         // example, to declare a DLL list of students: LIST<DLL<STUDENT>>


//     // member functions
//     // those prototypes haven't been finished yet
//     void insert (list_type* node);
//     void remove (list_type* node);
// };

/////////////////////////////////////////////////
// _____________________________________________