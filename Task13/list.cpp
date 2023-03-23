#include "StructsDefinition\LIST.h"
#include <type_traits>
using namespace std;

template <template <typename> typename list_type, typename Data_Type>
void LIST<list_type, Data_Type>::remove(list_type<Data_Type>* node)
{
    if(!node)
        return;

    if constexpr(is_same_v<list_type<Data_Type>, DLL<Data_Type>>)
    {
        if(node == this->head)
        {
            DLL* cur = this->head;
            cur = cur->next;
            this->head = cur;
            cur->prev = nullptr;
            delete node;
            return;
        }
        else if(node == this->tail)
            this->tail = nullptr;



        node = node->prev;
        node->next = node->next->next;
        node->next->prev = node;

        delete node;
    }
    else if constexpr(is_same_v<list_type<Data_Type>, SLL<Data_Type>>)
    {
        if(node == this->head)
        {
            this->head = this->head->next;
            return;
        }

        SLL* cur = this->head;
        while(cur && cur->next != node)
            cur = cur->next;

        if(!cur)
            return;

        SLL* temp = cur->next;
        cur->next = cur->next->next;
        
        delete temp;
    }
}