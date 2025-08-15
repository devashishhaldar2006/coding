#include <iostream>
#include <vector>
using namespace std;
int maximumPopulation(vector<vector<int>>& logs) {
    vector<int> v(101,0);
    for(auto& it:logs){
        int birth=it[0];
        int death=it[1];
        for(int i=birth;i<death;i++){
            v[i-1950]++;
        }
        
    }
    int mx=0;
    int res=1950;
    for(int i=0;i<100;i++){
        if(v[i]>mx){
            mx=v[i];
            res=1950+i;
        }

    }
    return res;
}
int main(){

}
