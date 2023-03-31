bool importStudentsInACourse(std::string filename, COURSE c) {
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    
    string str;
    getline(ifs,str);   /// skip the title line;

    while (!ifs.eof())
    {
        getline(ifs,str);   /// (str) will have format: "[StudentID],,"
        str.erase(str.length()-2,2);    /// delete 2 last chars of (str): ",,"  => (str) = [StudentID]

        /// find this student by StudentID in L_Student;
        DLL<STUDENT*> *cur = L_Student.head;
        while (cur != nullptr && cur->data->studentID != str)
            cur = cur->next;

        /// add this student into the list of student in the course
        c.add1Student(cur->data);
    }
    ifs.close();
    return true;
}