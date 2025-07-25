#include<iostream>
using namespace std;
class Vehicle{
private:
    int a_ka_private;
public:
    int a_ka_public;
    int engineSize;
    int lights;
    virtual void show(){
        cout<<"Vehicle ka show";
    }
};

class Bike : public Vehicle{
public:
    int b_ka_public;
    int handleSize;
    void show(){
        cout<<"Bike ka show"<<endl;
    }
};
class C : public Bike{
public:
    void show(){
        cout<<"C ka show"<<endl;
    }
};
int main(){
    //compile POV ->vehicle type ka hai
    //compile time binding
    //runtime binding
    // //runtime POV->Bike ka address hai
    // Bike b;
    // Vehicle *a;
    // a=new Bike;
    // a->show();
    // a=new Vehicle;
    // a->show();

    // v ptr address store krta hai virtual functionns ka jo point krte h vtable ko jo virtual functions store krte hai
    //ek class ki ek table bnte hai






    // Vehicle *a;
    // Vehicle a2;
    // a=&a2;//parent can store child address
    // Bike b;
    // b.show();//function overriding
    // b.Vehicle::show();//scope resolution operator

    //m2 by pointers
}