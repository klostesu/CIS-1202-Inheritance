#ifndef VEHICLE.H
#define VEHICLE.H
#include <string>
using namespace std;

// Members
class Vehicle
{
private:
	string mfr; // manufacturor
	int year;

public:
	// Default constructor
	Vehicle()
	{
		mfr = "";
		year = 0;
	}

	// Constructor
	Vehicle(string vehicleMfr, int vehicleYear)
	{
		mfr = vehicleMfr;
		year = vehicleYear;
	}

	// Accessors
	string getMfr() const
	{
		return mfr;
	}

	int getYear() const
	{
		return year;
	}

	// Pure virtual function - abstract class
	virtual void displayInfo();

};

#endif // VEHICLE.H

