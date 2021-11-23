#include "pch.h"

#include "TicketController.h"

void TicketController::TicketManager::AddPassenger(Passenger^ passenger)
{
	passangerDB->ListPassanger->Add(passenger);
}

void TicketController::TicketManager::UpdatePassenger(Passenger^ passenger)
{
	for (int i = 0; i<passangerDB->ListPassanger->Count ; i++) {
		if (passangerDB->ListPassanger[i]->Dni == passenger->Dni) {
			passangerDB->ListPassanger[i]->Name = passenger->Name;
			passangerDB->ListPassanger[i]->Birthdate = passenger->Birthdate;
			return;
		}
	}
}

void TicketController::TicketManager::DeletePassenger(String^ dni)
{
	for (int i = 0; i < passangerDB->ListPassanger->Count; i++) {
		if (passangerDB->ListPassanger[i]->Dni == dni) {
			passangerDB->ListPassanger->RemoveAt(i);
			return;
		}
	}
}

Passenger^ TicketController::TicketManager::SearchPassenger(String^ dni)
{
	for (int i = 0; i < passangerDB->ListPassanger->Count; i++) {
		if (passangerDB->ListPassanger[i]->Dni == dni) {
			return passangerDB->ListPassanger[i];
		}
	}
}

List<Passenger^>^ TicketController::TicketManager::ListPassenger()
{
	return passangerDB->ListPassanger;
}

void TicketController::TicketManager::AddDriver(Driver^ driver)
{
	driverDB->ListDrivers->Add(driver);
}

void TicketController::TicketManager::UpdateDriver(Driver^ driver)
{
	for (int i = 0; i < driverDB->ListDrivers->Count; i++) {
		if (driverDB->ListDrivers[i]->Dni == driver->Dni) {
			driverDB->ListDrivers[i]->Dni = driver->Dni;
			driverDB->ListDrivers[i]->Name = driver->Name;
			driverDB->ListDrivers[i]->Address = driver->Address;
			driverDB->ListDrivers[i]->Password = driver->Password;
			driverDB->ListDrivers[i]->Salary = driver->Salary;
			driverDB->ListDrivers[i]->YearExprience = driver->YearExprience;
			driverDB->ListDrivers[i]->Phone = driver->Phone;
			return;
		}
	}
}

void TicketController::TicketManager::DeleteDriver(String^ dni)
{
	for (int i = 0; i < driverDB->ListDrivers->Count; i++) {
		if (driverDB->ListDrivers[i]->Dni == dni) {
			driverDB->ListDrivers->RemoveAt(i);
			return;
		}
	}
}

Driver^ TicketController::TicketManager::SearchDriver(String^ dni)
{
	for (int i = 0; i < driverDB->ListDrivers->Count; i++) {
		if (driverDB->ListDrivers[i]->Dni == dni) {
		  return  	driverDB->ListDrivers[i];
		}
	}
}

List<Driver^>^ TicketController::TicketManager::ListDriver()
{
	return driverDB->ListDrivers;
}

void TicketController::TicketManager::AddVendor(Vendor^ vendor)
{
	vendorDB->ListVendor->Add(vendor);
}

void TicketController::TicketManager::UpdateVendor(Vendor^ vendor)
{
	for (int i = 0; i < vendorDB->ListVendor->Count; i++) {
		if (vendorDB->ListVendor[i]->Dni == vendor->Dni) {
			vendorDB->ListVendor[i]->Dni = vendor->Dni;
			vendorDB->ListVendor[i]->Name = vendor->Name;
			vendorDB->ListVendor[i]->Address = vendor->Address;
			vendorDB->ListVendor[i]->Password = vendor->Password;
			vendorDB->ListVendor[i]->Salary = vendor->Salary;
			vendorDB->ListVendor[i]->Email = vendor->Email;
			vendorDB->ListVendor[i]->StudyCenter = vendor->StudyCenter;
			return;
		}
	}
}

void TicketController::TicketManager::DeleteVendor(String^ dni)
{
	for (int i = 0; i < vendorDB->ListVendor->Count; i++) {
		if (vendorDB->ListVendor[i]->Dni == dni) {
			vendorDB->ListVendor->RemoveAt(i);
			return;
		}
	}
}

Vendor^ TicketController::TicketManager::SearchVendor(String^ dni)
{
	for (int i = 0; i < vendorDB->ListVendor->Count; i++) {
		if (vendorDB->ListVendor[i]->Dni == dni) {
			return 	vendorDB->ListVendor[i];
		}
	}
}

List<Vendor^>^ TicketController::TicketManager::ListVendor()
{
	return vendorDB->ListVendor;
}

void TicketController::TicketManager::AddAdmin(Admin^ admin)
{
	adminDB->ListAdmin->Add(admin);
}

void TicketController::TicketManager::UpdateAdmin(Admin^ admin)
{
	for (int i = 0; i < adminDB->ListAdmin->Count; i++) {
		if (adminDB->ListAdmin[i]->Dni == admin->Dni) {
			adminDB->ListAdmin[i]->Dni = admin->Dni;
			adminDB->ListAdmin[i]->Name = admin->Name;
			adminDB->ListAdmin[i]->Address = admin->Address;
			adminDB->ListAdmin[i]->Password = admin->Password;
			adminDB->ListAdmin[i]->Salary = admin->Salary;
			adminDB->ListAdmin[i]->DateOfBirth = admin->DateOfBirth;
			adminDB->ListAdmin[i]->Phone = admin->Phone;
			return;
		}
	}
}

void TicketController::TicketManager::DeleteAdmin(String^ dni)
{
	for (int i = 0; i < adminDB->ListAdmin->Count; i++) {
		if (adminDB->ListAdmin[i]->Dni == dni) {
			adminDB->ListAdmin->RemoveAt(i);
			return;
		}
	}
}

Admin^ TicketController::TicketManager::SearchAdmin(String^ dni)
{
	for (int i = 0; i < adminDB->ListAdmin->Count; i++) {
		if (adminDB->ListAdmin[i]->Dni == dni) {
			return adminDB->ListAdmin[i];
		}
	}
}
List<Admin^>^ TicketController::TicketManager::ListAdmin()
{
	return adminDB->ListAdmin;
}

