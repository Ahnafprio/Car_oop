#include <bits/stdc++.h>
using namespace std;

class Car {
public:
   string name;
   string model;
    int year;

    Car(string name, string model, int year) {
        this->name = name;
        this->model = model;
        this->year = year;
    }

    void displayInfo() {
        cout << year << " " << name << " " << model << endl;
    }
};

class ElectricCar : public Car {
public:
    double batteryCapacity;

    ElectricCar(string name, string model, int year, double batteryCapacity)
        : Car(name, model, year), batteryCapacity(batteryCapacity) {}

    void displayInfo()  {
        Car::displayInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

class GasCar : public Car {
public:
    int fuelEfficiency;

    GasCar(string name, string model, int year, int fuelEfficiency)
        : Car(name, model, year), fuelEfficiency(fuelEfficiency) {}

    void displayInfo()  {
        Car::displayInfo();
        cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
    }
};

int main() {
   string carType;
    string name;
    string model;
    int year;

    cout << "Enter car type (Electric/Gas): ";
    cin >> carType;

   cout << "Enter Name: ";
    cin >> name;

    cout << "Enter model: ";
    cin >> model;

    cout << "Enter year: ";
    cin >> year;

    if (carType == "Electric") {
        double batteryCapacity;
        cout << "Enter battery capacity (kWh): ";
        cin >> batteryCapacity;
        ElectricCar car(name, model, year, batteryCapacity);
        cout << "Car Information:" << endl;
        car.displayInfo();
    } else if (carType == "Gas") {
        int fuelEfficiency;
        cout << "Enter fuel efficiency (MPG): ";
        cin >> fuelEfficiency;
        GasCar car(name, model, year, fuelEfficiency);
        cout << "Car Information:" << endl;
        car.displayInfo();
    } else {
        cout << "Invalid car type." << endl;
    }

    return 0;
}

