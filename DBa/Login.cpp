#include "Login.h"
#include <vector>
using std::vector;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DBa::Login form;
	Application::Run(% form);
}