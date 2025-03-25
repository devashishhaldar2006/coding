#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(5);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    vector<int> v(5,7);//initial size =5 and each element=7
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[3]<<endl;

// The size of a vector is the number of elements currently stored in it.

// It increases by 1 each time push_back() is called.

// Capacity:

// The capacity of a vector is the maximum number of elements it can hold without reallocating memory.

// It grows dynamically as elements are added, typically doubling when the size exceeds the capacity
}
