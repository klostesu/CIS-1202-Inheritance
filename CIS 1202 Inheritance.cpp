// CIS 1202 Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Vehicle.h"
#include "Car.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;

    // Test 1: Default Constructor for Vehicle
    Vehicle vehicle1;
    cout << "\nTesting default constructor for Vehicle:" << endl;
    vehicle1.displayInfo();

    // Test 2: Parameterized Constructor for Vehicle
    Vehicle vehicle2("Toyota", 2020);
    cout << "\nTesting parameterized constructor for Vehicle:" << endl;
    vehicle2.displayInfo();

    // Test 3: Setters and Getters for Vehicle
    Vehicle vehicle3;
    vehicle3.setMfr("Honda");
    vehicle3.setYear(2022);
    cout << "\nTesting setters and getters for Vehicle:" << endl;
    cout << "Manufacturer: " << vehicle3.getMfr() << endl;
    cout << "Year Built: " << vehicle3.getYear() << endl;
    vehicle3.displayInfo();

    //Test 4: Parameterized Constructor for Car
    Car myCar("Honda", 2022, 4);
    cout << "\nTesting Car displayInfo:" << endl;
    myCar.displayInfo();

    return 0;
}