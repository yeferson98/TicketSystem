#include "PassengerForm.h"
using namespace  System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicketView::PassengerForm form;
	Application::Run(% form);
}

