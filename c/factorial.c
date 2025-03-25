#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    if(n==0) printf("%d",1);
    else printf("%d",product);
    return 0;
}