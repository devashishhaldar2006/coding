#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
string addBinary(string a, string b) {
    int i=a.size()-1; //Pointer for string a from right
    int j=b.size()-1; //Pointer for string b from right
    int carry=0; //To keep track of carry in addition
    string result = "";
    // Loop until both strings are processed and carry is zero
    while(i >= 0 || j >= 0 || carry) {
        int sum=carry;  //Start with carry from previous addition

        if(i>=0) {
            sum+=a[i]-'0';  //Convert char to int and add
            i--;
        }
        if(j>=0) {
            sum+=b[j]-'0';  // Convert char to int and add
            j--;
        }
        //sum can be 0,1,2 or 3; binary digit is sum % 2
        result=char((sum%2)+'0')+result;

        //Update carry for next iteration: 1 if sum >= 2, else 0
        carry=sum/2;
    }

    return result;
}
int main(){
    
