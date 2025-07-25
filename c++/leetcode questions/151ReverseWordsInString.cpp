#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
string reverseWords(string s) {
    int n=s.size();
    stringstream str(s);
    string word;
    vector<string> v;
    while(str>>word){
        v.push_back(word);
    }
    string result;
    for (int i = v.size() - 1; i >= 0; i--) {
        result += v[i];
        if (i != 0) {
            result += " ";
        }
    }
    
    return result;


}
int main(){

}