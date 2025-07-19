#include <iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    //default constructor
    Bike(int tyreSize){
        this->tyreSize=tyreSize;
        cout<<"constructor called\n";
    }
    ~Bike(){
        cout<<"destructor called"<<endl;
    }
};
int main() {
    Bike tvs(12);//object creation //constructor ko call lg gye
    Bike honda(13);
    bool flag=true;
    if(flag==true){//destructor call hua after scope
        Bike bmw(13);
        cout<<bmw.tyreSize<<endl;
    }
    cout<<tvs.tyreSize;
    cout<<endl<<honda.tyreSize<<endl;
}
