#pragma once

#include "../header.h"

template <typename Data_Type>
Data_Type* authenticateUSER (GROUP1::LIST<GROUP1::DLL, Data_Type*> list, GROUP1::USER* val);
    // username must not be duplicated
    // return value:    USER*  :   return USER* that points to the corresponding user; if there is no matching user in the list, return nullptr 


