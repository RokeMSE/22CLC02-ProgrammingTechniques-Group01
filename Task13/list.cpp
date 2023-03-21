#include "StructDefinition\LIST.h"

template <typename T>
void LIST<T>::remove(DLL<T>* node)
{
    if(!node)
        return;
    
    DLL<T>* cur = this->head;

    if(node == cur)
    {
        this->head = cur->next;
        return;
    }

    while(cur && cur->next != node)
        cur = cur->next;
    
    if(!cur)
        return;

    cur->next = cur->next->next;
}