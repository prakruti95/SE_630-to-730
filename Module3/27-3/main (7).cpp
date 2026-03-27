#include <iostream>
using namespace std;

class Animal 
{
public:
     virtual void makeSound() { // Declared as virtual in the base class
        cout << "Animal makes a sound" << endl;
    }
  
};

class Dog : public Animal {
public:
    void makeSound() override  { // Using the override specifier is a best practice
        cout << "Dog barks" << endl;
    }
   
};

int main() 
{
    Animal* animalPtr;
    Dog dogObj;

    animalPtr = &dogObj;
    
    // Calls the Derived class's function because makeSound() is virtual
    animalPtr->makeSound(); 

    return 0;
}
