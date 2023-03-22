/*
    CHANGE CLASS::student to CLASS::student's'
    
    DELETE STUDENT::yearIn

    ADD a prototype to `enum.h`     WeekDay convertToWeekday ( char* str);
                                    this function is mentioned on the line 28-32
*/

// task 4
    /// @brief 
    /// @param studentInClass is CLASS::students
    /// @param filename 
    /// @return 1   : if everything is OK
    ///         0   : if file cannot be opened
    bool input (LIST<DLL, STUDENT> studentInClass, std::string filename);


//task 8
    /// @brief 
    /// @param studentInCourse is COURSE::students
    /// @param filename 
    /// @return 1   : if everything is OK
    ///         0   : if file cannot be opened
    bool input (LIST<DLL, COURSE> studentInCourse, std::string filename);


/// @brief get the string that contain the and return the corresponding WeekDay
/// @param str  the input string
///             this param could be changed later due to the GUI
/// @return the corresponding WeekDay value. For example: str == "MON" => return MON
WeekDay convertToWeekday ( char* str);

// as same as the above one `WeekDay convertToWeekday ( char* str);`
Session convertToSession ( char* str);

     
/// @brief  export LIST<type_list, Data_Type> to a file BEFORE turning off the system
///         the 1st line of the output file must contain all the name of fields which are gonna be stored in this file
/// @param list name of the list that needs to be stored in a file
/// @param filename
/// @return 1   : if everything is OK
///         0   : if file cannot be opened
    bool output (LIST<type_list, Data_Type> list, std::string filename);
    // there will be many output functions for many DataType


/// @brief  import LIST<type_list, Data_Type> from a a file (which we export our data to) RIGHT AFTER the system is opened
///         remember to skip the first line of the input file (the first line would contain all the titles)
/// @param list name of the list that we are working on
/// @param filename 
/// @return 1   : if everything is OK
///         0   : if file cannot be opened
    bool input (LIST<type_list, Data_Type> list, std::string filename);
    // there will be many input functions for many DataType


/// @brief dealloc the linked list (SLL and DLL)
/// @tparam Data_Type : DataType of the list
/// @param list 
    template <typename Data_Type>
    void dealloc (LIST<DLL, Data_Type> &list);

    template <typename Data_Type>
    void dealloc (LIST<SLL, Data_Type> &list);

