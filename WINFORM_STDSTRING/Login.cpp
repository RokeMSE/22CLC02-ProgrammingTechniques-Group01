#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(cli::array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
//    bool imp;
//    imp = importClasses();
//    if (imp == 0) goto _export;
//
//    imp = importStudents();
//    if (imp == 0) goto _export;
//
//    imp = importStaffs();
//    if (imp == 0) goto _export;
//
//    imp = importSchoolYears();
//    if (imp == 0) goto _export;
//
//_export:
//    MessageBox::Show("There is an error opening .csv file!");
//    // call `export` functions
    CMS::Login form;
    Application::Run(% form);
}
// 