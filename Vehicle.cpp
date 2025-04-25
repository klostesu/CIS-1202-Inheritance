// cpp file for Vehicle.H
#include "Vehicle.h"
#include <iostream>
using namespace std;

// Default constructor
Vehicle::Vehicle() {
    mfr = "";
    year = 0;
}

//  constructor - parameters
Vehicle::Vehicle(string vMfr, int vYear) {
    mfr = vMfr;
    year = vYear; // Updated
}

// Getter for manufacturer
string Vehicle::getMfr() const {
    return mfr;
}

// Getter for year
int Vehicle::getYear() const {
    return year;
}

// Setter for manufacturer
void Vehicle::setMfr(string manufacturer) {
    mfr = manufacturer;
}

// Setter for year
void Vehicle::setYear(int vYear) {
    year = vYear; // Updated
}

// Virtual function implementation - for displayInfo
void Vehicle::displayInfo() {
    cout << "Vehicle Information";
    cout << "Manufacturer: " << mfr << "\nYear Built: " << year << endl;
    cout << "___________________" << endl;
}