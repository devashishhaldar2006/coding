#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main(){
    // The array is input array
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3; // The size of the window
 
    // A queue to store the indices of negative numbers
    queue<int> q;
    
    // A vector to store the output
    vector<int> ans;
    
    // Iterate over the array and push the indices of negative numbers into the queue
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    
    // Iterate over the array and for each index, pop elements from the queue until the front element is within the window of size k
    for(int i=0;i<=n-k;i++){
        while(q.size() && q.front()<i) q.pop();
        // If the queue is empty or the front element is out of the window, push 0 into the output vector
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        // Else, push the negative element at the front of the queue into the output vector
        else ans.push_back(arr[q.front()]);
    }
    
    // Print the input array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // Print the output vector
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
