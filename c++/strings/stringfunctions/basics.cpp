#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="Hello";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;//length-1 for questions
    str.push_back('!');
    str.push_back('s');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    string t="World";
    // str=str+t;
    str=t+str;
    cout<<str<<endl;
    string s="Helloss";
    // reverse(s.begin(),s.end());//reverse the string
    // reverse(s.begin()+2,s.end()-1);//reverse from 2 to end-1
    reverse(s.begin()+2,s.begin()+5); //reverse from 2 to 4
}