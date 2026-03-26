#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Circle area = πr^2" << endl;
    }
};

int main() {
    Shape* s = new Circle();
    s->area();
    delete s;
    return 0;
}
