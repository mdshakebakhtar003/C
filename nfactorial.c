// Online C compiler to run C program online
#include <stdio.h>


    int factorial(int n){
   
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        printf("%d\n",f);
    }
        return f;
    }
    int main(){
        int n;
        printf("enter n");
        scanf("%d",&n);
      factorial(n);
    
        
    
    
    
    
    return 0;
}