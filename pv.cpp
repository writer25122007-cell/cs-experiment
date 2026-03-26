#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; // pure virtual
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->sound();
    delete a;
    return 0;
}
