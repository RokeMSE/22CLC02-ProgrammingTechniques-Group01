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