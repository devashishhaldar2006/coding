#include<iostream>
using namespace std;
void find(int n,int *a,int *b){
        *b=n%10;
        while(n>9){
            n/=10;
        }
        *a=n;
        return;

}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int firstdigit,lastdigit;
    int *ptr1=&firstdigit,*ptr2=&lastdigit;
    find(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit;


}