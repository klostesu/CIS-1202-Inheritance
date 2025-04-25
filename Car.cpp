// cpp file for Car.H
#include "Car.h"
#include <iostream>
using namespace std;

// Default constructor
Car::Car() {
    doors = 0;
}

// constructor for parameters
Car::Car(string carMfr, int carYear, int carDoors) : Vehicle(carMfr, carYear) {
    doors = carDoors;
}

// Getter for door
int Car::getDoors() const {
    return doors;
}

// Setter for door
void Car::setDoors(int carDoors) {
    doors = carDoors; 
}


void Car::displayInfo() {
    // Call the base class displayInfo
    Vehicle::displayInfo();

    // Add specific details for Car
    cout << "Number of Doors: " << doors << endl;
}
