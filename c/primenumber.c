#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1 || n==0) printf("number is neither prime nor composite");
    if(a==1) printf("number is composite");
    else printf("number is prime");
    return 0;
}