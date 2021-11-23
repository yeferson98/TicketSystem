#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace TicketModel {
	public ref class Worker
	{
	public:
		property String^ Dni;
		property String^ Name;
		property String^ Address;
		property double Salary;
		property String^ Password;
	};
	public ref class Passenger
	{
	public:
		property String^ Dni;
		property String^ Name;
		property DateTime Birthdate;
	};
	public ref class Product
	{
	public:
		property String^ Code;
		property String^ Name;
		property double Price;
		property int Stock;
		property String^ Description;
	};

	public ref class Vendor: public Worker
	{
	public:
		property String^ Email;
		property String^ StudyCenter;
	};

	public ref class Driver : public Worker
	{
	public:
		property int^ YearExprience;
		property String^ Phone;
	};
	public ref class Admin:public  Worker
	{
	public:
		property DateTime DateOfBirth;
		property String^ Phone;
	};

	public ref class Trip
	{
	public:
		property String^ Origin;
		property String^ Destiny;
		property DateTime TravelDate;
		property DateTime TravelTime;
		property Driver^ Driver;
		property int  NumberMaxSeating;
	};

	public ref class DetailProduct
	{
	public:
		property int Quantity;
		property double Subtotal;
		property Product^ product;
	};

	public ref class Ticket
	{
	public:
		property int Code;
		property int SeatNumber;
		property DateTime PurchaseDate;
		property double Total;
		property String^ State;
		property Passenger^ passanger;
		property Vendor^ vendor;
		property Trip^ trip;
		property  List<DetailProduct^>^ ListProducts;
	};
}
