#include<iostream>
#include<string>
#include<vector>
using namespace std;
//jab bhi sorted integer array dia ho smjh jana binary search lagega most cases mein
//TC=log2(n)
int mySqrt(int x) {
    int lo = 0, hi = x ;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if((long long)mid*mid==(long long)x) return mid;
        else if((long long)mid*mid>(long long)x) hi=mid-1;
        else lo=mid+1;
    }
    return hi;
}
int main(){
    vector<int> v = {0, 1, 2, 4, 5, 7, 8};
    cout<<mySqrt(26);
}