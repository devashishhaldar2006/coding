#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v={1,2,3,4,5,6};
   for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
   }
   cout<<endl;
   auto it=lower_bound(v.begin(),v.end(),5);
   if(it==v.end()){
    cout<<"Not found!!";
    return 0;
   }
   cout<<(*it)<<endl;
}
