#pragma once
#ifndef _Queue_h
#define _Queue_h
#include "../header.h"
    //#include "LIST.h"

    template <typename T>
    struct Queue {
        SLL<T>* head, *tail;

        // member functions
        void dequeue ();
        void enqueue ();
    };

#endif