#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n/=10;
        count+=1;
    }
    printf("%d",count);
    return 0;
}