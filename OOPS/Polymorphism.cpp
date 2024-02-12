#include <iostream>

class Shape {
public:
    // if a function or method does not have body it is called virtual function.
    virtual void draw() const = 0; // Pure virtual function for enforced implementation
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle...\n";
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square...\n";
    }
};

void drawAll(const Shape* shapes[], int numShapes) {
    for (int i = 0; i < numShapes; ++i) {
        shapes[i]->draw(); // Polymorphic call based on actual object type
    }
}

int main() {
    Circle circle;
    Square square;
    Shape* shapes[] = {&circle, &square};

    drawAll(shapes, 2);
    return 0;
}
