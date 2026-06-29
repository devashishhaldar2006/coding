#include<bits/stdc++.h>
using namespace std;
int minProductSubset(vector<int>& arr){
    int n=arr.size();
    int cp,cn,co;
    int pos_prod=1;
    int neg_prod=1;
    int negMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos_prod*=arr[i];
            cp++;
        }
        else if(arr[i]<0){
            neg_prod*=arr[i];
            cn++;
            negMax=max(negMax,arr[i]);
        }
        else{
            co++;
        }
    }
    if(cn==0){
        if(co==0){
            return *min_element(arr.begin(),arr.end());
        }
        else{
           return 0; 
        }
    }
    else{
        if(cn%2==0){
            neg_prod=neg_prod/negMax+pos_prod;
        }
        return pos_prod*neg_prod;
    }
}

int main(){
    vector<int> arr={-1,-1,-2,4,3};
    cout<<minProductSubset(arr);
}
    