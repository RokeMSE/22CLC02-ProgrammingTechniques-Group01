#include "StructsDefinition\LIST.h"

template <typename T>
void DLL<T>::remove(DLL<T>* node)
{
    if(!node)
        return;
    
    DLL<T>* cur = this->head;

    if(!cur)
        return;

    if(node == cur)
    {
        this->head = cur->next;
        cur = cur->next;
        cur->prev = nullptr;
        delete node;
        return;
    }

    while(cur && cur->next != node)
        cur = cur->next;
    
    if(!cur)
        return;

    cur->next = cur->next->next;
    cur->next->next->prev = cur;
    delete node;
}