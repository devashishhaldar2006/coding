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
void reverseprt(vector<int>& a){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if((i+j)==(a.size()-1)){
                    a[j]=a[i];
                }
            }
        }
}
void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;//finding pivot idx
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverseprt(nums);
            return; 
        }
        //sorting reverse after pivot
        reverse(nums.begin()+idx+1,nums.end());
        //finding next greater element than pivot
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }

        // swapping idx and j
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;
    
}
int main(){
    vector<int> v1;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v1);
    display(v1);
}