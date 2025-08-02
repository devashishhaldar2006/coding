#include<iostream>
using namespace std;
int hammingWeight(int n) {
    long long count=0; 
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main(){

}