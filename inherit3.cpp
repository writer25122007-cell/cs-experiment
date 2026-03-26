#include <iostream>
using namespace std;

class LivingBeing {
public:
    void breathe() { cout << "Breathing..." << endl; }
};

class Animal : public LivingBeing {
public:
    void move() { cout << "Moving..." << endl; }
};

class Bird : public Animal {
public:
    void fly() { cout << "Flying..." << endl; }
};

int main() {
    Bird b;
    b.breathe();
    b.move();
    b.fly();
    return 0;
}
