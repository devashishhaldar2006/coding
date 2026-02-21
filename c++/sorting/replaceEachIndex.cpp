#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

// This program finds the range of value k such that
// a[i] + a[i+1] = k holds for all i in the array.
int main(){
    int arr[]={5,3,10};
    int n=3;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    bool flag=true;

    for(int i=0;i<n-1;i++){
        float sum=arr[i]+arr[i+1];
        if(sum<kmin){
            kmin=sum;
        }
        if(sum>kmax){
            kmax=sum;
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }

    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"there is only one value of k="<<kmin;
        }
        else{
            cout<<-1;
        }
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"Range of k is "<<kmin<<" to "<<(int)kmax;
    }

}
