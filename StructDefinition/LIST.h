#pragma once

#define uint unsigned int
#define ushort unsigned short
#include "USER.h"
#include "COURSE.h"

template <typename T> 
struct DLL {
    // declare a DLL:   DLL<datatype> *name;
    T data;
    DLL* prev = nullptr, *next = nullptr;
    // void view ();
};

template <typename T>
struct LIST {
    DLL<T>* head, *tail;
    void insert ();
    void remove (DLL<T>* node);
};