#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
private:
    string mfr; // Manufacturer
    int year;   // Year built

public:
    Vehicle(); // Default constructor
    Vehicle(string vMfr, int vYear); // constructor with parameters

    string getMfr() const; // Getter for manufacturer
    int getYear() const;   // Getter for year

    void setMfr(string manufacturer); // Setter for manufacturer
    void setYear(int vYear);          // Setter for year

    virtual void displayInfo();
};

#endif // VEHICLE.H

