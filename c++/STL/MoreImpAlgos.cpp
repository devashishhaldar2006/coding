#include<bits/stdc++.h>
using namespace std;
int main(){
    //lambda function
    auto sum= [](int x,int y){return x+y;};
    cout<<sum(2,5)<<endl;

    vector<int> v={2,-3,5};
    //all of ->returns true if all are true

    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;
    //any of ->returns true if any one is true
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;
    //none of ->returns true if all do not match then it will return true
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});
}
