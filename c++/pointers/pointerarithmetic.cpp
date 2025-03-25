#include<iostream>
using namespace std;
int main(){
    int a=7;
    int *ptr=&a;
    // (*ptr)++;//increase a value by 1
    // cout<<*ptr<<endl;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;// 4 bit increase
    bool flag=true;
    bool *ptr2=&flag;
    cout<<ptr2<<endl;
    ptr2=ptr2+1;// 1 bit increase
    cout<<ptr2<<endl;
    cout<<*ptr<<endl;//garbage values 
    cout<<*ptr2<<endl;//garbage values
    
}