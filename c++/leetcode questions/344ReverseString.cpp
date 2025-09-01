#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
void reverseString(vector<char>& s) {
    int n=s.size();
    int i=0;
    int j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return;
}
int main(){
    
}