// CIS 1202 Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Vehicle.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;

    // Test 1: Default Constructor
    Vehicle vehicle1;
    cout << "\nTesting default constructor:" << endl;
    vehicle1.displayInfo();

    // Test 2: Parameterized Constructor
    Vehicle vehicle2("Toyota", 2020);
    cout << "\nTesting parameterized constructor:" << endl;
    vehicle2.displayInfo();

    // Test 3: Setters and Getters
    Vehicle vehicle3;
    vehicle3.setMfr("Honda");
    vehicle3.setYear(2022);
    cout << "\nTesting setters and getters:" << endl;
    cout << "Manufacturer: " << vehicle3.getMfr() << endl;
    cout << "Year Built: " << vehicle3.getYear() << endl;

    // Display updated info
    vehicle3.displayInfo();

    return 0;
}

