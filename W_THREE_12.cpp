#include <iostream>

using namespace std;

class Truck; // forward declaration

class Car {
private:

    int passengerCount;
    int speed;

public:

    Car(int passengers, int spd) {
        passengerCount = passengers;
        speed = spd;
    }

    friend int compareSpeed(Car c, Truck t);
};

class Truck {
    int weight;
    int speed;

public:
    Truck(int w, int spd) {
        weight = w;
        speed = spd;
    }

    friend int compareSpeed(Car c, Truck t);
};

int compareSpeed(Car c, Truck t) {
    return c.speed - t.speed;
}

int main() {

    int result;

    Car car1(6, 55), car2(2, 120);
    Truck truck1(10000, 55), truck2(20000, 72);

    cout << "Comparing car1 and truck1:\n";
    result = compareSpeed(car1, truck1);
    if (result < 0)
        cout << "Truck is faster.\n";
    else if (result == 0)
        cout << "Car and truck have the same speed.\n";
    else
        cout << "Car is faster.\n";

    cout << "Comparing car2 and truck2:\n";
    result = compareSpeed(car2, truck2);
    if (result < 0)
        cout << "Truck is faster.\n";
    else if (result == 0)
        cout << "Car and truck have the same speed.\n";
    else
        cout << "Car is faster.\n";

    return 0;
}
