#include<stdio.h>
int main(){
    int a,b;//a>b
    printf("enter dividend:");
    scanf("%d",&a);
    printf("enter divisor:");
    scanf("%d",&b);
    int q=a/b;
    int r=a-b*q;//divisor+quotient+remainder=dividend
    printf("%d",r);
    return 0;


}