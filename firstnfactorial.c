#include<stdio.h>
int main(){
    int n,prod=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    prod=prod*i;
    printf("%d\n",prod);
    }
}