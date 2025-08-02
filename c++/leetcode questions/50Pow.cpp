#include<iostream>
#include<climits>
#include<string>
using namespace std;
double myPow(double x, int n) {
    //base case
    if(n==0) return 1;
    if(x==0) return 0;
    if(x==0 && n==0) return 0;
    if(n<0){
        // Handle edge case for INT_MIN (to avoid overflow in -n)
        if (n==INT_MIN) {
            // This is tricky because -INT_MIN overflows
            // So we do one multiplication separately
            return 1 / (myPow(x, INT_MAX) * x);
        }
        return 1 / myPow(x, -n);
    }

    return x*myPow(x,n-1);
}
int main(){

}