/// @brief inside the function, user will input year_start and year_end
/// @param list [ref] LIST of SCHOOLYEAR [[SLL and DLL are being considered]]
/// @return does not return anything
    int SCHOOLYEAR::add (LIST<SLL, SCHOOLYEAR> &list);


// // new name :   `addSem`
/// @brief  add a new semester to a particular schoolyear is LSchoolYear if there is a spare slot; otherwise do not do anything
///         users will choose a school year in which they want to add a new semester
///         if SCHOOLYEAR::sem1 == nullptr      : newsem = SCHOOLYEAR::sem1
///         else if SCHOOLYEAR::sem2 == nullptr : newsem = SCHOOLYEAR::sem2
///         else if SCHOOLYEAR::sem3 == nullptr : newsem = SCHOOLYEAR::sem3
///         else                                : this SCHOOLYEAR is full of semesters, choose another one or EXIT
/// @param LSchoolYear [ref] LIST of SCHOOLYEAR [[SLL and DLL are being considered]]
/// @return does not return anything
    void SEMESTER::add (LIST<SLL, SCHOOLYEAR> &LSchoolYear);


/// @brief use function void COURSE::add (); to add a course to a list of courses SEMESTER::courses
    void SEMESTER::addCourse ();