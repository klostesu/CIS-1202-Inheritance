// CIS 1202 Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
    string manufacturer;
    int year;
    int doors;
    int towcap;

    cout << "Vehicle Program" << endl;
    cout << "_______________" << endl;
    
    // Prompt user for manufacturer, year for a vehicle
    cout << "Vehicle:" << endl;
    cout << "Enter manufacturer: ";
    getline(cin, manufacturer); // Use getline to handle spaces
    cout << "Enter year: ";
    cin >> year;

    // Create Vehicle object
    Vehicle userVehicle(manufacturer, year);

    // Display the Vehicle info
    cout << "\nVehicle Information:" << endl;
    userVehicle.displayInfo();

    //---------------------------------------------------------------
    // Prompt user for manufacturer, year and doors for a car
    cout << "\nCar:" << endl;
    cin.ignore();
    cout << "Enter manufacturer: ";
    getline(cin, manufacturer); // Use getline to handle spaces
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter number of doors: ";
    cin >> doors;

    // Create Car object
    Car userCar(manufacturer, year, doors);

    // Display the Car info
    cout << "\nCar Information:" << endl;
    userCar.displayInfo();

    //---------------------------------------------------------------
// Prompt user for manufacturer, year and doors for a truck
    cout << "\nTruck:" << endl;
    cin.ignore();
    cout << "Enter manufacturer: ";
    getline(cin, manufacturer); // Use getline to handle spaces
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter towing capacity: ";
    cin >> towcap;

    // Create Truck object
    Truck userTruck(manufacturer, year, towcap);

    // Display the Truck info
    cout << "\nTruck Information:" << endl;
    userTruck.displayInfo();

    return 0;
}