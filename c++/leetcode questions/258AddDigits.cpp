#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int addDigits(int num) {
    if(num<10) return num;
    int sum=0; 
    while(num){
        int rem=num%10;
        sum+=rem;
        num/=10;
    }
    return addDigits(sum);
}
int main(){
    
}