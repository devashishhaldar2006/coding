#include <iostream>
#include <stack>
#include <vector>
using namespace std;
bool isPalindrome(string str) {
    if(str.empty()) return true;
    for(int i=0;i<str.size();i++){
        str[i]=tolower(str[i]);
    }
    //Two-pointer technique-no extra string needed!
    int left=0;
    int right=str.size()-1;
    
    while(left<right){
        // Skip non-alphanumeric from left side
        while(left<right && !isalnum(str[left])){
            left++;
        }
        // Skip non-alphanumeric from right side  
        while(left<right && !isalnum(str[right])){
            right--;
        }
        
        // Compare characters directly
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){

}
