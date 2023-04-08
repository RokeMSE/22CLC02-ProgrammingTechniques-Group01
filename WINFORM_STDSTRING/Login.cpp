#include "Login.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(cli::array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    bool imp;

    imp = importClasses();
    if (!imp) goto _export;
    imp = importStudents();
    if (!imp) goto _export;
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(i)));


    imp = importStaffs();
    if (!imp) goto _export;


    imp = importSchoolYears();
    if (!imp) goto _export;
    else goto _xyz;

_export:
    MessageBox::Show("Error in database!");
    // call `export` functions
    exportSchoolYears();
    exportClasses();
    exportStudents();
    exportStaffs();
    return;
_xyz:
    CMS::Login form;
    Application::Run(% form);
}
// 