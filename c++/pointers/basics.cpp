#include<iostream>
using namespace std;
int main(){
    int a=7;
    int*p=&a;
    int b=9;
    int*p2=&b;
    cout<<&a<<" "<<&b<<endl;
    cout<<p<<" "<<p2<<endl;
}