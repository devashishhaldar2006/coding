#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // v.push_back(6);
    // cout<<v.size()<<endl;
    // v.push_back(7);
    // cout<<v.size()<<endl;
    // v.push_back(5);
    // cout<<v.size()<<endl;
    // v.push_back(4);
    // cout<<v.size()<<endl;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;

//     Capacity:

// The capacity starts at 0 (implementation-defined) and grows dynamically.

// When the size exceeds the capacity, the capacity typically doubles:

// After 1 element: Capacity = 1.

// After 2 elements: Capacity = 2.

// After 3 elements: Capacity = 4.

// After 4 elements: Capacity = 4.

// After 5 elements: Capacity = 8.

// After 6, 7, and 8 elements: Capacity remains 8.

}