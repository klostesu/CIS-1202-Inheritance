#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Car : public Vehicle {
private:
    int doors; // Number of doors

public:
    Car(); // Default constructor
public:
    Car(string carMfr, int carYear, int carDoors);
// constructor with parameters
    int getDoors() const; // Getter for doors
    void setDoors(int carDoors); // Setter for doors

    virtual void displayInfo(); // Virtual function
};

#endif
