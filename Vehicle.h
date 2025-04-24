#ifdef AUTOMOBILE.H
#define AUTOMOBILE.H
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
	Vehicle(string vehicleMfr, int autoYear)
	{
		mfr = autoMfr;
		year = autoYear;
	}

	// Accessors
	string get Mfr() const
	{
		return mfr;
	}

	int getYear() const
	{
		return year;
	}

	// Pure virtual function - abstract class
	virtual void displayInfo() = 0;

};

#endif // AUTOMOBILE.H

