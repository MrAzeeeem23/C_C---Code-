/*
Yes, that's correct. The destructor of an object is automatically called when the object goes out of scope. This means that when the scope in which the object was defined ends, whether it's the end of a function, the end of a block, or the end of the program, the destructor of that object is invoked.
*/


#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called\n";
    }

    ~MyClass() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    std::cout << "Entering main\n";
    
    {
        MyClass obj; // Constructor called
    } // Destructor called

    std::cout << "Exiting main\n";
    return 0;
} // main() exits

//_________NOTE_____________
/*
Constructors:

Constructors are special member functions of a class that are automatically called when an object of that class is created.
The primary purpose of a constructor is to initialize the object's data members and prepare it for use.
Constructors can be overloaded, meaning you can define multiple constructors with different parameter lists to initialize objects in various ways.

Destructors:

Destructors are also special member functions of a class, but they are called when an object is destroyed, typically when it goes out of scope or when delete is explicitly called on a dynamically allocated object.
The primary purpose of a destructor is to release resources that the object may have acquired during its lifetime, such as memory allocated on the heap or handles to external resources like files or network connections.
Unlike constructors, destructors do not take any parameters and cannot be overloaded.
*/