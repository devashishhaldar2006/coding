#include<iostream>
#include<string>
using namespace std;
int powerOfTwo(int n){
    if(n<=0){
        return 0;
    }
    if((n&(n-1))==0){
        return 1;
    }
    else return 0;
}
int main(){
    cout<<powerOfTwo(4);
}