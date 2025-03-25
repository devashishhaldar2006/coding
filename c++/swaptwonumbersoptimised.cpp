#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a:";
    cin>>a;
    int b;
    cout<<"enter b:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;  
    cout<<a<<" "<<b<<endl;
}