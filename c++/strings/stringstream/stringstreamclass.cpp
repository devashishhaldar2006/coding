#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s="deva is a     og";
    stringstream s1(s);
    string temp;
    while(s1>>temp){
        cout<<temp<<endl;
    }
}