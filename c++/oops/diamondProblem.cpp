#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

// Virtual inheritance solution
class Mammal : virtual public Animal {
public:
    void breathe() {
        cout << "Mammal is breathing" << endl;
    }
};

class WingedAnimal : virtual public Animal {
public:
    void fly() {
        cout << "Winged animal is flying" << endl;
    }
};

// Derived class inheriting from multiple base classes
class Bat : public Mammal, public WingedAnimal {
public:
    void navigate() {
        cout << "Bat is using echolocation" << endl;
    }
};

int main() {
    Bat bat;
    bat.eat();       // No ambiguity due to virtual inheritance
    bat.breathe();   // From Mammal
    bat.fly();       // From WingedAnimal  
    bat.navigate();  // From Bat itself
    
    return 0;
}
