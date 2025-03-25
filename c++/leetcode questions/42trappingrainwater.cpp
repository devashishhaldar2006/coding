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
int trap(vector<int>& height){
    int n=height.size();
    //previous greatest element array
    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(height[i]>max){
            max=height[i];
        }
    }
    //next greatest element array
    int next[n];
    next[n-1]=-1;
    max=height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(height[i]>max){
            max=height[i];
        }
    }
    for(int i=0;i<n;i++){
        prev[i]=min(prev[i],next[i]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        if(prev[i]>height[i]){
            water+=prev[i]-height[i];
        }
    }
    return water;

}

int main(){
    vector<int> v1;
    int n;
    cout<<"enter size of vector:";
    cin>>n;
    input(n,v1);
    display(v1);
    cout<<"the water units:";
    cout<<trap(v1)<<endl;
}