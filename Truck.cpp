// cpp file for Truck.H
#include "Truck.h"
#include <iostream>
using namespace std;

// Default constructor
Truck::Truck() {
    towcap = 0;
}

// constructor for parameters
Truck::Truck(string truckMfr, int truckYear, int truckTowcap) : Vehicle(truckMfr, truckYear) {
    towcap = truckTowcap;
}


// Getter for door
int Truck::getTowcap() const {
    return towcap;
}

// Setter for door
void Truck::setTowcap(int truckTowcap) {
    towcap = truckTowcap;
}


void Truck::displayInfo() {
    // Call the base class displayInfo
    Vehicle::displayInfo();

    // Add specific details for Car
    cout << "Towing Capacity: " << towcap << endl;
}