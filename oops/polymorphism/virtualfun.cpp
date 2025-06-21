#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound()  {  
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound()  { 
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Pointer to base class
    Animal* animalPtr;

    // Pointing to Dog object
    animalPtr = new Dog();
    animalPtr->sound();  // Calls Dog's sound()

    // Pointing to Cat object
    animalPtr = new Cat();
    animalPtr->sound();  // Calls Cat's sound()

    return 0;
}
