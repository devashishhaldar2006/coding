#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int maximum69Number (int num) {
    string s=to_string(num);
    for(char &ch: s){
        if(ch=='6'){
            ch='9';
            break;
        }
    }
    return stoi(s);
}
int main(){
   
}
