#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool checkPerfectNumber(int num) {
    int n=num;
    int sum=0;
    for(int i=1;i<sqrt(n);i++){
    if(n%i==0){
        sum+=i;   
    }
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%i==0){
            sum+=n/i;  
        }
    }
    if(sum==n) return true;
    else return false;
}

int main(){
    
}