#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i=0;i<=n+1;i++){
        for(int j=1;j<=2*n+1;j++){
            if(i==j || (i+j==2*n+2)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
