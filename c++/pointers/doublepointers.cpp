#include<iostream>
using namespace std;
int main(){
    int x=9;
    int *ptr=&x;
    int **p=&ptr;
    cout<<x<<endl;//9
    cout<<ptr<<endl;//address of x
    cout<<*ptr<<endl;//9
    cout<<p<<endl;//address of ptr
    cout<<*p<<endl;// ptr value
    cout<<**p<<endl;//>>>9
}