#include<stdio.h>
int main(){
    //gp=3,12,48.........nterms
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }
}