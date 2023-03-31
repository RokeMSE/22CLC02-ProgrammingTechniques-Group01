void exportStudentsInACourse(COURSE c) {
    ofstream ofs;
    string filename = "CSV/SemInSchoolYear/CourseInSemester/StudentsInCourse/";
    filename += c.ID + ".csv";
    ofs.open(filename);

    ofs << "StudentID,," << endl;       // this is title line
    DLL<STUDENT*> *cur = c.students.head;
    if ( !cur ) return;     // will not do anything if there is no student in list of student in the course;
    while (cur != nullptr)
    {
        ofs << cur->data->studentID << ",," << endl;
        DLL<STUDENT*> *tmp = cur;
        cur = cur -> next;
        delete tmp;
    }
    delete cur;

    ofs.close();
}