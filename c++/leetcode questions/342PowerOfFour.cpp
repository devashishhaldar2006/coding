#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool isPowerOfFour(int n) {
    if(n==1) return true;
    if(n<1) return false;
    if(n%4!=0){
        return 0;
    }
    return isPowerOfFour(n/4);
}
int main(){

}
