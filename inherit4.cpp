#include <iostream>
using namespace std;

class Shape {
public:
    void draw() { cout << "Drawing shape..." << endl; }
};

class Circle : public Shape {
public:
    void area() { cout << "Circle area = πr^2" << endl; }
};

class Rectangle : public Shape {
public:
    void area() { cout << "Rectangle area = l*b" << endl; }
};

int main() {
    Circle c;
    Rectangle r;
    c.draw();
    c.area();
    r.draw();
    r.area();
    return 0;
}
