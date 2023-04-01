#include "../header.h"

template <typename Data_Type>
Data_Type* authenticateUSER (LIST<DLL, Data_Type*> list, USER* val) {
    DLL<Data_Type>* cur = list.head;
    do {
        if ( cur->data->user == val )    return cur->data;
        cur = cur->next;
    } while ( cur != list.tail );
    return nullptr;
}

// void generateUSER () {
//     // from keyboard
// }