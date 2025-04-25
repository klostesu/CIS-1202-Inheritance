#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Truck : public Vehicle {
private:
    int towcap; // Towing capacity 

public:
    Truck(); // Default constructor
public:
    Truck(string truckMfr, int truckYear, int truckTowcap);
    // constructor with parameters
    int getTowcap() const; // Getter for doors
    void setTowcap(int truckTowcap); // Setter for doors

    virtual void displayInfo(); // Virtual function for displayInfo
};

#endif
