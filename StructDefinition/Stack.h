#pragma once
#ifndef _Stack_h
#define _Stack_h

    #include "LIST.h"
    
    template <typename T>
    struct Stack {
        SLL<T>* stack;

        // member functions
        void push ();
        void pop ()
    };

#endif