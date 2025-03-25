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
        int n=nums.size();           
        int noz=0;
        int noo=0;
        int notw=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            if(nums[i]==1) noo++;
            if(nums[i]==2) notw++;
        }
        for(int i=0;i<n;i++){
            if(i<noz) nums[i] = 0;
            else if(i<(noz+noo)) nums[i]=1;
            else nums[i]=2;
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