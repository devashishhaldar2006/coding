#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int maxArea(vector<int>& height) {
    int n=height.size();
    int i=0;
    int j=n-1;
    int maxArea=0;
    while(i<=j){
        int hi=min(height[i],height[j]);
        int area=hi*(j-i);
        if(area>maxArea) maxArea=area;
        height[i]<height[j]? i++ : j--;
    }
    return maxArea;
}
int main(){

}