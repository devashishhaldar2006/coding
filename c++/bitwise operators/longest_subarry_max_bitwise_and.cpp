#include<iostream>
#include<climits>
//question--length of longest subarray which has maximum possible bitwise AND value
//agr x<y hai to agr hum x and y k and lenge to humesha chota number ayega y se
//for maximum possibble bitwise AND value take same numbers eg 6&6 is a maximum number(max bitwise AND value)
using namespace std;
int main() {
    int arr[]={1,2,1,9,2,5,8,8,5,4,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=0,mx=INT_MIN,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            count=1;
        }
        else if(arr[i]==mx){
            count++;
        }
        ans=max(ans,count);
    }
    cout<<ans<<endl;
	return 0;
}