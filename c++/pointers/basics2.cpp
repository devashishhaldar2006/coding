#include<iostream>
using namespace std;
int main(){
    int a=7;
    int*p=&a;
    cout<<*p<<endl;
    *p=4;
    cout<<*p<<endl;
}