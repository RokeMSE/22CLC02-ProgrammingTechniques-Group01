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
    list_type<Data_Type> *head, *tail;
        // list_type:   SLL or DLL
        // data_type:   data type of member `data` in DLL or SLL
        // example, to declare a DLL list of students: LIST<DLL, STUDENT>

    // member functions
    // those prototypes haven't been finished yet
    void insert (list_type<Data_Type>* node);
    void remove (list_type<Data_Type>* node);
};
// // // _____________________________________________
