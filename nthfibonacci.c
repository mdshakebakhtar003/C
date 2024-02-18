#include<stdio.h>
int main(){
    int a=1,b=1,c=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
       
    }
    printf("%d",c);
    return 0;
}
