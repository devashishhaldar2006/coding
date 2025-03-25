#include<stdio.h>
#include<math.h>
int factorial(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int n,r;
    printf("enter the n:");
    scanf("%d",&n);
    printf("enter the r:");
    scanf("%d",&r);
    int combination=(factorial(n))/(factorial(n-r)*factorial(r));
    printf("%d",combination);
    
    return 0;
}