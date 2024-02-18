#include<stdio.h>
int main(){
    int n,ld,sum=0,even;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(n>0)
   {
          ld=n%10;
          even=ld%2;
          if(even==0)
        sum=sum+ld;
        n=n/10;
    }
        printf("%d",sum);
        return 0;
}