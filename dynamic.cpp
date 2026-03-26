#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void run() {
        cout << "Vehicle is running" << endl;
    }
};

class Car : public Vehicle {
public:
    void run() override {
        cout << "Car is running" << endl;
    }
};

int main() {
    Vehicle* v = new Car();
    v->run(); // Runtime decision → Car's run()
    delete v;
    return 0;
}
