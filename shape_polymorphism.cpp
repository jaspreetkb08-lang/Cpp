#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class 1
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class 2
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape* s;     // base class pointer

    Rectangle r;
    Circle c;

    s = &r;       // pointing to Rectangle object
    s->draw();    // calls Rectangle's draw()

    s = &c;       // pointing to Circle object
    s->draw();    // calls Circle's draw()

    return 0;
}
