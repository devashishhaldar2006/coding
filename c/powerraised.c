#include<stdio.h>
#include<math.h>
int main(){
    int n,m;
    printf("enter the base:");
    scanf("%d",&n);
    printf("enter the power:");
    scanf("%d",&m);
    int k=1;
    for(int i=1;i<=m;i++){
        k=k*n;
    }
    printf("%d",k);
    return 0;
}