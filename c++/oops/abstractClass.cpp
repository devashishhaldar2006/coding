#include<iostream>
using namespace std;
class Vehicle{
private:
    int a_ka_private;
public:
    int a_ka_public;
    int engineSize;
    int lights;
    //abstract class-> these are pure virtual functions ////base me decleration and child me definition
    virtual void calculateMileage()=0;
    virtual void refuel()=0;
};

class Bike : public Vehicle{
public:
    int b_ka_public;
    int handleSize;
    void calculateMileage(){
        cout<<"Bike ka show"<<endl;
    }
    void refuel(){
        cout<<"refuel"<<endl;
    }
};

int main(){
    // Vehicle v;
    // v.calculateMileage();
}