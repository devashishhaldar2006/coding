#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minMeetingRooms(vector<vector<int>>& intervals) {
    int n=intervals.size();
    vector<int> start(n), end(n);
    for(int i=0;i<n;i++){
        start[i]=intervals[i][0];
        end[i]=intervals[i][1];
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    int rooms=0;
    int ans=0;
    int i=0, j=0;
    while(i<n and j<n){
        if(start[i]<end[j]){
            rooms++;
            ans=max(ans, rooms);
            i++;
        }
        else if(start[i]>end[j]){
            rooms--;
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    return ans;
}
int main() {
    
}