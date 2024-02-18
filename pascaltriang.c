#include<stdio.h>
int factorial(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;}
        return f;
    }
    int combination(int n,int r){
         int fac=factorial(n);
       int ncr=factorial(n)/(factorial(r)*factorial(n-r));
       return ncr;
        
        
    }
    int main(){int n,r,i,j;
        printf("enter n:");
        scanf("%d",&n);
         printf("enter r:");
        scanf("%d",&r);
       int ncr=combination(n,r);
      
       
       
       for(int i=0;i<=n;i++){
           for(int j=0;j<=i;j++){int icj=combination(i,j);
               printf("%d ",icj);
           }
           printf("\n");
       }
       return 0;
    }
      