// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n,sum1=0,sum2=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter array element:");
    for(i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
    }
    sum1=n*(n+1)/2;
    for(i=0;i<n+1;i++){
        sum2=sum2+arr[i];
    }
    printf("duplicate is %d",sum2-sum1);
    return 0;
}