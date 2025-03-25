#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="abcdefggtysncsdbfcsufjbngvorbvedur";
    int count=0;
    for(int i=0;i<str.length()-1;i++){
        if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }
        else if(i==str.length()-1){
            if(str[i]!=str[i-1]){
                count++;
            }
        }
        else{
            if(str[i]!=str[i+1] || str[i]!=str[i-1]){
                count++;
            }
        }
    }
    cout<<count;
    
}