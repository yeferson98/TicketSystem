#include "PassengerViewForm.h"
using namespace  System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicketViewForms::PassengerViewForm form;
	Application::Run(% form);
}

