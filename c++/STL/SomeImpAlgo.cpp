#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int mi=*min_element(v.begin(),v.end());
    int mx=*max_element(v.begin(),v.end());
    int sum=accumulate(v.begin(),v.end(),0);
    int c=count(v.begin(),v.end(),3);
    auto ele=find(v.begin(),v.end(),2);
    if(ele!=v.end()){
        cout<<*ele<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    cout<<mi<<" "<<mx<<" "<<sum<<" "<<c;
}
