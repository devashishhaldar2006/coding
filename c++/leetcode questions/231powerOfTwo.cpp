#include<iostream>
#include<string>
using namespace std;
bool isPowerOfTwo(int n) {
    if(n<=0){
        return 0;
    }
    else if((n&(n-1))==0){
        return 1;
    }
    else return 0;
}
int main(){
    
}