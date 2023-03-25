#include "COURSE.h"
#include "LIST.h"

void COURSE::remove1Student(STUDENT student);       
/// remove1Student:  Remove a student from the course, includes:
///     student:  is student needed to remove from the course
/// This function does not return anything


////////////////////////////////////////////////////////////
///         2 functions is put in "LIST.h"               ///
////////////////////////////////////////////////////////////
template <typename Data_Type>
void add_val(LIST<DLL,Data_Type> &list, Data_Type val);
    /// This function is: add 1 val in to the list:
    ///     (val): the val need to add
    ///     (list): the list that (val) is added to
    /// This function doesn't return anything.

template <typename Data_Type>
void remove_val(LIST<DLL,Data_Type> &list, Data_Type val);
    /// This function is: remove 1 val from the list:
    ///     (val): the val need to remove
    ///     (list): the list that (val) is removed
    /// This function doesn't return anything.