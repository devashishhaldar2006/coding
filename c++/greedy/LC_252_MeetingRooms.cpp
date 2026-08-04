#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canAttendMeetings(vector<vector<int>>& intervals) {
    int n=intervals.size();
    vector<int> start(n), end(n);
    for(int i=0;i<n;i++){
        start[i]=intervals[i][0];
        end[i]=intervals[i][1];
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    int i=0, j=0;
    int ans=0;
    int rooms=0;
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
    return ans == 0;
}

int main() {
    
}