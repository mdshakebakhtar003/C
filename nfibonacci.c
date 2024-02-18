// Online C compiler to run C program online
#include <stdio.h>


    int factorial(int n){
   
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
         c=a+b;
        a=b;
        b=c;
       
        printf("%d\n",c);}
        
    
        return c;
    }
    int main(){
        int n;
        printf("enter n");
        scanf("%d",&n);
      factorial(n);
    
        
    
    
    
    
    return 0;
}