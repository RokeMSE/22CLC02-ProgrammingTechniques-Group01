#include "../header.h"


/// data_type of (list) same as data_type of (val)
template <typename Data_Type>
void add_val(LIST<DLL,Data_Type> &list, Data_Type val) {
    /// Allocate a node*(tmp) with data_type same as the data_type of (val) to add to the (list)
    DLL<Data_Type> *tmp = new DLL<Data_Type>;
    tmp -> data = val;
    tmp -> next = nullptr;
    tmp -> prev = list.tail;

    /// Update the (list), 2 cases: the (list is empty or not) 
    if (list.head == nullptr) {
        list.head = tmp;
        list.tail = tmp;
    } else {   
        list.tail -> next = tmp;
        list.tail = list.tail -> next;
    }
}

template <typename Data_Type>
void remove_val(LIST<DLL,Data_Type> &list, Data_Type val) {
    if (list.head == nullptr)   return;

    /// Find the val need to remove from the list 
    DLL<Data_Type> *cur = list.head;
    while (cur != nullptr && cur -> data != val)
        cur = cur -> next;

    /// Check the (cur) is nullptr(the val doesn't exist in the list) or not
    if (!cur)   return;

    /// Remove the (val) from the list and update with 2 special cases:
    ///     -(val) is the tail
    ///     -(val) is the head
    if (cur != list.tail)
        cur -> next -> prev = cur -> prev;
    else
        list.tail = list.tail -> prev;

    if (cur == list.head)
        list.head = list.head -> next;
    else
        cur -> prev -> next = cur -> next;

    delete cur;
}

template <typename Data_Type>
Data_Type* find(LIST<DLL,Data_Type> list, Data_Type val) {
    DLL<Data_Type>* cur = list.head;
    if ( !list.head ) return nullptr;
    do {
        if ( cur->data == val ) return &(cur->data);
        cur = cur->next;
    } while ( cur != list.tail );
    return nullptr;
}