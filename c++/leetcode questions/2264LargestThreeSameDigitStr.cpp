#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

string largestGoodInteger(string str) {
    string num="";
    string fnum="";
    long long i=0;
    while(i<=str.length() - 3) {
        if(str[i]==str[i+1] && str[i+1]==str[i+2]) {
            string temp=fnum;
            num="";
            num+=str[i];
            num+=str[i+1]; 
            num+=str[i+2];
            if(temp=="" || str[i]>temp[0]) {
                fnum=num;
            }
        }
        i++;
    }
    return fnum;
}
int main(){

}
