#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //importClasses();
    //importStudents();
    CMS::Login form;
    Application::Run(% form);
}
// 