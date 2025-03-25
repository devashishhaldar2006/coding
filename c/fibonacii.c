#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int sum;
    for(int i=2;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
    return 0;
}