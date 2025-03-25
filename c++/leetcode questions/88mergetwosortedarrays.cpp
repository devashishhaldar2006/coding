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
vector<int> merge(vector <int>& nums1,vector <int>& nums2){
    int n=nums1.size();
    int m=nums2.size();
    vector <int> nums3(n+m);
    int i=0;    
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            i++;
        }
        else{
            nums3[k]=nums2[j];
            j++;
        }
        k++;
    }
    if(i==n){
        while(j<m){
            nums3[k]=nums2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<n){
            nums3[k]=nums1[i];
            i++;
            k++;
        }
    }
        
    return nums3;
    
}


int main(){
    vector<int> v1;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v1);
    vector<int> v2;
    int m;
    cout<<"enter size of vector:";
    cin>>m;
    input(m,v2);
    display(v1);
    display(v2);
    vector<int> v3=merge(v1,v2);
    display(v3);
}