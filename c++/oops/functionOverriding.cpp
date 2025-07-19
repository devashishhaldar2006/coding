#include <iostream>
using namespace std;
//we also use pointers for the same and pointers cam be use of parent class and child address can be stored into them
// Base class
class Animal {
public:
    void makeSound() {
        cout << "The animal makes a generic sound" << endl;
    }
    
    void eat() {
        cout << "Animal is eating" << endl;
    }
    
    void sleep() {
        cout << "Animal is sleeping" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Function hiding - this hides the base class makeSound()
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
    
    // Function hiding - this hides the base class eat()
    void eat() {
        cout << "Dog is eating dog food" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
    
    void eat() {
        cout << "Cat is eating fish" << endl;
    }
};

int main() {
    cout << "=== Direct Object Calls ===\n";
    
    Animal animal;
    Dog dog;
    Cat cat;
    
    // Direct calls - each calls their own version
    animal.makeSound(); // Animal's version
    dog.makeSound();    // Dog's version (hides Animal's version)
    cat.makeSound();    // Cat's version (hides Animal's version)
    
    cout << "\n=== Using Scope Resolution Operator ===\n";
    
    // Using scope resolution to explicitly call base class methods
    dog.Animal::makeSound(); // Explicitly calls Animal's version
    dog.makeSound();         // Calls Dog's version
    
    cat.Animal::eat();       // Explicitly calls Animal's version
    cat.eat();               // Calls Cat's version
    
    return 0;
}
