#include "header.h"

/// @brief dealloc all nodes of a list
/// @tparam Data data_type
/// @param list list whose nodes would be deleted
template<typename Data>
void dealloc1(LIST<DLL, Data> &list) {
    while ( list.head ) {
        DLL<Data>* tmp = list.head;
        list.head = list.head->next;
        delete tmp;
    }
}
////////////////////////////////

/// @brief dealloc data of a node and then delete the node
/// @tparam Data 
/// @param list 
template<typename Data>
void dealloc2(LIST<DLL, Data> &list) {
    while ( list.head ) {
        DLL<Data>* tmp = list.head;
        list.head = list.head->next;
        delete tmp->data;
        delete tmp;
    }
}
////////////////////////////////