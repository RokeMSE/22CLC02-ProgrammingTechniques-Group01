bool COURSE::addStudents(string filename)
{
    ifstream ifs;
    ifs.open(filename);
    if (ifs.is_open() == false)
        return false;
    string str;
    getline(ifs,str);       ///next the first line

    //  The format of file csv: No,Student ID,First Name,Last Name,Gender,Date Of Birth,Social ID
    while (!ifs.eof())
    {
        STUDENT stu;

        getline(ifs,str,',');       //No
        stu.No = stoi(str);

        getline(ifs,str,',');       //Student ID
        stu.studentID = str;

        getline(ifs,str,',');       //First Name
        stu.firstname = str;         

        getline(ifs,str,',');       //Last Name
        stu.lastname = str;

        getline(ifs,str,',');       //Gender
        if (str == "Nam")   stu.gender = 0; //nam
        else    stu.gender = 1; //nu

        getline(ifs,str,',');       //Date of Birth
        stu.DoB = getDate(str);

        getline(ifs,str);           //Social ID (at the last => getline)
        stu.socialID = str;

        add1Student(&stu);       // Add students to the list of students in the course
    }

    ifs.close();
    return true;
}