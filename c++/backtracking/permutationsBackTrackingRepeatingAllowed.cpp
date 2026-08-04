#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
void permutations(string& str,int i){
    if(i==str.size()){
        cout<<str<<endl;
        return;
    }
    unordered_set<char> s;
    for(int idx=i;idx<str.size();idx++){
        if(s.count(str[idx])) continue;
        s.insert(str[idx]);
        swap(str[i],str[idx]);
        permutations(str,i+1);
        swap(str[i],str[idx]);
    }

}
int main(){
    string str="aabc";
    permutations(str,0);
}