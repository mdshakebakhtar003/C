// Online C compiler to run C program online
#include <stdio.h>
int series(int n){
    if(n==1 || n==2)
    return 1;
    int fib=series(n-2)+series(n-1);
    return fib;
    
} 


int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int fibnac=series(n);
    printf("series is %d",fibnac);
   

    return 0;
}