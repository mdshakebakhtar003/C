#include<stdio.h>
int main(){
    int a=-1,b=1,c=0,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       
        a=b;
        b=c;
         c=a+b;
        printf("%d",c);
    }
   
    return 0;
}
