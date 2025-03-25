#include<stdio.h>
#include<math.h>
int main(){
    int n;
    // 1-2+3-4+5-......nterms
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=-n/2+n;
    }
    printf("%d",sum);
    return 0;
}