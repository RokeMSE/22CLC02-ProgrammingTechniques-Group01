#pragma once

    template <typename T>
    struct Stack {
        SLL<T>* stack;

        // member functions
        void push ();
        void pop ();
    };
