// Online C compiler to run C program online
#include <stdio.h>
int stairpath(int n){
    if(n<=2)
    return 1;
    int ways=stairpath(n-2)+stairpath(n-1);
    return ways;
}

int main() {
    int n;
    printf("enter stairs:");
    scanf("%d",&n);
    int totalways=stairpath(n);
    printf("ways is %d",totalways);
    
    return 0;
}