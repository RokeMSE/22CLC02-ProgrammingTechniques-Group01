#include "header.h"
#include "mainForm.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(cli::array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    bool imp;
    //int i = 0;
    imp = importClasses();
    if (!imp) goto _export;
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(i)));
    //i++;
    imp = importStudents();
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(L_Student.head->data->firstname));
    if (!imp) goto _export;
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(i)));
    //i++;

    imp = importStaffs();
    if (!imp) goto _export;
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(i)));

    imp = importSchoolYears();
    if (!imp) goto _export;
    goto _starting;

_export:
    MessageBox::Show("Error in database!");
    // call `export` functions
    deleteFiles();
    exportSchoolYears();
    exportClasses();
    exportStudents();
    exportStaffs();
    return;
_starting:
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(L_SchoolYear.tail->data->begin)));
    //if (L_SchoolYear.head->data->sem1)   MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(L_SchoolYear.head->data->sem1->No)));
    CMS::mainForm form;
    Application::Run(% form);
}
// 