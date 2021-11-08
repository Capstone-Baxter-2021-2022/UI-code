#include "dash.h"
#include "test1.h"
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    eztest::dash form;
    Application::Run(% form);
}