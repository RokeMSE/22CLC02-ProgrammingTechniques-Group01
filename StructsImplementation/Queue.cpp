#pragma once

    template <typename T>
    struct Queue {
        SLL<T>* head, *tail;

        // member functions
        void dequeue ();
        void enqueue ();
    };
