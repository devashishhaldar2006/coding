#include<iostream>
#include<climits>
using namespace std;
int main() {
    //modulo properties//formulas
    int x=INT_MAX;
    // (x+13)%5=(x%b * 13%b)%b
    cout<<(x%5 * 13%5)%5<<endl;//int max * something
    cout<<(x%5 + 13%5)%5<<endl;//int max + something
    cout<<(x%5 - 13%5 + 5)%5<<endl;//int max - something
	return 0;
}