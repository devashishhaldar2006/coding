#include<iostream>
using namespace std;
int main(){
    int p=7,q=3;
    p+=q-=p;//right to left
    cout<<p<<" "<<q<<endl;
}