#include<iostream>
#include<string>
using namespace std;
int main(){
    // char str[5]={ 'H', 'e', 'l', 'l', 'o'};
    // char str1[6]="Hello";
    // cout<<str<<endl;
    char str2[]={'H','e', 'l', 'l', 'o'};
    char str3[]={'H', 'e','\0','l', 'l', 'o'};
    for(int i=0;str2[i]!='\0';i++){
        cout<<str2[i];
    }
    cout<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    
}