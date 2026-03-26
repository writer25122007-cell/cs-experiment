#include <iostream>
using namespace std;

class Person {
public:
    void speak() { cout << "Speaking..." << endl; }
};

class Student : public Person {
public:
    void study() { cout << "Studying..." << endl; }
};

class Athlete {
public:
    void play() { cout << "Playing sports..." << endl; }
};

class ScholarAthlete : public Student, public Athlete {
public:
    void balance() { cout << "Balancing study and sports..." << endl; }
};

int main() {
    ScholarAthlete sa;
    sa.speak();
    sa.study();
    sa.play();
    sa.balance();
    return 0;
}
