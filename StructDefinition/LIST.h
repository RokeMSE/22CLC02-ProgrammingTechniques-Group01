#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "USER.h"
#include "COURSE.h"

template <typename T> 
struct SLL {
    //singly linked list
    T data;
    SLL* next = nullptr;

    void insert ();
    void remove ();
};

template <typename T> 
struct DLL {
    // declare a DLL:   DLL<datatype> *name;
    T data;
    DLL* prev = nullptr, *next = nullptr;
    void insert ();
    void remove ();
    // void view ();
};

template <typename T1, typename T2>
struct LIST {
    T1<T2>* head, *tail;
};