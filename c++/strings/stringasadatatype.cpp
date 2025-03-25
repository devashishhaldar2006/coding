#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="deva";//5 length
    cout<<str<<endl;
    string s;
    cin>>s; //takes only one word //use when no space in string
    cout<<s<<endl;
    string s1;
    getline(cin,s1); //takes whole line
    cout<<s1<<endl;
}