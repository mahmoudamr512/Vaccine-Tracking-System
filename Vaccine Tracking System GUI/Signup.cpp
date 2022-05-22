#include "Signup.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


void Main(array<String^>^ args)

{

    Application::EnableVisualStyles(); 
    Application::SetCompatibleTextRenderingDefault(false); 
    VaccineTrackingSystemGUI::Signup form; 
    Application::Run(% form);

}