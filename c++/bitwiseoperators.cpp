#include<iostream>
using namespace std;
int main(){
    int a=15;
    int b=3;
    cout<<"a&b is "<<(a&b)<<endl;
    cout<<"a|b is "<<(a|b)<<endl;
    cout<<"~a is "<<(~a)<<endl;
    cout<<"a^b is "<<(a^b)<<endl;

    cout<<(17<<2)<<endl;//left shift 
    cout<<(3>>1)<<endl;//right shift
    cout<<(21<<2)<<endl;
    cout<<(7>>2)<<endl;

    //pre increment and post increment operators
    int k=3,m=5;
    int sum1=k+(++m);
    cout<<sum1<<endl;

    int l=3,z=5;
    int sum2=l+(z++);
    cout<<sum2<<endl;


}