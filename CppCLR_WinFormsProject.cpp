#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "ConsultaMascota_forms.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew PetSalut::ConsultaMascota_forms);
  return 0;
}