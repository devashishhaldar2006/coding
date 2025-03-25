#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector <int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void input(int n,vector <int>& a){
    cout<<"Enter elements:";
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
}
void sortArray(vector <int> &nums){
        //three pointer concept
        //dutch flag algorithm
        int n=nums.size();
        int i=0;
        int j=0;
        int k=n-1;
        while(j<=k){
            if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else j++;
            
        }
        return;
    
}


int main(){
    vector<int> v;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v);
    display(v);
    sortArray(v);
    display(v);
}