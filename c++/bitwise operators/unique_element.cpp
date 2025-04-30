#include<iostream>
//question--evry element in the array occurs twice except one
//xor ki kuch properties sunna
//agar hume xor krte h same number ke sth to zero ajata hai
//agar hum kisi number k xor zero ke sth krte hai to vohi number ajata hai vapis
//3^0=3
//2^3^9=3^2^9(commutative in nature)
using namespace std;
int main() {
    int arr[]={1,2,1,2,5,8,8,5,4,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=0;
    for(int i=0;i<size;i++){
        res=res^arr[i];
    }
    cout<<res<<endl;
	return 0;
}