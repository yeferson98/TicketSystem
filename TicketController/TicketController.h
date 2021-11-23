#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace TicketModel;

namespace TicketController {
	public ref class PassangerDB
	{
	public:
		 List<Passenger^>^ ListPassanger= gcnew List<Passenger^>();
	};
	public ref class VendorDB
	{
	public:
		List<Vendor^>^ ListVendor = gcnew List<Vendor^>();
	};
	public ref class DriverDB
	{
	public:
		List<Driver^>^ ListDrivers = gcnew List<Driver^>();
	};
	public ref class AdminDB
	{
	public:
		List<Admin^>^ ListAdmin = gcnew List<Admin^>();
	};
	public ref class TicketManager
	{
	private:
		static PassangerDB^ passangerDB=gcnew PassangerDB();
		static VendorDB^ vendorDB = gcnew VendorDB();
		static DriverDB^ driverDB = gcnew DriverDB();
		static AdminDB^ adminDB = gcnew AdminDB();
	public:
		static  void AddPassenger(Passenger^);
		static  void UpdatePassenger(Passenger^);
		static  void DeletePassenger(String^ dni);
		static  Passenger^ SearchPassenger(String^ dni);
		static   List<Passenger^>^ ListPassenger ();

		static  void AddDriver(Driver^);
		static  void UpdateDriver(Driver^);
		static  void DeleteDriver(String^ dni);
		static  Driver^ SearchDriver(String^ dni);
		static   List<Driver^>^ ListDriver();

		static  void AddVendor(Vendor^);
		static  void UpdateVendor(Vendor^);
		static  void DeleteVendor(String^ dni);
		static  Vendor^ SearchVendor(String^ dni);
		static   List<Vendor^>^ ListVendor();

		static  void AddAdmin(Admin^);
		static  void UpdateAdmin(Admin^);
		static  void DeleteAdmin(String^ dni);
		static  Admin^ SearchAdmin(String^ dni);
		static   List<Admin^>^ ListAdmin();
	};
}
