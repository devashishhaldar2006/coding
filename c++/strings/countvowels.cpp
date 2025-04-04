#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s;
    // cout<<"Enter a string: ";
    // getline(cin,s);
    // int count=0;
    // int i=0;
    // while(s[i]!='\0'){
    //     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
    //         count++;
    //     }
    //     i++;
    // }
    // cout<<"Number of vowels in the string are: "<<count<<endl;
    int n;
    cout<<"Enter the length of string: ";
    cin>>n;
    char s[n];
    cout<<"Enter a string: ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int i=0;
    int count=0;
    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            count++;
        }
        i++;
    }
    cout<<count;
}