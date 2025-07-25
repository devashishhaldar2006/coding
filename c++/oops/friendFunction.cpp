#include<iostream>
using namespace std;
class  A{
    int a_ka_private=10;
public:
    friend void show(A &b);
    void show2(){
        cout<<a_ka_private<<endl;
    };
};
void show(A &a){
    cout<<a.a_ka_private<<endl;
}

int main(){
    A a;
    show(a);
}