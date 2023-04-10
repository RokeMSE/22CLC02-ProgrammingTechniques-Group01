#include "UpdateResult.h"
#include "header.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(cli::array<System::String^>^ args) {
    //MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(L_SchoolYear.tail->data->begin)));
    //if (L_SchoolYear.head->data->sem1)   MessageBox::Show(msclr::interop::marshal_as<System::String^>(std::to_string(L_SchoolYear.head->data->sem1->No)));
    CMS::UpdateResult form;
    Application::Run(% form);
}