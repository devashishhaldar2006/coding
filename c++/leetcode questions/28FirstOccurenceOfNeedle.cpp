#include<iostream>
#include<vector>
#include<string>
using namespace std;
int strStr(string haystack, string needle) {
    int l=haystack.size()-needle.size();
    for(int i=0;i<=l;i++){
        if((haystack.substr(i,needle.size()))==needle){
            return i;
        }
    }
    return -1;
}
int main(){

}