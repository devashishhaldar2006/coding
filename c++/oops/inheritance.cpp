#include <iostream>
#include <string>
using namespace std;

//private -> can't be accessed, can't be inherited
//protected-> cant't be accessed, can be inherited
//public-> can be accessed, can be inherited
class Vehicle{
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
    Vehicle(){
        cout<<"Vehicle constructor called"<<endl;
    }
};
class Car : public Vehicle{//Car inherits vehicle
public:
    int steeringSize;
};
class Bike : public Vehicle{//derived class, child class
public:
    
    int handleSize;
    Bike(){
        cout<<"Bike ka constructor called"<<endl;
    }

};
int main() {
    Bike honda;
    honda.handleSize=5;
    honda.tyreSize=10;
    cout<<honda.tyreSize<<endl;
}
