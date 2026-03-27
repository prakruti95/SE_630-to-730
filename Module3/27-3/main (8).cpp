#include <iostream>
using namespace std;

class Animal 
{
public:
    virtual void makeSound() { // Declared as virtual in the base class
        cout << "Animal makes a sound" << endl;
    }
    // Virtual destructor is important to prevent memory leaks in polymorphic scenarios
    virtual ~Animal() {
        cout << "Animal destructor called" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override { // Using the override specifier is a best practice
        cout << "Dog barks" << endl;
    }
    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dogObj;

    animalPtr = &dogObj;
    
    // Calls the Derived class's function because makeSound() is virtual
    animalPtr->makeSound(); 

    // Proper cleanup of derived object through base pointer due to virtual destructor
    delete animalPtr; 

    return 0;
}
