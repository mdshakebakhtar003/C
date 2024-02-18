#include<stdio.h>
int factorial(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;}
        return f;
    }
    int main(){int n,r;
        printf("enter n:");
        scanf("%d",&n);
         printf("enter r:");
        scanf("%d",&r);
        int fac=factorial(n);
       int combination=factorial(n)/(factorial(r)*factorial(n-r));
       printf("%d",combination);
    
    return 0;
}