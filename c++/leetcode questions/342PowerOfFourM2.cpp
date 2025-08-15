#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool isPowerOfFour(int n) {
    return (n>0) && 
            ((n&(n-1))==0) && 
            ((n&0xAAAAAAAA)==0);
}
int main(){

}
