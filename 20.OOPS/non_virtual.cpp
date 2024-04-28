#include <iostream>

// Base class (Parent class)
class Animal {
public:
    // Declare a virtual function
    void speak() {
        std::cout << "Animal speaks!" << std::endl;
    }
};

// Derived class 1 (Child class)
class Dog : public Animal {
public:
    // Override the virtual function
    void speak()  
    {
        std::cout << "Dog barks!" << std::endl;
    }
};

// Derived class 2 (Child class)
class Cat : public Animal {
public:
    // Override the virtual function
    void speak()  
    {
        std::cout << "Cat meows!" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->speak(); // Calls the speak() method of Dog class
    animal2->speak(); // Calls the speak() method of Cat class

    delete animal1;
    delete animal2;

    return 0;
}

//RESULT 
/*
Animal speaks!
Animal speaks!
*/