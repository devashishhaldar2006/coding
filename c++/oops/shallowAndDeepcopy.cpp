#include <iostream>
#include <cstring>
using namespace std;

class ShallowCopyExample {
private:
    char* name;
    int age;

public:
    // Constructor
    ShallowCopyExample(const char* n, int a) {
        age = a;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Constructor called for: " << name << endl;
    }
    
    // Default copy constructor (shallow copy)
    // This is automatically provided by compiler
    /*
    ShallowCopyExample(const ShallowCopyExample& other) {
        name = other.name;  // Only copies pointer address
        age = other.age;
    }
    */
    
    // Destructor
    ~ShallowCopyExample() {
        cout << "Destructor called for: " << name << endl;
        delete[] name;
    }
    
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    
    void changeName(const char* newName) {
        strcpy(name, newName);
    }
};

void demonstrateShallowCopy() {
    cout << "\n=== SHALLOW COPY DEMONSTRATION ===" << endl;
    
    ShallowCopyExample obj1("John", 25);
    obj1.display();
    
    // Shallow copy - only copies pointer address
    ShallowCopyExample obj2 = obj1;
    obj2.display();
    
    cout << "\nChanging name in obj2..." << endl;
    obj2.changeName("Modified");
    
    cout << "After modification:" << endl;
    obj1.display();  // This will also show "Modified" (Problem!)
    obj2.display();
    
    // When objects go out of scope, destructor is called twice
    // for the same memory location - causing runtime error!
}
