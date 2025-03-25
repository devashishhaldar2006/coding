#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}