#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int imaginary;
    int real;
    // ComplexNumber add(ComplexNumber &c1){
        
    // }
    ComplexNumber operator + (ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary=c1.imaginary+this->imaginary;
        c3.real=c1.real+this->real;
        return c3;
    }
};

int main(){
  ComplexNumber a1,a2;
  a1.imaginary=10;
  a1.real=2;  
  a2.imaginary=7;
  a2.real=5;  

  ComplexNumber a3=a1+a2;
//   ComplexNumber a3=a1.add(a2);
//   ComplexNumber a3;
//   a3.real=a1.real+a2.real;
//   a3.imaginary=a1.imaginary+a2.imaginary;

  cout<<"real: "<<a3.real<<" "<<"imaginary: "<<a3.imaginary<<endl;
}